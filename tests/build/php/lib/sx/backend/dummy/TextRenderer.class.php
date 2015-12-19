<?php

class sx_backend_dummy_TextRenderer implements sx_backend_interfaces_ITextRenderer{
	public function __construct($textField) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.backend.dummy.TextRenderer::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__text = "";
		$this->__textField = $textField;
		$GLOBALS['%s']->pop();
	}}
	public $__textField;
	public $__text;
	public $__onResize;
	public $__format;
	public function setText($text) {
		$GLOBALS['%s']->push("sx.backend.dummy.TextRenderer::setText");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__text = $text;
		if($this->__onResize !== null) {
			$this->__onResize($this->getWidth(), $this->getHeight());
		}
		$GLOBALS['%s']->pop();
	}
	public function getFormat() {
		$GLOBALS['%s']->push("sx.backend.dummy.TextRenderer::getFormat");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__format;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function setFormat($format) {
		$GLOBALS['%s']->push("sx.backend.dummy.TextRenderer::setFormat");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__format = $format;
		$GLOBALS['%s']->pop();
	}
	public function onResize($callback) {
		$GLOBALS['%s']->push("sx.backend.dummy.TextRenderer::onResize");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__onResize = $callback;
		$GLOBALS['%s']->pop();
	}
	public function getWidth() {
		$GLOBALS['%s']->push("sx.backend.dummy.TextRenderer::getWidth");
		$__hx__spos = $GLOBALS['%s']->length;
		$max = 0;
		$nlPos = 0;
		$prevPos = 0;
		do {
			$nlPos = _hx_index_of($this->__text, "\x0A", $prevPos);
			if($nlPos > 0 && $nlPos - $prevPos > $max) {
				$max = $nlPos - $prevPos;
			}
			$prevPos = $nlPos + 1;
		} while($nlPos >= 0);
		{
			$GLOBALS['%s']->pop();
			return $max;
		}
		$GLOBALS['%s']->pop();
	}
	public function getHeight() {
		$GLOBALS['%s']->push("sx.backend.dummy.TextRenderer::getHeight");
		$__hx__spos = $GLOBALS['%s']->length;
		$linesCount = 0;
		$pos = _hx_index_of($this->__text, "\x0A", null);
		while($pos >= 0) {
			$pos = _hx_index_of($this->__text, "\x0A", $pos + 1);
		}
		{
			$GLOBALS['%s']->pop();
			return $linesCount;
		}
		$GLOBALS['%s']->pop();
	}
	public function setAvailableAreaWidth($width) {
		$GLOBALS['%s']->push("sx.backend.dummy.TextRenderer::setAvailableAreaWidth");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function setAvailableAreaHeight($height) {
		$GLOBALS['%s']->push("sx.backend.dummy.TextRenderer::setAvailableAreaHeight");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function dispose() {
		$GLOBALS['%s']->push("sx.backend.dummy.TextRenderer::dispose");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__textField = null;
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
	function __toString() { return 'sx.backend.dummy.TextRenderer'; }
}
