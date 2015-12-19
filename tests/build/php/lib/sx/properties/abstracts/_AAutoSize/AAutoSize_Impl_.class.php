<?php

class sx_properties_abstracts__AAutoSize_AAutoSize_Impl_ {
	public function __construct(){}
	static $__pool;
	static function fromBool($v) {
		$GLOBALS['%s']->push("sx.properties.abstracts._AAutoSize.AAutoSize_Impl_::fromBool");
		$__hx__spos = $GLOBALS['%s']->length;
		$weakAutoSize = null;
		{
			$_this = sx_properties_abstracts__AAutoSize_AAutoSize_Impl_::$__pool;
			if($_this->length > 0) {
				$_this->length--;
				$weakAutoSize = $_this->__pool[$_this->length];
			} else {
				$weakAutoSize = null;
			}
		}
		if($weakAutoSize === null) {
			$weakAutoSize = new sx_properties_abstracts__AAutoSize_WeakAutoSize();
		}
		$weakAutoSize->weak = true;
		$weakAutoSize->set_width($v);
		$weakAutoSize->set_height($v);
		{
			$GLOBALS['%s']->pop();
			return $weakAutoSize;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'sx.properties.abstracts._AAutoSize.AAutoSize_Impl_'; }
}
sx_properties_abstracts__AAutoSize_AAutoSize_Impl_::$__pool = new sx_ds_ObjectPool();
