<?php

class hunit_assert_MatchAssert extends hunit_assert_BaseAssert {
	public function __construct($expected, $actual, $message = null, $pos = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.assert.MatchAssert::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct($pos);
		$this->expected = $expected;
		$this->actual = $actual;
		$this->message = $message;
		$GLOBALS['%s']->pop();
	}}
	public $expected;
	public $actual;
	public $message;
	public function validate() {
		$GLOBALS['%s']->push("hunit.assert.MatchAssert::validate");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->expected->match($this->actual)) {
			$GLOBALS['%s']->pop();
			return;
		}
		$this->failed(hunit_assert_MatchAssert_0($this));
		$GLOBALS['%s']->pop();
	}
	public function buildMessage() {
		$GLOBALS['%s']->push("hunit.assert.MatchAssert::buildMessage");
		$__hx__spos = $GLOBALS['%s']->length;
		$a = hunit_Utils::shortenQuote($this->actual);
		if($this->expected->isChained()) {
			$tmp = "Failed asserting that " . _hx_string_or_null($a) . " matches " . Std::string($this->expected) . ".";
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$cls = Type::getClass($this->expected);
			switch($cls) {
			case _hx_qtype("hunit.match.TypeMatch"):{
				$tmp = "Failed asserting that " . _hx_string_or_null($this->actualType()) . " is " . _hx_string_or_null(Type::getClassName(_hx_deref(($this->expected))->type));
				$GLOBALS['%s']->pop();
				return $tmp;
			}break;
			case _hx_qtype("hunit.match.NotEqualMatch"):{
				$tmp = "Failed asserting that " . _hx_string_or_null($a) . " does not equal " . _hx_string_or_null(hunit_Utils::shortenQuote(_hx_deref(($this->expected))->value));
				$GLOBALS['%s']->pop();
				return $tmp;
			}break;
			case _hx_qtype("hunit.match.EqualMatch"):{
				$tmp = "Failed asserting that " . _hx_string_or_null($a) . " equals " . _hx_string_or_null(hunit_Utils::shortenQuote(_hx_deref(($this->expected))->value));
				$GLOBALS['%s']->pop();
				return $tmp;
			}break;
			default:{
				$tmp = "Failed asserting that " . _hx_string_or_null($a) . " matches " . Std::string($this->expected) . ".";
				$GLOBALS['%s']->pop();
				return $tmp;
			}break;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function actualType() {
		$GLOBALS['%s']->push("hunit.assert.MatchAssert::actualType");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$_g = Type::typeof($this->actual);
			switch($_g->index) {
			case 6:{
				$c = _hx_deref($_g)->params[0];
				{
					$tmp = Type::getClassName($c);
					$GLOBALS['%s']->pop();
					return $tmp;
				}
			}break;
			case 7:{
				$e = _hx_deref($_g)->params[0];
				{
					$tmp = Type::getEnumName($e);
					$GLOBALS['%s']->pop();
					return $tmp;
				}
			}break;
			case 0:{
				$GLOBALS['%s']->pop();
				return "Null";
			}break;
			case 1:{
				$GLOBALS['%s']->pop();
				return "Int";
			}break;
			case 2:{
				$GLOBALS['%s']->pop();
				return "Float";
			}break;
			case 3:{
				$GLOBALS['%s']->pop();
				return "Bool";
			}break;
			case 4:{
				$GLOBALS['%s']->pop();
				return "Object";
			}break;
			case 5:{
				$GLOBALS['%s']->pop();
				return "Function";
			}break;
			case 8:{
				$GLOBALS['%s']->pop();
				return "Unknown Type";
			}break;
			}
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
	function __toString() { return 'hunit.assert.MatchAssert'; }
}
function hunit_assert_MatchAssert_0(&$__hx__this) {
	if($__hx__this->message === null) {
		return $__hx__this->buildMessage();
	} else {
		return $__hx__this->message;
	}
}
