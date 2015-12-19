<?php

class sx_tween_Actuator {
	public function __construct($startTime, $duration, $setValuesFn, $setEndValuesFn) {
		if(!isset($this->__ease)) $this->__ease = array(new _hx_lambda(array(&$this, &$duration, &$setEndValuesFn, &$setValuesFn, &$startTime), "sx_tween_Actuator_0"), 'execute');
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.tween.Actuator::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->done = false;
		$this->__duration = $duration;
		$this->startTime = $startTime;
		$this->__setValuesFn = $setValuesFn;
		$this->__setEndValuesFn = $setEndValuesFn;
		$GLOBALS['%s']->pop();
	}}
	public $startTime;
	public $done;
	public $__duration;
	public $__setValuesFn;
	public $__setEndValuesFn;
	public $__onUpdate;
	public $__onComplete;
	public function delay($offset) {
		$GLOBALS['%s']->push("sx.tween.Actuator::delay");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->startTime += $offset;
		{
			$GLOBALS['%s']->pop();
			return $this;
		}
		$GLOBALS['%s']->pop();
	}
	public function ease($fn) {
		$GLOBALS['%s']->push("sx.tween.Actuator::ease");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__ease = $fn;
		{
			$GLOBALS['%s']->pop();
			return $this;
		}
		$GLOBALS['%s']->pop();
	}
	public function stop() {
		$GLOBALS['%s']->push("sx.tween.Actuator::stop");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->done = true;
		$GLOBALS['%s']->pop();
	}
	public function complete() {
		$GLOBALS['%s']->push("sx.tween.Actuator::complete");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__setEndValuesFn();
		$this->done = true;
		if($this->__onComplete !== null) {
			$this->__onComplete();
		}
		$GLOBALS['%s']->pop();
	}
	public function onUpdate($fn) {
		$GLOBALS['%s']->push("sx.tween.Actuator::onUpdate");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__onUpdate = $fn;
		{
			$GLOBALS['%s']->pop();
			return $this;
		}
		$GLOBALS['%s']->pop();
	}
	public function onComplete($fn) {
		$GLOBALS['%s']->push("sx.tween.Actuator::onComplete");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__onComplete = $fn;
		{
			$GLOBALS['%s']->pop();
			return $this;
		}
		$GLOBALS['%s']->pop();
	}
	public function __update($currentTime) {
		$GLOBALS['%s']->push("sx.tween.Actuator::__update");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->done) {
			$GLOBALS['%s']->pop();
			return;
		}
		$time = $currentTime - $this->startTime;
		if($time < 0) {
			$GLOBALS['%s']->pop();
			return;
		}
		if($time >= $this->__duration) {
			$time = $this->__duration;
			$this->done = true;
			$this->__setEndValuesFn();
		} else {
			$value = $this->__ease($time / $this->__duration);
			$this->__setValuesFn($value);
		}
		if($this->__onUpdate !== null) {
			$this->__onUpdate();
		}
		if($this->done && $this->__onComplete !== null) {
			$this->__onComplete();
		}
		$GLOBALS['%s']->pop();
	}
	public function __ease($t) { return call_user_func_array($this->__ease, array($t)); }
	public $__ease = null;
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
	function __toString() { return 'sx.tween.Actuator'; }
}
function sx_tween_Actuator_0(&$__hx__this, &$duration, &$setEndValuesFn, &$setValuesFn, &$startTime, $t) {
	{
		$GLOBALS['%s']->push("sx.tween.Actuator::new");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$GLOBALS['%s']->pop();
			return $t;
		}
		$GLOBALS['%s']->pop();
	}
}
