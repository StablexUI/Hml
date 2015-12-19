<?php

class hunit_assert_AssertFactory {
	public function __construct($testCase) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.assert.AssertFactory::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->testCase = $testCase;
		$GLOBALS['%s']->pop();
	}}
	public $testCase;
	public function match($match, $value, $message = null, $pos = null) {
		$GLOBALS['%s']->push("hunit.assert.AssertFactory::match");
		$__hx__spos = $GLOBALS['%s']->length;
		$assert = new hunit_assert_MatchAssert($match, $value, $message, $pos);
		$this->testCase->__hu_state->asserted->add($assert);
		$assert->validate();
		$GLOBALS['%s']->pop();
	}
	public function equal($expected, $actual, $message = null, $pos = null) {
		$GLOBALS['%s']->push("hunit.assert.AssertFactory::equal");
		$__hx__spos = $GLOBALS['%s']->length;
		$assert = new hunit_assert_MatchAssert($this->testCase->match->equal($expected), $actual, $message, $pos);
		$this->testCase->__hu_state->asserted->add($assert);
		$assert->validate();
		$GLOBALS['%s']->pop();
	}
	public function notEqual($expected, $actual, $message = null, $pos = null) {
		$GLOBALS['%s']->push("hunit.assert.AssertFactory::notEqual");
		$__hx__spos = $GLOBALS['%s']->length;
		$assert = new hunit_assert_MatchAssert($this->testCase->match->notEqual($expected), $actual, $message, $pos);
		$this->testCase->__hu_state->asserted->add($assert);
		$assert->validate();
		$GLOBALS['%s']->pop();
	}
	public function type($expectedType, $value, $message = null, $pos = null) {
		$GLOBALS['%s']->push("hunit.assert.AssertFactory::type");
		$__hx__spos = $GLOBALS['%s']->length;
		$assert = new hunit_assert_MatchAssert($this->testCase->match->type($expectedType), $value, $message, $pos);
		$this->testCase->__hu_state->asserted->add($assert);
		$assert->validate();
		$GLOBALS['%s']->pop();
	}
	public function isNull($value, $message = null, $pos = null) {
		$GLOBALS['%s']->push("hunit.assert.AssertFactory::isNull");
		$__hx__spos = $GLOBALS['%s']->length;
		$assert = new hunit_assert_MatchAssert($this->testCase->match->equal(null), $value, $message, $pos);
		$this->testCase->__hu_state->asserted->add($assert);
		$assert->validate();
		$GLOBALS['%s']->pop();
	}
	public function notNull($value, $message = null, $pos = null) {
		$GLOBALS['%s']->push("hunit.assert.AssertFactory::notNull");
		$__hx__spos = $GLOBALS['%s']->length;
		$assert = new hunit_assert_MatchAssert($this->testCase->match->notEqual(null), $value, $message, $pos);
		$this->testCase->__hu_state->asserted->add($assert);
		$assert->validate();
		$GLOBALS['%s']->pop();
	}
	public function isTrue($value, $message = null, $pos = null) {
		$GLOBALS['%s']->push("hunit.assert.AssertFactory::isTrue");
		$__hx__spos = $GLOBALS['%s']->length;
		$assert = new hunit_assert_MatchAssert($this->testCase->match->equal(true), $value, $message, $pos);
		$this->testCase->__hu_state->asserted->add($assert);
		$assert->validate();
		$GLOBALS['%s']->pop();
	}
	public function isFalse($value, $message = null, $pos = null) {
		$GLOBALS['%s']->push("hunit.assert.AssertFactory::isFalse");
		$__hx__spos = $GLOBALS['%s']->length;
		$assert = new hunit_assert_MatchAssert($this->testCase->match->equal(false), $value, $message, $pos);
		$this->testCase->__hu_state->asserted->add($assert);
		$assert->validate();
		$GLOBALS['%s']->pop();
	}
	public function regexp($pattern, $value, $message = null, $pos = null) {
		$GLOBALS['%s']->push("hunit.assert.AssertFactory::regexp");
		$__hx__spos = $GLOBALS['%s']->length;
		$assert = new hunit_assert_MatchAssert($this->testCase->match->regexp($pattern), $value, $message, $pos);
		$this->testCase->__hu_state->asserted->add($assert);
		$assert->validate();
		$GLOBALS['%s']->pop();
	}
	public function similar($expected, $actual, $message = null, $pos = null) {
		$GLOBALS['%s']->push("hunit.assert.AssertFactory::similar");
		$__hx__spos = $GLOBALS['%s']->length;
		$assert = new hunit_assert_MatchAssert($this->testCase->match->similar($expected), $actual, $message, $pos);
		$this->testCase->__hu_state->asserted->add($assert);
		$assert->validate();
		$GLOBALS['%s']->pop();
	}
	public function fail($message = null, $pos = null) {
		$GLOBALS['%s']->push("hunit.assert.AssertFactory::fail");
		$__hx__spos = $GLOBALS['%s']->length;
		throw new HException(new hunit_exceptions_AssertException((($message === null) ? "Forced test failure." : $message), $pos));
		$GLOBALS['%s']->pop();
	}
	public function warn($message = null, $pos = null) {
		$GLOBALS['%s']->push("hunit.assert.AssertFactory::warn");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->testCase->__hu_state->warn(new hunit_warnings_ForcedWarning((($message === null) ? "Forced warning" : $message)));
		$this->testCase->__hu_state->asserted->add(new hunit_assert_BaseAssert($pos));
		$GLOBALS['%s']->pop();
	}
	public function success($pos = null) {
		$GLOBALS['%s']->push("hunit.assert.AssertFactory::success");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->testCase->__hu_state->asserted->add(new hunit_assert_BaseAssert($pos));
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
	function __toString() { return 'hunit.assert.AssertFactory'; }
}
