<?php

class haxe_rtti_XmlParser {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("haxe.rtti.XmlParser::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->root = new _hx_array(array());
		$GLOBALS['%s']->pop();
	}}
	public $root;
	public $curplatform;
	public function mkPath($p) {
		$GLOBALS['%s']->push("haxe.rtti.XmlParser::mkPath");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$GLOBALS['%s']->pop();
			return $p;
		}
		$GLOBALS['%s']->pop();
	}
	public function mkTypeParams($p) {
		$GLOBALS['%s']->push("haxe.rtti.XmlParser::mkTypeParams");
		$__hx__spos = $GLOBALS['%s']->length;
		$pl = _hx_explode(":", $p);
		if($pl[0] === "") {
			$tmp = new _hx_array(array());
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		{
			$GLOBALS['%s']->pop();
			return $pl;
		}
		$GLOBALS['%s']->pop();
	}
	public function mkRights($r) {
		$GLOBALS['%s']->push("haxe.rtti.XmlParser::mkRights");
		$__hx__spos = $GLOBALS['%s']->length;
		switch($r) {
		case "null":{
			$tmp = haxe_rtti_Rights::$RNo;
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "method":{
			$tmp = haxe_rtti_Rights::$RMethod;
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "dynamic":{
			$tmp = haxe_rtti_Rights::$RDynamic;
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "inline":{
			$tmp = haxe_rtti_Rights::$RInline;
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		default:{
			$tmp = haxe_rtti_Rights::RCall($r);
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		}
		$GLOBALS['%s']->pop();
	}
	public function xerror($c) {
		$GLOBALS['%s']->push("haxe.rtti.XmlParser::xerror");
		$__hx__spos = $GLOBALS['%s']->length;
		throw new HException("Invalid " . _hx_string_or_null($c->get_name()));
		$GLOBALS['%s']->pop();
	}
	public function processElement($x) {
		$GLOBALS['%s']->push("haxe.rtti.XmlParser::processElement");
		$__hx__spos = $GLOBALS['%s']->length;
		$c = new haxe_xml_Fast($x);
		{
			$_g = $c->get_name();
			switch($_g) {
			case "class":{
				$tmp = haxe_rtti_TypeTree::TClassdecl($this->xclass($c));
				$GLOBALS['%s']->pop();
				return $tmp;
			}break;
			case "enum":{
				$tmp = haxe_rtti_TypeTree::TEnumdecl($this->xenum($c));
				$GLOBALS['%s']->pop();
				return $tmp;
			}break;
			case "typedef":{
				$tmp = haxe_rtti_TypeTree::TTypedecl($this->xtypedef($c));
				$GLOBALS['%s']->pop();
				return $tmp;
			}break;
			case "abstract":{
				$tmp = haxe_rtti_TypeTree::TAbstractdecl($this->xabstract($c));
				$GLOBALS['%s']->pop();
				return $tmp;
			}break;
			default:{
				$tmp = $this->xerror($c);
				$GLOBALS['%s']->pop();
				return $tmp;
			}break;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function xmeta($x) {
		$GLOBALS['%s']->push("haxe.rtti.XmlParser::xmeta");
		$__hx__spos = $GLOBALS['%s']->length;
		$ml = (new _hx_array(array()));
		if(null == $x->nodes->resolve("m")) throw new HException('null iterable');
		$__hx__it = $x->nodes->resolve("m")->iterator();
		while($__hx__it->hasNext()) {
			unset($m);
			$m = $__hx__it->next();
			$pl = (new _hx_array(array()));
			if(null == $m->nodes->resolve("e")) throw new HException('null iterable');
			$__hx__it2 = $m->nodes->resolve("e")->iterator();
			while($__hx__it2->hasNext()) {
				unset($p);
				$p = $__hx__it2->next();
				$pl->push($p->get_innerHTML());
			}
			$ml->push(_hx_anonymous(array("name" => $m->att->resolve("n"), "params" => $pl)));
			unset($pl);
		}
		{
			$GLOBALS['%s']->pop();
			return $ml;
		}
		$GLOBALS['%s']->pop();
	}
	public function xoverloads($x) {
		$GLOBALS['%s']->push("haxe.rtti.XmlParser::xoverloads");
		$__hx__spos = $GLOBALS['%s']->length;
		$l = new HList();
		if(null == $x) throw new HException('null iterable');
		$__hx__it = $x->get_elements();
		while($__hx__it->hasNext()) {
			unset($m);
			$m = $__hx__it->next();
			$l->add($this->xclassfield($m, null));
		}
		{
			$GLOBALS['%s']->pop();
			return $l;
		}
		$GLOBALS['%s']->pop();
	}
	public function xpath($x) {
		$GLOBALS['%s']->push("haxe.rtti.XmlParser::xpath");
		$__hx__spos = $GLOBALS['%s']->length;
		$path = $this->mkPath($x->att->resolve("path"));
		$params = new HList();
		if(null == $x) throw new HException('null iterable');
		$__hx__it = $x->get_elements();
		while($__hx__it->hasNext()) {
			unset($c);
			$c = $__hx__it->next();
			$params->add($this->xtype($c));
		}
		{
			$tmp = _hx_anonymous(array("path" => $path, "params" => $params));
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function xclass($x) {
		$GLOBALS['%s']->push("haxe.rtti.XmlParser::xclass");
		$__hx__spos = $GLOBALS['%s']->length;
		$csuper = null;
		$doc = null;
		$tdynamic = null;
		$interfaces = new HList();
		$fields = new HList();
		$statics = new HList();
		$meta = (new _hx_array(array()));
		if(null == $x) throw new HException('null iterable');
		$__hx__it = $x->get_elements();
		while($__hx__it->hasNext()) {
			unset($c);
			$c = $__hx__it->next();
			$_g = $c->get_name();
			switch($_g) {
			case "haxe_doc":{
				$doc = $c->get_innerData();
			}break;
			case "extends":{
				$csuper = $this->xpath($c);
			}break;
			case "implements":{
				$interfaces->add($this->xpath($c));
			}break;
			case "haxe_dynamic":{
				$tdynamic = $this->xtype(new haxe_xml_Fast($c->x->firstElement()));
			}break;
			case "meta":{
				$meta = $this->xmeta($c);
			}break;
			default:{
				if($c->x->exists("static")) {
					$statics->add($this->xclassfield($c, null));
				} else {
					$fields->add($this->xclassfield($c, null));
				}
			}break;
			}
			unset($_g);
		}
		{
			$tmp = _hx_anonymous(array("file" => (($x->has->resolve("file")) ? $x->att->resolve("file") : null), "path" => $this->mkPath($x->att->resolve("path")), "module" => (($x->has->resolve("module")) ? $this->mkPath($x->att->resolve("module")) : null), "doc" => $doc, "isPrivate" => $x->x->exists("private"), "isExtern" => $x->x->exists("extern"), "isInterface" => $x->x->exists("interface"), "params" => $this->mkTypeParams($x->att->resolve("params")), "superClass" => $csuper, "interfaces" => $interfaces, "fields" => $fields, "statics" => $statics, "tdynamic" => $tdynamic, "platforms" => $this->defplat(), "meta" => $meta));
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function xclassfield($x, $defPublic = null) {
		$GLOBALS['%s']->push("haxe.rtti.XmlParser::xclassfield");
		$__hx__spos = $GLOBALS['%s']->length;
		if($defPublic === null) {
			$defPublic = false;
		}
		$e = $x->get_elements();
		$t = $this->xtype($e->next());
		$doc = null;
		$meta = (new _hx_array(array()));
		$overloads = null;
		$__hx__it = $e;
		while($__hx__it->hasNext()) {
			unset($c);
			$c = $__hx__it->next();
			$_g = $c->get_name();
			switch($_g) {
			case "haxe_doc":{
				$doc = $c->get_innerData();
			}break;
			case "meta":{
				$meta = $this->xmeta($c);
			}break;
			case "overloads":{
				$overloads = $this->xoverloads($c);
			}break;
			default:{
				$this->xerror($c);
			}break;
			}
			unset($_g);
		}
		{
			$tmp = _hx_anonymous(array("name" => $x->get_name(), "type" => $t, "isPublic" => $x->x->exists("public") || $defPublic, "isOverride" => $x->x->exists("override"), "line" => (($x->has->resolve("line")) ? Std::parseInt($x->att->resolve("line")) : null), "doc" => $doc, "get" => (($x->has->resolve("get")) ? $this->mkRights($x->att->resolve("get")) : haxe_rtti_Rights::$RNormal), "set" => (($x->has->resolve("set")) ? $this->mkRights($x->att->resolve("set")) : haxe_rtti_Rights::$RNormal), "params" => (($x->has->resolve("params")) ? $this->mkTypeParams($x->att->resolve("params")) : (new _hx_array(array()))), "platforms" => $this->defplat(), "meta" => $meta, "overloads" => $overloads, "expr" => (($x->has->resolve("expr")) ? $x->att->resolve("expr") : null)));
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function xenum($x) {
		$GLOBALS['%s']->push("haxe.rtti.XmlParser::xenum");
		$__hx__spos = $GLOBALS['%s']->length;
		$cl = new HList();
		$doc = null;
		$meta = (new _hx_array(array()));
		if(null == $x) throw new HException('null iterable');
		$__hx__it = $x->get_elements();
		while($__hx__it->hasNext()) {
			unset($c);
			$c = $__hx__it->next();
			if($c->get_name() === "haxe_doc") {
				$doc = $c->get_innerData();
			} else {
				if($c->get_name() === "meta") {
					$meta = $this->xmeta($c);
				} else {
					$cl->add($this->xenumfield($c));
				}
			}
		}
		{
			$tmp = _hx_anonymous(array("file" => (($x->has->resolve("file")) ? $x->att->resolve("file") : null), "path" => $this->mkPath($x->att->resolve("path")), "module" => (($x->has->resolve("module")) ? $this->mkPath($x->att->resolve("module")) : null), "doc" => $doc, "isPrivate" => $x->x->exists("private"), "isExtern" => $x->x->exists("extern"), "params" => $this->mkTypeParams($x->att->resolve("params")), "constructors" => $cl, "platforms" => $this->defplat(), "meta" => $meta));
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function xenumfield($x) {
		$GLOBALS['%s']->push("haxe.rtti.XmlParser::xenumfield");
		$__hx__spos = $GLOBALS['%s']->length;
		$args = null;
		$xdoc = $x->x->elementsNamed("haxe_doc")->next();
		$meta = null;
		if($x->hasNode->resolve("meta")) {
			$meta = $this->xmeta($x->node->resolve("meta"));
		} else {
			$meta = (new _hx_array(array()));
		}
		if($x->has->resolve("a")) {
			$names = _hx_explode(":", $x->att->resolve("a"));
			$elts = $x->get_elements();
			$args = new HList();
			{
				$_g = 0;
				while($_g < $names->length) {
					$c = $names[$_g];
					++$_g;
					$opt = false;
					if(_hx_char_at($c, 0) === "?") {
						$opt = true;
						$c = _hx_substr($c, 1, null);
					}
					$args->add(_hx_anonymous(array("name" => $c, "opt" => $opt, "t" => $this->xtype($elts->next()))));
					unset($opt,$c);
				}
			}
		}
		{
			$tmp = _hx_anonymous(array("name" => $x->get_name(), "args" => $args, "doc" => (($xdoc === null) ? null : _hx_deref(new haxe_xml_Fast($xdoc))->get_innerData()), "meta" => $meta, "platforms" => $this->defplat()));
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function xabstract($x) {
		$GLOBALS['%s']->push("haxe.rtti.XmlParser::xabstract");
		$__hx__spos = $GLOBALS['%s']->length;
		$doc = null;
		$impl = null;
		$athis = null;
		$meta = (new _hx_array(array()));
		$to = (new _hx_array(array()));
		$from = (new _hx_array(array()));
		if(null == $x) throw new HException('null iterable');
		$__hx__it = $x->get_elements();
		while($__hx__it->hasNext()) {
			unset($c);
			$c = $__hx__it->next();
			$_g = $c->get_name();
			switch($_g) {
			case "haxe_doc":{
				$doc = $c->get_innerData();
			}break;
			case "meta":{
				$meta = $this->xmeta($c);
			}break;
			case "to":{
				if(null == $c) throw new HException('null iterable');
				$__hx__it2 = $c->get_elements();
				while($__hx__it2->hasNext()) {
					unset($t);
					$t = $__hx__it2->next();
					$to->push(_hx_anonymous(array("t" => $this->xtype(new haxe_xml_Fast($t->x->firstElement())), "field" => (($t->has->resolve("field")) ? $t->att->resolve("field") : null))));
				}
			}break;
			case "from":{
				if(null == $c) throw new HException('null iterable');
				$__hx__it2 = $c->get_elements();
				while($__hx__it2->hasNext()) {
					unset($t1);
					$t1 = $__hx__it2->next();
					$from->push(_hx_anonymous(array("t" => $this->xtype(new haxe_xml_Fast($t1->x->firstElement())), "field" => (($t1->has->resolve("field")) ? $t1->att->resolve("field") : null))));
				}
			}break;
			case "impl":{
				$impl = $this->xclass($c->node->resolve("class"));
			}break;
			case "this":{
				$athis = $this->xtype(new haxe_xml_Fast($c->x->firstElement()));
			}break;
			default:{
				$this->xerror($c);
			}break;
			}
			unset($_g);
		}
		{
			$tmp = _hx_anonymous(array("file" => (($x->has->resolve("file")) ? $x->att->resolve("file") : null), "path" => $this->mkPath($x->att->resolve("path")), "module" => (($x->has->resolve("module")) ? $this->mkPath($x->att->resolve("module")) : null), "doc" => $doc, "isPrivate" => $x->x->exists("private"), "params" => $this->mkTypeParams($x->att->resolve("params")), "platforms" => $this->defplat(), "meta" => $meta, "athis" => $athis, "to" => $to, "from" => $from, "impl" => $impl));
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function xtypedef($x) {
		$GLOBALS['%s']->push("haxe.rtti.XmlParser::xtypedef");
		$__hx__spos = $GLOBALS['%s']->length;
		$doc = null;
		$t = null;
		$meta = (new _hx_array(array()));
		if(null == $x) throw new HException('null iterable');
		$__hx__it = $x->get_elements();
		while($__hx__it->hasNext()) {
			unset($c);
			$c = $__hx__it->next();
			if($c->get_name() === "haxe_doc") {
				$doc = $c->get_innerData();
			} else {
				if($c->get_name() === "meta") {
					$meta = $this->xmeta($c);
				} else {
					$t = $this->xtype($c);
				}
			}
		}
		$types = new haxe_ds_StringMap();
		if($this->curplatform !== null) {
			$types->set($this->curplatform, $t);
		}
		{
			$tmp = _hx_anonymous(array("file" => (($x->has->resolve("file")) ? $x->att->resolve("file") : null), "path" => $this->mkPath($x->att->resolve("path")), "module" => (($x->has->resolve("module")) ? $this->mkPath($x->att->resolve("module")) : null), "doc" => $doc, "isPrivate" => $x->x->exists("private"), "params" => $this->mkTypeParams($x->att->resolve("params")), "type" => $t, "types" => $types, "platforms" => $this->defplat(), "meta" => $meta));
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function xtype($x) {
		$GLOBALS['%s']->push("haxe.rtti.XmlParser::xtype");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $x->get_name();
		switch($_g) {
		case "unknown":{
			$tmp = haxe_rtti_CType::$CUnknown;
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "e":{
			$tmp = haxe_rtti_CType::CEnum($this->mkPath($x->att->resolve("path")), $this->xtypeparams($x));
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "c":{
			$tmp = haxe_rtti_CType::CClass($this->mkPath($x->att->resolve("path")), $this->xtypeparams($x));
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "t":{
			$tmp = haxe_rtti_CType::CTypedef($this->mkPath($x->att->resolve("path")), $this->xtypeparams($x));
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "x":{
			$tmp = haxe_rtti_CType::CAbstract($this->mkPath($x->att->resolve("path")), $this->xtypeparams($x));
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "f":{
			$args = new HList();
			$aname = _hx_explode(":", $x->att->resolve("a"));
			$eargs = $aname->iterator();
			$evalues = null;
			if($x->has->resolve("v")) {
				$evalues = _hx_explode(":", $x->att->resolve("v"))->iterator();
			} else {
				$evalues = null;
			}
			if(null == $x) throw new HException('null iterable');
			$__hx__it = $x->get_elements();
			while($__hx__it->hasNext()) {
				unset($e);
				$e = $__hx__it->next();
				$opt = false;
				$a = $eargs->next();
				if($a === null) {
					$a = "";
				}
				if(_hx_char_at($a, 0) === "?") {
					$opt = true;
					$a = _hx_substr($a, 1, null);
				}
				$v = null;
				if($evalues === null) {
					$v = null;
				} else {
					$v = $evalues->next();
				}
				$args->add(_hx_anonymous(array("name" => $a, "opt" => $opt, "t" => $this->xtype($e), "value" => (($v === "") ? null : $v))));
				unset($v,$opt,$a);
			}
			$ret = $args->last();
			$args->remove($ret);
			{
				$tmp = haxe_rtti_CType::CFunction($args, $ret->t);
				$GLOBALS['%s']->pop();
				return $tmp;
			}
		}break;
		case "a":{
			$fields = new HList();
			if(null == $x) throw new HException('null iterable');
			$__hx__it = $x->get_elements();
			while($__hx__it->hasNext()) {
				unset($f);
				$f = $__hx__it->next();
				$f1 = $this->xclassfield($f, true);
				$f1->platforms = new HList();
				$fields->add($f1);
				unset($f1);
			}
			{
				$tmp = haxe_rtti_CType::CAnonymous($fields);
				$GLOBALS['%s']->pop();
				return $tmp;
			}
		}break;
		case "d":{
			$t = null;
			$tx = $x->x->firstElement();
			if($tx !== null) {
				$t = $this->xtype(new haxe_xml_Fast($tx));
			}
			{
				$tmp = haxe_rtti_CType::CDynamic($t);
				$GLOBALS['%s']->pop();
				return $tmp;
			}
		}break;
		default:{
			$tmp = $this->xerror($x);
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		}
		$GLOBALS['%s']->pop();
	}
	public function xtypeparams($x) {
		$GLOBALS['%s']->push("haxe.rtti.XmlParser::xtypeparams");
		$__hx__spos = $GLOBALS['%s']->length;
		$p = new HList();
		if(null == $x) throw new HException('null iterable');
		$__hx__it = $x->get_elements();
		while($__hx__it->hasNext()) {
			unset($c);
			$c = $__hx__it->next();
			$p->add($this->xtype($c));
		}
		{
			$GLOBALS['%s']->pop();
			return $p;
		}
		$GLOBALS['%s']->pop();
	}
	public function defplat() {
		$GLOBALS['%s']->push("haxe.rtti.XmlParser::defplat");
		$__hx__spos = $GLOBALS['%s']->length;
		$l = new HList();
		if($this->curplatform !== null) {
			$l->add($this->curplatform);
		}
		{
			$GLOBALS['%s']->pop();
			return $l;
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
	function __toString() { return 'haxe.rtti.XmlParser'; }
}
