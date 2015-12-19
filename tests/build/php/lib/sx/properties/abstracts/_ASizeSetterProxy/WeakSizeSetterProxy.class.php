<?php

class sx_properties_abstracts__ASizeSetterProxy_WeakSizeSetterProxy extends sx_properties_metric_SizeSetterProxy {
	public function __construct() { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct(null);
		$this->onChange = null;
		$GLOBALS['%s']->pop();
	}}
	public function dispose() {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy::dispose");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$_this = sx_properties_abstracts__ASizeSetterProxy_ASizeSetterProxy_Impl_::$__pool;
			$_this->__pool[$_this->length] = $this;
			$_this->length++;
		}
		$this->weak = false;
		$GLOBALS['%s']->pop();
	}
	public function __invokeOnChange($units, $value) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy::__invokeOnChange");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	static $__properties__ = array("set_max" => "set_max","get_max" => "get_max","set_min" => "set_min","get_min" => "get_min","set_pct" => "set_pct","get_pct" => "get_pct","set_px" => "set_px","get_px" => "get_px","set_dip" => "set_dip","get_dip" => "get_dip","get_zeroProperty" => "get_zeroProperty");
	function __toString() { return 'sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy'; }
}
