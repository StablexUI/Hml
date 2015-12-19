<?php

class HList implements IteratorAggregate{
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("List::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->length = 0;
		$GLOBALS['%s']->pop();
	}}
	public $h;
	public $q;
	public $length;
	public function add($item) {
		$GLOBALS['%s']->push("List::add");
		$__hx__spos = $GLOBALS['%s']->length;
		$x = array($item, null);
		if($this->h === null) {
			$this->h =& $x;
		} else {
			$this->q[1] =& $x;
		}
		$this->q =& $x;
		$this->length++;
		$GLOBALS['%s']->pop();
	}
	public function last() {
		$GLOBALS['%s']->push("List::last");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->q === null) {
			$GLOBALS['%s']->pop();
			return null;
		} else {
			$tmp = $this->q[0];
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function remove($v) {
		$GLOBALS['%s']->push("List::remove");
		$__hx__spos = $GLOBALS['%s']->length;
		$prev = null;
		$l = & $this->h;
		while($l !== null) {
			if($l[0] === $v) {
				if($prev === null) {
					$this->h =& $l[1];
				} else {
					$prev[1] =& $l[1];
				}
				if(($this->q === $l)) {
					$this->q =& $prev;
				}
				$this->length--;
				{
					$GLOBALS['%s']->pop();
					return true;
				}
			}
			$prev =& $l;
			$l =& $l[1];
		}
		{
			$GLOBALS['%s']->pop();
			return false;
		}
		$GLOBALS['%s']->pop();
	}
	public function iterator() {
		$GLOBALS['%s']->push("List::iterator");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new _hx_list_iterator($this);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function getIterator() {
		$GLOBALS['%s']->push("List::getIterator");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->iterator();
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
	function __toString() { return 'List'; }
}
