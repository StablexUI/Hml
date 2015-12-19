<?php

class hunit_match_AnyMatch extends hunit_match_Match {
	public function __construct($previous = null, $chainLogic = null) { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.match.AnyMatch::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct($previous,$chainLogic);
		$GLOBALS['%s']->pop();
	}}
	public function checkMatch($value) {
		$GLOBALS['%s']->push("hunit.match.AnyMatch::checkMatch");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$GLOBALS['%s']->pop();
			return true;
		}
		$GLOBALS['%s']->pop();
	}
	public function shortCode() {
		$GLOBALS['%s']->push("hunit.match.AnyMatch::shortCode");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$GLOBALS['%s']->pop();
			return "ANY";
		}
		$GLOBALS['%s']->pop();
	}
	static $__properties__ = array("get_or" => "get_or","get_and" => "get_and");
	function __toString() { return 'hunit.match.AnyMatch'; }
}
