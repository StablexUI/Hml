<?php

class haxe_unit_TestRunner {
	public function __construct(){}
	static function hprint($v) { return call_user_func_array(self::$hprint, array($v)); }
	public static $hprint = null;
	function __toString() { return 'haxe.unit.TestRunner'; }
}
haxe_unit_TestRunner::$hprint = array(new _hx_lambda(array(), "haxe_unit_TestRunner_0"), 'execute');
function haxe_unit_TestRunner_0($v) {
	{
		$GLOBALS['%s']->push("haxe.unit.TestRunner::print@33");
		$__hx__spos = $GLOBALS['%s']->length;
		php_Lib::hprint($v);
		$GLOBALS['%s']->pop();
	}
}
