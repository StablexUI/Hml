<?php

class sx_properties_metric_Offset {
	public function __construct($widthProvider = null, $heightProvider = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.properties.metric.Offset::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__silentChanges = false;
		$this->__left = new sx_properties_metric_Coordinate("horizontal");
		$this->__left->pctSource = $widthProvider;
		$this->__left->ownerSize = $widthProvider;
		$this->__left->onChange->add((isset($this->__changed) ? $this->__changed: array($this, "__changed")));
		$this->__right = new sx_properties_metric_Coordinate("horizontal");
		$this->__right->pctSource = $widthProvider;
		$this->__right->ownerSize = $widthProvider;
		$this->__right->onChange->add((isset($this->__changed) ? $this->__changed: array($this, "__changed")));
		$this->__top = new sx_properties_metric_Coordinate("vertical");
		$this->__top->pctSource = $heightProvider;
		$this->__top->ownerSize = $heightProvider;
		$this->__top->onChange->add((isset($this->__changed) ? $this->__changed: array($this, "__changed")));
		$this->__bottom = new sx_properties_metric_Coordinate("vertical");
		$this->__bottom->pctSource = $heightProvider;
		$this->__bottom->ownerSize = $heightProvider;
		$this->__bottom->onChange->add((isset($this->__changed) ? $this->__changed: array($this, "__changed")));
		$this->__left->pair = (isset($this->get_right) ? $this->get_right: array($this, "get_right"));
		$this->__right->pair = (isset($this->get_left) ? $this->get_left: array($this, "get_left"));
		$this->__top->pair = (isset($this->get_bottom) ? $this->get_bottom: array($this, "get_bottom"));
		$this->__bottom->pair = (isset($this->get_top) ? $this->get_top: array($this, "get_top"));
		{
			$_this = $this->__left;
			if(!$_this->selected) {
				$_this->selected = true;
				$_this->pair()->selected = false;
			}
		}
		{
			$_this1 = $this->__top;
			if(!$_this1->selected) {
				$_this1->selected = true;
				$_this1->pair()->selected = false;
			}
		}
		$this->onChange = new sx_signals_Signal();
		$GLOBALS['%s']->pop();
	}}
	public $__left;
	public $__right;
	public $__top;
	public $__bottom;
	public $onChange;
	public $__silentChanges;
	public function set($x, $y) {
		$GLOBALS['%s']->push("sx.properties.metric.Offset::set");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__silentChanges = true;
		if(-1 <= $x && $x <= 1) {
			$this->get_left()->set_pct($x * 100);
		} else {
			$this->get_left()->set_dip($x);
		}
		if(-1 <= $y && $y <= 1) {
			$this->get_top()->set_pct($y * 100);
		} else {
			$this->get_top()->set_dip($y);
		}
		$this->__silentChanges = false;
		if($this->onChange !== null && $this->onChange->__listeners->length > 0) {
			if($this->onChange->__listenersInUse) {
				{
					$_g = 0;
					$_g1 = $this->onChange->__listeners;
					while($_g < $_g1->length) {
						$listener = $_g1[$_g];
						++$_g;
						call_user_func($listener);
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
						call_user_func($listener1);
						unset($listener1);
					}
				}
				$this->onChange->__listenersInUse = false;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __changed($property, $previousUnits, $previousValue) {
		$GLOBALS['%s']->push("sx.properties.metric.Offset::__changed");
		$__hx__spos = $GLOBALS['%s']->length;
		if(!$this->__silentChanges) {
			if($this->onChange !== null && $this->onChange->__listeners->length > 0) {
				if($this->onChange->__listenersInUse) {
					{
						$_g = 0;
						$_g1 = $this->onChange->__listeners;
						while($_g < $_g1->length) {
							$listener = $_g1[$_g];
							++$_g;
							call_user_func($listener);
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
							call_user_func($listener1);
							unset($listener1);
						}
					}
					$this->onChange->__listenersInUse = false;
				}
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function get_left() {
		$GLOBALS['%s']->push("sx.properties.metric.Offset::get_left");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__left;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_right() {
		$GLOBALS['%s']->push("sx.properties.metric.Offset::get_right");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__right;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_top() {
		$GLOBALS['%s']->push("sx.properties.metric.Offset::get_top");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__top;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_bottom() {
		$GLOBALS['%s']->push("sx.properties.metric.Offset::get_bottom");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__bottom;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_left($v) {
		$GLOBALS['%s']->push("sx.properties.metric.Offset::set_left");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__left->copyValueFrom($v);
		{
			$tmp = $this->__left;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_right($v) {
		$GLOBALS['%s']->push("sx.properties.metric.Offset::set_right");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__right->copyValueFrom($v);
		{
			$tmp = $this->__right;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_top($v) {
		$GLOBALS['%s']->push("sx.properties.metric.Offset::set_top");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__top->copyValueFrom($v);
		{
			$tmp = $this->__top;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_bottom($v) {
		$GLOBALS['%s']->push("sx.properties.metric.Offset::set_bottom");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__bottom->copyValueFrom($v);
		{
			$tmp = $this->__bottom;
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
	static $__properties__ = array("set_bottom" => "set_bottom","get_bottom" => "get_bottom","set_top" => "set_top","get_top" => "get_top","set_right" => "set_right","get_right" => "get_right","set_left" => "set_left","get_left" => "get_left");
	function __toString() { return 'sx.properties.metric.Offset'; }
}
