<?php

class hunit_exceptions_TestFailException extends _Exception_HException {
	public function __construct($message, $pos = null) { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.exceptions.TestFailException::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct($message,$pos);
		$GLOBALS['%s']->pop();
	}}
	function __toString() { return 'hunit.exceptions.TestFailException'; }
}
