<?php

class hunit_match_ObjectCache {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.match.ObjectCache::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->keys = (new _hx_array(array()));
		$this->values = (new _hx_array(array()));
		$GLOBALS['%s']->pop();
	}}
	public $keys;
	public $values;
	public function get($key) {
		$GLOBALS['%s']->push("hunit.match.ObjectCache::get");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->keys->indexOf($key, null) < 0) {
			$GLOBALS['%s']->pop();
			return null;
		} else {
			$tmp = $this->values[$this->keys->indexOf($key, null)];
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set($key, $value) {
		$GLOBALS['%s']->push("hunit.match.ObjectCache::set");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->keys->indexOf($key, null) >= 0) {
			$this->values[$this->keys->indexOf($key, null)] = $value;
		} else {
			$this->keys->push($key);
			$this->values->push($value);
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
	function __toString() { return 'hunit.match.ObjectCache'; }
}
