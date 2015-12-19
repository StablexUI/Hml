<?php

class sx_properties_abstracts__APadding_WeakPadding extends sx_properties_metric_Padding {
	public function __construct() { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.properties.abstracts._APadding.WeakPadding::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct();
		$this->onChange = null;
		$GLOBALS['%s']->pop();
	}}
	public function dispose() {
		$GLOBALS['%s']->push("sx.properties.abstracts._APadding.WeakPadding::dispose");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$_this = sx_properties_abstracts__APadding_APadding_Impl_::$__pool;
			$_this->__pool[$_this->length] = $this;
			$_this->length++;
		}
		$this->weak = false;
		$GLOBALS['%s']->pop();
	}
	public function __invokeOnChange($units, $value) {
		$GLOBALS['%s']->push("sx.properties.abstracts._APadding.WeakPadding::__invokeOnChange");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	static $__properties__ = array("set_vertical" => "set_vertical","get_vertical" => "get_vertical","set_horizontal" => "set_horizontal","get_horizontal" => "get_horizontal","set_bottom" => "set_bottom","get_bottom" => "get_bottom","set_top" => "set_top","get_top" => "get_top","set_right" => "set_right","get_right" => "get_right","set_left" => "set_left","get_left" => "get_left","set_max" => "set_max","get_max" => "get_max","set_min" => "set_min","get_min" => "get_min","set_pct" => "set_pct","get_pct" => "get_pct","set_px" => "set_px","get_px" => "get_px","set_dip" => "set_dip","get_dip" => "get_dip","get_zeroProperty" => "get_zeroProperty");
	function __toString() { return 'sx.properties.abstracts._APadding.WeakPadding'; }
}
