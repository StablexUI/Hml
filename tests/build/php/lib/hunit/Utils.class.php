<?php

class hunit_Utils {
	public function __construct(){}
	static $META_TEST = "test";
	static function isObject($value) {
		$GLOBALS['%s']->push("hunit.Utils::isObject");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$_g = Type::typeof($value);
			switch($_g->index) {
			case 6:{
				switch(_hx_deref($_g)->params[0]) {
				case _hx_qtype("String"):{
					$GLOBALS['%s']->pop();
					return false;
				}break;
				default:{
					$GLOBALS['%s']->pop();
					return true;
				}break;
				}
			}break;
			case 4:{
				$GLOBALS['%s']->pop();
				return true;
			}break;
			default:{
				$GLOBALS['%s']->pop();
				return false;
			}break;
			}
		}
		$GLOBALS['%s']->pop();
	}
	static function shortenString($str) {
		$GLOBALS['%s']->push("hunit.Utils::shortenString");
		$__hx__spos = $GLOBALS['%s']->length;
		if(strlen($str) > 70) {
			$tmp = _hx_string_or_null(_hx_substr($str, 0, 65)) . "<...>";
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$GLOBALS['%s']->pop();
			return $str;
		}
		$GLOBALS['%s']->pop();
	}
	static function hasToString($value) {
		$GLOBALS['%s']->push("hunit.Utils::hasToString");
		$__hx__spos = $GLOBALS['%s']->length;
		if(Std::is($value, _hx_qtype("String"))) {
			$GLOBALS['%s']->pop();
			return true;
		}
		{
			$_g = Type::typeof($value);
			switch($_g->index) {
			case 6:{
				$cls = _hx_deref($_g)->params[0];
				{
					$tmp = Type::getInstanceFields($cls)->indexOf("toString", null) >= 0;
					$GLOBALS['%s']->pop();
					return $tmp;
				}
			}break;
			default:{
				$GLOBALS['%s']->pop();
				return false;
			}break;
			}
		}
		$GLOBALS['%s']->pop();
	}
	static function safeToString($value) {
		$GLOBALS['%s']->push("hunit.Utils::safeToString");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = Std::string($value);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function shortenQuote($value) {
		$GLOBALS['%s']->push("hunit.Utils::shortenQuote");
		$__hx__spos = $GLOBALS['%s']->length;
		$str = hunit_Utils::shortenString(hunit_Utils::safeToString($value));
		if(hunit_Utils::hasToString($value)) {
			$tmp = "\"" . _hx_string_or_null($str) . "\"";
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$GLOBALS['%s']->pop();
			return $str;
		}
		$GLOBALS['%s']->pop();
	}
	static function printTrace($printer, $value, $pos = null) {
		$GLOBALS['%s']->push("hunit.Utils::printTrace");
		$__hx__spos = $GLOBALS['%s']->length;
		$file = $pos->fileName;
		$line = $pos->lineNumber;
		$msg = hunit_Utils::safeToString($value);
		call_user_func_array($printer, array("HUnit: " . _hx_string_or_null($file) . ":" . _hx_string_rec($line, "") . ": " . _hx_string_or_null($msg) . "\x0A"));
		$GLOBALS['%s']->pop();
	}
	static function hprint($value) {
		$GLOBALS['%s']->push("hunit.Utils::print");
		$__hx__spos = $GLOBALS['%s']->length;
		php_Lib::hprint($value);
		$GLOBALS['%s']->pop();
	}
	static $buffer = "";
	static function bufferedPrint($value, $printer) {
		$GLOBALS['%s']->push("hunit.Utils::bufferedPrint");
		$__hx__spos = $GLOBALS['%s']->length;
		hunit_Utils::$buffer .= _hx_string_or_null($value);
		if(_hx_index_of(hunit_Utils::$buffer, "\x0A", null) >= 0) {
			$lines = _hx_explode("\x0A", hunit_Utils::$buffer);
			{
				$_g1 = 0;
				$_g = $lines->length - 1;
				while($_g1 < $_g) {
					$i = $_g1++;
					call_user_func_array($printer, array($lines[$i]));
					unset($i);
				}
			}
			hunit_Utils::$buffer = $lines[$lines->length - 1];
		}
		$GLOBALS['%s']->pop();
	}
	static function filterCases($cases, $excludes) {
		$GLOBALS['%s']->push("hunit.Utils::filterCases");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $cases->filter(array(new _hx_lambda(array(&$cases, &$excludes), "hunit_Utils_0"), 'execute'));
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'hunit.Utils'; }
}
function hunit_Utils_0(&$cases, &$excludes, $c) {
	{
		$GLOBALS['%s']->push("hunit.Utils::filterCases@225");
		$__hx__spos2 = $GLOBALS['%s']->length;
		$className = Type::getClassName(Type::getClass($c));
		{
			$_g = 0;
			while($_g < $excludes->length) {
				$e = $excludes[$_g];
				++$_g;
				if(_hx_index_of($className, $e, null) === 0) {
					$GLOBALS['%s']->pop();
					return false;
				}
				unset($e);
			}
		}
		{
			$GLOBALS['%s']->pop();
			return true;
		}
		$GLOBALS['%s']->pop();
	}
}
