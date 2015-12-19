<?php

class hunit_TestCase {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.TestCase::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->set_match(new hunit_match_MatchFactory());
		$this->set_assert(new hunit_assert_AssertFactory($this));
		$GLOBALS['%s']->pop();
	}}
	public $match;
	public $assert;
	public $__hu_state;
	public function setupTestCase() {
		$GLOBALS['%s']->push("hunit.TestCase::setupTestCase");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function setup() {
		$GLOBALS['%s']->push("hunit.TestCase::setup");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function tearDown() {
		$GLOBALS['%s']->push("hunit.TestCase::tearDown");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function tearDownTestCase() {
		$GLOBALS['%s']->push("hunit.TestCase::tearDownTestCase");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function expectException($match = null, $pos = null) {
		$GLOBALS['%s']->push("hunit.TestCase::expectException");
		$__hx__spos = $GLOBALS['%s']->length;
		if($match === null) {
			$match = new hunit_match_AnyMatch(null, null);
		}
		$this->__hu_state->set_expectedException(new hunit_exceptions_ExpectedExceptionData($match, $pos));
		$GLOBALS['%s']->pop();
	}
	public function notice($msg, $pos = null) {
		$GLOBALS['%s']->push("hunit.TestCase::notice");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__hu_state->notice($msg, $pos);
		$GLOBALS['%s']->pop();
	}
	public function set_match($match) {
		$GLOBALS['%s']->push("hunit.TestCase::set_match");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->match !== null) {
			throw new HException(new hunit_exceptions_InvalidTestException("Matcher factory already set", _hx_anonymous(array("fileName" => "TestCase.hx", "lineNumber" => 201, "className" => "hunit.TestCase", "methodName" => "set_match"))));
		}
		{
			$tmp = $this->match = $match;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_assert($assert) {
		$GLOBALS['%s']->push("hunit.TestCase::set_assert");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->assert !== null) {
			throw new HException(new hunit_exceptions_InvalidTestException("Assertion factory already set", _hx_anonymous(array("fileName" => "TestCase.hx", "lineNumber" => 216, "className" => "hunit.TestCase", "methodName" => "set_assert"))));
		}
		{
			$tmp = $this->assert = $assert;
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
	static $__rtti = "<class path=\"hunit.TestCase\" params=\"\">\x0A\x09<getMockData public=\"1\" set=\"method\" line=\"54\" static=\"1\">\x0A\x09\x09<f a=\"mock\">\x0A\x09\x09\x09<c path=\"hunit.mock.IMock\"/>\x0A\x09\x09\x09<c path=\"hunit.mock.MockData\"/>\x0A\x09\x09</f>\x0A\x09\x09<meta><m n=\":noCompletion\"/></meta>\x0A\x09</getMockData>\x0A\x09<match public=\"1\" set=\"accessor\"><c path=\"hunit.match.MatchFactory\"/></match>\x0A\x09<assert public=\"1\" set=\"accessor\"><c path=\"hunit.assert.AssertFactory\"/></assert>\x0A\x09<__hu_state public=\"1\">\x0A\x09\x09<t path=\"Null\"><c path=\"hunit.TestState\"/></t>\x0A\x09\x09<meta><m n=\":noCompletion\"/></meta>\x0A\x09</__hu_state>\x0A\x09<setupTestCase public=\"1\" set=\"method\" line=\"75\"><f a=\"\"><x path=\"Void\"/></f></setupTestCase>\x0A\x09<setup public=\"1\" set=\"method\" line=\"84\"><f a=\"\"><x path=\"Void\"/></f></setup>\x0A\x09<tearDown public=\"1\" set=\"method\" line=\"94\"><f a=\"\"><x path=\"Void\"/></f></tearDown>\x0A\x09<tearDownTestCase public=\"1\" set=\"method\" line=\"104\"><f a=\"\"><x path=\"Void\"/></f></tearDownTestCase>\x0A\x09<expectException public=\"1\" params=\"T\" set=\"method\" line=\"173\">\x0A\x09\x09<f a=\"?match:?pos\" v=\"null:\">\x0A\x09\x09\x09<x path=\"hunit.Match\"><c path=\"expectException.T\"/></x>\x0A\x09\x09\x09<t path=\"haxe.PosInfos\"/>\x0A\x09\x09\x09<x path=\"Void\"/>\x0A\x09\x09</f>\x0A\x09\x09<meta><m n=\":value\"><e>{match:null}</e></m></meta>\x0A\x09</expectException>\x0A\x09<notice public=\"1\" set=\"method\" line=\"187\"><f a=\"msg:?pos\">\x0A\x09<c path=\"String\"/>\x0A\x09<t path=\"haxe.PosInfos\"/>\x0A\x09<x path=\"Void\"/>\x0A</f></notice>\x0A\x09<set_match set=\"method\" line=\"198\">\x0A\x09\x09<f a=\"match\">\x0A\x09\x09\x09<c path=\"hunit.match.MatchFactory\"/>\x0A\x09\x09\x09<c path=\"hunit.match.MatchFactory\"/>\x0A\x09\x09</f>\x0A\x09\x09<meta><m n=\":noCompletion\"/></meta>\x0A\x09</set_match>\x0A\x09<set_assert set=\"method\" line=\"213\">\x0A\x09\x09<f a=\"assert\">\x0A\x09\x09\x09<c path=\"hunit.assert.AssertFactory\"/>\x0A\x09\x09\x09<c path=\"hunit.assert.AssertFactory\"/>\x0A\x09\x09</f>\x0A\x09\x09<meta><m n=\":noCompletion\"/></meta>\x0A\x09</set_assert>\x0A\x09<new public=\"1\" set=\"method\" line=\"64\"><f a=\"\"><x path=\"Void\"/></f></new>\x0A\x09<meta>\x0A\x09\x09<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\x0A\x09\x09<m n=\":access\"><e>hunit.mock.IMock</e></m>\x0A\x09\x09<m n=\":rtti\"/>\x0A\x09\x09<m n=\":keepSub\"/>\x0A\x09\x09<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\x0A\x09</meta>\x0A</class>";
	static function getMockData($mock) {
		$GLOBALS['%s']->push("hunit.TestCase::getMockData");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $mock->__hu_mock__;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static $__properties__ = array("set_assert" => "set_assert","set_match" => "set_match");
	function __toString() { return 'hunit.TestCase'; }
}
