<?php

class sx_backend_dummy_TextInputRenderer implements sx_backend_interfaces_ITextInputRenderer{
	public function __construct($textInput) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.backend.dummy.TextInputRenderer::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__height = 0;
		$this->__width = 0;
		$this->__text = "";
		$this->__textInput = $textInput;
		$GLOBALS['%s']->pop();
	}}
	public $__textInput;
	public $__text;
	public $__onTextChange;
	public $__format;
	public $__width;
	public $__height;
	public function onTextChange($onTextChange) {
		$GLOBALS['%s']->push("sx.backend.dummy.TextInputRenderer::onTextChange");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__onTextChange = $onTextChange;
		$GLOBALS['%s']->pop();
	}
	public function onReceiveCursor($callback) {
		$GLOBALS['%s']->push("sx.backend.dummy.TextInputRenderer::onReceiveCursor");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function onLoseCursor($callback) {
		$GLOBALS['%s']->push("sx.backend.dummy.TextInputRenderer::onLoseCursor");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function getText() {
		$GLOBALS['%s']->push("sx.backend.dummy.TextInputRenderer::getText");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__text;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function setText($text) {
		$GLOBALS['%s']->push("sx.backend.dummy.TextInputRenderer::setText");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__text = $text;
		$GLOBALS['%s']->pop();
	}
	public function getFormat() {
		$GLOBALS['%s']->push("sx.backend.dummy.TextInputRenderer::getFormat");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__format;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function setFormat($format) {
		$GLOBALS['%s']->push("sx.backend.dummy.TextInputRenderer::setFormat");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__format = $format;
		$GLOBALS['%s']->pop();
	}
	public function onResize($callback) {
		$GLOBALS['%s']->push("sx.backend.dummy.TextInputRenderer::onResize");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function getWidth() {
		$GLOBALS['%s']->push("sx.backend.dummy.TextInputRenderer::getWidth");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__width;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function getHeight() {
		$GLOBALS['%s']->push("sx.backend.dummy.TextInputRenderer::getHeight");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__height;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function setAvailableAreaWidth($width) {
		$GLOBALS['%s']->push("sx.backend.dummy.TextInputRenderer::setAvailableAreaWidth");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__width = $width;
		$GLOBALS['%s']->pop();
	}
	public function setAvailableAreaHeight($height) {
		$GLOBALS['%s']->push("sx.backend.dummy.TextInputRenderer::setAvailableAreaHeight");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__height = $height;
		$GLOBALS['%s']->pop();
	}
	public function dispose() {
		$GLOBALS['%s']->push("sx.backend.dummy.TextInputRenderer::dispose");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__textInput = null;
		$GLOBALS['%s']->pop();
	}
	public function set_text($value) {
		$GLOBALS['%s']->push("sx.backend.dummy.TextInputRenderer::set_text");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__text = $value;
		if($this->__onTextChange !== null) {
			$this->__onTextChange($value);
		}
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_text() {
		$GLOBALS['%s']->push("sx.backend.dummy.TextInputRenderer::get_text");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__text;
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
	static $__properties__ = array("set_text" => "set_text","get_text" => "get_text");
	function __toString() { return 'sx.backend.dummy.TextInputRenderer'; }
}
