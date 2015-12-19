<?php

class sx_properties_metric_Padding extends sx_properties_metric_SizeSetterProxy {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__batchChanges = false;
		parent::__construct(null);
		$this->onChange->add((isset($this->__setAll) ? $this->__setAll: array($this, "__setAll")));
		$this->__left = new sx_properties_metric_Size("horizontal");
		$this->__right = new sx_properties_metric_Size("horizontal");
		$this->__top = new sx_properties_metric_Size("vertical");
		$this->__bottom = new sx_properties_metric_Size("vertical");
		$this->__left->onChange->add((isset($this->__sideChanged) ? $this->__sideChanged: array($this, "__sideChanged")));
		$this->__right->onChange->add((isset($this->__sideChanged) ? $this->__sideChanged: array($this, "__sideChanged")));
		$this->__top->onChange->add((isset($this->__sideChanged) ? $this->__sideChanged: array($this, "__sideChanged")));
		$this->__bottom->onChange->add((isset($this->__sideChanged) ? $this->__sideChanged: array($this, "__sideChanged")));
		$this->__left->pctSource = (isset($this->__ownerWidthProvider) ? $this->__ownerWidthProvider: array($this, "__ownerWidthProvider"));
		$this->__right->pctSource = (isset($this->__ownerWidthProvider) ? $this->__ownerWidthProvider: array($this, "__ownerWidthProvider"));
		$this->__top->pctSource = (isset($this->__ownerHeightProvider) ? $this->__ownerHeightProvider: array($this, "__ownerHeightProvider"));
		$this->__bottom->pctSource = (isset($this->__ownerHeightProvider) ? $this->__ownerHeightProvider: array($this, "__ownerHeightProvider"));
		$this->onComponentsChange = new sx_signals_Signal();
		$GLOBALS['%s']->pop();
	}}
	public $__left;
	public $__right;
	public $__top;
	public $__bottom;
	public $__horizontal;
	public $__vertical;
	public $ownerWidth;
	public $ownerHeight;
	public $onComponentsChange;
	public $__batchChanges;
	public function __sideChanged($changed, $previousUnits, $previousValue) {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::__sideChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__batchChanges) {
			$GLOBALS['%s']->pop();
			return;
		}
		{
			$horizontal = $changed->orientation === "horizontal";
			$vertical = $changed->orientation === "vertical";
			if($this->onComponentsChange !== null && $this->onComponentsChange->__listeners->length > 0) {
				if($this->onComponentsChange->__listenersInUse) {
					{
						$_g = 0;
						$_g1 = $this->onComponentsChange->__listeners;
						while($_g < $_g1->length) {
							$listener = $_g1[$_g];
							++$_g;
							call_user_func_array($listener, array($horizontal, $vertical));
							unset($listener);
						}
					}
					false;
				} else {
					$this->onComponentsChange->__listenersInUse = true;
					{
						$_g2 = 0;
						$_g11 = $this->onComponentsChange->__listeners;
						while($_g2 < $_g11->length) {
							$listener1 = $_g11[$_g2];
							++$_g2;
							call_user_func_array($listener1, array($horizontal, $vertical));
							unset($listener1);
						}
					}
					$this->onComponentsChange->__listenersInUse = false;
				}
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __dimensionChanged($changed, $units, $value) {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::__dimensionChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__batchChanges = true;
		if($changed->orientation === "horizontal") {
			$first = $this->get_left();
			$second = $this->get_right();
			switch($units) {
			case "dip":{
				$first->set_dip($value);
				$second->set_dip($value);
			}break;
			case "px":{
				$first->set_px($value);
				$second->set_px($value);
			}break;
			case "pct":{
				$first->set_pct($value);
				$second->set_pct($value);
			}break;
			}
		} else {
			$first1 = $this->get_top();
			$second1 = $this->get_bottom();
			switch($units) {
			case "dip":{
				$first1->set_dip($value);
				$second1->set_dip($value);
			}break;
			case "px":{
				$first1->set_px($value);
				$second1->set_px($value);
			}break;
			case "pct":{
				$first1->set_pct($value);
				$second1->set_pct($value);
			}break;
			}
		}
		$this->__batchChanges = false;
		{
			$horizontal = $changed->orientation === "horizontal";
			$vertical = $changed->orientation === "vertical";
			if($this->onComponentsChange !== null && $this->onComponentsChange->__listeners->length > 0) {
				if($this->onComponentsChange->__listenersInUse) {
					{
						$_g = 0;
						$_g1 = $this->onComponentsChange->__listeners;
						while($_g < $_g1->length) {
							$listener = $_g1[$_g];
							++$_g;
							call_user_func_array($listener, array($horizontal, $vertical));
							unset($listener);
						}
					}
					false;
				} else {
					$this->onComponentsChange->__listenersInUse = true;
					{
						$_g2 = 0;
						$_g11 = $this->onComponentsChange->__listeners;
						while($_g2 < $_g11->length) {
							$listener1 = $_g11[$_g2];
							++$_g2;
							call_user_func_array($listener1, array($horizontal, $vertical));
							unset($listener1);
						}
					}
					$this->onComponentsChange->__listenersInUse = false;
				}
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __setDimension($first, $second, $units, $value) {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::__setDimension");
		$__hx__spos = $GLOBALS['%s']->length;
		switch($units) {
		case "dip":{
			$first->set_dip($value);
			$second->set_dip($value);
		}break;
		case "px":{
			$first->set_px($value);
			$second->set_px($value);
		}break;
		case "pct":{
			$first->set_pct($value);
			$second->set_pct($value);
		}break;
		}
		$GLOBALS['%s']->pop();
	}
	public function __setAll($changed, $units, $value) {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::__setAll");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__batchChanges = true;
		switch($units) {
		case "dip":{
			$this->get_left()->set_dip($value);
			$this->get_right()->set_dip($value);
			$this->get_top()->set_dip($value);
			$this->get_bottom()->set_dip($value);
		}break;
		case "px":{
			$this->get_left()->set_px($value);
			$this->get_right()->set_px($value);
			$this->get_top()->set_px($value);
			$this->get_bottom()->set_px($value);
		}break;
		case "pct":{
			$this->get_left()->set_pct($value);
			$this->get_right()->set_pct($value);
			$this->get_top()->set_pct($value);
			$this->get_bottom()->set_pct($value);
		}break;
		}
		$this->__batchChanges = false;
		if($this->onComponentsChange !== null && $this->onComponentsChange->__listeners->length > 0) {
			if($this->onComponentsChange->__listenersInUse) {
				{
					$_g = 0;
					$_g1 = $this->onComponentsChange->__listeners;
					while($_g < $_g1->length) {
						$listener = $_g1[$_g];
						++$_g;
						call_user_func_array($listener, array(true, true));
						unset($listener);
					}
				}
				false;
			} else {
				$this->onComponentsChange->__listenersInUse = true;
				{
					$_g2 = 0;
					$_g11 = $this->onComponentsChange->__listeners;
					while($_g2 < $_g11->length) {
						$listener1 = $_g11[$_g2];
						++$_g2;
						call_user_func_array($listener1, array(true, true));
						unset($listener1);
					}
				}
				$this->onComponentsChange->__listenersInUse = false;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __invokeOnComponentsChange($horizontal, $vertical) {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::__invokeOnComponentsChange");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->onComponentsChange !== null && $this->onComponentsChange->__listeners->length > 0) {
			if($this->onComponentsChange->__listenersInUse) {
				{
					$_g = 0;
					$_g1 = $this->onComponentsChange->__listeners;
					while($_g < $_g1->length) {
						$listener = $_g1[$_g];
						++$_g;
						call_user_func_array($listener, array($horizontal, $vertical));
						unset($listener);
					}
				}
				false;
			} else {
				$this->onComponentsChange->__listenersInUse = true;
				{
					$_g2 = 0;
					$_g11 = $this->onComponentsChange->__listeners;
					while($_g2 < $_g11->length) {
						$listener1 = $_g11[$_g2];
						++$_g2;
						call_user_func_array($listener1, array($horizontal, $vertical));
						unset($listener1);
					}
				}
				$this->onComponentsChange->__listenersInUse = false;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __ownerWidthProvider() {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::__ownerWidthProvider");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->ownerWidth === null) {
			$tmp = sx_properties_metric__Size_Size_Internal_ZeroSize::$instance;
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->ownerWidth();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function __ownerHeightProvider() {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::__ownerHeightProvider");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->ownerHeight === null) {
			$tmp = sx_properties_metric__Size_Size_Internal_ZeroSize::$instance;
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->ownerHeight();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function __constraintChanged($constraint, $previousUnits, $previousValue) {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::__constraintChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__constraintChanged($constraint,$previousUnits,$previousValue);
		if($constraint === $this->__min) {
			if($this->__horizontal !== null) {
				$this->__horizontal->set_min($constraint);
			} else {
				$this->get_left()->set_min($constraint);
				$this->get_right()->set_min($constraint);
			}
			if($this->__vertical !== null) {
				$this->__vertical->set_min($constraint);
			} else {
				$this->get_top()->set_min($constraint);
				$this->get_bottom()->set_min($constraint);
			}
		} else {
			if($constraint === $this->__max) {
				if($this->__horizontal !== null) {
					$this->__horizontal->set_max($constraint);
				} else {
					$this->get_left()->set_max($constraint);
					$this->get_right()->set_max($constraint);
				}
				if($this->__vertical !== null) {
					$this->__vertical->set_max($constraint);
				} else {
					$this->get_top()->set_max($constraint);
					$this->get_bottom()->set_max($constraint);
				}
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __verticalConstraintChanged($constraint, $previousUnits, $previousValue) {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::__verticalConstraintChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		if(sx_properties_metric_Padding_0($this, $constraint, $previousUnits, $previousValue)) {
			$this->get_top()->set_max($constraint);
			$this->get_bottom()->set_max($constraint);
		} else {
			if(sx_properties_metric_Padding_1($this, $constraint, $previousUnits, $previousValue)) {
				$this->get_top()->set_min($constraint);
				$this->get_bottom()->set_min($constraint);
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __horizontalConstraintChanged($constraint, $previousUnits, $previousValue) {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::__horizontalConstraintChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		if(sx_properties_metric_Padding_2($this, $constraint, $previousUnits, $previousValue)) {
			$this->get_left()->set_max($constraint);
			$this->get_right()->set_max($constraint);
		} else {
			if(sx_properties_metric_Padding_3($this, $constraint, $previousUnits, $previousValue)) {
				$this->get_left()->set_min($constraint);
				$this->get_right()->set_min($constraint);
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function get_horizontal() {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::get_horizontal");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__horizontal === null) {
			$this->__horizontal = new sx_properties_metric_SizeSetterProxy("horizontal");
			$this->__horizontal->onChange->add((isset($this->__dimensionChanged) ? $this->__dimensionChanged: array($this, "__dimensionChanged")));
			$this->__horizontal->get_min()->onChange->add((isset($this->__horizontalConstraintChanged) ? $this->__horizontalConstraintChanged: array($this, "__horizontalConstraintChanged")));
			$this->__horizontal->get_max()->onChange->add((isset($this->__horizontalConstraintChanged) ? $this->__horizontalConstraintChanged: array($this, "__horizontalConstraintChanged")));
		}
		{
			$tmp = $this->__horizontal;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_vertical() {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::get_vertical");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__vertical === null) {
			$this->__vertical = new sx_properties_metric_SizeSetterProxy("vertical");
			$this->__vertical->onChange->add((isset($this->__dimensionChanged) ? $this->__dimensionChanged: array($this, "__dimensionChanged")));
			$this->__vertical->get_min()->onChange->add((isset($this->__verticalConstraintChanged) ? $this->__verticalConstraintChanged: array($this, "__verticalConstraintChanged")));
			$this->__vertical->get_max()->onChange->add((isset($this->__verticalConstraintChanged) ? $this->__verticalConstraintChanged: array($this, "__verticalConstraintChanged")));
		}
		{
			$tmp = $this->__vertical;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_horizontal($value) {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::set_horizontal");
		$__hx__spos = $GLOBALS['%s']->length;
		$proxy = $this->get_horizontal();
		$proxy->copyValueFrom($value);
		{
			$GLOBALS['%s']->pop();
			return $proxy;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_vertical($value) {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::set_vertical");
		$__hx__spos = $GLOBALS['%s']->length;
		$proxy = $this->get_vertical();
		$proxy->copyValueFrom($value);
		{
			$GLOBALS['%s']->pop();
			return $proxy;
		}
		$GLOBALS['%s']->pop();
	}
	public function toString() {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::toString");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = "{ left : " . Std::string($this->get_left()) . ", top : " . Std::string($this->get_top()) . ", right : " . Std::string($this->get_right()) . ", bottom : " . Std::string($this->get_bottom()) . " }";
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_left() {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::get_left");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__left;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_right() {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::get_right");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__right;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_top() {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::get_top");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__top;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_bottom() {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::get_bottom");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__bottom;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_left($v) {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::set_left");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__left->copyValueFrom($v);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_right($v) {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::set_right");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__right->copyValueFrom($v);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_top($v) {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::set_top");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__top->copyValueFrom($v);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_bottom($v) {
		$GLOBALS['%s']->push("sx.properties.metric.Padding::set_bottom");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__bottom->copyValueFrom($v);
			$GLOBALS['%s']->pop();
			return $tmp;
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
	static $__properties__ = array("set_vertical" => "set_vertical","get_vertical" => "get_vertical","set_horizontal" => "set_horizontal","get_horizontal" => "get_horizontal","set_bottom" => "set_bottom","get_bottom" => "get_bottom","set_top" => "set_top","get_top" => "get_top","set_right" => "set_right","get_right" => "get_right","set_left" => "set_left","get_left" => "get_left","set_max" => "set_max","get_max" => "get_max","set_min" => "set_min","get_min" => "get_min","set_pct" => "set_pct","get_pct" => "get_pct","set_px" => "set_px","get_px" => "get_px","set_dip" => "set_dip","get_dip" => "get_dip","get_zeroProperty" => "get_zeroProperty");
	function __toString() { return $this->toString(); }
}
function sx_properties_metric_Padding_0(&$__hx__this, &$constraint, &$previousUnits, &$previousValue) {
	{
		$b = $__hx__this->__vertical->get_max();
		return $constraint->get_dip() === $b->get_dip();
	}
}
function sx_properties_metric_Padding_1(&$__hx__this, &$constraint, &$previousUnits, &$previousValue) {
	{
		$b1 = $__hx__this->__vertical->get_min();
		return $constraint->get_dip() === $b1->get_dip();
	}
}
function sx_properties_metric_Padding_2(&$__hx__this, &$constraint, &$previousUnits, &$previousValue) {
	{
		$b = $__hx__this->__horizontal->get_max();
		return $constraint->get_dip() === $b->get_dip();
	}
}
function sx_properties_metric_Padding_3(&$__hx__this, &$constraint, &$previousUnits, &$previousValue) {
	{
		$b1 = $__hx__this->__horizontal->get_min();
		return $constraint->get_dip() === $b1->get_dip();
	}
}
