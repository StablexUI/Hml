<?php

class sx_properties_abstracts__ASizeSetterProxy_ASizeSetterProxy_Impl_ {
	public function __construct(){}
	static $__pool;
	static function fromFloat($v) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_::fromFloat");
		$__hx__spos = $GLOBALS['%s']->length;
		$weakSizeSetterProxy = null;
		{
			$_this = sx_properties_abstracts__ASizeSetterProxy_ASizeSetterProxy_Impl_::$__pool;
			if($_this->length > 0) {
				$_this->length--;
				$weakSizeSetterProxy = $_this->__pool[$_this->length];
			} else {
				$weakSizeSetterProxy = null;
			}
		}
		if($weakSizeSetterProxy === null) {
			$weakSizeSetterProxy = new sx_properties_abstracts__ASizeSetterProxy_WeakSizeSetterProxy();
		}
		$weakSizeSetterProxy->weak = true;
		$weakSizeSetterProxy->set_dip($v);
		{
			$GLOBALS['%s']->pop();
			return $weakSizeSetterProxy;
		}
		$GLOBALS['%s']->pop();
	}
	static function set_dip($this1, $v) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_::set_dip");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this1->set_dip($v);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function set_px($this1, $v) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_::set_px");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this1->set_px($v);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function set_pct($this1, $v) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_::set_pct");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this1->set_pct($v);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static $__properties__ = array("set_pct" => "set_pct","set_px" => "set_px","set_dip" => "set_dip");
	function __toString() { return 'sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_'; }
}
sx_properties_abstracts__ASizeSetterProxy_ASizeSetterProxy_Impl_::$__pool = new sx_ds_ObjectPool();
