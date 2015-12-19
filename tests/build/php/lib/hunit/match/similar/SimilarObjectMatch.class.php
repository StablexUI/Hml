<?php

class hunit_match_similar_SimilarObjectMatch extends hunit_match_Match {
	public function __construct($root, $processedObjects, $expected, $previous = null, $chainLogic = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.match.similar.SimilarObjectMatch::new");
		$__hx__spos = $GLOBALS['%s']->length;
		if(!hunit_Utils::isObject($expected)) {
			throw new HException(new hunit_exceptions_InvalidTestException("`expected` value should be an object.", _hx_anonymous(array("fileName" => "SimilarObjectMatch.hx", "lineNumber" => 35, "className" => "hunit.match.similar.SimilarObjectMatch", "methodName" => "new"))));
		}
		parent::__construct($previous,$chainLogic);
		$this->root = $root;
		$this->expected = $this->getFieldMatchMap($expected, $processedObjects);
		$GLOBALS['%s']->pop();
	}}
	public $expected;
	public $root;
	public function checkMatch($value) {
		$GLOBALS['%s']->push("hunit.match.similar.SimilarObjectMatch::checkMatch");
		$__hx__spos = $GLOBALS['%s']->length;
		$valueMap = hunit_match_similar_SimilarObjectMatch::getFieldValueMap($value);
		$actual = null;
		$match = null;
		if(null == $this->expected) throw new HException('null iterable');
		$__hx__it = $this->expected->keys();
		while($__hx__it->hasNext()) {
			unset($field);
			$field = $__hx__it->next();
			if(!$valueMap->exists($field)) {
				$GLOBALS['%s']->pop();
				return false;
			}
			$actual = $valueMap->get($field);
			$match = $this->expected->get($field);
			if(Std::is($match, _hx_qtype("hunit.match.SimilarMatch"))) {
				if($this->root->checkedObjects->indexOf($actual, null) >= 0) {
					continue;
				}
			}
			if(!$match->match($actual)) {
				$GLOBALS['%s']->pop();
				return false;
			}
		}
		{
			$GLOBALS['%s']->pop();
			return true;
		}
		$GLOBALS['%s']->pop();
	}
	public function shortCode() {
		$GLOBALS['%s']->push("hunit.match.similar.SimilarObjectMatch::shortCode");
		$__hx__spos = $GLOBALS['%s']->length;
		$parts = (new _hx_array(array()));
		if(null == $this->expected) throw new HException('null iterable');
		$__hx__it = $this->expected->keys();
		while($__hx__it->hasNext()) {
			unset($field);
			$field = $__hx__it->next();
			$parts->unshift(_hx_string_or_null($field) . ":" . _hx_string_or_null($this->expected->get($field)->toString()));
		}
		$str = "{" . _hx_string_or_null($parts->join(", ")) . "}";
		if(strlen($str) === strlen(hunit_Utils::shortenString($str))) {
			$GLOBALS['%s']->pop();
			return $str;
		} else {
			$str = hunit_Utils::shortenString($str);
			{
				$tmp = _hx_string_or_null(_hx_substr($str, 0, strlen($str) - 6)) . "<...>}";
				$GLOBALS['%s']->pop();
				return $tmp;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function getFieldMatchMap($object, $processedObjects) {
		$GLOBALS['%s']->push("hunit.match.similar.SimilarObjectMatch::getFieldMatchMap");
		$__hx__spos = $GLOBALS['%s']->length;
		$fieldValue = hunit_match_similar_SimilarObjectMatch::getFieldValueMap($object);
		$fieldMatch = new haxe_ds_StringMap();
		$value = null;
		if(null == $fieldValue) throw new HException('null iterable');
		$__hx__it = $fieldValue->keys();
		while($__hx__it->hasNext()) {
			unset($field);
			$field = $__hx__it->next();
			$value = $fieldValue->get($field);
			{
				$value1 = $this->root->createMatcherForValue($value, $processedObjects);
				$fieldMatch->set($field, $value1);
				unset($value1);
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $fieldMatch;
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
	static function getFieldValueMap($object) {
		$GLOBALS['%s']->push("hunit.match.similar.SimilarObjectMatch::getFieldValueMap");
		$__hx__spos = $GLOBALS['%s']->length;
		$map = new haxe_ds_StringMap();
		$fields = null;
		{
			$_g = Type::typeof($object);
			switch($_g->index) {
			case 4:{
				$fields = Reflect::fields($object);
			}break;
			case 6:{
				$cls = _hx_deref($_g)->params[0];
				switch(_hx_deref($_g)->params[0]) {
				case _hx_qtype("String"):{
					$fields = (new _hx_array(array()));
				}break;
				default:{
					$fields = Type::getInstanceFields($cls);
				}break;
				}
			}break;
			default:{
				$fields = (new _hx_array(array()));
			}break;
			}
		}
		$property = null;
		{
			$_g1 = 0;
			while($_g1 < $fields->length) {
				$field = $fields[$_g1];
				++$_g1;
				if (in_array($field, get_class_methods($object))) continue;
				$property = Reflect::getProperty($object, $field);
				if(!Reflect::isFunction($property)) {
					$map->set($field, $property);
				}
				unset($field);
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $map;
		}
		$GLOBALS['%s']->pop();
	}
	static $__properties__ = array("get_or" => "get_or","get_and" => "get_and");
	function __toString() { return 'hunit.match.similar.SimilarObjectMatch'; }
}
