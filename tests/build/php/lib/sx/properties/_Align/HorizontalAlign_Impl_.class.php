<?php

class sx_properties__Align_HorizontalAlign_Impl_ {
	public function __construct(){}
	static $Left;
	static $Center;
	static $Right;
	static $HNone;
	static function andVertical($this1, $b) {
		$GLOBALS['%s']->push("sx.properties._Align.HorizontalAlign_Impl_::andVertical");
		$__hx__spos = $GLOBALS['%s']->length;
		$weakAlign = sx_properties_abstracts__AAlign_AAlign_Impl_::fromVertical($b);
		$weakAlign->set_horizontal($this1);
		{
			$GLOBALS['%s']->pop();
			return $weakAlign;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'sx.properties._Align.HorizontalAlign_Impl_'; }
}
sx_properties__Align_HorizontalAlign_Impl_::$Left = "left";
sx_properties__Align_HorizontalAlign_Impl_::$Center = "center";
sx_properties__Align_HorizontalAlign_Impl_::$Right = "right";
sx_properties__Align_HorizontalAlign_Impl_::$HNone = "none";
