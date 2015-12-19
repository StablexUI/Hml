<?php

class sx_properties__Align_VerticalAlign_Impl_ {
	public function __construct(){}
	static $Top;
	static $Middle;
	static $Bottom;
	static $VNone;
	static function andHorizontal($this1, $b) {
		$GLOBALS['%s']->push("sx.properties._Align.VerticalAlign_Impl_::andHorizontal");
		$__hx__spos = $GLOBALS['%s']->length;
		$weakAlign = sx_properties_abstracts__AAlign_AAlign_Impl_::fromHorizontal($b);
		$weakAlign->set_vertical($this1);
		{
			$GLOBALS['%s']->pop();
			return $weakAlign;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'sx.properties._Align.VerticalAlign_Impl_'; }
}
sx_properties__Align_VerticalAlign_Impl_::$Top = "top";
sx_properties__Align_VerticalAlign_Impl_::$Middle = "middle";
sx_properties__Align_VerticalAlign_Impl_::$Bottom = "bottom";
sx_properties__Align_VerticalAlign_Impl_::$VNone = "none";
