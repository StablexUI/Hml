<?php

class sx_skins_base_SkinBase {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.skins.base.SkinBase::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}}
	public $__padding;
	public $__widget;
	public function refresh() {
		$GLOBALS['%s']->push("sx.skins.base.SkinBase::refresh");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function hasPadding() {
		$GLOBALS['%s']->push("sx.skins.base.SkinBase::hasPadding");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__padding !== null;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function usedBy($widget) {
		$GLOBALS['%s']->push("sx.skins.base.SkinBase::usedBy");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__widget !== null) {
			$this->__widget->set_skin(null);
		}
		$this->__widget = $widget;
		$this->__widget->get_onResize()->add((isset($this->__widgetResized) ? $this->__widgetResized: array($this, "__widgetResized")));
		if($this->__widget->initialized) {
			$this->refresh();
		}
		$GLOBALS['%s']->pop();
	}
	public function removed() {
		$GLOBALS['%s']->push("sx.skins.base.SkinBase::removed");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__widget !== null) {
			$this->__widget->get_onResize()->remove((isset($this->__widgetResized) ? $this->__widgetResized: array($this, "__widgetResized")));
			$this->__widget = null;
		}
		$GLOBALS['%s']->pop();
	}
	public function __widgetResized($widget, $changed, $previousUnits, $previousValue) {
		$GLOBALS['%s']->push("sx.skins.base.SkinBase::__widgetResized");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__widget->initialized) {
			$this->refresh();
		}
		$GLOBALS['%s']->pop();
	}
	public function __widgetWidthProvider() {
		$GLOBALS['%s']->push("sx.skins.base.SkinBase::__widgetWidthProvider");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__widget === null) {
			$tmp = sx_properties_metric__Size_Size_Internal_ZeroSize::$instance;
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__widget->get_width();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function __widgetHeightProvider() {
		$GLOBALS['%s']->push("sx.skins.base.SkinBase::__widgetHeightProvider");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__widget === null) {
			$tmp = sx_properties_metric__Size_Size_Internal_ZeroSize::$instance;
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__widget->get_width();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_padding() {
		$GLOBALS['%s']->push("sx.skins.base.SkinBase::get_padding");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__padding === null) {
			$this->__padding = new sx_properties_metric_Padding();
			$this->__padding->ownerWidth = (isset($this->__widgetWidthProvider) ? $this->__widgetWidthProvider: array($this, "__widgetWidthProvider"));
			$this->__padding->ownerWidth = (isset($this->__widgetHeightProvider) ? $this->__widgetHeightProvider: array($this, "__widgetHeightProvider"));
		}
		{
			$tmp = $this->__padding;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_padding($v) {
		$GLOBALS['%s']->push("sx.skins.base.SkinBase::set_padding");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->get_padding()->copyValueFrom($v);
		{
			$tmp = $this->get_padding();
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
	static $__properties__ = array("set_padding" => "set_padding","get_padding" => "get_padding");
	function __toString() { return 'sx.skins.base.SkinBase'; }
}
