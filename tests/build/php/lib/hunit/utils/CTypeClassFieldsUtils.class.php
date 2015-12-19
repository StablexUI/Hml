<?php

class hunit_utils_CTypeClassFieldsUtils {
	public function __construct(){}
	static $TEST_INDICATOR = "test";
	static function isTest($field) {
		$GLOBALS['%s']->push("hunit.utils.CTypeClassFieldsUtils::isTest");
		$__hx__spos = $GLOBALS['%s']->length;
		if(_hx_substr($field->name, 0, strlen("test")) === "test") {
			$GLOBALS['%s']->pop();
			return true;
		} else {
			$_g = 0;
			$_g1 = $field->meta;
			while($_g < $_g1->length) {
				$meta = $_g1[$_g];
				++$_g;
				if($meta->name === "test") {
					$GLOBALS['%s']->pop();
					return true;
				}
				unset($meta);
			}
		}
		{
			$GLOBALS['%s']->pop();
			return false;
		}
		$GLOBALS['%s']->pop();
	}
	static function mIsTest($field) {
		$GLOBALS['%s']->push("hunit.utils.CTypeClassFieldsUtils::mIsTest");
		$__hx__spos = $GLOBALS['%s']->length;
		if(_hx_substr($field->name, 0, strlen("test")) === "test") {
			$GLOBALS['%s']->pop();
			return true;
		} else {
			$tmp = $field->meta->has("test");
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		{
			$GLOBALS['%s']->pop();
			return false;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'hunit.utils.CTypeClassFieldsUtils'; }
}
