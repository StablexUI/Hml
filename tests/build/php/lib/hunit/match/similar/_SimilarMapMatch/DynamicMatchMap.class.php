<?php

class hunit_match_similar__SimilarMapMatch_DynamicMatchMap {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.match.similar._SimilarMapMatch.DynamicMatchMap::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->keyList = (new _hx_array(array()));
		$this->valueList = (new _hx_array(array()));
		$GLOBALS['%s']->pop();
	}}
	public $keyList;
	public $valueList;
	public function keys() {
		$GLOBALS['%s']->push("hunit.match.similar._SimilarMapMatch.DynamicMatchMap::keys");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->keyList;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function exists($key) {
		$GLOBALS['%s']->push("hunit.match.similar._SimilarMapMatch.DynamicMatchMap::exists");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->keyList->indexOf($key, null) >= 0;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get($key) {
		$GLOBALS['%s']->push("hunit.match.similar._SimilarMapMatch.DynamicMatchMap::get");
		$__hx__spos = $GLOBALS['%s']->length;
		if(!$this->exists($key)) {
			$GLOBALS['%s']->pop();
			return null;
		} else {
			$tmp = $this->valueList[$this->keyList->indexOf($key, null)];
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set($key, $value) {
		$GLOBALS['%s']->push("hunit.match.similar._SimilarMapMatch.DynamicMatchMap::set");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->keyList->indexOf($key, null) >= 0) {
			$this->valueList[$this->keyList->indexOf($key, null)] = $value;
		} else {
			$this->keyList->push($key);
			$this->valueList->push($value);
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
	function __toString() { return 'hunit.match.similar._SimilarMapMatch.DynamicMatchMap'; }
}
