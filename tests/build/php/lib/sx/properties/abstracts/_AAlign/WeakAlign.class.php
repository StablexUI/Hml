<?php

class sx_properties_abstracts__AAlign_WeakAlign extends sx_properties_Align {
	public function __construct() { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.properties.abstracts._AAlign.WeakAlign::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct(null,null);
		$this->onChange = null;
		$GLOBALS['%s']->pop();
	}}
	public function dispose() {
		$GLOBALS['%s']->push("sx.properties.abstracts._AAlign.WeakAlign::dispose");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$_this = sx_properties_abstracts__AAlign_AAlign_Impl_::$__pool;
			$_this->__pool[$_this->length] = $this;
			$_this->length++;
		}
		$this->weak = false;
		$GLOBALS['%s']->pop();
	}
	static $__properties__ = array("set_vertical" => "set_vertical","get_vertical" => "get_vertical","set_horizontal" => "set_horizontal","get_horizontal" => "get_horizontal");
	function __toString() { return 'sx.properties.abstracts._AAlign.WeakAlign'; }
}
