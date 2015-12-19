<?php

class sx_properties_metric__Size_Size_Internal_ZeroSize extends sx_properties_metric_Size {
	public function __construct($orientation = null) { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.properties.metric._Size.Size_Internal_ZeroSize::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct($orientation);
		$GLOBALS['%s']->pop();
	}}
	public function get_px() {
		$GLOBALS['%s']->push("sx.properties.metric._Size.Size_Internal_ZeroSize::get_px");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$GLOBALS['%s']->pop();
			return 0;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_pct() {
		$GLOBALS['%s']->push("sx.properties.metric._Size.Size_Internal_ZeroSize::get_pct");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$GLOBALS['%s']->pop();
			return 0;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_dip() {
		$GLOBALS['%s']->push("sx.properties.metric._Size.Size_Internal_ZeroSize::get_dip");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$GLOBALS['%s']->pop();
			return 0;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_px($v) {
		$GLOBALS['%s']->push("sx.properties.metric._Size.Size_Internal_ZeroSize::set_px");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$GLOBALS['%s']->pop();
			return $v;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_pct($v) {
		$GLOBALS['%s']->push("sx.properties.metric._Size.Size_Internal_ZeroSize::set_pct");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$GLOBALS['%s']->pop();
			return $v;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_dip($v) {
		$GLOBALS['%s']->push("sx.properties.metric._Size.Size_Internal_ZeroSize::set_dip");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$GLOBALS['%s']->pop();
			return $v;
		}
		$GLOBALS['%s']->pop();
	}
	static $instance;
	static $__properties__ = array("set_max" => "set_max","get_max" => "get_max","set_min" => "set_min","get_min" => "get_min","set_pct" => "set_pct","get_pct" => "get_pct","set_px" => "set_px","get_px" => "get_px","set_dip" => "set_dip","get_dip" => "get_dip","get_zeroProperty" => "get_zeroProperty");
	function __toString() { return 'sx.properties.metric._Size.Size_Internal_ZeroSize'; }
}
sx_properties_metric__Size_Size_Internal_ZeroSize::$instance = new sx_properties_metric__Size_Size_Internal_ZeroSize(null);
