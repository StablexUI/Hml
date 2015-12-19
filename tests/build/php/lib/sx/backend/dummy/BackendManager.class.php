<?php

class sx_backend_dummy_BackendManager implements sx_backend_interfaces_IBackendManager{
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.backend.dummy.BackendManager::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}}
	public $__root;
	public function setupPointerDevices() {
		$GLOBALS['%s']->push("sx.backend.dummy.BackendManager::setupPointerDevices");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function setupFrames() {
		$GLOBALS['%s']->push("sx.backend.dummy.BackendManager::setupFrames");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function getPointerPosition($touchId = null) {
		$GLOBALS['%s']->push("sx.backend.dummy.BackendManager::getPointerPosition");
		$__hx__spos = $GLOBALS['%s']->length;
		if($touchId === null) {
			$touchId = 0;
		}
		{
			$tmp = new sx_backend_dummy_Point(null, null);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function getRoot() {
		$GLOBALS['%s']->push("sx.backend.dummy.BackendManager::getRoot");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__root === null) {
			$this->__root = new sx_widgets_Widget();
		}
		{
			$tmp = $this->__root;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function widgetBackend($widget) {
		$GLOBALS['%s']->push("sx.backend.dummy.BackendManager::widgetBackend");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new sx_backend_dummy_Backend($widget);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function textRenderer($textField) {
		$GLOBALS['%s']->push("sx.backend.dummy.BackendManager::textRenderer");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new sx_backend_dummy_TextRenderer($textField);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function textInputRenderer($textInput) {
		$GLOBALS['%s']->push("sx.backend.dummy.BackendManager::textInputRenderer");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new sx_backend_dummy_TextInputRenderer($textInput);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function bitmapRenderer($bmp) {
		$GLOBALS['%s']->push("sx.backend.dummy.BackendManager::bitmapRenderer");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new sx_backend_dummy_BitmapRenderer($bmp);
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
	function __toString() { return 'sx.backend.dummy.BackendManager'; }
}
