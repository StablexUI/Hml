<?php

class hunit_TestSuite {
	public function __construct($reportWriter = null, $printer = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.TestSuite::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->shutDownStandaloneFlashPlayer = false;
		$this->groups = (new _hx_array(array()));
		$this->excludeGroups = (new _hx_array(array()));
		$this->exclude = (new _hx_array(array()));
		if($printer === null) {
			$printer = (isset(hunit_Utils::$hprint) ? hunit_Utils::$hprint: array("hunit_Utils", "hprint"));
		}
		$this->printer = $printer;
		if($reportWriter === null) {
			$reportWriter = new hunit_report_DefaultWriter($printer);
		}
		$this->reportWriter = $reportWriter;
		$this->cases = (new _hx_array(array()));
		$this->report = $this->createReport();
		$GLOBALS['%s']->pop();
	}}
	public $shutDownStandaloneFlashPlayer;
	public $report;
	public $groups;
	public $excludeGroups;
	public $exclude;
	public $state;
	public $cases;
	public $originalTrace;
	public $printer;
	public $executeTestCallStack;
	public $reportWriter;
	public function add($testCase) {
		$GLOBALS['%s']->push("hunit.TestSuite::add");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->cases->push($testCase);
		$GLOBALS['%s']->pop();
	}
	public function run() {
		$GLOBALS['%s']->push("hunit.TestSuite::run");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->cases->length === 0) {
			$this->printer("\x0ANo test cases added to test suite.\x0A\x0A");
			{
				$GLOBALS['%s']->pop();
				return;
			}
		}
		$this->redirectTraces();
		$this->report->startTime = haxe_Timer::stamp();
		$this->printHeader();
		$total = 1;
		{
			$_g = 0;
			$_g1 = hunit_Utils::filterCases($this->cases, $this->exclude);
			while($_g < $_g1->length) {
				$testCase = $_g1[$_g];
				++$_g;
				try {
					$data = new hunit_utils_TestCaseData($testCase);
					$this->onCaseBegin($testCase, $data);
					if($data->get_totalTestCount() === 0) {
						$cls = Type::getClassName(Type::getClass($testCase));
						$this->report->addWarning($testCase, "<none>", new hunit_warnings_NoTestsWarning("" . _hx_string_or_null($cls) . " does not contain any tests."));
						unset($cls);
					} else {
						$runQueue = $data->getTests($this->groups, $this->excludeGroups);
						while($runQueue->length > 0) {
							$test = $runQueue->shift();
							if(_hx_mod($total, 80) === 0) {
								$this->another80Tests();
							}
							$passed = $this->executeTest($testCase, $test);
							if(!$passed) {
								$runQueue = $this->skipDependent($testCase, $test, $runQueue);
							}
							$total++;
							unset($test,$passed);
						}
						unset($runQueue);
					}
					$this->onCaseEnd($testCase);
					unset($data);
				}catch(Exception $__hx__e) {
					$_ex_ = ($__hx__e instanceof HException) ? $__hx__e->e : $__hx__e;
					$e = $_ex_;
					{
						$GLOBALS['%e'] = (new _hx_array(array()));
						while($GLOBALS['%s']->length >= $__hx__spos) {
							$GLOBALS['%e']->unshift($GLOBALS['%s']->pop());
						}
						$GLOBALS['%s']->push($GLOBALS['%e'][0]);
						$this->printer("E");
						$this->report->addFail($testCase, "<none>", _Exception_HException::wrap($e, _hx_anonymous(array("fileName" => "TestSuite.hx", "lineNumber" => 161, "className" => "hunit.TestSuite", "methodName" => "run"))));
					}
				}
				unset($testCase,$e);
			}
		}
		$this->report->set_endTime(haxe_Timer::stamp());
		$this->printer("\x0A\x0A");
		$this->report->output();
		$this->printSummary();
		$this->restoreOriginalTrace();
		$GLOBALS['%s']->pop();
	}
	public function createReport() {
		$GLOBALS['%s']->push("hunit.TestSuite::createReport");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new hunit_report_TestReport($this->reportWriter);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function createTestState($testCase, $testName) {
		$GLOBALS['%s']->push("hunit.TestSuite::createTestState");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new hunit_TestState($testCase, $testName, $this->report, (isset($this->printer) ? $this->printer: array($this, "printer")));
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function redirectTraces() {
		$GLOBALS['%s']->push("hunit.TestSuite::redirectTraces");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->originalTrace = (isset(haxe_Log::$trace) ? haxe_Log::$trace: array("haxe_Log", "trace"));
		{
			$a1 = (isset($this->printer) ? $this->printer: array($this, "printer"));
			haxe_Log::$trace = array(new _hx_lambda(array(&$a1), "hunit_TestSuite_0"), 'execute');
		}
		$GLOBALS['%s']->pop();
	}
	public function restoreOriginalTrace() {
		$GLOBALS['%s']->push("hunit.TestSuite::restoreOriginalTrace");
		$__hx__spos = $GLOBALS['%s']->length;
		haxe_Log::$trace = (isset($this->originalTrace) ? $this->originalTrace: array($this, "originalTrace"));
		$GLOBALS['%s']->pop();
	}
	public function onCaseBegin($testCase, $data) {
		$GLOBALS['%s']->push("hunit.TestSuite::onCaseBegin");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->report->cases->add($testCase);
		$testCase->setupTestCase();
		$GLOBALS['%s']->pop();
	}
	public function onCaseEnd($testCase) {
		$GLOBALS['%s']->push("hunit.TestSuite::onCaseEnd");
		$__hx__spos = $GLOBALS['%s']->length;
		$testCase->tearDownTestCase();
		$GLOBALS['%s']->pop();
	}
	public function executeTest($testCase, $test) {
		$GLOBALS['%s']->push("hunit.TestSuite::executeTest");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->executeTestCallStack = haxe_CallStack::callStack();
		$this->beforeTestStart($testCase, $test->name);
		$testCase->setup();
		$passed = false;
		try {
			if($test->isIncomplete) {
				$this->state->warn(new hunit_warnings_IncompleteTestWarning($test->incompleteMsg));
			} else {
				try {
					Reflect::callMethod($testCase, $test->callback, (new _hx_array(array())));
					$this->validateTest($test, null, null);
				}catch(Exception $__hx__e) {
					$_ex_ = ($__hx__e instanceof HException) ? $__hx__e->e : $__hx__e;
					if(($e = $_ex_) instanceof hunit_exceptions_TestFailException){
						$GLOBALS['%e'] = (new _hx_array(array()));
						while($GLOBALS['%s']->length >= $__hx__spos) {
							$GLOBALS['%e']->unshift($GLOBALS['%s']->pop());
						}
						$GLOBALS['%s']->push($GLOBALS['%e'][0]);
						throw new HException($e);
					}
					else { $e1 = $_ex_;
					{
						$GLOBALS['%e'] = (new _hx_array(array()));
						while($GLOBALS['%s']->length >= $__hx__spos) {
							$GLOBALS['%e']->unshift($GLOBALS['%s']->pop());
						}
						$GLOBALS['%s']->push($GLOBALS['%e'][0]);
						$this->validateTest($test, $e1, haxe_CallStack::exceptionStack());
					}}
				}
			}
			if(!$this->state->warned) {
				$this->state->success();
				$passed = true;
				$this->printer(".");
			} else {
				$this->printer("W");
			}
			$this->state->finalize();
		}catch(Exception $__hx__e) {
			$_ex_ = ($__hx__e instanceof HException) ? $__hx__e->e : $__hx__e;
			if(($e2 = $_ex_) instanceof _Exception_HException){
				$GLOBALS['%e'] = (new _hx_array(array()));
				while($GLOBALS['%s']->length >= $__hx__spos) {
					$GLOBALS['%e']->unshift($GLOBALS['%s']->pop());
				}
				$GLOBALS['%s']->push($GLOBALS['%e'][0]);
				$this->state->fail($e2);
				$this->printer(((Std::is($e2, _hx_qtype("hunit.exceptions.InvalidTestException"))) ? "E" : "F"));
			} else throw $__hx__e;;
		}
		$testCase->tearDown();
		$this->afterTestDone($testCase);
		{
			$GLOBALS['%s']->pop();
			return $passed;
		}
		$GLOBALS['%s']->pop();
	}
	public function beforeTestStart($testCase, $test) {
		$GLOBALS['%s']->push("hunit.TestSuite::beforeTestStart");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->state = $this->createTestState($testCase, $test);
		$testCase->__hu_state = $this->state;
		$GLOBALS['%s']->pop();
	}
	public function afterTestDone($testCase) {
		$GLOBALS['%s']->push("hunit.TestSuite::afterTestDone");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->state = null;
		$GLOBALS['%s']->pop();
	}
	public function validateTest($test, $exception = null, $exceptionStack = null) {
		$GLOBALS['%s']->push("hunit.TestSuite::validateTest");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->state->pendingExceptions->length > 0) {
			throw new HException($this->state->pendingExceptions[0]);
		}
		if($exception !== null) {
			$this->state->validateException($exception, $this->executeTestCallStack, $exceptionStack);
		}
		if(null == $this->state->expectedCalls) throw new HException('null iterable');
		$__hx__it = $this->state->expectedCalls->iterator();
		while($__hx__it->hasNext()) {
			unset($expect);
			$expect = $__hx__it->next();
			$expect->validate();
		}
		if($this->state->expectingException() && !$this->state->expectedException->satisfied) {
			throw new HException(new hunit_exceptions_NoExpectedException($this->state->expectedException->match, $this->state->expectedException->pos));
		}
		if(!$test->isIncomplete && !$this->state->madeAssertions()) {
			$this->state->warn(new hunit_warnings_NoAssertionsWarning("This test did not perform any assertions"));
		}
		$GLOBALS['%s']->pop();
	}
	public function skipDependent($testCase, $failed, $runQueue) {
		$GLOBALS['%s']->push("hunit.TestSuite::skipDependent");
		$__hx__spos = $GLOBALS['%s']->length;
		$dependent = hunit_utils_TestCaseData::getDependent($failed, $runQueue, null);
		{
			$_g = 0;
			while($_g < $dependent->length) {
				$test = $dependent[$_g];
				++$_g;
				$this->printer("S");
				$runQueue->remove($test);
				$this->report->addSkip($testCase, $test->name, $test->depends);
				unset($test);
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $runQueue;
		}
		$GLOBALS['%s']->pop();
	}
	public function version() {
		$GLOBALS['%s']->push("hunit.TestSuite::version");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$GLOBALS['%s']->pop();
			return "0.1.32";
		}
		$GLOBALS['%s']->pop();
	}
	public function printHeader() {
		$GLOBALS['%s']->push("hunit.TestSuite::printHeader");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->printer("HUnit " . _hx_string_or_null($this->version()) . "\x0A\x0A");
		$GLOBALS['%s']->pop();
	}
	public function printSummary() {
		$GLOBALS['%s']->push("hunit.TestSuite::printSummary");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->printer(_hx_string_or_null($this->report->getSummary()) . "\x0A");
		$this->printer("\x0A");
		$GLOBALS['%s']->pop();
	}
	public function another80Tests() {
		$GLOBALS['%s']->push("hunit.TestSuite::another80Tests");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->printer("\x0A");
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
	function __toString() { return 'hunit.TestSuite'; }
}
function hunit_TestSuite_0(&$a1, $a2, $a3) {
	{
		$GLOBALS['%s']->push("hunit.TestSuite::redirectTraces@208");
		$__hx__spos2 = $GLOBALS['%s']->length;
		hunit_Utils::printTrace($a1, $a2, $a3);
		$GLOBALS['%s']->pop();
	}
}
