<?php

class hunit_exceptions_UnmetExpectationException extends hunit_exceptions_TestFailException {
	public function __construct($expect, $reason = null, $pos = null) { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.exceptions.UnmetExpectationException::new");
		$__hx__spos = $GLOBALS['%s']->length;
		if($reason === null) {
			$reason = "";
		}
		$file = $expect->pos->fileName;
		$line = $expect->pos->lineNumber;
		$msg = null;
		$msg = "" . Std::string($expect) . _hx_string_or_null((hunit_exceptions_UnmetExpectationException_0($this, $expect, $file, $line, $msg, $pos, $reason)));
		parent::__construct($msg,$pos);
		$GLOBALS['%s']->pop();
	}}
	function __toString() { return 'hunit.exceptions.UnmetExpectationException'; }
}
function hunit_exceptions_UnmetExpectationException_0(&$__hx__this, &$expect, &$file, &$line, &$msg, &$pos, &$reason) {
	if(strlen($reason) !== 0) {
		return "" . _hx_string_or_null($reason);
	} else {
		return "";
	}
}
