<?php

class hunit_exceptions_UnexpectedCallException extends hunit_exceptions_TestFailException {
	public function __construct($call, $expect = null, $reason = null, $pos = null) { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.exceptions.UnexpectedCallException::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$msg = null;
		if($reason !== null) {
			$msg = $reason;
		} else {
			$msg = hunit_exceptions_UnexpectedCallException::generateMessage($call, $expect);
		}
		parent::__construct($msg,$pos);
		$this->stack = _Exception_HException::processCallStackOnCreation($call->stack);
		$GLOBALS['%s']->pop();
	}}
	static function generateMessage($call, $expect = null) {
		$GLOBALS['%s']->push("hunit.exceptions.UnexpectedCallException::generateMessage");
		$__hx__spos = $GLOBALS['%s']->length;
		$expectMsg = "";
		if($expect !== null) {
			$s = null;
			if($expect->timesMatched === 1) {
				$s = "";
			} else {
				$s = "s";
			}
			$expectMsg = " " . Std::string($expect) . ", but called " . _hx_string_rec($expect->timesMatched, "") . " time" . _hx_string_or_null($s) . " and last one was";
		}
		$msg = "Unexpected call:" . _hx_string_or_null($expectMsg) . " " . Std::string($call);
		{
			$GLOBALS['%s']->pop();
			return $msg;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'hunit.exceptions.UnexpectedCallException'; }
}
