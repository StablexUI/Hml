<?php

class sx_tools_OrientationTools {
	public function __construct(){}
	static function opposite($orientation) {
		$GLOBALS['%s']->push("sx.tools.OrientationTools::opposite");
		$__hx__spos = $GLOBALS['%s']->length;
		switch($orientation) {
		case "vertical":{
			$tmp = "horizontal";
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "horizontal":{
			$tmp = "vertical";
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'sx.tools.OrientationTools'; }
}
