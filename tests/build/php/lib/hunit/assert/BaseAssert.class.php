<?php

class hunit_assert_BaseAssert {
	public function __construct($pos = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.assert.BaseAssert::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->pos = $pos;
		$GLOBALS['%s']->pop();
	}}
	public $pos;
	public function validate() {
		$GLOBALS['%s']->push("hunit.assert.BaseAssert::validate");
		$__hx__spos = $GLOBALS['%s']->length;
		throw new HException("To be overriden");
		$GLOBALS['%s']->pop();
	}
	public function failed($message) {
		$GLOBALS['%s']->push("hunit.assert.BaseAssert::failed");
		$__hx__spos = $GLOBALS['%s']->length;
		throw new HException(new hunit_exceptions_AssertException($message, $this->pos));
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
	function __toString() { return 'hunit.assert.BaseAssert'; }
}
