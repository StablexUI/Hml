<?php

class sx_widgets_Text extends sx_widgets_base_RendererHolder {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.widgets.Text::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__text = "";
		parent::__construct();
		$GLOBALS['%s']->pop();
	}}
	public $__text;
	public $renderer;
	public function getTextFormat() {
		$GLOBALS['%s']->push("sx.widgets.Text::getTextFormat");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->renderer->getFormat();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function setTextFormat($format) {
		$GLOBALS['%s']->push("sx.widgets.Text::setTextFormat");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->renderer->setFormat($format);
		{
			$GLOBALS['%s']->pop();
			return;
		}
		$GLOBALS['%s']->pop();
	}
	public function __createRenderer() {
		$GLOBALS['%s']->push("sx.widgets.Text::__createRenderer");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->renderer = sx_Sx::get_backendManager()->textRenderer($this);
		$GLOBALS['%s']->pop();
	}
	public function set_text($value) {
		$GLOBALS['%s']->push("sx.widgets.Text::set_text");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__text = $value;
		$this->renderer->setText($this->__text);
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_text() {
		$GLOBALS['%s']->push("sx.widgets.Text::get_text");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__text;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get___renderer() {
		$GLOBALS['%s']->push("sx.widgets.Text::get___renderer");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->renderer;
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
	static $__properties__ = array("set_text" => "set_text","get_text" => "get_text","get___renderer" => "get___renderer","set_padding" => "set_padding","get_padding" => "get_padding","set_autoSize" => "set_autoSize","get_onDispose" => "get_onDispose","get_onInitialize" => "get_onInitialize","get_onPointerOut" => "get_onPointerOut","get_onPointerOver" => "get_onPointerOver","get_onPointerMove" => "get_onPointerMove","get_onClick" => "get_onClick","get_onPointerTap" => "get_onPointerTap","get_onPointerRelease" => "get_onPointerRelease","get_onPointerPress" => "get_onPointerPress","get_onDisable" => "get_onDisable","get_onEnable" => "get_onEnable","get_onParentChanged" => "get_onParentChanged","get_onChildRemoved" => "get_onChildRemoved","get_onChildAdded" => "get_onChildAdded","get_onMove" => "get_onMove","get_onResize" => "get_onResize","get_tween" => "get_tween","set_style" => "set_style","set_enabled" => "set_enabled","set_arrangeable" => "set_arrangeable","set_layout" => "set_layout","get_layout" => "get_layout","set_skin" => "set_skin","get_skin" => "get_skin","set_overflow" => "set_overflow","set_visible" => "set_visible","set_alpha" => "set_alpha","set_rotation" => "set_rotation","set_scaleY" => "set_scaleY","set_scaleX" => "set_scaleX","set_height" => "set_height","get_height" => "get_height","set_width" => "set_width","get_width" => "get_width","get_offset" => "get_offset","get_origin" => "get_origin","set_bottom" => "set_bottom","get_bottom" => "get_bottom","set_top" => "set_top","get_top" => "get_top","set_right" => "set_right","get_right" => "get_right","set_left" => "set_left","get_left" => "get_left","set___parent" => "set___parent","get_parent" => "get_parent");
	function __toString() { return 'sx.widgets.Text'; }
}
