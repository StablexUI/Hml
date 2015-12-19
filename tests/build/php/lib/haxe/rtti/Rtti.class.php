<?php

class haxe_rtti_Rtti {
	public function __construct(){}
	static function getRtti($c) {
		$GLOBALS['%s']->push("haxe.rtti.Rtti::getRtti");
		$__hx__spos = $GLOBALS['%s']->length;
		$rtti = Reflect::field($c, "__rtti");
		if($rtti === null) {
			throw new HException("Class " . _hx_string_or_null(Type::getClassName($c)) . " has no RTTI information, consider adding @:rtti");
		}
		$x = Xml::parse($rtti)->firstElement();
		$infos = _hx_deref(new haxe_rtti_XmlParser())->processElement($x);
		{
			$t = $infos;
			switch($infos->index) {
			case 1:{
				$c1 = _hx_deref($infos)->params[0];
				{
					$GLOBALS['%s']->pop();
					return $c1;
				}
			}break;
			default:{
				throw new HException("Enum mismatch: expected TClassDecl but found " . Std::string($t));
			}break;
			}
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'haxe.rtti.Rtti'; }
}
