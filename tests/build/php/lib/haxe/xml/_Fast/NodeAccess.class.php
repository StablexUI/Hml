<?php

class haxe_xml__Fast_NodeAccess {
	public function __construct($x) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("haxe.xml._Fast.NodeAccess::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__x = $x;
		$GLOBALS['%s']->pop();
	}}
	public $__x;
	public function resolve($name) {
		$GLOBALS['%s']->push("haxe.xml._Fast.NodeAccess::resolve");
		$__hx__spos = $GLOBALS['%s']->length;
		$x = $this->__x->elementsNamed($name)->next();
		if($x === null) {
			$xname = null;
			if((is_object($_t = $this->__x->nodeType) && !($_t instanceof Enum) ? $_t === Xml::$Document : $_t == Xml::$Document)) {
				$xname = "Document";
			} else {
				$_this = $this->__x;
				if((is_object($_t2 = $_this->nodeType) && !($_t2 instanceof Enum) ? $_t2 !== Xml::$Element : $_t2 != Xml::$Element)) {
					throw new HException("Bad node type, expected Element but found " . _hx_string_rec($_this->nodeType, ""));
				}
				$xname = $_this->nodeName;
			}
			throw new HException(_hx_string_or_null($xname) . " is missing element " . _hx_string_or_null($name));
		}
		{
			$tmp = new haxe_xml_Fast($x);
			$GLOBALS['%s']->pop();
			return $tmp;
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
	function __toString() { return 'haxe.xml._Fast.NodeAccess'; }
}
