<?php

class hunit_match_TypeMatch extends hunit_match_Match {
	public function __construct($type, $previous = null, $chainLogic = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.match.TypeMatch::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct($previous,$chainLogic);
		$this->type = $type;
		$GLOBALS['%s']->pop();
	}}
	public $type;
	public function checkMatch($value) {
		$GLOBALS['%s']->push("hunit.match.TypeMatch::checkMatch");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $value !== null && Std::is($value, $this->type);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function shortCode() {
		$GLOBALS['%s']->push("hunit.match.TypeMatch::shortCode");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = "Class<" . _hx_string_or_null(Type::getClassName($this->type)) . ">";
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
	static $__properties__ = array("get_or" => "get_or","get_and" => "get_and");
	function __toString() { return 'hunit.match.TypeMatch'; }
}
