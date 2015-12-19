<?php

class hunit_utils_ValueTools {
	public function __construct(){}
	static function hasValue($holder) {
		$GLOBALS['%s']->push("hunit.utils.ValueTools::hasValue");
		$__hx__spos = $GLOBALS['%s']->length;
		if($holder === null) {
			$GLOBALS['%s']->pop();
			return false;
		}
		if($holder !== null) {
			switch($holder->index) {
			case 0:{
				$GLOBALS['%s']->pop();
				return false;
			}break;
			case 1:{
				$GLOBALS['%s']->pop();
				return true;
			}break;
			}
		}
		{
			$GLOBALS['%s']->pop();
			return false;
		}
		$GLOBALS['%s']->pop();
	}
	static function getValue($holder) {
		$GLOBALS['%s']->push("hunit.utils.ValueTools::getValue");
		$__hx__spos = $GLOBALS['%s']->length;
		if($holder === null) {
			throw new HException(new _Exception_HException("No value here", _hx_anonymous(array("fileName" => "Value.hx", "lineNumber" => 46, "className" => "hunit.utils.ValueTools", "methodName" => "getValue"))));
		}
		if($holder !== null) {
			switch($holder->index) {
			case 0:{
				throw new HException(new _Exception_HException("No value here", _hx_anonymous(array("fileName" => "Value.hx", "lineNumber" => 50, "className" => "hunit.utils.ValueTools", "methodName" => "getValue"))));
			}break;
			case 1:{
				$v = _hx_deref($holder)->params[0];
				{
					$GLOBALS['%s']->pop();
					return $v;
				}
			}break;
			}
		}
		throw new HException(new _Exception_HException("No value here", _hx_anonymous(array("fileName" => "Value.hx", "lineNumber" => 54, "className" => "hunit.utils.ValueTools", "methodName" => "getValue"))));
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'hunit.utils.ValueTools'; }
}
