<?php

class hunit_warnings_IncompleteTestWarning extends hunit_warnings_Warning {
	public function __construct($message) { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.warnings.IncompleteTestWarning::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct($message);
		$GLOBALS['%s']->pop();
	}}
	public function defaultMessage() {
		$GLOBALS['%s']->push("hunit.warnings.IncompleteTestWarning::defaultMessage");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$GLOBALS['%s']->pop();
			return "Incomplete test.";
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'hunit.warnings.IncompleteTestWarning'; }
}
