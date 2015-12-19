<?php

class MetricValueTest extends hunit_TestCase {
	public function __construct() { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("MetricValueTest::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct();
		$GLOBALS['%s']->pop();
	}}
	public function dip() {
		$GLOBALS['%s']->push("MetricValueTest::dip");
		$__hx__spos = $GLOBALS['%s']->length;
		$ui = new Metric();
		$this->assert->equal("dip", $ui->get_dips()->get_left()->units, null, _hx_anonymous(array("fileName" => "MetricValueTest.hx", "lineNumber" => 19, "className" => "MetricValueTest", "methodName" => "dip")));
		$GLOBALS['%s']->pop();
	}
	public function pixel() {
		$GLOBALS['%s']->push("MetricValueTest::pixel");
		$__hx__spos = $GLOBALS['%s']->length;
		$ui = new Metric();
		$this->assert->equal("px", $ui->get_pixels()->get_left()->units, null, _hx_anonymous(array("fileName" => "MetricValueTest.hx", "lineNumber" => 28, "className" => "MetricValueTest", "methodName" => "pixel")));
		$GLOBALS['%s']->pop();
	}
	public function pct() {
		$GLOBALS['%s']->push("MetricValueTest::pct");
		$__hx__spos = $GLOBALS['%s']->length;
		$ui = new Metric();
		$this->assert->equal("pct", $ui->get_percents()->get_left()->units, null, _hx_anonymous(array("fileName" => "MetricValueTest.hx", "lineNumber" => 37, "className" => "MetricValueTest", "methodName" => "pct")));
		$GLOBALS['%s']->pop();
	}
	static function __meta__() { $args = func_get_args(); return call_user_func_array(self::$__meta__, $args); }
	static $__meta__;
	static $__rtti = "<class path=\"MetricValueTest\" params=\"\">\x0A\x09<extends path=\"hunit.TestCase\"/>\x0A\x09<dip public=\"1\" set=\"method\" line=\"15\">\x0A\x09\x09<f a=\"\"><x path=\"Void\"/></f>\x0A\x09\x09<meta><m n=\"test\"/></meta>\x0A\x09</dip>\x0A\x09<pixel public=\"1\" set=\"method\" line=\"24\">\x0A\x09\x09<f a=\"\"><x path=\"Void\"/></f>\x0A\x09\x09<meta><m n=\"test\"/></meta>\x0A\x09</pixel>\x0A\x09<pct public=\"1\" set=\"method\" line=\"33\">\x0A\x09\x09<f a=\"\"><x path=\"Void\"/></f>\x0A\x09\x09<meta><m n=\"test\"/></meta>\x0A\x09</pct>\x0A\x09<new public=\"1\" set=\"method\" line=\"11\"><f a=\"\"><x path=\"Void\"/></f></new>\x0A\x09<meta>\x0A\x09\x09<m n=\":directlyUsed\"/>\x0A\x09\x09<m n=\":build\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\x0A\x09\x09<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\x0A\x09\x09<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\x0A\x09</meta>\x0A</class>";
	static $__properties__ = array("set_assert" => "set_assert","set_match" => "set_match");
	function __toString() { return 'MetricValueTest'; }
}
MetricValueTest::$__meta__ = _hx_anonymous(array("fields" => _hx_anonymous(array("dip" => _hx_anonymous(array("test" => null)), "pixel" => _hx_anonymous(array("test" => null)), "pct" => _hx_anonymous(array("test" => null))))));
