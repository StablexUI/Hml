<?php

class Sys {
	public function __construct(){}
	static function time() {
		$GLOBALS['%s']->push("Sys::time");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = microtime(true);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'Sys'; }
}
