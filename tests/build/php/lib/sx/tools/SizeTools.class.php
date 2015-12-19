<?php

class sx_tools_SizeTools {
	public function __construct(){}
	static function isZero($size) {
		$GLOBALS['%s']->push("sx.tools.SizeTools::isZero");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = _hx_equal($size->__value, 0);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function notZero($size) {
		$GLOBALS['%s']->push("sx.tools.SizeTools::notZero");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = !_hx_equal($size->__value, 0);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function get($size, $units) {
		$GLOBALS['%s']->push("sx.tools.SizeTools::get");
		$__hx__spos = $GLOBALS['%s']->length;
		switch($units) {
		case "dip":{
			$tmp = $size->get_dip();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "px":{
			$tmp = $size->get_px();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "pct":{
			$tmp = $size->get_pct();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'sx.tools.SizeTools'; }
}
