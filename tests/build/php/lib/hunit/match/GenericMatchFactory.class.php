<?php

class hunit_match_GenericMatchFactory {
	public function __construct($previous, $chainLogic) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.match.GenericMatchFactory::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->previous = $previous;
		$this->chainLogic = $chainLogic;
		$GLOBALS['%s']->pop();
	}}
	public $previous;
	public $chainLogic;
	public function any() {
		$GLOBALS['%s']->push("hunit.match.GenericMatchFactory::any");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new hunit_match_AnyMatch($this->previous, $this->chainLogic);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function type($type) {
		$GLOBALS['%s']->push("hunit.match.GenericMatchFactory::type");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new hunit_match_TypeMatch($type, $this->previous, $this->chainLogic);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function regexp($pattern) {
		$GLOBALS['%s']->push("hunit.match.GenericMatchFactory::regexp");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new hunit_match_ERegMatch($pattern, null, null);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function similar($pattern) {
		$GLOBALS['%s']->push("hunit.match.GenericMatchFactory::similar");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new hunit_match_SimilarMatch($pattern, null, null, null, null);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function equal($value) {
		$GLOBALS['%s']->push("hunit.match.GenericMatchFactory::equal");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new hunit_match_EqualMatch($value, $this->previous, $this->chainLogic);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function notEqual($value) {
		$GLOBALS['%s']->push("hunit.match.GenericMatchFactory::notEqual");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new hunit_match_NotEqualMatch($value, $this->previous, $this->chainLogic);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function callback($verify) {
		$GLOBALS['%s']->push("hunit.match.GenericMatchFactory::callback");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new hunit_match_CallbackMatch($verify, null, null);
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
	function __toString() { return 'hunit.match.GenericMatchFactory'; }
}
