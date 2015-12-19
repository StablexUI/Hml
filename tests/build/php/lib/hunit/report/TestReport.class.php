<?php

class hunit_report_TestReport {
	public function __construct($writer) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.report.TestReport::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->assertionCount = 0;
		$this->spentTime = 0;
		$this->endTime = 0;
		$this->startTime = 0;
		$this->cases = new HList();
		$this->fails = new HList();
		$this->warnings = new HList();
		$this->successful = new HList();
		$this->skipped = new HList();
		$this->notices = new HList();
		$this->writer = $writer;
		$GLOBALS['%s']->pop();
	}}
	public $startTime;
	public $endTime;
	public $spentTime;
	public $writer;
	public $cases;
	public $fails;
	public $warnings;
	public $successful;
	public $skipped;
	public $notices;
	public $assertionCount;
	public function addFail($testCase, $test, $e) {
		$GLOBALS['%s']->push("hunit.report.TestReport::addFail");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->fails->add(_hx_anonymous(array("caseName" => Type::getClassName(Type::getClass($testCase)), "testName" => $test, "exception" => $e)));
		$GLOBALS['%s']->pop();
	}
	public function addSuccess($testCase, $test) {
		$GLOBALS['%s']->push("hunit.report.TestReport::addSuccess");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->successful->add(_hx_anonymous(array("caseName" => Type::getClassName(Type::getClass($testCase)), "testName" => $test)));
		$GLOBALS['%s']->pop();
	}
	public function addWarning($testCase, $test, $warning) {
		$GLOBALS['%s']->push("hunit.report.TestReport::addWarning");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->warnings->add(_hx_anonymous(array("caseName" => Type::getClassName(Type::getClass($testCase)), "testName" => $test, "warning" => $warning)));
		$GLOBALS['%s']->pop();
	}
	public function addSkip($testCase, $test, $depends) {
		$GLOBALS['%s']->push("hunit.report.TestReport::addSkip");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->skipped->add(_hx_anonymous(array("caseName" => Type::getClassName(Type::getClass($testCase)), "testName" => $test, "depends" => $depends)));
		$GLOBALS['%s']->pop();
	}
	public function addNotice($testCase, $test, $message, $pos) {
		$GLOBALS['%s']->push("hunit.report.TestReport::addNotice");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->notices->add(_hx_anonymous(array("caseName" => Type::getClassName(Type::getClass($testCase)), "testName" => $test, "message" => $message, "pos" => $pos)));
		$GLOBALS['%s']->pop();
	}
	public function output() {
		$GLOBALS['%s']->push("hunit.report.TestReport::output");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->writer->write($this);
		$GLOBALS['%s']->pop();
	}
	public function getSummary() {
		$GLOBALS['%s']->push("hunit.report.TestReport::getSummary");
		$__hx__spos = $GLOBALS['%s']->length;
		$failed = $this->fails->length;
		$warned = $this->warnings->length;
		$passed = $warned + $this->successful->length;
		$total = $failed + $passed;
		$failedMsg = null;
		if($failed === 0) {
			$failedMsg = "";
		} else {
			$failedMsg = ", " . _hx_string_rec($failed, "") . " failure" . _hx_string_or_null(((($failed === 1) ? "" : "s")));
		}
		$warnedMsg = null;
		if($warned === 0) {
			$warnedMsg = "";
		} else {
			$warnedMsg = ", " . _hx_string_rec($warned, "") . " warning" . _hx_string_or_null(((($warned === 1) ? "" : "s")));
		}
		$skippedMsg = null;
		if($this->skipped->length === 0) {
			$skippedMsg = "";
		} else {
			$skippedMsg = ", " . _hx_string_rec($this->skipped->length, "") . " skipped";
		}
		$summary = "Time: " . _hx_string_rec($this->spentTime, "") . " seconds.\x0A\x0A";
		if($this->fails->length === 0 && $this->warnings->length === 0 && $this->skipped->length === 0) {
			$summary .= "OK (" . _hx_string_rec($total, "") . " tests, " . _hx_string_rec($this->assertionCount, "") . " assertions)";
		} else {
			if($this->fails->length === 0) {
				$summary .= "OK, but with risky tests! (" . _hx_string_rec($total, "") . " tests, " . _hx_string_rec($this->assertionCount, "") . " assertions" . _hx_string_or_null($warnedMsg) . _hx_string_or_null($skippedMsg) . ")";
			} else {
				$summary .= "FAILURES! (" . _hx_string_rec($total, "") . " tests" . _hx_string_or_null($failedMsg) . _hx_string_or_null($warnedMsg) . _hx_string_or_null($skippedMsg) . ")";
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $summary;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_endTime($endTime) {
		$GLOBALS['%s']->push("hunit.report.TestReport::set_endTime");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->spentTime = Math::round(($endTime - $this->startTime) * 1000) / 1000;
		{
			$tmp = $this->endTime = $endTime;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_testCount() {
		$GLOBALS['%s']->push("hunit.report.TestReport::get_testCount");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->successful->length + $this->warnings->length + $this->fails->length + $this->skipped->length;
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
	static $__properties__ = array("get_testCount" => "get_testCount","set_endTime" => "set_endTime");
	function __toString() { return 'hunit.report.TestReport'; }
}
