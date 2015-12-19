<?php

class hunit_match_SimilarMatch extends hunit_match_Match {
	public function __construct($expected, $previous = null, $chainLogic = null, $root = null, $processedObjects = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.match.SimilarMatch::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct($previous,$chainLogic);
		$this->root = $root;
		if($processedObjects === null) {
			$processedObjects = new hunit_match_ObjectCache();
		}
		$processedObjects->set($expected, $this);
		if($this->isRoot()) {
			$this->buildMatcher($this, $expected, $processedObjects);
		} else {
			$this->buildMatcher($root, $expected, $processedObjects);
		}
		$GLOBALS['%s']->pop();
	}}
	public $root;
	public $matcher;
	public $checkedObjects;
	public function buildMatcher($root, $expected, $processedObjects) {
		$GLOBALS['%s']->push("hunit.match.SimilarMatch::buildMatcher");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = hunit_match_SimilarMatch::getAType($expected);
		switch($_g) {
		case "object":{
			$this->matcher = new hunit_match_similar_SimilarObjectMatch($root, $processedObjects, $expected, null, null);
		}break;
		case "array":{
			$this->matcher = new hunit_match_similar_SimilarArrayMatch($root, $processedObjects, $expected, null, null);
		}break;
		case "map":{
			$this->matcher = new hunit_match_similar_SimilarMapMatch($root, $processedObjects, $expected, null, null);
		}break;
		default:{
			throw new HException(new hunit_exceptions_InvalidTestException("Provided value can not be used with `similar` matcher", _hx_anonymous(array("fileName" => "SimilarMatch.hx", "lineNumber" => 95, "className" => "hunit.match.SimilarMatch", "methodName" => "buildMatcher"))));
		}break;
		}
		$GLOBALS['%s']->pop();
	}
	public function isRoot() {
		$GLOBALS['%s']->push("hunit.match.SimilarMatch::isRoot");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->root === null;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function checkMatch($value) {
		$GLOBALS['%s']->push("hunit.match.SimilarMatch::checkMatch");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->isRoot()) {
			$this->checkedObjects = (new _hx_array(array()));
			$this->checkedObjects->push($value);
		} else {
			$this->root->checkedObjects->push($value);
		}
		$result = $this->matcher->checkMatch($value);
		if($this->isRoot()) {
			$this->checkedObjects = null;
		}
		{
			$GLOBALS['%s']->pop();
			return $result;
		}
		$GLOBALS['%s']->pop();
	}
	public function shortCode() {
		$GLOBALS['%s']->push("hunit.match.SimilarMatch::shortCode");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->matcher->shortCode();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function createMatcherForValue($value, $processedObjects) {
		$GLOBALS['%s']->push("hunit.match.SimilarMatch::createMatcherForValue");
		$__hx__spos = $GLOBALS['%s']->length;
		$match = null;
		if(Std::is($value, _hx_qtype("hunit.match.Match"))) {
			$match = $value;
		} else {
			if(hunit_Utils::isObject($value)) {
				$match = $processedObjects->get($value);
				if($match === null) {
					$match = new hunit_match_SimilarMatch($value, null, null, $this, $processedObjects);
				}
			} else {
				$match = new hunit_match_EqualMatch($value, null, null);
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $match;
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
	static function getAType($value) {
		$GLOBALS['%s']->push("hunit.match.SimilarMatch::getAType");
		$__hx__spos = $GLOBALS['%s']->length;
		if(Std::is($value, _hx_qtype("haxe.IMap"))) {
			$tmp = "map";
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		{
			$_g = Type::typeof($value);
			switch($_g->index) {
			case 6:{
				switch(_hx_deref($_g)->params[0]) {
				case _hx_qtype("String"):{
					throw new HException(new hunit_exceptions_InvalidTestException("Invalid `expected` value similar matcher", _hx_anonymous(array("fileName" => "SimilarMatch.hx", "lineNumber" => 54, "className" => "hunit.match.SimilarMatch", "methodName" => "getAType"))));
				}break;
				case _hx_qtype("Array"):{
					$tmp = "array";
					$GLOBALS['%s']->pop();
					return $tmp;
				}break;
				default:{
					$tmp = "object";
					$GLOBALS['%s']->pop();
					return $tmp;
				}break;
				}
			}break;
			case 4:{
				$tmp = "object";
				$GLOBALS['%s']->pop();
				return $tmp;
			}break;
			default:{
				throw new HException(new hunit_exceptions_InvalidTestException("Invalid `expected` value similar matcher", _hx_anonymous(array("fileName" => "SimilarMatch.hx", "lineNumber" => 58, "className" => "hunit.match.SimilarMatch", "methodName" => "getAType"))));
			}break;
			}
		}
		$GLOBALS['%s']->pop();
	}
	static $__properties__ = array("get_or" => "get_or","get_and" => "get_and");
	function __toString() { return 'hunit.match.SimilarMatch'; }
}
