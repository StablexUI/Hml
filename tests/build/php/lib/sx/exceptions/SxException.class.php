<?php

class sx_exceptions_SxException extends _Exception_HException {
	public function __construct($msg = null, $pos = null) { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.exceptions.SxException::new");
		$__hx__spos = $GLOBALS['%s']->length;
		if($msg === null) {
			$msg = "";
		}
		parent::__construct($msg,$pos);
		$this->truncateStack(_hx_anonymous(array("fileName" => "SxException.hx", "lineNumber" => 20, "className" => "sx.exceptions.SxException", "methodName" => "new")), 1);
		$GLOBALS['%s']->pop();
	}}
	function __toString() { return 'sx.exceptions.SxException'; }
}
