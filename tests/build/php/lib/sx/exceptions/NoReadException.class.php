<?php

class sx_exceptions_NoReadException extends sx_exceptions_SxException {
	public function __construct($msg = null, $pos = null) { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.exceptions.NoReadException::new");
		$__hx__spos = $GLOBALS['%s']->length;
		if($msg === null) {
			$msg = "Accessing this property for reading is not allowed.";
		}
		parent::__construct($msg,$pos);
		$GLOBALS['%s']->pop();
	}}
	function __toString() { return 'sx.exceptions.NoReadException'; }
}
