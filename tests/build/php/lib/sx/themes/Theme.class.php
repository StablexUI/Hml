<?php

class sx_themes_Theme {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.themes.Theme::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__styles = new haxe_ds_StringMap();
		$this->initialize();
		$GLOBALS['%s']->pop();
	}}
	public $__styles;
	public function initialize() {
		$GLOBALS['%s']->push("sx.themes.Theme::initialize");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function styles($cls) {
		$GLOBALS['%s']->push("sx.themes.Theme::styles");
		$__hx__spos = $GLOBALS['%s']->length;
		$className = Type::getClassName($cls);
		$styles = $this->__styles->get($className);
		if($styles === null) {
			$styles = new haxe_ds_StringMap();
			$this->__styles->set($className, $styles);
		}
		{
			$GLOBALS['%s']->pop();
			return $styles;
		}
		$GLOBALS['%s']->pop();
	}
	public function apply($widget) {
		$GLOBALS['%s']->push("sx.themes.Theme::apply");
		$__hx__spos = $GLOBALS['%s']->length;
		if($widget->style === null) {
			$GLOBALS['%s']->pop();
			return;
		}
		$fn = null;
		{
			$this1 = $this->styles(Type::getClass($widget));
			$fn = $this1->get($widget->style);
		}
		if($fn === null) {
			$GLOBALS['%s']->pop();
			return;
		}
		call_user_func_array($fn, array($widget));
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
	static $DEFAULT_STYLE = "__DEFAULT__";
	function __toString() { return 'sx.themes.Theme'; }
}
