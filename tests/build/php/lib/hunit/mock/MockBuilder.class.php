<?php

class hunit_mock_MockBuilder {
	public function __construct($test, $mockClass, $targetClass) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.mock.MockBuilder::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->strictMode = false;
		$this->fullStub = false;
		$this->test = $test;
		$this->mockClass = $mockClass;
		$this->targetClass = $targetClass;
		$GLOBALS['%s']->pop();
	}}
	public $test;
	public $mockClass;
	public $targetClass;
	public $fullStub;
	public $strictMode;
	public function get() {
		$GLOBALS['%s']->push("hunit.mock.MockBuilder::get");
		$__hx__spos = $GLOBALS['%s']->length;
		$instance = Type::createEmptyInstance($this->mockClass);
		$this->assignMockData($instance);
		{
			$GLOBALS['%s']->pop();
			return $instance;
		}
		$GLOBALS['%s']->pop();
	}
	public function assignMockData($instance) {
		$GLOBALS['%s']->push("hunit.mock.MockBuilder::assignMockData");
		$__hx__spos = $GLOBALS['%s']->length;
		$mockData = $this->createMockData();
		Reflect::setProperty($instance, "__hu_mock__", $mockData);
		$GLOBALS['%s']->pop();
	}
	public function createMockData() {
		$GLOBALS['%s']->push("hunit.mock.MockBuilder::createMockData");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new hunit_mock_MockData($this->test, $this->targetClass, $this->fullStub, $this->strictMode);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_strictMode($value) {
		$GLOBALS['%s']->push("hunit.mock.MockBuilder::set_strictMode");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->fullStub) {
			throw new HException(new hunit_exceptions_InvalidTestException("Cannot use `stubAll()` and `strict()` together.", _hx_anonymous(array("fileName" => "MockBuilder.hx", "lineNumber" => 77, "className" => "hunit.mock.MockBuilder", "methodName" => "set_strictMode"))));
		}
		{
			$tmp = $this->strictMode = $value;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_fullStub($value) {
		$GLOBALS['%s']->push("hunit.mock.MockBuilder::set_fullStub");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->strictMode) {
			throw new HException(new hunit_exceptions_InvalidTestException("Cannot use `stubAll()` and `strict()` together.", _hx_anonymous(array("fileName" => "MockBuilder.hx", "lineNumber" => 91, "className" => "hunit.mock.MockBuilder", "methodName" => "set_fullStub"))));
		}
		{
			$tmp = $this->fullStub = $value;
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
	static $__properties__ = array("set_strictMode" => "set_strictMode","set_fullStub" => "set_fullStub");
	function __toString() { return 'hunit.mock.MockBuilder'; }
}
