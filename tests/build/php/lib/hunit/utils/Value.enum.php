<?php

class hunit_utils_Value extends Enum {
	public static $Nothing;
	public static function Thing($v) { return new hunit_utils_Value("Thing", 1, array($v)); }
	public static $__constructors = array(0 => 'Nothing', 1 => 'Thing');
	}
hunit_utils_Value::$Nothing = new hunit_utils_Value("Nothing", 0);
