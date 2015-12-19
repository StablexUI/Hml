<?php

class SignalValueTest extends hunit_TestCase {
	public function __construct() { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("SignalValueTest::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct();
		$GLOBALS['%s']->pop();
	}}
	public function simple() {
		$GLOBALS['%s']->push("SignalValueTest::simple");
		$__hx__spos = $GLOBALS['%s']->length;
		$ui = new Signal();
		if($ui->get_simple()->get_onClick() !== null && $ui->get_simple()->get_onClick()->__listeners->length > 0) {
			if($ui->get_simple()->get_onClick()->__listenersInUse) {
				{
					$_g = 0;
					$_g1 = $ui->get_simple()->get_onClick()->__listeners;
					while($_g < $_g1->length) {
						$listener = $_g1[$_g];
						++$_g;
						call_user_func_array($listener, array($ui->get_simple(), $ui->get_simple(), -1));
						unset($listener);
					}
				}
				false;
			} else {
				$ui->get_simple()->get_onClick()->__listenersInUse = true;
				{
					$_g2 = 0;
					$_g11 = $ui->get_simple()->get_onClick()->__listeners;
					while($_g2 < $_g11->length) {
						$listener1 = $_g11[$_g2];
						++$_g2;
						call_user_func_array($listener1, array($ui->get_simple(), $ui->get_simple(), -1));
						unset($listener1);
					}
				}
				$ui->get_simple()->get_onClick()->__listenersInUse = false;
			}
		}
		$this->assert->isTrue($ui->get_simpleClicked(), null, _hx_anonymous(array("fileName" => "SignalValueTest.hx", "lineNumber" => 21, "className" => "SignalValueTest", "methodName" => "simple")));
		$GLOBALS['%s']->pop();
	}
	public function closureWithBlockBody() {
		$GLOBALS['%s']->push("SignalValueTest::closureWithBlockBody");
		$__hx__spos = $GLOBALS['%s']->length;
		$ui = new Signal();
		if($ui->get_closureBlockBody()->get_onClick() !== null && $ui->get_closureBlockBody()->get_onClick()->__listeners->length > 0) {
			if($ui->get_closureBlockBody()->get_onClick()->__listenersInUse) {
				{
					$_g = 0;
					$_g1 = $ui->get_closureBlockBody()->get_onClick()->__listeners;
					while($_g < $_g1->length) {
						$listener = $_g1[$_g];
						++$_g;
						call_user_func_array($listener, array($ui->get_closureBlockBody(), $ui->get_closureBlockBody(), -1));
						unset($listener);
					}
				}
				false;
			} else {
				$ui->get_closureBlockBody()->get_onClick()->__listenersInUse = true;
				{
					$_g2 = 0;
					$_g11 = $ui->get_closureBlockBody()->get_onClick()->__listeners;
					while($_g2 < $_g11->length) {
						$listener1 = $_g11[$_g2];
						++$_g2;
						call_user_func_array($listener1, array($ui->get_closureBlockBody(), $ui->get_closureBlockBody(), -1));
						unset($listener1);
					}
				}
				$ui->get_closureBlockBody()->get_onClick()->__listenersInUse = false;
			}
		}
		$this->assert->isTrue($ui->get_closureBlockClicked(), null, _hx_anonymous(array("fileName" => "SignalValueTest.hx", "lineNumber" => 32, "className" => "SignalValueTest", "methodName" => "closureWithBlockBody")));
		$GLOBALS['%s']->pop();
	}
	public function closureWithSingleExprBody() {
		$GLOBALS['%s']->push("SignalValueTest::closureWithSingleExprBody");
		$__hx__spos = $GLOBALS['%s']->length;
		$ui = new Signal();
		if($ui->get_closureSingleExpr()->get_onClick() !== null && $ui->get_closureSingleExpr()->get_onClick()->__listeners->length > 0) {
			if($ui->get_closureSingleExpr()->get_onClick()->__listenersInUse) {
				{
					$_g = 0;
					$_g1 = $ui->get_closureSingleExpr()->get_onClick()->__listeners;
					while($_g < $_g1->length) {
						$listener = $_g1[$_g];
						++$_g;
						call_user_func_array($listener, array($ui->get_closureSingleExpr(), $ui->get_closureSingleExpr(), -1));
						unset($listener);
					}
				}
				false;
			} else {
				$ui->get_closureSingleExpr()->get_onClick()->__listenersInUse = true;
				{
					$_g2 = 0;
					$_g11 = $ui->get_closureSingleExpr()->get_onClick()->__listeners;
					while($_g2 < $_g11->length) {
						$listener1 = $_g11[$_g2];
						++$_g2;
						call_user_func_array($listener1, array($ui->get_closureSingleExpr(), $ui->get_closureSingleExpr(), -1));
						unset($listener1);
					}
				}
				$ui->get_closureSingleExpr()->get_onClick()->__listenersInUse = false;
			}
		}
		$this->assert->isTrue($ui->get_closureSingleExprClicked(), null, _hx_anonymous(array("fileName" => "SignalValueTest.hx", "lineNumber" => 43, "className" => "SignalValueTest", "methodName" => "closureWithSingleExprBody")));
		$GLOBALS['%s']->pop();
	}
	static function __meta__() { $args = func_get_args(); return call_user_func_array(self::$__meta__, $args); }
	static $__meta__;
	static $__rtti = "<class path=\"SignalValueTest\" params=\"\">\x0A\x09<extends path=\"hunit.TestCase\"/>\x0A\x09<simple public=\"1\" set=\"method\" line=\"15\">\x0A\x09\x09<f a=\"\"><x path=\"Void\"/></f>\x0A\x09\x09<meta><m n=\"test\"/></meta>\x0A\x09</simple>\x0A\x09<closureWithBlockBody public=\"1\" set=\"method\" line=\"26\">\x0A\x09\x09<f a=\"\"><x path=\"Void\"/></f>\x0A\x09\x09<meta><m n=\"test\"/></meta>\x0A\x09</closureWithBlockBody>\x0A\x09<closureWithSingleExprBody public=\"1\" set=\"method\" line=\"37\">\x0A\x09\x09<f a=\"\"><x path=\"Void\"/></f>\x0A\x09\x09<meta><m n=\"test\"/></meta>\x0A\x09</closureWithSingleExprBody>\x0A\x09<new public=\"1\" set=\"method\" line=\"11\"><f a=\"\"><x path=\"Void\"/></f></new>\x0A\x09<meta>\x0A\x09\x09<m n=\":directlyUsed\"/>\x0A\x09\x09<m n=\":build\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\x0A\x09\x09<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\x0A\x09\x09<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\x0A\x09</meta>\x0A</class>";
	static $__properties__ = array("set_assert" => "set_assert","set_match" => "set_match");
	function __toString() { return 'SignalValueTest'; }
}
SignalValueTest::$__meta__ = _hx_anonymous(array("fields" => _hx_anonymous(array("simple" => _hx_anonymous(array("test" => null)), "closureWithBlockBody" => _hx_anonymous(array("test" => null)), "closureWithSingleExprBody" => _hx_anonymous(array("test" => null))))));
