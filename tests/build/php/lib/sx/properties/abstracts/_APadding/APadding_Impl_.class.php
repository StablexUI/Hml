<?php

class sx_properties_abstracts__APadding_APadding_Impl_ {
	public function __construct(){}
	static $__pool;
	static function fromFloat($v) {
		$GLOBALS['%s']->push("sx.properties.abstracts._APadding.APadding_Impl_::fromFloat");
		$__hx__spos = $GLOBALS['%s']->length;
		$weakPadding = null;
		{
			$_this = sx_properties_abstracts__APadding_APadding_Impl_::$__pool;
			if($_this->length > 0) {
				$_this->length--;
				$weakPadding = $_this->__pool[$_this->length];
			} else {
				$weakPadding = null;
			}
		}
		if($weakPadding === null) {
			$weakPadding = new sx_properties_abstracts__APadding_WeakPadding();
		}
		$weakPadding->weak = true;
		$weakPadding->set_dip($v);
		{
			$GLOBALS['%s']->pop();
			return $weakPadding;
		}
		$GLOBALS['%s']->pop();
	}
	static function get_onChange($this1) {
		$GLOBALS['%s']->push("sx.properties.abstracts._APadding.APadding_Impl_::get_onChange");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this1->onComponentsChange;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function set_dip($this1, $v) {
		$GLOBALS['%s']->push("sx.properties.abstracts._APadding.APadding_Impl_::set_dip");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this1->set_dip($v);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function set_px($this1, $v) {
		$GLOBALS['%s']->push("sx.properties.abstracts._APadding.APadding_Impl_::set_px");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this1->set_px($v);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function set_pct($this1, $v) {
		$GLOBALS['%s']->push("sx.properties.abstracts._APadding.APadding_Impl_::set_pct");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this1->set_pct($v);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static $__properties__ = array("get_onChange" => "get_onChange","set_pct" => "set_pct","set_px" => "set_px","set_dip" => "set_dip");
	function __toString() { return 'sx.properties.abstracts._APadding.APadding_Impl_'; }
}
sx_properties_abstracts__APadding_APadding_Impl_::$__pool = new sx_ds_ObjectPool();
