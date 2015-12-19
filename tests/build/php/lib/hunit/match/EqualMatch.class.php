<?php

class hunit_match_EqualMatch extends hunit_match_Match {
	public function __construct($value, $previous = null, $chainLogic = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.match.EqualMatch::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct($previous,$chainLogic);
		$this->value = $value;
		$GLOBALS['%s']->pop();
	}}
	public $value;
	public function checkMatch($value) {
		$GLOBALS['%s']->push("hunit.match.EqualMatch::checkMatch");
		$__hx__spos = $GLOBALS['%s']->length;
		try {
			{
				$_g = Type::typeof($this->value);
				switch($_g->index) {
				case 5:{
					$tmp = Reflect::compareMethods($this->value, $value);
					$GLOBALS['%s']->pop();
					return $tmp;
				}break;
				case 7:{
					$tmp = Type::enumEq($this->value, $value);
					$GLOBALS['%s']->pop();
					return $tmp;
				}break;
				default:{
					$tmp = _hx_equal($this->value, $value);
					$GLOBALS['%s']->pop();
					return $tmp;
				}break;
				}
			}
		}catch(Exception $__hx__e) {
			$_ex_ = ($__hx__e instanceof HException) ? $__hx__e->e : $__hx__e;
			$e = $_ex_;
			{
				$GLOBALS['%e'] = (new _hx_array(array()));
				while($GLOBALS['%s']->length >= $__hx__spos) {
					$GLOBALS['%e']->unshift($GLOBALS['%s']->pop());
				}
				$GLOBALS['%s']->push($GLOBALS['%e'][0]);
				{
					$GLOBALS['%s']->pop();
					return false;
				}
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function shortCode() {
		$GLOBALS['%s']->push("hunit.match.EqualMatch::shortCode");
		$__hx__spos = $GLOBALS['%s']->length;
		$code = hunit_Utils::shortenString(hunit_Utils::safeToString($this->value));
		if(hunit_Utils::hasToString($this->value)) {
			$tmp = "=\"" . _hx_string_or_null($code) . "\"";
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = "=" . _hx_string_or_null($code);
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
	function __toString() { return 'hunit.match.EqualMatch'; }
}
