<?php

class hunit_match_MatchFailDescription {
	public function __construct($expected = null, $actual = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.match.MatchFailDescription::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->expected = $expected;
		$this->actual = $actual;
		$GLOBALS['%s']->pop();
	}}
	public $expected;
	public $actual;
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
	function __toString() { return 'hunit.match.MatchFailDescription'; }
}
