<?php

class hunit_call_CallCount extends Enum {
	public static $Any;
	public static function AtLeast($amount) { return new hunit_call_CallCount("AtLeast", 3, array($amount)); }
	public static function Exactly($amount) { return new hunit_call_CallCount("Exactly", 4, array($amount)); }
	public static $Never;
	public static $Once;
	public static $__constructors = array(1 => 'Any', 3 => 'AtLeast', 4 => 'Exactly', 0 => 'Never', 2 => 'Once');
	}
hunit_call_CallCount::$Any = new hunit_call_CallCount("Any", 1);
hunit_call_CallCount::$Never = new hunit_call_CallCount("Never", 0);
hunit_call_CallCount::$Once = new hunit_call_CallCount("Once", 2);
