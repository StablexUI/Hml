<?php

class sx_widgets_TextInput extends sx_widgets_base_RendererHolder {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.widgets.TextInput::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__hasCursor = false;
		$this->__invitation = "";
		$this->__text = "";
		parent::__construct();
		$this->get_width()->set_dip(100);
		$this->renderer->onTextChange((isset($this->__rendererTextChanged) ? $this->__rendererTextChanged: array($this, "__rendererTextChanged")));
		$this->renderer->onReceiveCursor((isset($this->__rendererReceiveCursor) ? $this->__rendererReceiveCursor: array($this, "__rendererReceiveCursor")));
		$this->renderer->onLoseCursor((isset($this->__rendererLoseCursor) ? $this->__rendererLoseCursor: array($this, "__rendererLoseCursor")));
		$GLOBALS['%s']->pop();
	}}
	public $__text;
	public $__invitation;
	public $renderer;
	public $__onChange;
	public $__hasCursor;
	public function getTextFormat() {
		$GLOBALS['%s']->push("sx.widgets.TextInput::getTextFormat");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->renderer->getFormat();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function setTextFormat($format) {
		$GLOBALS['%s']->push("sx.widgets.TextInput::setTextFormat");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->renderer->setFormat($format);
		{
			$GLOBALS['%s']->pop();
			return;
		}
		$GLOBALS['%s']->pop();
	}
	public function __createRenderer() {
		$GLOBALS['%s']->push("sx.widgets.TextInput::__createRenderer");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->renderer = sx_Sx::get_backendManager()->textInputRenderer($this);
		$GLOBALS['%s']->pop();
	}
	public function set_text($value) {
		$GLOBALS['%s']->push("sx.widgets.TextInput::set_text");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__text = $value;
		if($this->__hasCursor || strlen($this->get_text()) > 0) {
			$this->renderer->setText($this->get_text());
		} else {
			$this->renderer->setText($this->get_invitation());
		}
		if($this->__onChange !== null && $this->__onChange->__listeners->length > 0) {
			if($this->__onChange->__listenersInUse) {
				{
					$_g = 0;
					$_g1 = $this->__onChange->__listeners;
					while($_g < $_g1->length) {
						$listener = $_g1[$_g];
						++$_g;
						call_user_func_array($listener, array($this));
						unset($listener);
					}
				}
				false;
			} else {
				$this->__onChange->__listenersInUse = true;
				{
					$_g2 = 0;
					$_g11 = $this->__onChange->__listeners;
					while($_g2 < $_g11->length) {
						$listener1 = $_g11[$_g2];
						++$_g2;
						call_user_func_array($listener1, array($this));
						unset($listener1);
					}
				}
				$this->__onChange->__listenersInUse = false;
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function __rendererTextChanged($newText) {
		$GLOBALS['%s']->push("sx.widgets.TextInput::__rendererTextChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__text = $newText;
		if($this->__onChange !== null && $this->__onChange->__listeners->length > 0) {
			if($this->__onChange->__listenersInUse) {
				{
					$_g = 0;
					$_g1 = $this->__onChange->__listeners;
					while($_g < $_g1->length) {
						$listener = $_g1[$_g];
						++$_g;
						call_user_func_array($listener, array($this));
						unset($listener);
					}
				}
				false;
			} else {
				$this->__onChange->__listenersInUse = true;
				{
					$_g2 = 0;
					$_g11 = $this->__onChange->__listeners;
					while($_g2 < $_g11->length) {
						$listener1 = $_g11[$_g2];
						++$_g2;
						call_user_func_array($listener1, array($this));
						unset($listener1);
					}
				}
				$this->__onChange->__listenersInUse = false;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __rendererReceiveCursor() {
		$GLOBALS['%s']->push("sx.widgets.TextInput::__rendererReceiveCursor");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__hasCursor = true;
		if($this->__hasCursor || strlen($this->get_text()) > 0) {
			$this->renderer->setText($this->get_text());
		} else {
			$this->renderer->setText($this->get_invitation());
		}
		$GLOBALS['%s']->pop();
	}
	public function __rendererLoseCursor() {
		$GLOBALS['%s']->push("sx.widgets.TextInput::__rendererLoseCursor");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__hasCursor = false;
		if($this->__hasCursor || strlen($this->get_text()) > 0) {
			$this->renderer->setText($this->get_text());
		} else {
			$this->renderer->setText($this->get_invitation());
		}
		$GLOBALS['%s']->pop();
	}
	public function __updateRendererContent() {
		$GLOBALS['%s']->push("sx.widgets.TextInput::__updateRendererContent");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__hasCursor || strlen($this->get_text()) > 0) {
			$this->renderer->setText($this->get_text());
		} else {
			$this->renderer->setText($this->get_invitation());
		}
		$GLOBALS['%s']->pop();
	}
	public function set_invitation($value) {
		$GLOBALS['%s']->push("sx.widgets.TextInput::set_invitation");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__invitation = $value;
		if($this->__hasCursor || strlen($this->get_text()) > 0) {
			$this->renderer->setText($this->get_text());
		} else {
			$this->renderer->setText($this->get_invitation());
		}
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_invitation() {
		$GLOBALS['%s']->push("sx.widgets.TextInput::get_invitation");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__invitation;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_text() {
		$GLOBALS['%s']->push("sx.widgets.TextInput::get_text");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__text;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get___renderer() {
		$GLOBALS['%s']->push("sx.widgets.TextInput::get___renderer");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->renderer;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_onChange() {
		$GLOBALS['%s']->push("sx.widgets.TextInput::get_onChange");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__onChange === null) {
			$tmp = $this->__onChange = new sx_signals_Signal();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__onChange;
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
	static $__properties__ = array("get_onChange" => "get_onChange","set_invitation" => "set_invitation","get_invitation" => "get_invitation","set_text" => "set_text","get_text" => "get_text","get___renderer" => "get___renderer","set_padding" => "set_padding","get_padding" => "get_padding","set_autoSize" => "set_autoSize","get_onDispose" => "get_onDispose","get_onInitialize" => "get_onInitialize","get_onPointerOut" => "get_onPointerOut","get_onPointerOver" => "get_onPointerOver","get_onPointerMove" => "get_onPointerMove","get_onClick" => "get_onClick","get_onPointerTap" => "get_onPointerTap","get_onPointerRelease" => "get_onPointerRelease","get_onPointerPress" => "get_onPointerPress","get_onDisable" => "get_onDisable","get_onEnable" => "get_onEnable","get_onParentChanged" => "get_onParentChanged","get_onChildRemoved" => "get_onChildRemoved","get_onChildAdded" => "get_onChildAdded","get_onMove" => "get_onMove","get_onResize" => "get_onResize","get_tween" => "get_tween","set_style" => "set_style","set_enabled" => "set_enabled","set_arrangeable" => "set_arrangeable","set_layout" => "set_layout","get_layout" => "get_layout","set_skin" => "set_skin","get_skin" => "get_skin","set_overflow" => "set_overflow","set_visible" => "set_visible","set_alpha" => "set_alpha","set_rotation" => "set_rotation","set_scaleY" => "set_scaleY","set_scaleX" => "set_scaleX","set_height" => "set_height","get_height" => "get_height","set_width" => "set_width","get_width" => "get_width","get_offset" => "get_offset","get_origin" => "get_origin","set_bottom" => "set_bottom","get_bottom" => "get_bottom","set_top" => "set_top","get_top" => "get_top","set_right" => "set_right","get_right" => "get_right","set_left" => "set_left","get_left" => "get_left","set___parent" => "set___parent","get_parent" => "get_parent");
	function __toString() { return 'sx.widgets.TextInput'; }
}
