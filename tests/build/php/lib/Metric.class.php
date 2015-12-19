<?php

class Metric extends sx_widgets_Widget {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("Metric::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->percents_initialized = false;
		$this->pixels_initialized = false;
		$this->dips_initialized = false;
		parent::__construct();
		$this->addChild($this->get_dips());
		$this->addChild($this->get_pixels());
		$this->addChild($this->get_percents());
		$GLOBALS['%s']->pop();
	}}
	public $dips_initialized;
	public $dips;
	public $pixels_initialized;
	public $pixels;
	public $percents_initialized;
	public $percents;
	public function destroyHml() {
		$GLOBALS['%s']->push("Metric::destroyHml");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function set_dips($value) {
		$GLOBALS['%s']->push("Metric::set_dips");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->dips_initialized = true;
		{
			$tmp = $this->dips = $value;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_dips() {
		$GLOBALS['%s']->push("Metric::get_dips");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->dips_initialized) {
			$tmp = $this->dips;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$this->dips_initialized = true;
		$this->set_dips(new sx_widgets_Widget());
		$res = $this->dips;
		$res->get_left()->set_dip(10);
		{
			$GLOBALS['%s']->pop();
			return $res;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_pixels($value) {
		$GLOBALS['%s']->push("Metric::set_pixels");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->pixels_initialized = true;
		{
			$tmp = $this->pixels = $value;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_pixels() {
		$GLOBALS['%s']->push("Metric::get_pixels");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->pixels_initialized) {
			$tmp = $this->pixels;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$this->pixels_initialized = true;
		$this->set_pixels(new sx_widgets_Widget());
		$res = $this->pixels;
		$res->get_left()->set_px(10);
		{
			$GLOBALS['%s']->pop();
			return $res;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_percents($value) {
		$GLOBALS['%s']->push("Metric::set_percents");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->percents_initialized = true;
		{
			$tmp = $this->percents = $value;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_percents() {
		$GLOBALS['%s']->push("Metric::get_percents");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->percents_initialized) {
			$tmp = $this->percents;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$this->percents_initialized = true;
		$this->set_percents(new sx_widgets_Widget());
		$res = $this->percents;
		$res->get_left()->set_pct(10);
		{
			$GLOBALS['%s']->pop();
			return $res;
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
	static $__properties__ = array("set_percents" => "set_percents","get_percents" => "get_percents","set_pixels" => "set_pixels","get_pixels" => "get_pixels","set_dips" => "set_dips","get_dips" => "get_dips","get_onDispose" => "get_onDispose","get_onInitialize" => "get_onInitialize","get_onPointerOut" => "get_onPointerOut","get_onPointerOver" => "get_onPointerOver","get_onPointerMove" => "get_onPointerMove","get_onClick" => "get_onClick","get_onPointerTap" => "get_onPointerTap","get_onPointerRelease" => "get_onPointerRelease","get_onPointerPress" => "get_onPointerPress","get_onDisable" => "get_onDisable","get_onEnable" => "get_onEnable","get_onParentChanged" => "get_onParentChanged","get_onChildRemoved" => "get_onChildRemoved","get_onChildAdded" => "get_onChildAdded","get_onMove" => "get_onMove","get_onResize" => "get_onResize","get_tween" => "get_tween","set_style" => "set_style","set_enabled" => "set_enabled","set_arrangeable" => "set_arrangeable","set_layout" => "set_layout","get_layout" => "get_layout","set_skin" => "set_skin","get_skin" => "get_skin","set_overflow" => "set_overflow","set_visible" => "set_visible","set_alpha" => "set_alpha","set_rotation" => "set_rotation","set_scaleY" => "set_scaleY","set_scaleX" => "set_scaleX","set_height" => "set_height","get_height" => "get_height","set_width" => "set_width","get_width" => "get_width","get_offset" => "get_offset","get_origin" => "get_origin","set_bottom" => "set_bottom","get_bottom" => "get_bottom","set_top" => "set_top","get_top" => "get_top","set_right" => "set_right","get_right" => "get_right","set_left" => "set_left","get_left" => "get_left","set___parent" => "set___parent","get_parent" => "get_parent");
	function __toString() { return 'Metric'; }
}
