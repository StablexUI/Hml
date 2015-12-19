<?php

class haxe_xml__Fast_AttribAccess {
	public function __construct($x) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("haxe.xml._Fast.AttribAccess::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__x = $x;
		$GLOBALS['%s']->pop();
	}}
	public $__x;
	public function resolve($name) {
		$GLOBALS['%s']->push("haxe.xml._Fast.AttribAccess::resolve");
		$__hx__spos = $GLOBALS['%s']->length;
		if((is_object($_t = $this->__x->nodeType) && !($_t instanceof Enum) ? $_t === Xml::$Document : $_t == Xml::$Document)) {
			throw new HException("Cannot access document attribute " . _hx_string_or_null($name));
		}
		$v = $this->__x->get($name);
		if($v === null) {
			throw new HException(_hx_string_or_null(haxe_xml__Fast_AttribAccess_0($this, $_t, $name, $v)) . " is missing attribute " . _hx_string_or_null($name));
		}
		{
			$GLOBALS['%s']->pop();
			return $v;
		}
		$GLOBALS['%s']->pop();
	}
	public $__dynamics = array();
	public function __get($n) {
		if(isset($this->__dynamics[$n]))
			return $this->__dynamics[$n];
	}
	public function __set($n, $v) {
		$this->__dynamics[$n] = $v;
	}
	public function __call($n, $a) {
		if(isset($this->__dynamics[$n]) && is_callable($this->__dynamics[$n]))
			return call_user_func_array($this->__dynamics[$n], $a);
		if('toString' == $n)
			return $this->__toString();
		throw new HException("Unable to call <".$n.">");
	}
	function __toString() { return 'haxe.xml._Fast.AttribAccess'; }
}
function haxe_xml__Fast_AttribAccess_0(&$__hx__this, &$_t, &$name, &$v) {
	{
		$_this = $__hx__this->__x;
		if((is_object($_t2 = $_this->nodeType) && !($_t2 instanceof Enum) ? $_t2 !== Xml::$Element : $_t2 != Xml::$Element)) {
			throw new HException("Bad node type, expected Element but found " . _hx_string_rec($_this->nodeType, ""));
		}
		return $_this->nodeName;
	}
}
