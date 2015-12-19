<?php

class hunit_call_Stub {
	public function __construct($mockData, $method, $arguments, $returns, $throws, $pos = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.call.Stub::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->mockData = $mockData;
		$this->method = $method;
		$this->arguments = $arguments;
		$this->returns = $returns;
		$this->throws = $throws;
		$this->pos = $pos;
		$GLOBALS['%s']->pop();
	}}
	public $mockData;
	public $method;
	public $arguments;
	public $returns;
	public $throws;
	public $implementation;
	public $pos;
	public function expect($count) {
		$GLOBALS['%s']->push("hunit.call.Stub::expect");
		$__hx__spos = $GLOBALS['%s']->length;
		$expect = new hunit_call_Expect($this->mockData, $this->method, $this->arguments, hunit_utils_Value::$Nothing, hunit_utils_Value::$Nothing, $count, $this->pos);
		$this->mockData->expect($expect);
		{
			$GLOBALS['%s']->pop();
			return $expect;
		}
		$GLOBALS['%s']->pop();
	}
	public function match($method, $arguments) {
		$GLOBALS['%s']->push("hunit.call.Stub::match");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->method !== $method) {
			$GLOBALS['%s']->pop();
			return false;
		}
		if($arguments->length !== $this->arguments->length) {
			throw new HException("Arguments count does not match");
		}
		{
			$_g1 = 0;
			$_g = $this->arguments->length;
			while($_g1 < $_g) {
				$i = $_g1++;
				if(!_hx_array_get($this->arguments, $i)->match($arguments[$i])) {
					$GLOBALS['%s']->pop();
					return false;
				}
				unset($i);
			}
		}
		{
			$GLOBALS['%s']->pop();
			return true;
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
	function __toString() { return 'hunit.call.Stub'; }
}
