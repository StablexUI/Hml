<?php

class Signal extends sx_widgets_Widget {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("Signal::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->closureSingleExpr_initialized = false;
		$this->closureBlockBody_initialized = false;
		$this->simple_initialized = false;
		$this->closureSingleExprClicked_initialized = false;
		$this->closureBlockClicked_initialized = false;
		$this->simpleClicked_initialized = false;
		parent::__construct();
		$this->addChild($this->get_simple());
		$this->addChild($this->get_closureBlockBody());
		$this->addChild($this->get_closureSingleExpr());
		$GLOBALS['%s']->pop();
	}}
	public $simpleClicked_initialized;
	public $simpleClicked;
	public $closureBlockClicked_initialized;
	public $closureBlockClicked;
	public $closureSingleExprClicked_initialized;
	public $closureSingleExprClicked;
	public $simple_initialized;
	public $simple;
	public $closureBlockBody_initialized;
	public $closureBlockBody;
	public $closureSingleExpr_initialized;
	public $closureSingleExpr;
	public function destroyHml() {
		$GLOBALS['%s']->push("Signal::destroyHml");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function set_simpleClicked($value) {
		$GLOBALS['%s']->push("Signal::set_simpleClicked");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->simpleClicked_initialized = true;
		{
			$tmp = $this->simpleClicked = $value;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_simpleClicked() {
		$GLOBALS['%s']->push("Signal::get_simpleClicked");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->simpleClicked_initialized) {
			$tmp = $this->simpleClicked;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$this->simpleClicked_initialized = true;
		$this->set_simpleClicked(false);
		$res = $this->simpleClicked;
		{
			$GLOBALS['%s']->pop();
			return $res;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_closureBlockClicked($value) {
		$GLOBALS['%s']->push("Signal::set_closureBlockClicked");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->closureBlockClicked_initialized = true;
		{
			$tmp = $this->closureBlockClicked = $value;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_closureBlockClicked() {
		$GLOBALS['%s']->push("Signal::get_closureBlockClicked");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->closureBlockClicked_initialized) {
			$tmp = $this->closureBlockClicked;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$this->closureBlockClicked_initialized = true;
		$this->set_closureBlockClicked(false);
		$res = $this->closureBlockClicked;
		{
			$GLOBALS['%s']->pop();
			return $res;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_closureSingleExprClicked($value) {
		$GLOBALS['%s']->push("Signal::set_closureSingleExprClicked");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->closureSingleExprClicked_initialized = true;
		{
			$tmp = $this->closureSingleExprClicked = $value;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_closureSingleExprClicked() {
		$GLOBALS['%s']->push("Signal::get_closureSingleExprClicked");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->closureSingleExprClicked_initialized) {
			$tmp = $this->closureSingleExprClicked;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$this->closureSingleExprClicked_initialized = true;
		$this->set_closureSingleExprClicked(false);
		$res = $this->closureSingleExprClicked;
		{
			$GLOBALS['%s']->pop();
			return $res;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_simple($value) {
		$GLOBALS['%s']->push("Signal::set_simple");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->simple_initialized = true;
		{
			$tmp = $this->simple = $value;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_simple() {
		$GLOBALS['%s']->push("Signal::get_simple");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $this;
		if($this->simple_initialized) {
			$tmp = $this->simple;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$this->simple_initialized = true;
		$this->set_simple(new sx_widgets_Widget());
		$res = $this->simple;
		$res->get_onClick()->add(array(new _hx_lambda(array(&$_g, &$res), "Signal_0"), 'execute'));
		{
			$GLOBALS['%s']->pop();
			return $res;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_closureBlockBody($value) {
		$GLOBALS['%s']->push("Signal::set_closureBlockBody");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->closureBlockBody_initialized = true;
		{
			$tmp = $this->closureBlockBody = $value;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_closureBlockBody() {
		$GLOBALS['%s']->push("Signal::get_closureBlockBody");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $this;
		if($this->closureBlockBody_initialized) {
			$tmp = $this->closureBlockBody;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$this->closureBlockBody_initialized = true;
		$this->set_closureBlockBody(new sx_widgets_Widget());
		$res = $this->closureBlockBody;
		$res->get_onClick()->add(array(new _hx_lambda(array(&$_g, &$res), "Signal_1"), 'execute'));
		{
			$GLOBALS['%s']->pop();
			return $res;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_closureSingleExpr($value) {
		$GLOBALS['%s']->push("Signal::set_closureSingleExpr");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->closureSingleExpr_initialized = true;
		{
			$tmp = $this->closureSingleExpr = $value;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_closureSingleExpr() {
		$GLOBALS['%s']->push("Signal::get_closureSingleExpr");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $this;
		if($this->closureSingleExpr_initialized) {
			$tmp = $this->closureSingleExpr;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$this->closureSingleExpr_initialized = true;
		$this->set_closureSingleExpr(new sx_widgets_Widget());
		$res = $this->closureSingleExpr;
		$res->get_onClick()->add(array(new _hx_lambda(array(&$_g, &$res), "Signal_2"), 'execute'));
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
	static $__properties__ = array("set_closureSingleExpr" => "set_closureSingleExpr","get_closureSingleExpr" => "get_closureSingleExpr","set_closureBlockBody" => "set_closureBlockBody","get_closureBlockBody" => "get_closureBlockBody","set_simple" => "set_simple","get_simple" => "get_simple","set_closureSingleExprClicked" => "set_closureSingleExprClicked","get_closureSingleExprClicked" => "get_closureSingleExprClicked","set_closureBlockClicked" => "set_closureBlockClicked","get_closureBlockClicked" => "get_closureBlockClicked","set_simpleClicked" => "set_simpleClicked","get_simpleClicked" => "get_simpleClicked","get_onDispose" => "get_onDispose","get_onInitialize" => "get_onInitialize","get_onPointerOut" => "get_onPointerOut","get_onPointerOver" => "get_onPointerOver","get_onPointerMove" => "get_onPointerMove","get_onClick" => "get_onClick","get_onPointerTap" => "get_onPointerTap","get_onPointerRelease" => "get_onPointerRelease","get_onPointerPress" => "get_onPointerPress","get_onDisable" => "get_onDisable","get_onEnable" => "get_onEnable","get_onParentChanged" => "get_onParentChanged","get_onChildRemoved" => "get_onChildRemoved","get_onChildAdded" => "get_onChildAdded","get_onMove" => "get_onMove","get_onResize" => "get_onResize","get_tween" => "get_tween","set_style" => "set_style","set_enabled" => "set_enabled","set_arrangeable" => "set_arrangeable","set_layout" => "set_layout","get_layout" => "get_layout","set_skin" => "set_skin","get_skin" => "get_skin","set_overflow" => "set_overflow","set_visible" => "set_visible","set_alpha" => "set_alpha","set_rotation" => "set_rotation","set_scaleY" => "set_scaleY","set_scaleX" => "set_scaleX","set_height" => "set_height","get_height" => "get_height","set_width" => "set_width","get_width" => "get_width","get_offset" => "get_offset","get_origin" => "get_origin","set_bottom" => "set_bottom","get_bottom" => "get_bottom","set_top" => "set_top","get_top" => "get_top","set_right" => "set_right","get_right" => "get_right","set_left" => "set_left","get_left" => "get_left","set___parent" => "set___parent","get_parent" => "get_parent");
	function __toString() { return 'Signal'; }
}
function Signal_0(&$_g, &$res, $__0, $__1, $__2) {
	{
		$GLOBALS['%s']->push("Signal::get_simple@94");
		$__hx__spos2 = $GLOBALS['%s']->length;
		$_g->set_simpleClicked(true);
		$GLOBALS['%s']->pop();
	}
}
function Signal_1(&$_g, &$res, $processor, $dispatcher, $touchId) {
	{
		$GLOBALS['%s']->push("Signal::get_closureBlockBody@113");
		$__hx__spos2 = $GLOBALS['%s']->length;
		$_g->set_closureBlockClicked(true);
		$GLOBALS['%s']->pop();
	}
}
function Signal_2(&$_g, &$res, $processor, $dispatcher, $touchId) {
	{
		$GLOBALS['%s']->push("Signal::get_closureSingleExpr@131");
		$__hx__spos2 = $GLOBALS['%s']->length;
		$_g->set_closureSingleExprClicked(true);
		$GLOBALS['%s']->pop();
	}
}
