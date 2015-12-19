<?php

class hunit_report_DefaultWriter implements hunit_report_IReportWriter{
	public function __construct($printer) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.report.DefaultWriter::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->itemsWriteCounter = 0;
		$this->printer = $printer;
		$GLOBALS['%s']->pop();
	}}
	public $itemsWriteCounter;
	public $printer;
	public function write($report) {
		$GLOBALS['%s']->push("hunit.report.DefaultWriter::write");
		$__hx__spos = $GLOBALS['%s']->length;
		if($report->notices->length > 0) {
			$this->printer("NOTICES:\x0A\x0A");
			if(null == $report->notices) throw new HException('null iterable');
			$__hx__it = $report->notices->iterator();
			while($__hx__it->hasNext()) {
				unset($notice);
				$notice = $__hx__it->next();
				$this->writeNotice($notice);
			}
		}
		$this->itemsWriteCounter = 0;
		if($report->fails->length > 0) {
			$this->printer("FAILURES:\x0A\x0A");
			if(null == $report->fails) throw new HException('null iterable');
			$__hx__it = $report->fails->iterator();
			while($__hx__it->hasNext()) {
				unset($fail);
				$fail = $__hx__it->next();
				$this->writeFail($fail);
			}
		}
		$this->itemsWriteCounter = 0;
		if($report->warnings->length > 0) {
			$this->printer("WARNINGS:\x0A\x0A");
			if(null == $report->warnings) throw new HException('null iterable');
			$__hx__it = $report->warnings->iterator();
			while($__hx__it->hasNext()) {
				unset($warning);
				$warning = $__hx__it->next();
				$this->writeWarning($warning);
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function writeFail($item) {
		$GLOBALS['%s']->push("hunit.report.DefaultWriter::writeFail");
		$__hx__spos = $GLOBALS['%s']->length;
		$pos = $item->{"exception"}->pos;
		$message = $item->{"exception"}->message;
		$e = $item->{"exception"};
		if(Std::is($e, _hx_qtype("hunit.exceptions.TestFailException"))) {
			if(Std::is($e, _hx_qtype("hunit.exceptions.UnexpectedCallException"))) {
				$pos = null;
				{
					$s = _hx_deref(($e))->stringStack();
					$message .= _hx_string_or_null(str_replace("\x0A", "\x0A\x09", $s));
				}
			}
		} else {
			$pos = null;
			$customMessage = false;
			if(Std::is($e, _hx_qtype("hunit.exceptions.UnexpectedException"))) {
				$e1 = null;
				$e1 = $e;
				$customMessage = true;
				if(Std::is($e1->original, _hx_qtype("_Exception.HException"))) {
					$message = "ERROR: " . _hx_string_or_null(_hx_deref(($e1->original))->toString());
				} else {
					$message = "ERROR: " . Std::string($e1);
				}
			}
			if(!$customMessage) {
				$message = "ERROR: " . _hx_string_or_null($e->message) . "\x0A\x0A" . _hx_string_or_null($e->toString());
			}
		}
		$this->writeItem($item->caseName, $item->testName, $message, $pos, null);
		$GLOBALS['%s']->pop();
	}
	public function writeWarning($item) {
		$GLOBALS['%s']->push("hunit.report.DefaultWriter::writeWarning");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->writeItem($item->caseName, $item->testName, $item->warning->message, null, null);
		$GLOBALS['%s']->pop();
	}
	public function writeNotice($item) {
		$GLOBALS['%s']->push("hunit.report.DefaultWriter::writeNotice");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->writeItem($item->caseName, $item->testName, $item->message, $item->pos, true);
		$GLOBALS['%s']->pop();
	}
	public function writeItem($caseName, $test, $message, $pos, $addPosToTestName = null) {
		$GLOBALS['%s']->push("hunit.report.DefaultWriter::writeItem");
		$__hx__spos = $GLOBALS['%s']->length;
		if($addPosToTestName === null) {
			$addPosToTestName = false;
		}
		$this->itemsWriteCounter++;
		$idx = $this->itemsWriteCounter;
		$posStr = null;
		if($pos === null) {
			$posStr = "";
		} else {
			$posStr = "" . _hx_string_or_null($pos->fileName) . ":" . _hx_string_rec($pos->lineNumber, "");
		}
		$this->printer("" . _hx_string_rec($idx, "") . ") " . _hx_string_or_null($caseName) . "::" . _hx_string_or_null($test) . "()" . _hx_string_or_null((hunit_report_DefaultWriter_0($this, $addPosToTestName, $caseName, $idx, $message, $pos, $posStr, $test))) . "\x0A");
		$this->printer("" . _hx_string_or_null($message) . "\x0A");
		$this->printer("\x0A");
		if($pos !== null && !$addPosToTestName) {
			$this->printer("\x09" . _hx_string_or_null($posStr) . "\x0A");
			$this->printer("\x0A");
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
	function __toString() { return 'hunit.report.DefaultWriter'; }
}
function hunit_report_DefaultWriter_0(&$__hx__this, &$addPosToTestName, &$caseName, &$idx, &$message, &$pos, &$posStr, &$test) {
	if($addPosToTestName) {
		return " at " . _hx_string_or_null($posStr);
	} else {
		return "";
	}
}
