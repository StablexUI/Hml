<?php

class hunit_call_Expect implements hunit_call_IExpect{
	public function __construct($mockData, $method, $arguments, $returns, $throws, $count, $pos = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.call.Expect::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->fromCallId = 0;
		$this->timesMatched = 0;
		$this->mockData = $mockData;
		$this->method = $method;
		$this->arguments = $arguments;
		$this->returns = $returns;
		$this->throws = $throws;
		$this->count = $count;
		$this->pos = $pos;
		$GLOBALS['%s']->pop();
	}}
	public $mockData;
	public $method;
	public $arguments;
	public $returns;
	public $throws;
	public $count;
	public $pos;
	public $timesMatched;
	public $fromCallId;
	public function sameObjectMethod($call) {
		$GLOBALS['%s']->push("hunit.call.Expect::sameObjectMethod");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = (is_object($_t = $this->mockData) && !($_t instanceof Enum) ? $_t === $call->mockData : $_t == $call->mockData) && $this->method === $call->method;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function match($call) {
		$GLOBALS['%s']->push("hunit.call.Expect::match");
		$__hx__spos = $GLOBALS['%s']->length;
		if((is_object($_t = $this->mockData) && !($_t instanceof Enum) ? $_t !== $call->mockData : $_t != $call->mockData)) {
			$GLOBALS['%s']->pop();
			return false;
		}
		if($this->method !== $call->method) {
			$GLOBALS['%s']->pop();
			return false;
		}
		if($this->arguments->length !== $call->arguments->length) {
			throw new HException("Arguments count does not match");
		}
		{
			$_g1 = 0;
			$_g = $this->arguments->length;
			while($_g1 < $_g) {
				$i = $_g1++;
				if(!_hx_array_get($this->arguments, $i)->match($call->arguments[$i])) {
					$GLOBALS['%s']->pop();
					return false;
				}
				unset($i);
			}
		}
		if(hunit_utils_ValueTools::hasValue($this->returns)) {
			if(!hunit_utils_ValueTools::hasValue($call->result)) {
				$GLOBALS['%s']->pop();
				return false;
			}
			$expected = hunit_utils_ValueTools::getValue($this->returns);
			$actual = hunit_utils_ValueTools::getValue($call->result);
			if(!$expected->match($actual)) {
				$GLOBALS['%s']->pop();
				return false;
			}
		}
		if(hunit_utils_ValueTools::hasValue($this->throws)) {
			if(!hunit_utils_ValueTools::hasValue($call->exceptionValue)) {
				$GLOBALS['%s']->pop();
				return false;
			}
			$e = hunit_utils_ValueTools::getValue($call->exceptionValue);
			if(!hunit_utils_ValueTools::getValue($this->throws)->match($e)) {
				$GLOBALS['%s']->pop();
				return false;
			}
		}
		{
			$GLOBALS['%s']->pop();
			return true;
		}
		$GLOBALS['%s']->pop();
	}
	public function validate() {
		$GLOBALS['%s']->push("hunit.call.Expect::validate");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->mockData->validateExpectation($this);
		$GLOBALS['%s']->pop();
	}
	public function tooManyCalls() {
		$GLOBALS['%s']->push("hunit.call.Expect::tooManyCalls");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$_g = $this->count;
			switch($_g->index) {
			case 0:{
				$tmp = $this->timesMatched > 0;
				$GLOBALS['%s']->pop();
				return $tmp;
			}break;
			case 1:{
				$GLOBALS['%s']->pop();
				return false;
			}break;
			case 2:{
				$tmp = $this->timesMatched > 1;
				$GLOBALS['%s']->pop();
				return $tmp;
			}break;
			case 3:{
				$amount = _hx_deref($_g)->params[0];
				{
					$GLOBALS['%s']->pop();
					return false;
				}
			}break;
			case 4:{
				$amount1 = _hx_deref($_g)->params[0];
				{
					$tmp = $this->timesMatched > $amount1;
					$GLOBALS['%s']->pop();
					return $tmp;
				}
			}break;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function toString() {
		$GLOBALS['%s']->push("hunit.call.Expect::toString");
		$__hx__spos = $GLOBALS['%s']->length;
		$cls = $this->mockData->mockClassName();
		$args = $this->arguments->map(array(new _hx_lambda(array(&$cls), "hunit_call_Expect_0"), 'execute'))->join(", ");
		$results = (new _hx_array(array()));
		if(hunit_utils_ValueTools::hasValue($this->returns)) {
			$results->push("to return " . Std::string(hunit_utils_ValueTools::getValue($this->returns)));
		}
		if(hunit_utils_ValueTools::hasValue($this->throws)) {
			$results->push("to throw " . Std::string(hunit_utils_ValueTools::getValue($this->throws)));
		}
		{
			$_g = $this->count;
			switch($_g->index) {
			case 1:{
				$results->push("to be called zero or more times");
			}break;
			case 0:{
				$results->push("to be never called");
			}break;
			case 2:{
				$results->push("to be called once");
			}break;
			case 3:{
				$amount = _hx_deref($_g)->params[0];
				$results->push("to be called at least " . _hx_string_rec($amount, "") . " time" . _hx_string_or_null(((($amount === 1) ? "" : "s"))));
			}break;
			case 4:{
				$amount1 = _hx_deref($_g)->params[0];
				$results->push("to be called exactly " . _hx_string_rec($amount1, "") . " time" . _hx_string_or_null(((($amount1 === 1) ? "" : "s"))));
			}break;
			}
		}
		$last = $results->pop();
		$toDo = null;
		if($results->length === 0) {
			$toDo = $last;
		} else {
			$toDo = _hx_string_or_null($results->join(", ")) . _hx_string_or_null((" and " . _hx_string_or_null($last)));
		}
		$msg = "" . _hx_string_or_null($cls) . "." . _hx_string_or_null($this->method) . "(" . _hx_string_or_null($args) . ") is expected " . _hx_string_or_null($toDo);
		{
			$GLOBALS['%s']->pop();
			return $msg;
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
	function __toString() { return $this->toString(); }
}
function hunit_call_Expect_0(&$cls, $a) {
	{
		$GLOBALS['%s']->push("hunit.call.Expect::toString@139");
		$__hx__spos2 = $GLOBALS['%s']->length;
		{
			$tmp = "" . _hx_string_or_null($a->toString());
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
}
