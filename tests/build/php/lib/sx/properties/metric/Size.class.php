<?php

class sx_properties_metric_Size {
	public function __construct($orientation = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.properties.metric.Size::new");
		$__hx__spos = $GLOBALS['%s']->length;
		if($orientation === null) {
			$orientation = "horizontal";
		}
		$this->__value = 0;
		$this->weak = false;
		$this->units = "dip";
		$this->orientation = $orientation;
		$this->onChange = new sx_signals_Signal();
		$GLOBALS['%s']->pop();
	}}
	public $__min;
	public $__max;
	public $units;
	public $orientation;
	public $pctSource;
	public $onChange;
	public $weak;
	public $__value;
	public function isVertical() {
		$GLOBALS['%s']->push("sx.properties.metric.Size::isVertical");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->orientation === "vertical";
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function isHorizontal() {
		$GLOBALS['%s']->push("sx.properties.metric.Size::isHorizontal");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->orientation === "horizontal";
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function toString() {
		$GLOBALS['%s']->push("sx.properties.metric.Size::toString");
		$__hx__spos = $GLOBALS['%s']->length;
		$value = null;
		{
			$_g = $this->units;
			switch($_g) {
			case "dip":{
				$value = $this->get_dip();
			}break;
			case "px":{
				$value = $this->get_px();
			}break;
			case "pct":{
				$value = $this->get_pct();
			}break;
			}
		}
		{
			$tmp = "" . _hx_string_rec($value, "") . _hx_string_or_null($this->units);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function copyValueFrom($size) {
		$GLOBALS['%s']->push("sx.properties.metric.Size::copyValueFrom");
		$__hx__spos = $GLOBALS['%s']->length;
		$previousUnits = $this->units;
		$previousValue = $this->__value;
		$this->units = $size->units;
		$this->__value = $size->__value;
		if($size->weak) {
			$size->dispose();
		}
		$this->__invokeOnChange($previousUnits, $previousValue);
		{
			$GLOBALS['%s']->pop();
			return $this;
		}
		$GLOBALS['%s']->pop();
	}
	public function hasMin() {
		$GLOBALS['%s']->push("sx.properties.metric.Size::hasMin");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__min !== null;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function dispose() {
		$GLOBALS['%s']->push("sx.properties.metric.Size::dispose");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function __pctSource() {
		$GLOBALS['%s']->push("sx.properties.metric.Size::__pctSource");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->pctSource === null) {
			$tmp = sx_properties_metric__Size_Size_Internal_ZeroSize::$instance;
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->pctSource();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function __invokeOnChange($previousUnits, $previousValue) {
		$GLOBALS['%s']->push("sx.properties.metric.Size::__invokeOnChange");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->onChange !== null && $this->onChange->__listeners->length > 0) {
			if($this->onChange->__listenersInUse) {
				{
					$_g = 0;
					$_g1 = $this->onChange->__listeners;
					while($_g < $_g1->length) {
						$listener = $_g1[$_g];
						++$_g;
						call_user_func_array($listener, array($this, $previousUnits, $previousValue));
						unset($listener);
					}
				}
				false;
			} else {
				$this->onChange->__listenersInUse = true;
				{
					$_g2 = 0;
					$_g11 = $this->onChange->__listeners;
					while($_g2 < $_g11->length) {
						$listener1 = $_g11[$_g2];
						++$_g2;
						call_user_func_array($listener1, array($this, $previousUnits, $previousValue));
						unset($listener1);
					}
				}
				$this->onChange->__listenersInUse = false;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __constraintChanged($constraint, $previousUnits, $previousValue) {
		$GLOBALS['%s']->push("sx.properties.metric.Size::__constraintChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		if($constraint === $this->__min) {
			$minValue = null;
			{
				$size = $this->__min;
				switch($this->units) {
				case "dip":{
					$minValue = $size->get_dip();
				}break;
				case "px":{
					$minValue = $size->get_px();
				}break;
				case "pct":{
					$minValue = $size->get_pct();
				}break;
				}
			}
			if($this->__value < $minValue) {
				$previous = $this->__value;
				$this->__value = $minValue;
				$this->__invokeOnChange($this->units, $previous);
			}
			{
				$GLOBALS['%s']->pop();
				return;
			}
		}
		if($constraint === $this->__max) {
			$maxValue = null;
			{
				$size1 = $this->__max;
				switch($this->units) {
				case "dip":{
					$maxValue = $size1->get_dip();
				}break;
				case "px":{
					$maxValue = $size1->get_px();
				}break;
				case "pct":{
					$maxValue = $size1->get_pct();
				}break;
				}
			}
			if($this->__value > $maxValue) {
				$previous1 = $this->__value;
				$this->__value = $maxValue;
				$this->__invokeOnChange($this->units, $previous1);
			}
			{
				$GLOBALS['%s']->pop();
				return;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function get_dip() {
		$GLOBALS['%s']->push("sx.properties.metric.Size::get_dip");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $this->units;
		switch($_g) {
		case "dip":{
			$tmp = $this->__value;
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "px":{
			$tmp = $this->__value / sx_Sx::$dipFactor;
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "pct":{
			$tmp = $this->__pctSource()->get_dip() * $this->__value * 0.01;
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_px() {
		$GLOBALS['%s']->push("sx.properties.metric.Size::get_px");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $this->units;
		switch($_g) {
		case "dip":{
			$tmp = $this->__value * sx_Sx::$dipFactor;
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "px":{
			$tmp = $this->__value;
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "pct":{
			$tmp = $this->__pctSource()->get_px() * $this->__value * 0.01;
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_pct() {
		$GLOBALS['%s']->push("sx.properties.metric.Size::get_pct");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $this->units;
		switch($_g) {
		case "dip":{
			$dip = $this->__pctSource()->get_dip();
			if(_hx_equal($dip, 0)) {
				$GLOBALS['%s']->pop();
				return 100;
			} else {
				$tmp = $this->__value / $dip * 100;
				$GLOBALS['%s']->pop();
				return $tmp;
			}
		}break;
		case "px":{
			$px = $this->__pctSource()->get_px();
			if(_hx_equal($px, 0)) {
				$GLOBALS['%s']->pop();
				return 100;
			} else {
				$tmp = $this->__value / $px * 100;
				$GLOBALS['%s']->pop();
				return $tmp;
			}
		}break;
		case "pct":{
			$tmp = $this->__value;
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_dip($value) {
		$GLOBALS['%s']->push("sx.properties.metric.Size::set_dip");
		$__hx__spos = $GLOBALS['%s']->length;
		$previousUnits = $this->units;
		$previousValue = $this->__value;
		$this->units = "dip";
		if($this->__min !== null && $this->__min->get_dip() > $value) {
			$this->__value = $this->__min->get_dip();
		} else {
			if($this->__max !== null && $this->__max->get_dip() < $value) {
				$this->__value = $this->__max->get_dip();
			} else {
				$this->__value = $value;
			}
		}
		$this->__invokeOnChange($previousUnits, $previousValue);
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_px($value) {
		$GLOBALS['%s']->push("sx.properties.metric.Size::set_px");
		$__hx__spos = $GLOBALS['%s']->length;
		$previousUnits = $this->units;
		$previousValue = $this->__value;
		$this->units = "px";
		if($this->__min !== null && $this->__min->get_px() > $value) {
			$this->__value = $this->__min->get_px();
		} else {
			if($this->__max !== null && $this->__max->get_px() < $value) {
				$this->__value = $this->__max->get_px();
			} else {
				$this->__value = $value;
			}
		}
		$this->__invokeOnChange($previousUnits, $previousValue);
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_pct($value) {
		$GLOBALS['%s']->push("sx.properties.metric.Size::set_pct");
		$__hx__spos = $GLOBALS['%s']->length;
		$previousUnits = $this->units;
		$previousValue = $this->__value;
		$this->units = "pct";
		if($this->__min !== null && $this->__min->get_pct() > $value) {
			$this->__value = $this->__min->get_pct();
		} else {
			if($this->__max !== null && $this->__max->get_pct() < $value) {
				$this->__value = $this->__max->get_pct();
			} else {
				$this->__value = $value;
			}
		}
		$this->__invokeOnChange($previousUnits, $previousValue);
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_min() {
		$GLOBALS['%s']->push("sx.properties.metric.Size::get_min");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__min === null) {
			$this->__min = new sx_properties_metric_Size($this->orientation);
			$this->__min->pctSource = (isset($this->__pctSource) ? $this->__pctSource: array($this, "__pctSource"));
			$this->__min->__value = Math::$NEGATIVE_INFINITY;
			$this->__min->onChange->add((isset($this->__constraintChanged) ? $this->__constraintChanged: array($this, "__constraintChanged")));
		}
		{
			$tmp = $this->__min;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_min($value) {
		$GLOBALS['%s']->push("sx.properties.metric.Size::set_min");
		$__hx__spos = $GLOBALS['%s']->length;
		if($value === null) {
			if($this->__min !== null) {
				$_g = $this->__min->units;
				switch($_g) {
				case "dip":{
					$this->__min->set_dip(Math::$NEGATIVE_INFINITY);
				}break;
				case "px":{
					$this->__min->set_px(Math::$NEGATIVE_INFINITY);
				}break;
				case "pct":{
					$this->__min->set_pct(Math::$NEGATIVE_INFINITY);
				}break;
				}
			}
		} else {
			$this->get_min()->copyValueFrom($value);
		}
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_max() {
		$GLOBALS['%s']->push("sx.properties.metric.Size::get_max");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__max === null) {
			$this->__max = new sx_properties_metric_Size($this->orientation);
			$this->__max->pctSource = (isset($this->__pctSource) ? $this->__pctSource: array($this, "__pctSource"));
			$this->__max->__value = Math::$POSITIVE_INFINITY;
			$this->__max->onChange->add((isset($this->__constraintChanged) ? $this->__constraintChanged: array($this, "__constraintChanged")));
		}
		{
			$tmp = $this->__max;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_max($value) {
		$GLOBALS['%s']->push("sx.properties.metric.Size::set_max");
		$__hx__spos = $GLOBALS['%s']->length;
		if($value === null) {
			if($this->__max !== null) {
				$_g = $this->__max->units;
				switch($_g) {
				case "dip":{
					$this->__max->set_dip(Math::$NEGATIVE_INFINITY);
				}break;
				case "px":{
					$this->__max->set_px(Math::$NEGATIVE_INFINITY);
				}break;
				case "pct":{
					$this->__max->set_pct(Math::$NEGATIVE_INFINITY);
				}break;
				}
			}
		} else {
			$this->get_max()->copyValueFrom($value);
		}
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
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
	static function get_zeroProperty() {
		$GLOBALS['%s']->push("sx.properties.metric.Size::get_zeroProperty");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = sx_properties_metric__Size_Size_Internal_ZeroSize::$instance;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static $__properties__ = array("set_max" => "set_max","get_max" => "get_max","set_min" => "set_min","get_min" => "get_min","set_pct" => "set_pct","get_pct" => "get_pct","set_px" => "set_px","get_px" => "get_px","set_dip" => "set_dip","get_dip" => "get_dip","get_zeroProperty" => "get_zeroProperty");
	function __toString() { return $this->toString(); }
}
