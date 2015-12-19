<?php

class sx_exceptions_LockedPropertyException extends _Exception_HException {
	public function __construct($msg = null, $pos = null) { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.exceptions.LockedPropertyException::new");
		$__hx__spos = $GLOBALS['%s']->length;
		if($msg === null) {
			$msg = "Property cannot be changed.";
		}
		parent::__construct($msg,$pos);
		$GLOBALS['%s']->pop();
	}}
	function __toString() { return 'sx.exceptions.LockedPropertyException'; }
}
