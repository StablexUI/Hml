<?php

class sx_tween_Tweener {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.tween.Tweener::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->active = false;
		$this->__actuators = (new _hx_array(array()));
		$GLOBALS['%s']->pop();
	}}
	public $active;
	public $__actuators;
	public function stop() {
		$GLOBALS['%s']->push("sx.tween.Tweener::stop");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->active = false;
		{
			$_g = 0;
			$_g1 = $this->__actuators;
			while($_g < $_g1->length) {
				$actuator = $_g1[$_g];
				++$_g;
				$actuator->stop();
				unset($actuator);
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __update($currentTime) {
		$GLOBALS['%s']->push("sx.tween.Tweener::__update");
		$__hx__spos = $GLOBALS['%s']->length;
		$needRemoval = false;
		{
			$_g = 0;
			$_g1 = $this->__actuators;
			while($_g < $_g1->length) {
				$actuator = $_g1[$_g];
				++$_g;
				if($actuator->startTime < $currentTime) {
					$actuator->__update($currentTime);
					if($actuator->done) {
						$needRemoval = true;
					}
				}
				unset($actuator);
			}
		}
		if($needRemoval) {
			$i = 0;
			while($i < $this->__actuators->length) {
				if(_hx_array_get($this->__actuators, $i)->done) {
					$this->__actuators->splice($i, 1);
				} else {
					$i++;
				}
			}
			$this->active = $this->__actuators->length > 0;
		}
		$GLOBALS['%s']->pop();
	}
	public function __createActuator($duration, $setValuesFn, $setEndValuesFn) {
		$GLOBALS['%s']->push("sx.tween.Tweener::__createActuator");
		$__hx__spos = $GLOBALS['%s']->length;
		$actuator = new sx_tween_Actuator(sx_tween_Tweener::$__time, $duration, $setValuesFn, $setEndValuesFn);
		$this->__actuators->push($actuator);
		if(!$this->active) {
			$this->active = true;
			sx_tween_Tweener::$__tweeners->push($this);
		}
		{
			$GLOBALS['%s']->pop();
			return $actuator;
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
	static $__time = 0;
	static $__tweeners;
	static $__pausedAll = false;
	static $__pausedAllTime = 0;
	static $__totalPausedTime = 0;
	static function getTime() { return call_user_func(self::$getTime); }
	public static $getTime = null;
	static function pauseAll() {
		$GLOBALS['%s']->push("sx.tween.Tweener::pauseAll");
		$__hx__spos = $GLOBALS['%s']->length;
		if(sx_tween_Tweener::$__pausedAll) {
			$GLOBALS['%s']->pop();
			return;
		}
		sx_tween_Tweener::$__pausedAll = true;
		sx_tween_Tweener::$__time = sx_tween_Tweener::getTime() - sx_tween_Tweener::$__totalPausedTime;
		sx_tween_Tweener::$__pausedAllTime = sx_tween_Tweener::$__time;
		$GLOBALS['%s']->pop();
	}
	static function resumeAll() {
		$GLOBALS['%s']->push("sx.tween.Tweener::resumeAll");
		$__hx__spos = $GLOBALS['%s']->length;
		if(!sx_tween_Tweener::$__pausedAll) {
			$GLOBALS['%s']->pop();
			return;
		}
		sx_tween_Tweener::$__pausedAll = false;
		sx_tween_Tweener::$__time = sx_tween_Tweener::getTime() - sx_tween_Tweener::$__totalPausedTime;
		sx_tween_Tweener::$__totalPausedTime += sx_tween_Tweener::$__time - sx_tween_Tweener::$__pausedAllTime;
		sx_tween_Tweener::$__time = sx_tween_Tweener::getTime() - sx_tween_Tweener::$__totalPausedTime;
		$GLOBALS['%s']->pop();
	}
	static function stopAll() {
		$GLOBALS['%s']->push("sx.tween.Tweener::stopAll");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = 0;
		$_g1 = sx_tween_Tweener::$__tweeners;
		while($_g < $_g1->length) {
			$tweener = $_g1[$_g];
			++$_g;
			$tweener->stop();
			unset($tweener);
		}
		$GLOBALS['%s']->pop();
	}
	static function update() {
		$GLOBALS['%s']->push("sx.tween.Tweener::update");
		$__hx__spos = $GLOBALS['%s']->length;
		if(sx_tween_Tweener::$__pausedAll) {
			$GLOBALS['%s']->pop();
			return;
		}
		sx_tween_Tweener::$__time = sx_tween_Tweener::getTime() - sx_tween_Tweener::$__totalPausedTime;
		if(sx_tween_Tweener::$__tweeners->length === 0) {
			$GLOBALS['%s']->pop();
			return;
		}
		$needRemoval = false;
		{
			$_g = 0;
			$_g1 = sx_tween_Tweener::$__tweeners;
			while($_g < $_g1->length) {
				$tweener = $_g1[$_g];
				++$_g;
				{
					$currentTime = sx_tween_Tweener::$__time;
					$needRemoval1 = false;
					{
						$_g2 = 0;
						$_g11 = $tweener->__actuators;
						while($_g2 < $_g11->length) {
							$actuator = $_g11[$_g2];
							++$_g2;
							if($actuator->startTime < $currentTime) {
								$actuator->__update($currentTime);
								if($actuator->done) {
									$needRemoval1 = true;
								}
							}
							unset($actuator);
						}
						unset($_g2,$_g11);
					}
					if($needRemoval1) {
						$i = 0;
						while($i < $tweener->__actuators->length) {
							if(_hx_array_get($tweener->__actuators, $i)->done) {
								$tweener->__actuators->splice($i, 1);
							} else {
								$i++;
							}
						}
						$tweener->active = $tweener->__actuators->length > 0;
						unset($i);
					}
					unset($needRemoval1,$currentTime);
				}
				if(!$tweener->active) {
					$needRemoval = true;
				}
				unset($tweener);
			}
		}
		if($needRemoval) {
			$i1 = 0;
			while($i1 < sx_tween_Tweener::$__tweeners->length) {
				if(!_hx_array_get(sx_tween_Tweener::$__tweeners, $i1)->active) {
					sx_tween_Tweener::$__tweeners->splice($i1, 1);
				} else {
					$i1++;
				}
			}
		}
		$GLOBALS['%s']->pop();
	}
	static function initialize() {
		$GLOBALS['%s']->push("sx.tween.Tweener::initialize");
		$__hx__spos = $GLOBALS['%s']->length;
		sx_tween_Tweener::$__time = sx_tween_Tweener::getTime() - sx_tween_Tweener::$__totalPausedTime;
		$GLOBALS['%s']->pop();
	}
	static function __updateTime() {
		$GLOBALS['%s']->push("sx.tween.Tweener::__updateTime");
		$__hx__spos = $GLOBALS['%s']->length;
		sx_tween_Tweener::$__time = sx_tween_Tweener::getTime() - sx_tween_Tweener::$__totalPausedTime;
		$GLOBALS['%s']->pop();
	}
	static function get_pausedAll() {
		$GLOBALS['%s']->push("sx.tween.Tweener::get_pausedAll");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = sx_tween_Tweener::$__pausedAll;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static $__properties__ = array("get_pausedAll" => "get_pausedAll");
	function __toString() { return 'sx.tween.Tweener'; }
}
sx_tween_Tweener::$__tweeners = (new _hx_array(array()));
sx_tween_Tweener::$getTime = array(new _hx_lambda(array(), "sx_tween_Tweener_0"), 'execute');
function sx_tween_Tweener_0() {
	{
		$GLOBALS['%s']->push("sx.tween.Tweener::get_pausedAll@47");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = haxe_Timer::stamp();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
}
