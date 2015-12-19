<?php

class sx_skins__ASkin_ASkin_Impl_ {
	public function __construct(){}
	static function __byName($name) {
		$GLOBALS['%s']->push("sx.skins._ASkin.ASkin_Impl_::__byName");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = sx_Sx::skin($name);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'sx.skins._ASkin.ASkin_Impl_'; }
}
