<?php

class hunit_exceptions_NoExpectedException extends hunit_exceptions_TestFailException {
	public function __construct($exceptionMatch, $pos = null) { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.exceptions.NoExpectedException::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct("Expected exception was not thrown: " . _hx_string_or_null($exceptionMatch->toString()),$pos);
		$GLOBALS['%s']->pop();
	}}
	function __toString() { return 'hunit.exceptions.NoExpectedException'; }
}
