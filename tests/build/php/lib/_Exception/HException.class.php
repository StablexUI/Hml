<?php

class _Exception_HException {
	public function __construct($message, $pos = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("_Exception.HException::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->message = $message;
		$this->pos = $pos;
		$this->stack = $this->buildStack(haxe_CallStack::callStack());
		$GLOBALS['%s']->pop();
	}}
	public $message;
	public $pos;
	public $stack;
	public function truncateStack($pos = null, $count = null) {
		$GLOBALS['%s']->push("_Exception.HException::truncateStack");
		$__hx__spos = $GLOBALS['%s']->length;
		if($count === null) {
			$count = 0;
		}
		if($pos !== null) {
			$this->stack = exception_StackTools::phpTruncate($this->stack, $pos, false);
		}
		if($count > 0) {
			$this->stack = $this->stack->slice($count, null);
		}
		$GLOBALS['%s']->pop();
	}
	public function stringStack() {
		$GLOBALS['%s']->push("_Exception.HException::stringStack");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = haxe_CallStack::toString($this->stack);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function toString() {
		$GLOBALS['%s']->push("_Exception.HException::toString");
		$__hx__spos = $GLOBALS['%s']->length;
		$className = Type::getClassName(Type::getClass($this));
		$position = null;
		if(_hx_field($this, "pos") === null) {
			$position = "unknown position";
		} else {
			$position = _hx_string_or_null($this->pos->fileName) . ":" . _hx_string_rec($this->pos->lineNumber, "");
		}
		$msg = "" . _hx_string_or_null($className) . ": " . _hx_string_or_null($this->message) . "\x0A\x09Created at " . _hx_string_or_null($position);
		{
			$s = haxe_CallStack::toString($this->stack);
			$msg .= _hx_string_or_null(str_replace("\x0A", "\x0A\x09", $s));
		}
		{
			$GLOBALS['%s']->pop();
			return $msg;
		}
		$GLOBALS['%s']->pop();
	}
	public function buildStack($stack) {
		$GLOBALS['%s']->push("_Exception.HException::buildStack");
		$__hx__spos = $GLOBALS['%s']->length;
		$stack1 = exception_StackTools::phpTruncate($stack, $this->pos, false);
		{
			$tmp = _Exception_HException::processCallStackOnCreation($stack1);
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
	static function wrap($e, $pos = null) {
		$GLOBALS['%s']->push("_Exception.HException::wrap");
		$__hx__spos = $GLOBALS['%s']->length;
		if(Std::is($e, _hx_qtype("_Exception.HException"))) {
			$GLOBALS['%s']->pop();
			return $e;
		}
		$exceptionStack = haxe_CallStack::exceptionStack();
		$exception = new _Exception_HException(Std::string($e), $pos);
		if($exceptionStack->length > 0) {
			$exception->stack = $exceptionStack;
		}
		{
			$GLOBALS['%s']->pop();
			return $exception;
		}
		$GLOBALS['%s']->pop();
	}
	static function processCallStackOnCreation($stack) { return call_user_func_array(self::$processCallStackOnCreation, array($stack)); }
	public static $processCallStackOnCreation = null;
	function __toString() { return $this->toString(); }
}
_Exception_HException::$processCallStackOnCreation = array(new _hx_lambda(array(), "_Exception_HException_0"), 'execute');
function _Exception_HException_0($stack) {
	{
		$GLOBALS['%s']->push("_Exception.HException::processCallStackOnCreation@58");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$GLOBALS['%s']->pop();
			return $stack;
		}
		$GLOBALS['%s']->pop();
	}
}
