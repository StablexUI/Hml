<?php

class HUnit {
	public function __construct(){}
	static function main() {
		$GLOBALS['%s']->push("HUnit::main");
		$__hx__spos = $GLOBALS['%s']->length;
		_Exception_HException::$processCallStackOnCreation = (isset(HUnit::$processExceptionStack) ? HUnit::$processExceptionStack: array("HUnit", "processExceptionStack"));
		$suite = new hunit_TestSuite(null, null);
		{
			$suite->add(new SignalValueTest());
			$suite->add(new MetricValueTest());
			$suite->add(new ChildWidgetNodeTest());
		}
		$suite->run();
		$GLOBALS['%s']->pop();
	}
	static function processExceptionStack($stack) {
		$GLOBALS['%s']->push("HUnit::processExceptionStack");
		$__hx__spos = $GLOBALS['%s']->length;
		$count = 4;
		{
			$tmp = $stack->slice(0, -$count);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'HUnit'; }
}
