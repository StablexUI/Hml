<?php

class ChildWidgetNodeTest extends hunit_TestCase {
	public function __construct() { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("ChildWidgetNodeTest::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct();
		$GLOBALS['%s']->pop();
	}}
	public function childWidgetNode() {
		$GLOBALS['%s']->push("ChildWidgetNodeTest::childWidgetNode");
		$__hx__spos = $GLOBALS['%s']->length;
		$root = new Child();
		$level1 = $root->get_level1();
		$level2 = $root->get_level2();
		$this->assert->equal($level1, $level2->get_parent(), null, _hx_anonymous(array("fileName" => "ChildWidgetNodeTest.hx", "lineNumber" => 22, "className" => "ChildWidgetNodeTest", "methodName" => "childWidgetNode")));
		$this->assert->equal($root, $level1->get_parent(), null, _hx_anonymous(array("fileName" => "ChildWidgetNodeTest.hx", "lineNumber" => 23, "className" => "ChildWidgetNodeTest", "methodName" => "childWidgetNode")));
		$GLOBALS['%s']->pop();
	}
	static function __meta__() { $args = func_get_args(); return call_user_func_array(self::$__meta__, $args); }
	static $__meta__;
	static $__rtti = "<class path=\"ChildWidgetNodeTest\" params=\"\">\x0A\x09<extends path=\"hunit.TestCase\"/>\x0A\x09<childWidgetNode public=\"1\" set=\"method\" line=\"16\">\x0A\x09\x09<f a=\"\"><x path=\"Void\"/></f>\x0A\x09\x09<meta><m n=\"test\"/></meta>\x0A\x09</childWidgetNode>\x0A\x09<new public=\"1\" set=\"method\" line=\"12\"><f a=\"\"><x path=\"Void\"/></f></new>\x0A\x09<meta>\x0A\x09\x09<m n=\":directlyUsed\"/>\x0A\x09\x09<m n=\":build\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\x0A\x09\x09<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\x0A\x09\x09<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\x0A\x09</meta>\x0A</class>";
	static $__properties__ = array("set_assert" => "set_assert","set_match" => "set_match");
	function __toString() { return 'ChildWidgetNodeTest'; }
}
ChildWidgetNodeTest::$__meta__ = _hx_anonymous(array("fields" => _hx_anonymous(array("childWidgetNode" => _hx_anonymous(array("test" => null))))));
