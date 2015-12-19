<?php

class sx_properties_abstracts__AAutoSize_WeakAutoSize extends sx_properties_AutoSize {
	public function __construct() { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.properties.abstracts._AAutoSize.WeakAutoSize::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct(null);
		$this->onChange = null;
		$GLOBALS['%s']->pop();
	}}
	public function dispose() {
		$GLOBALS['%s']->push("sx.properties.abstracts._AAutoSize.WeakAutoSize::dispose");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$_this = sx_properties_abstracts__AAutoSize_AAutoSize_Impl_::$__pool;
			$_this->__pool[$_this->length] = $this;
			$_this->length++;
		}
		$this->weak = false;
		$GLOBALS['%s']->pop();
	}
	static $__properties__ = array("set_height" => "set_height","get_height" => "get_height","set_width" => "set_width","get_width" => "get_width");
	function __toString() { return 'sx.properties.abstracts._AAutoSize.WeakAutoSize'; }
}
