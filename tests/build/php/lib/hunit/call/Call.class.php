<?php

class hunit_call_Call {
	public function __construct($id, $mockData, $method, $arguments, $stack, $pos, $isStub, $stub = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.call.Call::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->isStub = false;
		$this->id = $id;
		$this->mockData = $mockData;
		$this->method = $method;
		$this->arguments = $arguments;
		$this->isStub = $isStub;
		$this->stub = $stub;
		$this->pos = $pos;
		$this->stack = $stack;
		$this->result = hunit_utils_Value::$Nothing;
		$this->set_exceptionValue(hunit_utils_Value::$Nothing);
		$GLOBALS['%s']->pop();
	}}
	public $id;
	public $mockData;
	public $method;
	public $arguments;
	public $result;
	public $stack;
	public $exceptionValue;
	public $exceptionStack;
	public $isStub;
	public $stub;
	public $pos;
	public function toString() {
		$GLOBALS['%s']->push("hunit.call.Call::toString");
		$__hx__spos = $GLOBALS['%s']->length;
		$str = "";
		if(hunit_utils_ValueTools::hasValue($this->result)) {
			$value = hunit_utils_ValueTools::getValue($this->result);
			$str = "returned " . _hx_string_or_null(hunit_Utils::shortenQuote($value)) . "";
		}
		if(hunit_utils_ValueTools::hasValue($this->exceptionValue)) {
			$e = hunit_utils_ValueTools::getValue($this->exceptionValue);
			$exceptionMsg = null;
			if(Std::is($e, _hx_qtype("_Exception.HException"))) {
				$exceptionMsg = hunit_Utils::shortenString(_hx_deref(($e))->message);
			} else {
				$exceptionMsg = hunit_Utils::shortenQuote($e);
			}
			$str = "threw " . _hx_string_or_null($exceptionMsg);
		}
		$className = $this->mockData->mockClassName();
		$args = $this->arguments->map(array(new _hx_lambda(array(&$className, &$str), "hunit_call_Call_0"), 'execute'))->join(", ");
		$msg = "" . _hx_string_or_null($className) . "." . _hx_string_or_null($this->method) . "(" . _hx_string_or_null($args) . ") " . _hx_string_or_null($str);
		{
			$GLOBALS['%s']->pop();
			return $msg;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_exceptionValue($value) {
		$GLOBALS['%s']->push("hunit.call.Call::set_exceptionValue");
		$__hx__spos = $GLOBALS['%s']->length;
		if(hunit_utils_ValueTools::hasValue($value)) {
			$this->exceptionStack = haxe_CallStack::exceptionStack()->concat($this->stack);
		}
		{
			$tmp = $this->exceptionValue = $value;
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
	static $__properties__ = array("set_exceptionValue" => "set_exceptionValue");
	function __toString() { return $this->toString(); }
}
function hunit_call_Call_0(&$className, &$str, $a) {
	{
		$GLOBALS['%s']->push("hunit.call.Call::toString@85");
		$__hx__spos2 = $GLOBALS['%s']->length;
		{
			$tmp = hunit_Utils::shortenQuote($a);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
}
