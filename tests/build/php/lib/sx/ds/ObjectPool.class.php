<?php

class sx_ds_ObjectPool {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.ds.ObjectPool::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->length = 0;
		$this->__pool = (new _hx_array(array()));
		$GLOBALS['%s']->pop();
	}}
	public $length;
	public $__pool;
	public function push($obj) {
		$GLOBALS['%s']->push("sx.ds.ObjectPool::push");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__pool[$this->length] = $obj;
		$this->length++;
		$GLOBALS['%s']->pop();
	}
	public function pop() {
		$GLOBALS['%s']->push("sx.ds.ObjectPool::pop");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->length > 0) {
			$this->length--;
			{
				$tmp = $this->__pool[$this->length];
				$GLOBALS['%s']->pop();
				return $tmp;
			}
		} else {
			$GLOBALS['%s']->pop();
			return null;
		}
		$GLOBALS['%s']->pop();
	}
	public function clear() {
		$GLOBALS['%s']->push("sx.ds.ObjectPool::clear");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$_g1 = 0;
			$_g = $this->length;
			while($_g1 < $_g) {
				$i = $_g1++;
				$this->__pool[$i] = null;
				unset($i);
			}
		}
		$this->length = 0;
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
	function __toString() { return 'sx.ds.ObjectPool'; }
}
