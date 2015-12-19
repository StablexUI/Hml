<?php

class hunit_exceptions_UnexpectedException extends _Exception_HException {
	public function __construct($e, $exceptionStack, $pos = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.exceptions.UnexpectedException::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->originalExceptionStack = $exceptionStack;
		$this->original = $e;
		parent::__construct(Std::string($e),$pos);
		$GLOBALS['%s']->pop();
	}}
	public $original;
	public $originalExceptionStack;
	public function toString() {
		$GLOBALS['%s']->push("hunit.exceptions.UnexpectedException::toString");
		$__hx__spos = $GLOBALS['%s']->length;
		if(Std::is($this->original, _hx_qtype("_Exception.HException"))) {
			$className = Type::getClassName(Type::getClass($this));
			{
				$tmp = "" . _hx_string_or_null($className) . ": " . _hx_string_or_null(_hx_deref(($this->original))->toString());
				$GLOBALS['%s']->pop();
				return $tmp;
			}
		} else {
			$tmp = parent::toString();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function buildStack($stack) {
		$GLOBALS['%s']->push("hunit.exceptions.UnexpectedException::buildStack");
		$__hx__spos = $GLOBALS['%s']->length;
		$exceptionStack = $this->originalExceptionStack;
		if(Std::is($this->original, _hx_qtype("_Exception.HException"))) {
			$this->pos = _hx_deref(($this->original))->pos;
			$exceptionStack = _hx_deref(($this->original))->stack->copy();
		} else {
			if($exceptionStack->length === 0) {
				$exceptionStack = $stack;
			} else {
				{
					$_g = $exceptionStack[0];
					switch($_g->index) {
					case 2:{
						if(_hx_deref($_g)->params[0] === null) {
							$line = _hx_deref($_g)->params[2];
							$file = _hx_deref($_g)->params[1];
							{
								$this->pos->fileName = $file;
								$this->pos->lineNumber = $line;
							}
						} else {
							switch(_hx_deref($_g)->params[0]->index) {
							case 3:{
								$line1 = _hx_deref($_g)->params[2];
								$file1 = _hx_deref($_g)->params[1];
								$methodName = _hx_deref(_hx_deref($_g)->params[0])->params[1];
								$className = _hx_deref(_hx_deref($_g)->params[0])->params[0];
								{
									$this->pos->className = $className;
									$this->pos->methodName = $methodName;
									$this->pos->fileName = $file1;
									$this->pos->lineNumber = $line1;
								}
							}break;
							default:{}break;
							}
						}
					}break;
					case 3:{
						$methodName1 = _hx_deref($_g)->params[1];
						$className1 = _hx_deref($_g)->params[0];
						{
							$this->pos->methodName = $methodName1;
							$this->pos->className = $className1;
						}
					}break;
					default:{}break;
					}
				}
			}
		}
		{
			$tmp = parent::buildStack($exceptionStack);
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
	function __toString() { return $this->toString(); }
}
