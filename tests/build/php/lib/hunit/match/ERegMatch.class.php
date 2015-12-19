<?php

class hunit_match_ERegMatch extends hunit_match_Match {
	public function __construct($regexp, $previous = null, $chainLogic = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.match.ERegMatch::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct($previous,$chainLogic);
		$this->regexp = $regexp;
		$GLOBALS['%s']->pop();
	}}
	public $regexp;
	public function checkMatch($value) {
		$GLOBALS['%s']->push("hunit.match.ERegMatch::checkMatch");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->regexp->match(Std::string($value));
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function shortCode() {
		$GLOBALS['%s']->push("hunit.match.ERegMatch::shortCode");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->extractPattern();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function extractPattern() {
		$GLOBALS['%s']->push("hunit.match.ERegMatch::extractPattern");
		$__hx__spos = $GLOBALS['%s']->length;
		$pattern = "~/" . Std::string(Reflect::getProperty($this->regexp, "pattern")) . "/" . Std::string(Reflect::getProperty($this->regexp, "options"));
		{
			$GLOBALS['%s']->pop();
			return $pattern;
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
	static $__properties__ = array("get_or" => "get_or","get_and" => "get_and");
	function __toString() { return 'hunit.match.ERegMatch'; }
}
