<?php

class hunit_mock_MockData {
	public function __construct($testCase, $mockClass, $fullStub = null, $strictMode = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.mock.MockData::new");
		$__hx__spos = $GLOBALS['%s']->length;
		if($strictMode === null) {
			$strictMode = false;
		}
		if($fullStub === null) {
			$fullStub = false;
		}
		$this->strictMode = false;
		$this->fullStub = false;
		$this->callCounter = 0;
		$this->mockClass = $mockClass;
		$this->testCase = $testCase;
		$this->fullStub = $fullStub;
		$this->strictMode = $strictMode;
		$this->unstubbedMethods = (new _hx_array(array()));
		$this->unstubPositions = (new _hx_array(array()));
		$this->callLog = (new _hx_array(array()));
		$this->stubs = (new _hx_array(array()));
		$this->expectations = (new _hx_array(array()));
		$GLOBALS['%s']->pop();
	}}
	public $mockClass;
	public $testCase;
	public $callCounter;
	public $callLog;
	public $stubs;
	public $expectations;
	public $fullStub;
	public $strictMode;
	public $unstubbedMethods;
	public $unstubPositions;
	public function mockClassName() {
		$GLOBALS['%s']->push("hunit.mock.MockData::mockClassName");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = Type::getClassName($this->mockClass);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function stub($stub) {
		$GLOBALS['%s']->push("hunit.mock.MockData::stub");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->unstubbedMethods->indexOf($stub->method, null) >= 0) {
			$pos = $this->unstubPositions[$this->unstubbedMethods->indexOf($stub->method, null)];
			$unstubPos = _hx_string_or_null($pos->fileName) . ":" . _hx_string_rec($pos->lineNumber, "");
			throw new HException(new hunit_exceptions_InvalidTestException("Cannot stub method which was unstubbed at " . _hx_string_or_null($unstubPos), $stub->pos));
		}
		$this->stubs->push($stub);
		$GLOBALS['%s']->pop();
	}
	public function unstub($method, $pos = null) {
		$GLOBALS['%s']->push("hunit.mock.MockData::unstub");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$_g = 0;
			$_g1 = $this->stubs;
			while($_g < $_g1->length) {
				$stub = $_g1[$_g];
				++$_g;
				if($stub->method === $method) {
					$stubPos = _hx_string_or_null($stub->pos->fileName) . ":" . _hx_string_rec($stub->pos->lineNumber, "");
					throw new HException(new hunit_exceptions_InvalidTestException("Cannot unstub method which was stubbed directly at " . _hx_string_or_null($stubPos), $pos));
					unset($stubPos);
				}
				unset($stub);
			}
		}
		if($this->unstubbedMethods->indexOf($method, null) < 0) {
			$this->unstubbedMethods->push($method);
			$this->unstubPositions->push($pos);
		}
		$GLOBALS['%s']->pop();
	}
	public function expect($expect) {
		$GLOBALS['%s']->push("hunit.mock.MockData::expect");
		$__hx__spos = $GLOBALS['%s']->length;
		$expect->fromCallId = $this->callCounter;
		$this->expectations->push($expect);
		$this->testCase->__hu_state->expectedCalls->add($expect);
		$GLOBALS['%s']->pop();
	}
	public function removeExpect($expect) {
		$GLOBALS['%s']->push("hunit.mock.MockData::removeExpect");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->expectations->remove($expect);
		$this->testCase->__hu_state->expectedCalls->remove($expect);
		$GLOBALS['%s']->pop();
	}
	public function methodInvoked($name, $args, $pos = null) {
		$GLOBALS['%s']->push("hunit.mock.MockData::methodInvoked");
		$__hx__spos = $GLOBALS['%s']->length;
		$isStub = $this->fullStub && $this->unstubbedMethods->indexOf($name, null) < 0;
		$stub = null;
		{
			$_g1 = 0;
			$_g = $this->stubs->length;
			while($_g1 < $_g) {
				$i = $_g1++;
				$stub = $this->stubs[$i];
				if($stub->method === $name) {
					$isStub = true;
					if($stub->match($name, $args)) {
						break;
					}
				}
				$stub = null;
				unset($i);
			}
		}
		$stack = haxe_CallStack::callStack();
		$stack->shift();
		$call = new hunit_call_Call($this->callCounter++, $this, $name, $args, $stack, $pos, $isStub, $stub);
		$this->callLog->push($call);
		{
			$tmp = $call->id;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function isMethodMocked($callId) {
		$GLOBALS['%s']->push("hunit.mock.MockData::isMethodMocked");
		$__hx__spos = $GLOBALS['%s']->length;
		$call = $this->callLog[$callId];
		{
			$tmp = $call->isStub;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function getMockedCallResult($callId) {
		$GLOBALS['%s']->push("hunit.mock.MockData::getMockedCallResult");
		$__hx__spos = $GLOBALS['%s']->length;
		$call = $this->callLog[$callId];
		if(!$call->isStub) {
			$cls = Type::getClassName($this->mockClass);
			throw new HException(new _Exception_HException("Trying to get mocked result while `" . _hx_string_or_null($cls) . "." . _hx_string_or_null($call->method) . "()` is not stubbed", _hx_anonymous(array("fileName" => "MockData.hx", "lineNumber" => 199, "className" => "hunit.mock.MockData", "methodName" => "getMockedCallResult"))));
		}
		if($call->stub === null) {
			$GLOBALS['%s']->pop();
			return null;
		}
		if(hunit_utils_ValueTools::hasValue($call->stub->implementation)) {
			$tmp = Reflect::callMethod(null, hunit_utils_ValueTools::getValue($call->stub->implementation), $call->arguments);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		if(hunit_utils_ValueTools::hasValue($call->stub->throws)) {
			throw new HException(hunit_utils_ValueTools::getValue($call->stub->throws));
		}
		if(hunit_utils_ValueTools::hasValue($call->stub->returns)) {
			$tmp = hunit_utils_ValueTools::getValue($call->stub->returns);
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$GLOBALS['%s']->pop();
			return null;
		}
		$GLOBALS['%s']->pop();
	}
	public function addCallResult($callId, $result) {
		$GLOBALS['%s']->push("hunit.mock.MockData::addCallResult");
		$__hx__spos = $GLOBALS['%s']->length;
		_hx_array_get($this->callLog, $callId)->result = hunit_utils_Value::Thing($result);
		$GLOBALS['%s']->pop();
	}
	public function addCallException($callId, $exception) {
		$GLOBALS['%s']->push("hunit.mock.MockData::addCallException");
		$__hx__spos = $GLOBALS['%s']->length;
		_hx_array_get($this->callLog, $callId)->set_exceptionValue(hunit_utils_Value::Thing($exception));
		$this->testCase->__hu_state->cacheCallException($this->callLog[$callId]);
		$GLOBALS['%s']->pop();
	}
	public function validateExpectation($expect) {
		$GLOBALS['%s']->push("hunit.mock.MockData::validateExpectation");
		$__hx__spos = $GLOBALS['%s']->length;
		$failed = false;
		$reason = "";
		$call = null;
		$count = 0;
		{
			$_g1 = 0;
			$_g = $this->callLog->length;
			while($_g1 < $_g) {
				$i = $_g1++;
				$call = $this->callLog[$i];
				if($call->id < $expect->fromCallId) {
					continue;
				}
				if($expect->match($call)) {
					$count++;
				}
				unset($i);
			}
		}
		$s = null;
		if($count === 1) {
			$s = "";
		} else {
			$s = "s";
		}
		{
			$_g2 = $expect->count;
			switch($_g2->index) {
			case 0:{
				if($count > 0) {
					$failed = true;
					$reason = ", actually called " . _hx_string_rec($count, "") . " time" . _hx_string_or_null($s) . ".";
				}
			}break;
			case 1:{}break;
			case 2:{
				if($count !== 1) {
					$failed = true;
					$reason = ", actually called " . _hx_string_rec($count, "") . " time" . _hx_string_or_null($s) . ".";
				}
			}break;
			case 3:{
				$amount = _hx_deref($_g2)->params[0];
				if($count < $amount) {
					$failed = true;
					$reason = ", actually called " . _hx_string_rec($count, "") . " time" . _hx_string_or_null($s) . ".";
				}
			}break;
			case 4:{
				$amount1 = _hx_deref($_g2)->params[0];
				if($count !== $amount1) {
					$failed = true;
					$reason = ", actually called " . _hx_string_rec($count, "") . " time" . _hx_string_or_null($s) . ".";
				}
			}break;
			}
		}
		if($failed) {
			throw new HException(new hunit_exceptions_UnmetExpectationException($expect, $reason, $expect->pos));
		}
		$GLOBALS['%s']->pop();
	}
	public function validateStrictMode($callId) {
		$GLOBALS['%s']->push("hunit.mock.MockData::validateStrictMode");
		$__hx__spos = $GLOBALS['%s']->length;
		if(!$this->strictMode) {
			$GLOBALS['%s']->pop();
			return;
		}
		$call = $this->callLog[$callId];
		if($call->stub !== null) {
			$GLOBALS['%s']->pop();
			return;
		}
		{
			$_g1 = 0;
			$_g = $this->expectations->length;
			while($_g1 < $_g) {
				$i = $_g1++;
				if(_hx_array_get($this->expectations, $i)->sameObjectMethod($call)) {
					$GLOBALS['%s']->pop();
					return;
				}
				unset($i);
			}
		}
		$msg = "" . Std::string($call) . " is not expected nor stubbed.";
		$this->throwUnexpectedCallException($call, $msg, null);
		$GLOBALS['%s']->pop();
	}
	public function validateCall($callId) {
		$GLOBALS['%s']->push("hunit.mock.MockData::validateCall");
		$__hx__spos = $GLOBALS['%s']->length;
		$isExpected = false;
		$satisfies = false;
		$call = $this->callLog[$callId];
		$expect = null;
		{
			$_g1 = 0;
			$_g = $this->expectations->length;
			while($_g1 < $_g) {
				$i = $_g1++;
				$expect = $this->expectations[$i];
				if($expect->sameObjectMethod($call)) {
					$isExpected = true;
					if($expect->match($call)) {
						$expect->timesMatched++;
						$satisfies = true;
						if($expect->tooManyCalls()) {
							$this->throwUnexpectedCallException($call, null, $expect);
						}
					}
				}
				unset($i);
			}
		}
		if($isExpected && !$satisfies) {
			$this->throwUnexpectedCallException($call, null, null);
		}
		$GLOBALS['%s']->pop();
	}
	public function throwUnexpectedCallException($call, $msg = null, $expect = null) {
		$GLOBALS['%s']->push("hunit.mock.MockData::throwUnexpectedCallException");
		$__hx__spos = $GLOBALS['%s']->length;
		$e = new hunit_exceptions_UnexpectedCallException($call, $expect, $msg, $call->pos);
		$this->testCase->__hu_state->pendingFail($e);
		$e->truncateStack(_hx_anonymous(array("fileName" => "MockData.hx", "lineNumber" => 360, "className" => "hunit.mock.MockData", "methodName" => "throwUnexpectedCallException")), 1);
		throw new HException($e);
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
	function __toString() { return 'hunit.mock.MockData'; }
}
