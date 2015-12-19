<?php

class hunit_warnings_NoAssertionsWarning extends hunit_warnings_Warning {
	public function __construct($message) { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.warnings.NoAssertionsWarning::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct($message);
		$GLOBALS['%s']->pop();
	}}
	function __toString() { return 'hunit.warnings.NoAssertionsWarning'; }
}
