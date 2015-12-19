<?php

class hunit_utils_TestCaseData {
	public function __construct($testCase) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->tests = (new _hx_array(array()));
		$this->defaultGroups = (new _hx_array(array()));
		$this->set_testCase($testCase);
		$this->processTestCaseRttiMeta();
		$this->gatherTestData();
		$GLOBALS['%s']->pop();
	}}
	public $testCase;
	public $rtti;
	public $tests;
	public $defaultGroups;
	public function getTests($groups = null, $excludeGroups = null) {
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::getTests");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $this;
		$result = null;
		if($groups === null || $groups->length === 0) {
			$result = $this->tests->copy();
		} else {
			$result = $this->tests->filter(array(new _hx_lambda(array(&$_g, &$excludeGroups, &$groups, &$result), "hunit_utils_TestCaseData_0"), 'execute'));
		}
		if($excludeGroups !== null) {
			$result = $result->filter(array(new _hx_lambda(array(&$_g, &$excludeGroups, &$groups, &$result), "hunit_utils_TestCaseData_1"), 'execute'));
		}
		{
			$tmp = hunit_utils_TestCaseData::sortByDependencies($result);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function processTestCaseRttiMeta() {
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::processTestCaseRttiMeta");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = 0;
		$_g1 = $this->rtti->meta;
		while($_g < $_g1->length) {
			$meta = $_g1[$_g];
			++$_g;
			{
				$_g2 = $meta->name;
				switch($_g2) {
				case "group":{
					$mGroups = $meta->params->map(array(new _hx_lambda(array(&$_g, &$_g1, &$_g2, &$meta), "hunit_utils_TestCaseData_2"), 'execute'));
					$this->defaultGroups = $this->defaultGroups->concat($mGroups);
				}break;
				default:{}break;
				}
				unset($_g2);
			}
			unset($meta);
		}
		$GLOBALS['%s']->pop();
	}
	public function gatherTestData() {
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::gatherTestData");
		$__hx__spos = $GLOBALS['%s']->length;
		if(null == $this->rtti->fields) throw new HException('null iterable');
		$__hx__it = $this->rtti->fields->iterator();
		while($__hx__it->hasNext()) {
			unset($field);
			$field = $__hx__it->next();
			if(!hunit_utils_CTypeClassFieldsUtils::isTest($field)) {
				continue;
			}
			if(!Reflect::isFunction(Reflect::field($this->testCase, $field->name))) {
				continue;
			}
			$this->tests->push($this->getTestData($field));
		}
		$GLOBALS['%s']->pop();
	}
	public function getTestData($field) {
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::getTestData");
		$__hx__spos = $GLOBALS['%s']->length;
		$callback = Reflect::field($this->testCase, $field->name);
		$isIncomplete = false;
		$groups = $this->defaultGroups->copy();
		$incompleteMsg = null;
		$depends = (new _hx_array(array()));
		{
			$_g = 0;
			$_g1 = $field->meta;
			while($_g < $_g1->length) {
				$meta = $_g1[$_g];
				++$_g;
				{
					$_g2 = $meta->name;
					switch($_g2) {
					case "group":{
						$mGroups = $meta->params->map(array(new _hx_lambda(array(&$_g, &$_g1, &$_g2, &$callback, &$depends, &$field, &$groups, &$incompleteMsg, &$isIncomplete, &$meta), "hunit_utils_TestCaseData_3"), 'execute'));
						$groups = $groups->concat($mGroups);
					}break;
					case "incomplete":{
						$isIncomplete = true;
						$incompleteMsg = $meta->params->map(array(new _hx_lambda(array(&$_g, &$_g1, &$_g2, &$callback, &$depends, &$field, &$groups, &$incompleteMsg, &$isIncomplete, &$meta), "hunit_utils_TestCaseData_4"), 'execute'))->join("; ");
					}break;
					case "depends":{
						$depends = $meta->params->map(array(new _hx_lambda(array(&$_g, &$_g1, &$_g2, &$callback, &$depends, &$field, &$groups, &$incompleteMsg, &$isIncomplete, &$meta), "hunit_utils_TestCaseData_5"), 'execute'));
					}break;
					default:{}break;
					}
					unset($_g2);
				}
				unset($meta);
			}
		}
		{
			$tmp = _hx_anonymous(array("name" => $field->name, "callback" => $callback, "isIncomplete" => $isIncomplete, "incompleteMsg" => $incompleteMsg, "groups" => $groups, "depends" => $depends));
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function testIsInGroups($test, $groups) {
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::testIsInGroups");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$_g = 0;
			while($_g < $groups->length) {
				$group = $groups[$_g];
				++$_g;
				if($test->groups->indexOf($group, null) >= 0) {
					$GLOBALS['%s']->pop();
					return true;
				}
				unset($group);
			}
		}
		{
			$GLOBALS['%s']->pop();
			return false;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_className() {
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::get_className");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = Type::getClassName(Type::getClass($this->testCase));
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_file() {
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::get_file");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->rtti->file;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_totalTestCount() {
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::get_totalTestCount");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->tests->length;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_testCase($value) {
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::set_testCase");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->rtti = haxe_rtti_Rtti::getRtti(Type::getClass($value));
		{
			$tmp = $this->testCase = $value;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->__dynamics[$m]) && is_callable($this->__dynamics[$m]))
			return call_user_func_array($this->__dynamics[$m], $a);
		else if('toString' == $m)
			return $this->__toString();
		else
			throw new HException('Unable to call <'.$m.'>');
	}
	static function getDependent($test, $list, $dependencyStack = null) {
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::getDependent");
		$__hx__spos = $GLOBALS['%s']->length;
		$dependent = (new _hx_array(array()));
		if($dependencyStack !== null) {
			if($dependencyStack->indexOf($test, null) >= 0) {
				throw new HException(new hunit_exceptions_CircularTestDependencyException("Tests with circular dependancies detected. Check @depends() metas.", _hx_anonymous(array("fileName" => "TestCaseData.hx", "lineNumber" => 58, "className" => "hunit.utils.TestCaseData", "methodName" => "getDependent"))));
			}
			$dependencyStack->push($test);
		}
		{
			$_g = 0;
			while($_g < $list->length) {
				$t = $list[$_g];
				++$_g;
				if(_hx_equal($t, $test)) {
					continue;
				}
				if($t->depends->indexOf($test->name, null) >= 0) {
					$dependent->push($t);
					$subStack = null;
					if($dependencyStack === null) {
						$subStack = null;
					} else {
						$subStack = $dependencyStack->copy();
					}
					$dependent = $dependent->concat(hunit_utils_TestCaseData::getDependent($t, $list, $subStack));
					unset($subStack);
				}
				unset($t);
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $dependent;
		}
		$GLOBALS['%s']->pop();
	}
	static function sortByDependencies($list) {
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::sortByDependencies");
		$__hx__spos = $GLOBALS['%s']->length;
		if($list->length === 0) {
			$tmp = (new _hx_array(array()));
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$result = $list->copy();
		$result->sort(array(new _hx_lambda(array(&$list, &$result), "hunit_utils_TestCaseData_6"), 'execute'));
		if(_hx_array_get($result, 0)->depends->length > 0) {
			throw new HException(new hunit_exceptions_CircularTestDependencyException("Can't find tests without dependencies.", _hx_anonymous(array("fileName" => "TestCaseData.hx", "lineNumber" => 88, "className" => "hunit.utils.TestCaseData", "methodName" => "sortByDependencies"))));
		}
		$idx = 0;
		$dependent = null;
		while($idx < $list->length) {
			$dependent = hunit_utils_TestCaseData::getDependent($result[$idx], $result, (new _hx_array(array())));
			{
				$_g = 0;
				while($_g < $dependent->length) {
					$test = $dependent[$_g];
					++$_g;
					$result->remove($test);
					$result->push($test);
					unset($test);
				}
				unset($_g);
			}
			$idx++;
		}
		{
			$GLOBALS['%s']->pop();
			return $result;
		}
		$GLOBALS['%s']->pop();
	}
	static $__properties__ = array("set_testCase" => "set_testCase","get_totalTestCount" => "get_totalTestCount","get_file" => "get_file","get_className" => "get_className");
	function __toString() { return 'hunit.utils.TestCaseData'; }
}
function hunit_utils_TestCaseData_0(&$_g, &$excludeGroups, &$groups, &$result, $t) {
	{
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::getTests@136");
		$__hx__spos2 = $GLOBALS['%s']->length;
		{
			$tmp = $_g->testIsInGroups($t, $groups);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
}
function hunit_utils_TestCaseData_1(&$_g, &$excludeGroups, &$groups, &$result, $t1) {
	{
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::getTests@139");
		$__hx__spos2 = $GLOBALS['%s']->length;
		{
			$tmp = !$_g->testIsInGroups($t1, $excludeGroups);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
}
function hunit_utils_TestCaseData_2(&$_g, &$_g1, &$_g2, &$meta, $s) {
	{
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::processTestCaseRttiMeta@154");
		$__hx__spos2 = $GLOBALS['%s']->length;
		{
			$tmp = StringTools::replace($s, "\"", "");
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
}
function hunit_utils_TestCaseData_3(&$_g, &$_g1, &$_g2, &$callback, &$depends, &$field, &$groups, &$incompleteMsg, &$isIncomplete, &$meta, $s) {
	{
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::getTestData@194");
		$__hx__spos2 = $GLOBALS['%s']->length;
		{
			$tmp = StringTools::replace($s, "\"", "");
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
}
function hunit_utils_TestCaseData_4(&$_g, &$_g1, &$_g2, &$callback, &$depends, &$field, &$groups, &$incompleteMsg, &$isIncomplete, &$meta, $s1) {
	{
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::getTestData@198");
		$__hx__spos2 = $GLOBALS['%s']->length;
		{
			$tmp = StringTools::replace($s1, "\"", "");
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
}
function hunit_utils_TestCaseData_5(&$_g, &$_g1, &$_g2, &$callback, &$depends, &$field, &$groups, &$incompleteMsg, &$isIncomplete, &$meta, $s2) {
	{
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::getTestData@200");
		$__hx__spos2 = $GLOBALS['%s']->length;
		{
			$tmp = StringTools::replace($s2, "\"", "");
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
}
function hunit_utils_TestCaseData_6(&$list, &$result, $a, $b) {
	{
		$GLOBALS['%s']->push("hunit.utils.TestCaseData::sortByDependencies@86");
		$__hx__spos2 = $GLOBALS['%s']->length;
		{
			$tmp = $a->depends->length - $b->depends->length;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
}
