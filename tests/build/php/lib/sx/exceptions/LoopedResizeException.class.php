<?php

class sx_exceptions_LoopedResizeException extends sx_exceptions_SxException {
	public function __construct($msg = null, $pos = null) { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.exceptions.LoopedResizeException::new");
		$__hx__spos = $GLOBALS['%s']->length;
		if($msg === null) {
			$msg = "Possible endless resizing loop detected.";
		}
		parent::__construct($msg,$pos);
		$GLOBALS['%s']->pop();
	}}
	function __toString() { return 'sx.exceptions.LoopedResizeException'; }
}
