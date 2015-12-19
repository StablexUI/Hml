<?php

class haxe_Timer {
	public function __construct(){}
	static function stamp() {
		$GLOBALS['%s']->push("haxe.Timer::stamp");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = Sys::time();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'haxe.Timer'; }
}
