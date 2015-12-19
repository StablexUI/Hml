<?php

class sx_exceptions_InvalidBackendException extends sx_exceptions_SxException {
	public function __construct($msg = null, $pos = null) { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.exceptions.InvalidBackendException::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct($msg,$pos);
		$GLOBALS['%s']->pop();
	}}
	function __toString() { return 'sx.exceptions.InvalidBackendException'; }
}
