<?php

class hunit_TestState {
	public function __construct($testCase, $testName, $report, $print) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.TestState::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->warned = false;
		$this->testCase = $testCase;
		$this->testName = $testName;
		$this->report = $report;
		$this->{"print"} = $print;
		$this->pendingExceptions = (new _hx_array(array()));
		$this->callExceptions = (new _hx_array(array()));
		$this->expectedCalls = new HList();
		$this->asserted = new HList();
		$GLOBALS['%s']->pop();
	}}
	public $testCase;
	public $testName;
	public $report;
	public $expectedException;
	public $print;
	public $warned;
	public $expectedCalls;
	public $asserted;
	public $pendingExceptions;
	public $callExceptions;
	public function expectingException() {
		$GLOBALS['%s']->push("hunit.TestState::expectingException");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->expectedException !== null;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function validateException($e, $catchExceptionStack, $exceptionStack) {
		$GLOBALS['%s']->push("hunit.TestState::validateException");
		$__hx__spos = $GLOBALS['%s']->length;
		if($e !== null) {
			if($this->expectedException !== null) {
				$this->expectedException->validate($e, $this->getOriginalExceptionStack($e, $catchExceptionStack, $exceptionStack));
			} else {
				throw new HException(new hunit_exceptions_UnexpectedException($e, $this->getOriginalExceptionStack($e, $catchExceptionStack, $exceptionStack), _hx_anonymous(array("fileName" => "TestState.hx", "lineNumber" => 86, "className" => "hunit.TestState", "methodName" => "validateException"))));
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function success() {
		$GLOBALS['%s']->push("hunit.TestState::success");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->report->addSuccess($this->testCase, $this->testName);
		$GLOBALS['%s']->pop();
	}
	public function warn($warning) {
		$GLOBALS['%s']->push("hunit.TestState::warn");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->warned = true;
		$this->report->addWarning($this->testCase, $this->testName, $warning);
		$GLOBALS['%s']->pop();
	}
	public function fail($exception) {
		$GLOBALS['%s']->push("hunit.TestState::fail");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->pendingExceptions->remove($exception);
		$this->report->addFail($this->testCase, $this->testName, $exception);
		$GLOBALS['%s']->pop();
	}
	public function notice($msg, $pos) {
		$GLOBALS['%s']->push("hunit.TestState::notice");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->report->addNotice($this->testCase, $this->testName, $msg, $pos);
		$GLOBALS['%s']->pop();
	}
	public function pendingFail($exception) {
		$GLOBALS['%s']->push("hunit.TestState::pendingFail");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->pendingExceptions->push($exception);
		$GLOBALS['%s']->pop();
	}
	public function cacheCallException($call) {
		$GLOBALS['%s']->push("hunit.TestState::cacheCallException");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->callExceptions->push($call);
		$GLOBALS['%s']->pop();
	}
	public function getOriginalExceptionStack($e, $catchExceptionStack, $exceptionStack) {
		$GLOBALS['%s']->push("hunit.TestState::getOriginalExceptionStack");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$_g = 0;
			$_g1 = $this->callExceptions;
			while($_g < $_g1->length) {
				$call = $_g1[$_g];
				++$_g;
				if(_hx_equal(hunit_utils_ValueTools::getValue($call->exceptionValue), $e)) {
					$tmp = $call->exceptionStack;
					$GLOBALS['%s']->pop();
					return $tmp;
					unset($tmp);
				}
				unset($call);
			}
		}
		{
			$tmp = $exceptionStack->concat($catchExceptionStack);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function madeAssertions() {
		$GLOBALS['%s']->push("hunit.TestState::madeAssertions");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->expectedCalls->length > 0 || $this->asserted->length > 0 || $this->expectingException();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function finalize() {
		$GLOBALS['%s']->push("hunit.TestState::finalize");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->report->assertionCount += $this->asserted->length;
		$this->report->assertionCount += $this->expectedCalls->length;
		if($this->expectingException()) {
			$this->report->assertionCount++;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_expectedException($expectedException) {
		$GLOBALS['%s']->push("hunit.TestState::set_expectedException");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->expectedException !== null) {
			throw new HException(new hunit_exceptions_InvalidTestException("Expected exception is already set", _hx_anonymous(array("fileName" => "TestState.hx", "lineNumber" => 203, "className" => "hunit.TestState", "methodName" => "set_expectedException"))));
		}
		{
			$tmp = $this->expectedException = $expectedException;
			$GLOBALS['%s']->pop();
			return $tmp;
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
	static $__properties__ = array("set_expectedException" => "set_expectedException");
	function __toString() { return 'hunit.TestState'; }
}
