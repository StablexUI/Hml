<?php

class sx_backend_dummy_BitmapRenderer implements sx_backend_interfaces_IBitmapRenderer{
	public function __construct($bmp) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.backend.dummy.BitmapRenderer::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__bmp = $bmp;
		$GLOBALS['%s']->pop();
	}}
	public $__bmp;
	public $__bitmapData;
	public $__onResize;
	public function setBitmapData($bitmapData) {
		$GLOBALS['%s']->push("sx.backend.dummy.BitmapRenderer::setBitmapData");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__bitmapData = $bitmapData;
		$GLOBALS['%s']->pop();
	}
	public function getBitmapDataWidth() {
		$GLOBALS['%s']->push("sx.backend.dummy.BitmapRenderer::getBitmapDataWidth");
		$__hx__spos = $GLOBALS['%s']->length;
		if(_hx_field($this, "__bitmapData") === null || _hx_field($this->__bitmapData, "width") === null) {
			$GLOBALS['%s']->pop();
			return 0;
		} else {
			$tmp = $this->__bitmapData->width;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function getBitmapDataHeight() {
		$GLOBALS['%s']->push("sx.backend.dummy.BitmapRenderer::getBitmapDataHeight");
		$__hx__spos = $GLOBALS['%s']->length;
		if(_hx_field($this, "__bitmapData") === null || _hx_field($this->__bitmapData, "height") === null) {
			$GLOBALS['%s']->pop();
			return 0;
		} else {
			$tmp = $this->__bitmapData->height;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function setBitmapScale($scaleX, $scaleY) {
		$GLOBALS['%s']->push("sx.backend.dummy.BitmapRenderer::setBitmapScale");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function setBitmapSmoothing($smooth) {
		$GLOBALS['%s']->push("sx.backend.dummy.BitmapRenderer::setBitmapSmoothing");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function getWidth() {
		$GLOBALS['%s']->push("sx.backend.dummy.BitmapRenderer::getWidth");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = sx_backend_dummy_BitmapRenderer_0($this);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function getHeight() {
		$GLOBALS['%s']->push("sx.backend.dummy.BitmapRenderer::getHeight");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = sx_backend_dummy_BitmapRenderer_1($this);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function onResize($callback) {
		$GLOBALS['%s']->push("sx.backend.dummy.BitmapRenderer::onResize");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__onResize = $callback;
		$GLOBALS['%s']->pop();
	}
	public function setAvailableAreaWidth($width) {
		$GLOBALS['%s']->push("sx.backend.dummy.BitmapRenderer::setAvailableAreaWidth");
		$__hx__spos = $GLOBALS['%s']->length;
		if(_hx_field($this, "__bitmapData") !== null) {
			$this->__bitmapData->width = $width;
		}
		$GLOBALS['%s']->pop();
	}
	public function setAvailableAreaHeight($height) {
		$GLOBALS['%s']->push("sx.backend.dummy.BitmapRenderer::setAvailableAreaHeight");
		$__hx__spos = $GLOBALS['%s']->length;
		if(_hx_field($this, "__bitmapData") !== null) {
			$this->__bitmapData->height = $height;
		}
		$GLOBALS['%s']->pop();
	}
	public function dispose() {
		$GLOBALS['%s']->push("sx.backend.dummy.BitmapRenderer::dispose");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__bmp = null;
		$this->__onResize = null;
		$this->__bitmapData = null;
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
	function __toString() { return 'sx.backend.dummy.BitmapRenderer'; }
}
function sx_backend_dummy_BitmapRenderer_0(&$__hx__this) {
	if(_hx_field($__hx__this, "__bitmapData") === null || _hx_field($__hx__this->__bitmapData, "width") === null) {
		return 0;
	} else {
		return $__hx__this->__bitmapData->width;
	}
}
function sx_backend_dummy_BitmapRenderer_1(&$__hx__this) {
	if(_hx_field($__hx__this, "__bitmapData") === null || _hx_field($__hx__this->__bitmapData, "height") === null) {
		return 0;
	} else {
		return $__hx__this->__bitmapData->height;
	}
}
