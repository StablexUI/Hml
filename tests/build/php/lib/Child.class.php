<?php

class Child extends sx_widgets_Widget {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("Child::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->level2_initialized = false;
		$this->level1_initialized = false;
		parent::__construct();
		$this->addChild($this->get_level1());
		$GLOBALS['%s']->pop();
	}}
	public $level1_initialized;
	public $level1;
	public $level2_initialized;
	public $level2;
	public function destroyHml() {
		$GLOBALS['%s']->push("Child::destroyHml");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function set_level1($value) {
		$GLOBALS['%s']->push("Child::set_level1");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->level1_initialized = true;
		{
			$tmp = $this->level1 = $value;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_level2($value) {
		$GLOBALS['%s']->push("Child::set_level2");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->level2_initialized = true;
		{
			$tmp = $this->level2 = $value;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_level2() {
		$GLOBALS['%s']->push("Child::get_level2");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->level2_initialized) {
			$tmp = $this->level2;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$this->level2_initialized = true;
		$this->set_level2(new sx_widgets_Widget());
		$res = $this->level2;
		{
			$GLOBALS['%s']->pop();
			return $res;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_level1() {
		$GLOBALS['%s']->push("Child::get_level1");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->level1_initialized) {
			$tmp = $this->level1;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$this->level1_initialized = true;
		$this->set_level1(new sx_widgets_Widget());
		$res = $this->level1;
		$res->addChild($this->get_level2());
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
	static $__properties__ = array("set_level2" => "set_level2","get_level2" => "get_level2","set_level1" => "set_level1","get_level1" => "get_level1","get_onDispose" => "get_onDispose","get_onInitialize" => "get_onInitialize","get_onPointerOut" => "get_onPointerOut","get_onPointerOver" => "get_onPointerOver","get_onPointerMove" => "get_onPointerMove","get_onClick" => "get_onClick","get_onPointerTap" => "get_onPointerTap","get_onPointerRelease" => "get_onPointerRelease","get_onPointerPress" => "get_onPointerPress","get_onDisable" => "get_onDisable","get_onEnable" => "get_onEnable","get_onParentChanged" => "get_onParentChanged","get_onChildRemoved" => "get_onChildRemoved","get_onChildAdded" => "get_onChildAdded","get_onMove" => "get_onMove","get_onResize" => "get_onResize","get_tween" => "get_tween","set_style" => "set_style","set_enabled" => "set_enabled","set_arrangeable" => "set_arrangeable","set_layout" => "set_layout","get_layout" => "get_layout","set_skin" => "set_skin","get_skin" => "get_skin","set_overflow" => "set_overflow","set_visible" => "set_visible","set_alpha" => "set_alpha","set_rotation" => "set_rotation","set_scaleY" => "set_scaleY","set_scaleX" => "set_scaleX","set_height" => "set_height","get_height" => "get_height","set_width" => "set_width","get_width" => "get_width","get_offset" => "get_offset","get_origin" => "get_origin","set_bottom" => "set_bottom","get_bottom" => "get_bottom","set_top" => "set_top","get_top" => "get_top","set_right" => "set_right","get_right" => "get_right","set_left" => "set_left","get_left" => "get_left","set___parent" => "set___parent","get_parent" => "get_parent");
	function __toString() { return 'Child'; }
}
