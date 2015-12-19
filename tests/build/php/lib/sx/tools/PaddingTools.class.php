<?php

class sx_tools_PaddingTools {
	public function __construct(){}
	static function sumDip($padding, $orientation) {
		$GLOBALS['%s']->push("sx.tools.PaddingTools::sumDip");
		$__hx__spos = $GLOBALS['%s']->length;
		switch($orientation) {
		case "horizontal":{
			$tmp = $padding->get_left()->get_dip() + $padding->get_right()->get_dip();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "vertical":{
			$tmp = $padding->get_top()->get_dip() + $padding->get_bottom()->get_dip();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		}
		$GLOBALS['%s']->pop();
	}
	static function sumPx($padding, $orientation) {
		$GLOBALS['%s']->push("sx.tools.PaddingTools::sumPx");
		$__hx__spos = $GLOBALS['%s']->length;
		switch($orientation) {
		case "horizontal":{
			$tmp = $padding->get_left()->get_px() + $padding->get_right()->get_px();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "vertical":{
			$tmp = $padding->get_top()->get_px() + $padding->get_bottom()->get_px();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		}
		$GLOBALS['%s']->pop();
	}
	static function side($padding, $side) {
		$GLOBALS['%s']->push("sx.tools.PaddingTools::side");
		$__hx__spos = $GLOBALS['%s']->length;
		switch($side) {
		case "left":{
			$tmp = $padding->get_left();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "right":{
			$tmp = $padding->get_right();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "top":{
			$tmp = $padding->get_top();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "bottom":{
			$tmp = $padding->get_bottom();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		}
		$GLOBALS['%s']->pop();
	}
	static function oppositeSide($padding, $side) {
		$GLOBALS['%s']->push("sx.tools.PaddingTools::oppositeSide");
		$__hx__spos = $GLOBALS['%s']->length;
		switch($side) {
		case "left":{
			$tmp = $padding->get_right();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "right":{
			$tmp = $padding->get_left();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "top":{
			$tmp = $padding->get_bottom();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "bottom":{
			$tmp = $padding->get_top();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		}
		$GLOBALS['%s']->pop();
	}
	static function isZero($padding) {
		$GLOBALS['%s']->push("sx.tools.PaddingTools::isZero");
		$__hx__spos = $GLOBALS['%s']->length;
		$leftZero = _hx_equal($padding->get_left()->__value, 0);
		$rightZero = _hx_equal($padding->get_right()->__value, 0);
		$topZero = _hx_equal($padding->get_top()->__value, 0);
		$bottomZero = _hx_equal($padding->get_bottom()->__value, 0);
		{
			$tmp = $leftZero && $rightZero && $topZero && $bottomZero;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'sx.tools.PaddingTools'; }
}
