<?php

class sx_exceptions_OutOfBoundsException extends sx_exceptions_SxException {
	public function __construct($msg = null, $pos = null) { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.exceptions.OutOfBoundsException::new");
		$__hx__spos = $GLOBALS['%s']->length;
		if($msg === null) {
			$msg = "Provided argument does not fit required bounds.";
		}
		parent::__construct($msg,$pos);
		$GLOBALS['%s']->pop();
	}}
	function __toString() { return 'sx.exceptions.OutOfBoundsException'; }
}
