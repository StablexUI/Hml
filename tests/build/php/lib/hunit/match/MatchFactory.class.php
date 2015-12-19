<?php

class hunit_match_MatchFactory {
	public function __construct() { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.match.MatchFactory::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}}
	public function any() {
		$GLOBALS['%s']->push("hunit.match.MatchFactory::any");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new hunit_match_AnyMatch(null, null);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function type($type) {
		$GLOBALS['%s']->push("hunit.match.MatchFactory::type");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new hunit_match_TypeMatch($type, null, null);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function regexp($pattern) {
		$GLOBALS['%s']->push("hunit.match.MatchFactory::regexp");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new hunit_match_ERegMatch($pattern, null, null);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function similar($pattern) {
		$GLOBALS['%s']->push("hunit.match.MatchFactory::similar");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new hunit_match_SimilarMatch($pattern, null, null, null, null);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function equal($value) {
		$GLOBALS['%s']->push("hunit.match.MatchFactory::equal");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new hunit_match_EqualMatch($value, null, null);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function notEqual($value) {
		$GLOBALS['%s']->push("hunit.match.MatchFactory::notEqual");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new hunit_match_NotEqualMatch($value, null, null);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function callback($verify) {
		$GLOBALS['%s']->push("hunit.match.MatchFactory::callback");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new hunit_match_CallbackMatch($verify, null, null);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'hunit.match.MatchFactory'; }
}
