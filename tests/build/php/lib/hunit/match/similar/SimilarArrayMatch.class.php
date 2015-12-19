<?php

class hunit_match_similar_SimilarArrayMatch extends hunit_match_Match {
	public function __construct($root, $processedObjects, $expected, $previous = null, $chainLogic = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.match.similar.SimilarArrayMatch::new");
		$__hx__spos = $GLOBALS['%s']->length;
		if(!Std::is($expected, _hx_qtype("Array"))) {
			throw new HException(new hunit_exceptions_InvalidTestException("`expected` value should be an array.", _hx_anonymous(array("fileName" => "SimilarArrayMatch.hx", "lineNumber" => 35, "className" => "hunit.match.similar.SimilarArrayMatch", "methodName" => "new"))));
		}
		parent::__construct($previous,$chainLogic);
		$this->root = $root;
		$this->expected = $this->getArrayMatchMap($expected, $processedObjects);
		$GLOBALS['%s']->pop();
	}}
	public $expected;
	public $root;
	public function checkMatch($value) {
		$GLOBALS['%s']->push("hunit.match.similar.SimilarArrayMatch::checkMatch");
		$__hx__spos = $GLOBALS['%s']->length;
		if(!Std::is($value, _hx_qtype("Array"))) {
			$GLOBALS['%s']->pop();
			return false;
		}
		$value1 = $value;
		if($this->expected->length !== $value1->length) {
			$GLOBALS['%s']->pop();
			return false;
		}
		$actual = null;
		$match = null;
		{
			$_g1 = 0;
			$_g = $this->expected->length;
			while($_g1 < $_g) {
				$i = $_g1++;
				$actual = $value1[$i];
				$match = $this->expected[$i];
				if(Std::is($match, _hx_qtype("hunit.match.SimilarMatch"))) {
					if($this->root->checkedObjects->indexOf($actual, null) >= 0) {
						continue;
					}
				}
				if(!$match->match($actual)) {
					$GLOBALS['%s']->pop();
					return false;
				}
				unset($i);
			}
		}
		{
			$GLOBALS['%s']->pop();
			return true;
		}
		$GLOBALS['%s']->pop();
	}
	public function shortCode() {
		$GLOBALS['%s']->push("hunit.match.similar.SimilarArrayMatch::shortCode");
		$__hx__spos = $GLOBALS['%s']->length;
		$parts = $this->expected->map(array(new _hx_lambda(array(), "hunit_match_similar_SimilarArrayMatch_0"), 'execute'));
		$str = "[" . _hx_string_or_null($parts->join(", ")) . "]";
		if(strlen($str) === strlen(hunit_Utils::shortenString($str))) {
			$GLOBALS['%s']->pop();
			return $str;
		} else {
			$str = hunit_Utils::shortenString($str);
			{
				$tmp = _hx_string_or_null(_hx_substr($str, 0, strlen($str) - 6)) . "<...>]";
				$GLOBALS['%s']->pop();
				return $tmp;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function getArrayMatchMap($expected, $processedObjects) {
		$GLOBALS['%s']->push("hunit.match.similar.SimilarArrayMatch::getArrayMatchMap");
		$__hx__spos = $GLOBALS['%s']->length;
		$matchers = (new _hx_array(array()));
		{
			$_g1 = 0;
			$_g = $expected->length;
			while($_g1 < $_g) {
				$i = $_g1++;
				$matchers->push($this->root->createMatcherForValue($expected[$i], $processedObjects));
				unset($i);
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $matchers;
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
	static $__properties__ = array("get_or" => "get_or","get_and" => "get_and");
	function __toString() { return 'hunit.match.similar.SimilarArrayMatch'; }
}
function hunit_match_similar_SimilarArrayMatch_0($m) {
	{
		$GLOBALS['%s']->push("hunit.match.similar.SimilarArrayMatch::shortCode@82");
		$__hx__spos2 = $GLOBALS['%s']->length;
		{
			$tmp = $m->toString();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
}
