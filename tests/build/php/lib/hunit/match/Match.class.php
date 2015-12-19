<?php

class hunit_match_Match {
	public function __construct($previous = null, $chainLogic = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.match.Match::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->previous = $previous;
		$this->chainLogic = $chainLogic;
		$GLOBALS['%s']->pop();
	}}
	public $previous;
	public $chainLogic;
	public $_and;
	public $_or;
	public function match($value) {
		$GLOBALS['%s']->push("hunit.match.Match::match");
		$__hx__spos = $GLOBALS['%s']->length;
		$result = $this->checkMatch($value);
		$current = $this;
		while($current->chainLogic !== null) {
			{
				$_g = $current->chainLogic;
				if($_g !== null) {
					switch($_g->index) {
					case 0:{
						$result = $result && $current->previous->checkMatch($value);
					}break;
					case 1:{
						$result = $result || $current->previous->checkMatch($value);
					}break;
					}
				}
				unset($_g);
			}
			$current = $current->previous;
		}
		{
			$GLOBALS['%s']->pop();
			return $result;
		}
		$GLOBALS['%s']->pop();
	}
	public function isChained() {
		$GLOBALS['%s']->push("hunit.match.Match::isChained");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->previous !== null;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function toString() {
		$GLOBALS['%s']->push("hunit.match.Match::toString");
		$__hx__spos = $GLOBALS['%s']->length;
		$code = $this->shortCode();
		if($this->previous === null) {
			$tmp = "[" . _hx_string_or_null($code) . "]";
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$result = "" . _hx_string_or_null($code);
			$current = $this;
			while($current->chainLogic !== null) {
				{
					$_g = $current->chainLogic;
					if($_g !== null) {
						switch($_g->index) {
						case 0:{
							$result = _hx_string_or_null($current->previous->shortCode()) . _hx_string_or_null((" && " . _hx_string_or_null($result)));
						}break;
						case 1:{
							$result = _hx_string_or_null($current->previous->shortCode()) . _hx_string_or_null((" || " . _hx_string_or_null($result)));
						}break;
						}
					}
					unset($_g);
				}
				$current = $current->previous;
			}
			{
				$tmp = "[" . _hx_string_or_null($result) . "]";
				$GLOBALS['%s']->pop();
				return $tmp;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function shortCode() {
		$GLOBALS['%s']->push("hunit.match.Match::shortCode");
		$__hx__spos = $GLOBALS['%s']->length;
		throw new HException("To be overriden");
		$GLOBALS['%s']->pop();
	}
	public function checkMatch($value) {
		$GLOBALS['%s']->push("hunit.match.Match::checkMatch");
		$__hx__spos = $GLOBALS['%s']->length;
		throw new HException("To be overriden");
		$GLOBALS['%s']->pop();
	}
	public function get_and() {
		$GLOBALS['%s']->push("hunit.match.Match::get_and");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->_and === null) {
			$this->_and = new hunit_match_GenericMatchFactory($this, hunit_match_MatchChainLogic::$hAnd);
		}
		{
			$tmp = $this->_and;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_or() {
		$GLOBALS['%s']->push("hunit.match.Match::get_or");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->_or === null) {
			$this->_or = new hunit_match_GenericMatchFactory($this, hunit_match_MatchChainLogic::$hOr);
		}
		{
			$tmp = $this->_or;
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
	function __toString() { return $this->toString(); }
}
