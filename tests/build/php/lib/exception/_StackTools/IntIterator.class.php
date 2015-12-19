<?php

class exception__StackTools_IntIterator {
	public function __construct($from, $till) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("exception._StackTools.IntIterator::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->till = 0;
		$this->current = 0;
		$this->current = $from;
		$this->till = $till;
		$GLOBALS['%s']->pop();
	}}
	public $current;
	public $till;
	public function hasNext() {
		$GLOBALS['%s']->push("exception._StackTools.IntIterator::hasNext");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->current !== $this->till;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function next() {
		$GLOBALS['%s']->push("exception._StackTools.IntIterator::next");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->current < $this->till) {
			$tmp = $this->current++;
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->current--;
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
	function __toString() { return 'exception._StackTools.IntIterator'; }
}
