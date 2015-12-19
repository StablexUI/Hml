<?php

class sx_properties_metric_Coordinate extends sx_properties_metric_Size {
	public function __construct($orientation = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.properties.metric.Coordinate::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->selected = false;
		parent::__construct($orientation);
		$GLOBALS['%s']->pop();
	}}
	public $ownerSize;
	public $pair;
	public $selected;
	public function select() {
		$GLOBALS['%s']->push("sx.properties.metric.Coordinate::select");
		$__hx__spos = $GLOBALS['%s']->length;
		if(!$this->selected) {
			$this->selected = true;
			$this->pair()->selected = false;
		}
		$GLOBALS['%s']->pop();
	}
	public function __ownerSize() {
		$GLOBALS['%s']->push("sx.properties.metric.Coordinate::__ownerSize");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->ownerSize === null) {
			$tmp = sx_properties_metric__Size_Size_Internal_ZeroSize::$instance;
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->ownerSize();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_px() {
		$GLOBALS['%s']->push("sx.properties.metric.Coordinate::get_px");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->selected) {
			$tmp = parent::get_px();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		{
			$tmp = $this->__pctSource()->get_px() - $this->pair()->get_px() - $this->__ownerSize()->get_px();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_pct() {
		$GLOBALS['%s']->push("sx.properties.metric.Coordinate::get_pct");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->selected) {
			$tmp = parent::get_pct();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		{
			$tmp = $this->__pctSource()->get_pct() - $this->pair()->get_pct() - $this->__ownerSize()->get_pct();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_dip() {
		$GLOBALS['%s']->push("sx.properties.metric.Coordinate::get_dip");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->selected) {
			$tmp = parent::get_dip();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		{
			$tmp = $this->__pctSource()->get_dip() - $this->pair()->get_dip() - $this->__ownerSize()->get_dip();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function __invokeOnChange($previousUnits, $previousValue) {
		$GLOBALS['%s']->push("sx.properties.metric.Coordinate::__invokeOnChange");
		$__hx__spos = $GLOBALS['%s']->length;
		if(!$this->selected) {
			$this->selected = true;
			$this->pair()->selected = false;
		}
		parent::__invokeOnChange($previousUnits,$previousValue);
		$GLOBALS['%s']->pop();
	}
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->__dynamics[$m]) && is_callable($this->__dynamics[$m]))
			return call_user_func_array($this->__dynamics[$m], $a);
		else if('toString' == $m)
			return $this->__toString();
		else
			throw new HException('Unable to call <'.$m.'>');
	}
	static $__properties__ = array("set_max" => "set_max","get_max" => "get_max","set_min" => "set_min","get_min" => "get_min","set_pct" => "set_pct","get_pct" => "get_pct","set_px" => "set_px","get_px" => "get_px","set_dip" => "set_dip","get_dip" => "get_dip","get_zeroProperty" => "get_zeroProperty");
	function __toString() { return 'sx.properties.metric.Coordinate'; }
}
