<?php

class hunit__Match_Match_Impl_ {
	public function __construct(){}
	static function fromValue($value) {
		$GLOBALS['%s']->push("hunit._Match.Match_Impl_::fromValue");
		$__hx__spos = $GLOBALS['%s']->length;
		if($value === null) {
			$tmp = hunit__Match_Match_Impl_::_new(new hunit_match_AnyMatch(null, null));
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = hunit__Match_Match_Impl_::_new($value);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function _new($value) {
		$GLOBALS['%s']->push("hunit._Match.Match_Impl_::_new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this1 = null;
		if(Std::is($value, _hx_qtype("hunit.match.Match"))) {
			$this1 = $value;
		} else {
			$this1 = new hunit_match_EqualMatch($value, null, null);
		}
		{
			$tmp = $this1;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'hunit._Match.Match_Impl_'; }
}
