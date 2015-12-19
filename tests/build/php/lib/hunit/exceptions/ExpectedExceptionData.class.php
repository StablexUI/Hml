<?php

class hunit_exceptions_ExpectedExceptionData {
	public function __construct($match, $pos = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.exceptions.ExpectedExceptionData::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->satisfied = false;
		$this->match = $match;
		$this->pos = $pos;
		$GLOBALS['%s']->pop();
	}}
	public $match;
	public $satisfied;
	public $pos;
	public function validate($e, $exceptionStack) {
		$GLOBALS['%s']->push("hunit.exceptions.ExpectedExceptionData::validate");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->satisfied = $this->match->match($e);
		if(!$this->satisfied) {
			throw new HException(new hunit_exceptions_UnexpectedException($e, $exceptionStack, _hx_anonymous(array("fileName" => "ExpectedExceptionData.hx", "lineNumber" => 45, "className" => "hunit.exceptions.ExpectedExceptionData", "methodName" => "validate"))));
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
	function __toString() { return 'hunit.exceptions.ExpectedExceptionData'; }
}
