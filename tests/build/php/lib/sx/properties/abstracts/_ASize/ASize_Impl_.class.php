<?php

class sx_properties_abstracts__ASize_ASize_Impl_ {
	public function __construct(){}
	static $__pool;
	static function fromFloat($v) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::fromFloat");
		$__hx__spos = $GLOBALS['%s']->length;
		$weakSize = null;
		{
			$_this = sx_properties_abstracts__ASize_ASize_Impl_::$__pool;
			if($_this->length > 0) {
				$_this->length--;
				$weakSize = $_this->__pool[$_this->length];
			} else {
				$weakSize = null;
			}
		}
		if($weakSize === null) {
			$weakSize = new sx_properties_abstracts__ASize_WeakSize();
		}
		$weakSize->weak = true;
		$weakSize->set_dip($v);
		{
			$tmp = $weakSize;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function fromSize($coordinate) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::fromSize");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = sx_properties_abstracts__ASize_ASize_Impl_::fromFloat($coordinate->get_dip());
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function toFloat($this1) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::toFloat");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this1->get_dip();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function _new($size) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::_new");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $size;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AincB($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AincB");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $a;
		{
			$tmp = $_g->set_dip($_g->get_dip() + $b->get_dip());
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AdecB($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AdecB");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $a;
		{
			$tmp = $_g->set_dip($_g->get_dip() - $b->get_dip());
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AmulIncB($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AmulIncB");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $a;
		{
			$tmp = $_g->set_dip($_g->get_dip() * $b->get_dip());
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AdevDecB($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AdevDecB");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $a;
		{
			$tmp = $_g->set_dip($_g->get_dip() / $b->get_dip());
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AplusB($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AplusB");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() + $b->get_dip();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AminusB($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AminusB");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() - $b->get_dip();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AmulB($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AmulB");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() * $b->get_dip();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AdivB($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AdivB");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() / $b->get_dip();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AltB($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AltB");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() < $b->get_dip();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AlteB($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AlteB");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() <= $b->get_dip();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AneB($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AneB");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() !== $b->get_dip();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AgteB($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AgteB");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() >= $b->get_dip();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AgtB($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AgtB");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() > $b->get_dip();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AeqB($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AeqB");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() === $b->get_dip();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function minusA($a) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::minusA");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = -$a->get_dip();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function Ainc($a) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::Ainc");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $a;
		$_g1 = $_g->get_dip();
		$_g->set_dip($_g1 + 1);
		{
			$GLOBALS['%s']->pop();
			return $_g1;
		}
		$GLOBALS['%s']->pop();
	}
	static function Bdec($a) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::Bdec");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $a;
		$_g1 = $_g->get_dip();
		$_g->set_dip($_g1 - 1);
		{
			$GLOBALS['%s']->pop();
			return $_g1;
		}
		$GLOBALS['%s']->pop();
	}
	static function AincBf($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AincBf");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $a;
		{
			$tmp = $_g->set_dip($_g->get_dip() + $b);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AdecBf($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AdecBf");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $a;
		{
			$tmp = $_g->set_dip($_g->get_dip() - $b);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AmulIncBf($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AmulIncBf");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $a;
		{
			$tmp = $_g->set_dip($_g->get_dip() * $b);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AdevDecBf($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AdevDecBf");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $a;
		{
			$tmp = $_g->set_dip($_g->get_dip() / $b);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AplusBf($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AplusBf");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() + $b;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AminusBf($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AminusBf");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() - $b;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AmulBf($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AmulBf");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() * $b;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AdivBf($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AdivBf");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() / $b;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AltBf($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AltBf");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() < $b;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AlteBf($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AlteBf");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() <= $b;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AneBf($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AneBf");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() !== $b;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AgteBf($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AgteBf");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() >= $b;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AgtBf($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AgtBf");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() > $b;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function AeqBf($a, $b) {
		$GLOBALS['%s']->push("sx.properties.abstracts._ASize.ASize_Impl_::AeqBf");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $a->get_dip() === $b;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'sx.properties.abstracts._ASize.ASize_Impl_'; }
}
sx_properties_abstracts__ASize_ASize_Impl_::$__pool = new sx_ds_ObjectPool();
