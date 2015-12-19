<?php

class sx_properties_abstracts__AAlign_AAlign_Impl_ {
	public function __construct(){}
	static $__pool;
	static function fromHorizontal($v) {
		$GLOBALS['%s']->push("sx.properties.abstracts._AAlign.AAlign_Impl_::fromHorizontal");
		$__hx__spos = $GLOBALS['%s']->length;
		$weakAlign = null;
		{
			$_this = sx_properties_abstracts__AAlign_AAlign_Impl_::$__pool;
			if($_this->length > 0) {
				$_this->length--;
				$weakAlign = $_this->__pool[$_this->length];
			} else {
				$weakAlign = null;
			}
		}
		if($weakAlign === null) {
			$weakAlign = new sx_properties_abstracts__AAlign_WeakAlign();
		}
		$weakAlign->weak = true;
		$weakAlign->set($v, "none");
		{
			$GLOBALS['%s']->pop();
			return $weakAlign;
		}
		$GLOBALS['%s']->pop();
	}
	static function fromVertical($v) {
		$GLOBALS['%s']->push("sx.properties.abstracts._AAlign.AAlign_Impl_::fromVertical");
		$__hx__spos = $GLOBALS['%s']->length;
		$weakAlign = null;
		{
			$_this = sx_properties_abstracts__AAlign_AAlign_Impl_::$__pool;
			if($_this->length > 0) {
				$_this->length--;
				$weakAlign = $_this->__pool[$_this->length];
			} else {
				$weakAlign = null;
			}
		}
		if($weakAlign === null) {
			$weakAlign = new sx_properties_abstracts__AAlign_WeakAlign();
		}
		$weakAlign->weak = true;
		$weakAlign->set("none", $v);
		{
			$GLOBALS['%s']->pop();
			return $weakAlign;
		}
		$GLOBALS['%s']->pop();
	}
	static function fromNone($v) {
		$GLOBALS['%s']->push("sx.properties.abstracts._AAlign.AAlign_Impl_::fromNone");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = sx_properties_abstracts__AAlign_AAlign_Impl_::fromHorizontal("none");
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'sx.properties.abstracts._AAlign.AAlign_Impl_'; }
}
sx_properties_abstracts__AAlign_AAlign_Impl_::$__pool = new sx_ds_ObjectPool();
