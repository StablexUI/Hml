<?php

class haxe_unit_TestCase {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("haxe.unit.TestCase::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}}
	public $currentTest;
	public function setup() {
		$GLOBALS['%s']->push("haxe.unit.TestCase::setup");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function tearDown() {
		$GLOBALS['%s']->push("haxe.unit.TestCase::tearDown");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function hprint($v) {
		$GLOBALS['%s']->push("haxe.unit.TestCase::print");
		$__hx__spos = $GLOBALS['%s']->length;
		haxe_unit_TestRunner::hprint($v);
		$GLOBALS['%s']->pop();
	}
	public function assertTrue($b, $c = null) {
		$GLOBALS['%s']->push("haxe.unit.TestCase::assertTrue");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->currentTest->done = true;
		if($b !== true) {
			$this->currentTest->success = false;
			$this->currentTest->error = "expected true but was false";
			$this->currentTest->posInfos = $c;
			throw new HException($this->currentTest);
		}
		$GLOBALS['%s']->pop();
	}
	public function assertFalse($b, $c = null) {
		$GLOBALS['%s']->push("haxe.unit.TestCase::assertFalse");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->currentTest->done = true;
		if($b === true) {
			$this->currentTest->success = false;
			$this->currentTest->error = "expected false but was true";
			$this->currentTest->posInfos = $c;
			throw new HException($this->currentTest);
		}
		$GLOBALS['%s']->pop();
	}
	public function assertEquals($expected, $actual, $c = null) {
		$GLOBALS['%s']->push("haxe.unit.TestCase::assertEquals");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->currentTest->done = true;
		if((is_object($_t = $actual) && !($_t instanceof Enum) ? $_t !== $expected : $_t != $expected)) {
			$this->currentTest->success = false;
			$this->currentTest->error = "expected '" . Std::string($expected) . "' but was '" . Std::string($actual) . "'";
			$this->currentTest->posInfos = $c;
			throw new HException($this->currentTest);
		}
		$GLOBALS['%s']->pop();
	}
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->__dynamics[$m]) && is_callable($this->__dynamics[$m]))
			return call_user_func_array($this->__dynamics[$m], $a);
		else if('toString' == $m)
			return $this->__toString();
		else
			throw new HException('Unable to call <'.$m.'>');
	}
	function __toString() { return 'haxe.unit.TestCase'; }
}
