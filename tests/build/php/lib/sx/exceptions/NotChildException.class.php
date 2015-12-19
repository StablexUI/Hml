<?php

class sx_exceptions_NotChildException extends sx_exceptions_SxException {
	public function __construct($msg = null, $pos = null) { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.exceptions.NotChildException::new");
		$__hx__spos = $GLOBALS['%s']->length;
		if($msg === null) {
			$msg = "Provided widget is not a child of this one.";
		}
		parent::__construct($msg,$pos);
		$GLOBALS['%s']->pop();
	}}
	function __toString() { return 'sx.exceptions.NotChildException'; }
}
