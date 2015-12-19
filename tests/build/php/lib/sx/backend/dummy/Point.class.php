<?php

class sx_backend_dummy_Point {
	public function __construct($x = null, $y = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.backend.dummy.Point::new");
		$__hx__spos = $GLOBALS['%s']->length;
		if($y === null) {
			$y = 0;
		}
		if($x === null) {
			$x = 0;
		}
		$this->x = $x;
		$this->y = $y;
		$GLOBALS['%s']->pop();
	}}
	public $x;
	public $y;
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
	function __toString() { return 'sx.backend.dummy.Point'; }
}
