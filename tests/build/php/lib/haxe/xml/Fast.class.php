<?php

class haxe_xml_Fast {
	public function __construct($x) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("haxe.xml.Fast::new");
		$__hx__spos = $GLOBALS['%s']->length;
		if((is_object($_t = $x->nodeType) && !($_t instanceof Enum) ? $_t !== Xml::$Document : $_t != Xml::$Document) && (is_object($_t2 = $x->nodeType) && !($_t2 instanceof Enum) ? $_t2 !== Xml::$Element : $_t2 != Xml::$Element)) {
			throw new HException("Invalid nodeType " . _hx_string_rec($x->nodeType, ""));
		}
		$this->x = $x;
		$this->node = new haxe_xml__Fast_NodeAccess($x);
		$this->nodes = new haxe_xml__Fast_NodeListAccess($x);
		$this->att = new haxe_xml__Fast_AttribAccess($x);
		$this->has = new haxe_xml__Fast_HasAttribAccess($x);
		$this->hasNode = new haxe_xml__Fast_HasNodeAccess($x);
		$GLOBALS['%s']->pop();
	}}
	public $x;
	public $node;
	public $nodes;
	public $att;
	public $has;
	public $hasNode;
	public function get_name() {
		$GLOBALS['%s']->push("haxe.xml.Fast::get_name");
		$__hx__spos = $GLOBALS['%s']->length;
		if((is_object($_t = $this->x->nodeType) && !($_t instanceof Enum) ? $_t === Xml::$Document : $_t == Xml::$Document)) {
			$GLOBALS['%s']->pop();
			return "Document";
		} else {
			$_this = $this->x;
			if((is_object($_t2 = $_this->nodeType) && !($_t2 instanceof Enum) ? $_t2 !== Xml::$Element : $_t2 != Xml::$Element)) {
				throw new HException("Bad node type, expected Element but found " . _hx_string_rec($_this->nodeType, ""));
			}
			{
				$tmp = $_this->nodeName;
				$GLOBALS['%s']->pop();
				return $tmp;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function get_innerData() {
		$GLOBALS['%s']->push("haxe.xml.Fast::get_innerData");
		$__hx__spos = $GLOBALS['%s']->length;
		$it = null;
		{
			$_this = $this->x;
			if((is_object($_t = $_this->nodeType) && !($_t instanceof Enum) ? $_t !== Xml::$Document : $_t != Xml::$Document) && (is_object($_t2 = $_this->nodeType) && !($_t2 instanceof Enum) ? $_t2 !== Xml::$Element : $_t2 != Xml::$Element)) {
				throw new HException("Bad node type, expected Element or Document but found " . _hx_string_rec($_this->nodeType, ""));
			}
			$it = $_this->children->iterator();
		}
		if(!$it->hasNext()) {
			throw new HException(_hx_string_or_null($this->get_name()) . " does not have data");
		}
		$v = $it->next();
		$n = $it->next();
		if($n !== null) {
			if((is_object($_t = $v->nodeType) && !($_t instanceof Enum) ? $_t === Xml::$PCData : $_t == Xml::$PCData) && (is_object($_t2 = $n->nodeType) && !($_t2 instanceof Enum) ? $_t2 === Xml::$CData : $_t2 == Xml::$CData) && haxe_xml_Fast_0($this, $_t, $it, $n, $v) === "") {
				$n2 = $it->next();
				if($n2 === null || (is_object($_t3 = $n2->nodeType) && !($_t3 instanceof Enum) ? $_t3 === Xml::$PCData : $_t3 == Xml::$PCData) && haxe_xml_Fast_1($this, $_t, $it, $n, $n2, $v) === "" && $it->next() === null) {
					if((is_object($_t4 = $n->nodeType) && !($_t4 instanceof Enum) ? $_t4 === Xml::$Document : $_t4 == Xml::$Document) || (is_object($_t5 = $n->nodeType) && !($_t5 instanceof Enum) ? $_t5 === Xml::$Element : $_t5 == Xml::$Element)) {
						throw new HException("Bad node type, unexpected " . _hx_string_rec($n->nodeType, ""));
					}
					{
						$tmp = $n->nodeValue;
						$GLOBALS['%s']->pop();
						return $tmp;
					}
				}
			}
			throw new HException(_hx_string_or_null($this->get_name()) . " does not only have data");
		}
		if((is_object($_t = $v->nodeType) && !($_t instanceof Enum) ? $_t !== Xml::$PCData : $_t != Xml::$PCData) && (is_object($_t2 = $v->nodeType) && !($_t2 instanceof Enum) ? $_t2 !== Xml::$CData : $_t2 != Xml::$CData)) {
			throw new HException(_hx_string_or_null($this->get_name()) . " does not have data");
		}
		{
			if((is_object($_t3 = $v->nodeType) && !($_t3 instanceof Enum) ? $_t3 === Xml::$Document : $_t3 == Xml::$Document) || (is_object($_t4 = $v->nodeType) && !($_t4 instanceof Enum) ? $_t4 === Xml::$Element : $_t4 == Xml::$Element)) {
				throw new HException("Bad node type, unexpected " . _hx_string_rec($v->nodeType, ""));
			}
			{
				$tmp = $v->nodeValue;
				$GLOBALS['%s']->pop();
				return $tmp;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function get_innerHTML() {
		$GLOBALS['%s']->push("haxe.xml.Fast::get_innerHTML");
		$__hx__spos = $GLOBALS['%s']->length;
		$s = new StringBuf();
		$__hx__it = haxe_xml_Fast_2($this, $s, $x);
		while($__hx__it->hasNext()) {
			unset($x);
			$x = $__hx__it->next();
			$s->add(haxe_xml_Printer::hprint($x, null));
		}
		{
			$tmp = $s->b;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_elements() {
		$GLOBALS['%s']->push("haxe.xml.Fast::get_elements");
		$__hx__spos = $GLOBALS['%s']->length;
		$it = $this->x->elements();
		{
			$tmp = _hx_anonymous(array("hasNext" => (isset($it->hasNext) ? $it->hasNext: array($it, "hasNext")), "next" => array(new _hx_lambda(array(&$it), "haxe_xml_Fast_3"), 'execute')));
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
	static $__properties__ = array("get_elements" => "get_elements","get_innerHTML" => "get_innerHTML","get_innerData" => "get_innerData","get_name" => "get_name");
	function __toString() { return 'haxe.xml.Fast'; }
}
function haxe_xml_Fast_0(&$__hx__this, &$_t, &$it, &$n, &$v) {
	{
		$s = null;
		{
			if((is_object($_t3 = $v->nodeType) && !($_t3 instanceof Enum) ? $_t3 === Xml::$Document : $_t3 == Xml::$Document) || (is_object($_t4 = $v->nodeType) && !($_t4 instanceof Enum) ? $_t4 === Xml::$Element : $_t4 == Xml::$Element)) {
				throw new HException("Bad node type, unexpected " . _hx_string_rec($v->nodeType, ""));
			}
			$s = $v->nodeValue;
		}
		return trim($s);
	}
}
function haxe_xml_Fast_1(&$__hx__this, &$_t, &$it, &$n, &$n2, &$v) {
	{
		$s1 = null;
		{
			if((is_object($_t4 = $n2->nodeType) && !($_t4 instanceof Enum) ? $_t4 === Xml::$Document : $_t4 == Xml::$Document) || (is_object($_t5 = $n2->nodeType) && !($_t5 instanceof Enum) ? $_t5 === Xml::$Element : $_t5 == Xml::$Element)) {
				throw new HException("Bad node type, unexpected " . _hx_string_rec($n2->nodeType, ""));
			}
			$s1 = $n2->nodeValue;
		}
		return trim($s1);
	}
}
function haxe_xml_Fast_2(&$__hx__this, &$s, &$x) {
	{
		$_this = $__hx__this->x;
		if((is_object($_t = $_this->nodeType) && !($_t instanceof Enum) ? $_t !== Xml::$Document : $_t != Xml::$Document) && (is_object($_t2 = $_this->nodeType) && !($_t2 instanceof Enum) ? $_t2 !== Xml::$Element : $_t2 != Xml::$Element)) {
			throw new HException("Bad node type, expected Element or Document but found " . _hx_string_rec($_this->nodeType, ""));
		}
		return $_this->children->iterator();
	}
}
function haxe_xml_Fast_3(&$it) {
	{
		$GLOBALS['%s']->push("haxe.xml.Fast::get_elements@168");
		$__hx__spos2 = $GLOBALS['%s']->length;
		$x = $it->next();
		if($x === null) {
			$GLOBALS['%s']->pop();
			return null;
		}
		{
			$tmp = new haxe_xml_Fast($x);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
}
