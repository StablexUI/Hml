<?php

class sx_signals_Signal {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.signals.Signal::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__listenersInUse = false;
		$this->__listeners = (new _hx_array(array()));
		$GLOBALS['%s']->pop();
	}}
	public $__listeners;
	public $__listenersInUse;
	public function add($listener) {
		$GLOBALS['%s']->push("sx.signals.Signal::add");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__listenersInUse) {
			$this->__listeners = $this->__listeners->copy();
			$this->__listenersInUse = false;
		}
		$this->__listeners->push($listener);
		$GLOBALS['%s']->pop();
	}
	public function unique($listener) {
		$GLOBALS['%s']->push("sx.signals.Signal::unique");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__indexOf($listener) >= 0) {
			$GLOBALS['%s']->pop();
			return false;
		}
		if($this->__listenersInUse) {
			$this->__listeners = $this->__listeners->copy();
			$this->__listenersInUse = false;
		}
		$this->__listeners->push($listener);
		{
			$GLOBALS['%s']->pop();
			return true;
		}
		$GLOBALS['%s']->pop();
	}
	public function remove($listener) {
		$GLOBALS['%s']->push("sx.signals.Signal::remove");
		$__hx__spos = $GLOBALS['%s']->length;
		$index = $this->__indexOf($listener);
		if($index < 0) {
			$GLOBALS['%s']->pop();
			return false;
		}
		if($this->__listenersInUse) {
			$this->__listeners = $this->__listeners->copy();
			$this->__listenersInUse = false;
		}
		$this->__listeners->splice($index, 1);
		{
			$GLOBALS['%s']->pop();
			return true;
		}
		$GLOBALS['%s']->pop();
	}
	public function will($listener) {
		$GLOBALS['%s']->push("sx.signals.Signal::will");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__indexOf($listener) >= 0;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function __indexOf($listener) {
		$GLOBALS['%s']->push("sx.signals.Signal::__indexOf");
		$__hx__spos = $GLOBALS['%s']->length;
		$index = -1;
		{
			$_g1 = 0;
			$_g = $this->__listeners->length;
			while($_g1 < $_g) {
				$i = $_g1++;
				if(Reflect::compareMethods($this->__listeners[$i], $listener)) {
					$index = $i;
					break;
				}
				unset($i);
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $index;
		}
		$GLOBALS['%s']->pop();
	}
	public function __cloneListenersInUse() {
		$GLOBALS['%s']->push("sx.signals.Signal::__cloneListenersInUse");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__listenersInUse) {
			$this->__listeners = $this->__listeners->copy();
			$this->__listenersInUse = false;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_listenersCount() {
		$GLOBALS['%s']->push("sx.signals.Signal::get_listenersCount");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__listeners->length;
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
	static $__properties__ = array("get_listenersCount" => "get_listenersCount");
	function __toString() { return 'sx.signals.Signal'; }
}
