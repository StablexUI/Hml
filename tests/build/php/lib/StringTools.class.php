<?php

class StringTools {
	public function __construct(){}
	static function htmlEscape($s, $quotes = null) {
		$GLOBALS['%s']->push("StringTools::htmlEscape");
		$__hx__spos = $GLOBALS['%s']->length;
		$s = _hx_explode(">", _hx_explode("<", _hx_explode("&", $s)->join("&amp;"))->join("&lt;"))->join("&gt;");
		if($quotes) {
			$tmp = _hx_explode("'", _hx_explode("\"", $s)->join("&quot;"))->join("&#039;");
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$GLOBALS['%s']->pop();
			return $s;
		}
		$GLOBALS['%s']->pop();
	}
	static function replace($s, $sub, $by) {
		$GLOBALS['%s']->push("StringTools::replace");
		$__hx__spos = $GLOBALS['%s']->length;
		if($sub === "") {
			$tmp = implode(str_split ($s), $by);
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = str_replace($sub, $by, $s);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'StringTools'; }
}
