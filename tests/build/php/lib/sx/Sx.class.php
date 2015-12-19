<?php

class sx_Sx {
	public function __construct() { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.Sx::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}}
	static $dipFactor = 1;
	static $pixelSnapping = false;
	static $__backendManager;
	static $theme;
	static $__root;
	static $__onFrame;
	static $__skins;
	static $__initTasks;
	static function __readyCallback() { $args = func_get_args(); return call_user_func_array(self::$__readyCallback, $args); }
	static $__readyCallback;
	static function toDip($px) {
		$GLOBALS['%s']->push("sx.Sx::toDip");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $px / sx_Sx::$dipFactor;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function toPx($dip) {
		$GLOBALS['%s']->push("sx.Sx::toPx");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $dip * sx_Sx::$dipFactor;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function snap($value) {
		$GLOBALS['%s']->push("sx.Sx::snap");
		$__hx__spos = $GLOBALS['%s']->length;
		if(sx_Sx::$pixelSnapping) {
			$value = Math::round($value);
		}
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	static function setBackendManger($manager) {
		$GLOBALS['%s']->push("sx.Sx::setBackendManger");
		$__hx__spos = $GLOBALS['%s']->length;
		if(sx_Sx::$__backendManager !== null) {
			throw new HException(new sx_exceptions_InvalidBackendException("Backend manager is already set.", _hx_anonymous(array("fileName" => "Sx.hx", "lineNumber" => 97, "className" => "sx.Sx", "methodName" => "setBackendManger"))));
		}
		sx_Sx::$__backendManager = $manager;
		$GLOBALS['%s']->pop();
	}
	static function registerSkin($name, $factory) {
		$GLOBALS['%s']->push("sx.Sx::registerSkin");
		$__hx__spos = $GLOBALS['%s']->length;
		sx_Sx::$__skins->set($name, $factory);
		$GLOBALS['%s']->pop();
	}
	static function addInitTask($task) {
		$GLOBALS['%s']->push("sx.Sx::addInitTask");
		$__hx__spos = $GLOBALS['%s']->length;
		sx_Sx::$__initTasks->push($task);
		$GLOBALS['%s']->pop();
	}
	static function init($readyCallback) {
		$GLOBALS['%s']->push("sx.Sx::init");
		$__hx__spos = $GLOBALS['%s']->length;
		sx_Sx::$__readyCallback = $readyCallback;
		if(sx_Sx::$__backendManager === null) {
			sx_Sx::$__backendManager = new sx_backend_dummy_BackendManager();
		}
		if(sx_Sx::$__initTasks->length === 0) {
			sx_tween_Tweener::$__time = sx_tween_Tweener::getTime() - sx_tween_Tweener::$__totalPausedTime;
			sx_Sx::$__backendManager->setupPointerDevices();
			sx_Sx::$__backendManager->setupFrames();
			sx_Sx::__readyCallback();
		} else {
			$tasks = sx_Sx::$__initTasks->copy();
			{
				$_g = 0;
				while($_g < $tasks->length) {
					$task = $tasks[$_g];
					++$_g;
					call_user_func_array($task, array(sx_Sx_0($_g, $readyCallback, $task, $tasks)));
					unset($task);
				}
			}
		}
		$GLOBALS['%s']->pop();
	}
	static function skin($name) {
		$GLOBALS['%s']->push("sx.Sx::skin");
		$__hx__spos = $GLOBALS['%s']->length;
		$factory = sx_Sx::$__skins->get($name);
		if($factory === null) {
			$GLOBALS['%s']->pop();
			return null;
		} else {
			$tmp = call_user_func($factory);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function dropSkins() {
		$GLOBALS['%s']->push("sx.Sx::dropSkins");
		$__hx__spos = $GLOBALS['%s']->length;
		sx_Sx::$__skins = new haxe_ds_StringMap();
		$GLOBALS['%s']->pop();
	}
	static function frame() {
		$GLOBALS['%s']->push("sx.Sx::frame");
		$__hx__spos = $GLOBALS['%s']->length;
		if(sx_Sx::$__onFrame !== null && sx_Sx::$__onFrame->__listeners->length > 0) {
			if(sx_Sx::$__onFrame->__listenersInUse) {
				{
					$_g = 0;
					$_g1 = sx_Sx::$__onFrame->__listeners;
					while($_g < $_g1->length) {
						$listener = $_g1[$_g];
						++$_g;
						call_user_func($listener);
						unset($listener);
					}
				}
				false;
			} else {
				sx_Sx::$__onFrame->__listenersInUse = true;
				{
					$_g2 = 0;
					$_g11 = sx_Sx::$__onFrame->__listeners;
					while($_g2 < $_g11->length) {
						$listener1 = $_g11[$_g2];
						++$_g2;
						call_user_func($listener1);
						unset($listener1);
					}
				}
				sx_Sx::$__onFrame->__listenersInUse = false;
			}
		}
		sx_tween_Tweener::update();
		$GLOBALS['%s']->pop();
	}
	static function __doneInitTask($task) {
		$GLOBALS['%s']->push("sx.Sx::__doneInitTask");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$_g1 = 0;
			$_g = sx_Sx::$__initTasks->length;
			while($_g1 < $_g) {
				$i = $_g1++;
				if(Reflect::compareMethods(sx_Sx::$__initTasks[$i], $task)) {
					sx_Sx::$__initTasks->splice($i, 1);
					break;
				}
				unset($i);
			}
		}
		if(sx_Sx::$__initTasks->length === 0) {
			sx_tween_Tweener::$__time = sx_tween_Tweener::getTime() - sx_tween_Tweener::$__totalPausedTime;
			sx_Sx::$__backendManager->setupPointerDevices();
			sx_Sx::$__backendManager->setupFrames();
			sx_Sx::__readyCallback();
		}
		$GLOBALS['%s']->pop();
	}
	static function __initializationFinished() {
		$GLOBALS['%s']->push("sx.Sx::__initializationFinished");
		$__hx__spos = $GLOBALS['%s']->length;
		sx_tween_Tweener::$__time = sx_tween_Tweener::getTime() - sx_tween_Tweener::$__totalPausedTime;
		sx_Sx::$__backendManager->setupPointerDevices();
		sx_Sx::$__backendManager->setupFrames();
		sx_Sx::__readyCallback();
		$GLOBALS['%s']->pop();
	}
	static function get_backendManager() {
		$GLOBALS['%s']->push("sx.Sx::get_backendManager");
		$__hx__spos = $GLOBALS['%s']->length;
		if(sx_Sx::$__backendManager === null) {
			sx_Sx::$__backendManager = new sx_backend_dummy_BackendManager();
		}
		{
			$tmp = sx_Sx::$__backendManager;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function get_root() {
		$GLOBALS['%s']->push("sx.Sx::get_root");
		$__hx__spos = $GLOBALS['%s']->length;
		if(sx_Sx::$__root === null) {
			$tmp = sx_Sx::get_backendManager()->getRoot();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = sx_Sx::$__root;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function set_root($value) {
		$GLOBALS['%s']->push("sx.Sx::set_root");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = sx_Sx::$__root = $value;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function get_stageWidth() {
		$GLOBALS['%s']->push("sx.Sx::get_stageWidth");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = sx_Sx::get_backendManager()->getRoot()->get_width();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function get_stageHeight() {
		$GLOBALS['%s']->push("sx.Sx::get_stageHeight");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = sx_Sx::get_backendManager()->getRoot()->get_height();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function get_onFrame() {
		$GLOBALS['%s']->push("sx.Sx::get_onFrame");
		$__hx__spos = $GLOBALS['%s']->length;
		if(sx_Sx::$__onFrame === null) {
			$tmp = sx_Sx::$__onFrame = new sx_signals_Signal();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = sx_Sx::$__onFrame;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static $__properties__ = array("get_stageHeight" => "get_stageHeight","get_stageWidth" => "get_stageWidth","get_onFrame" => "get_onFrame","set_root" => "set_root","get_root" => "get_root","get_backendManager" => "get_backendManager");
	function __toString() { return 'sx.Sx'; }
}
sx_Sx::$__skins = new haxe_ds_StringMap();
sx_Sx::$__initTasks = (new _hx_array(array()));
function sx_Sx_0(&$_g, &$readyCallback, &$task, &$tasks) {
	{
		$a1 = $task;
		return array(new _hx_lambda(array(&$_g, &$a1, &$readyCallback, &$task, &$tasks), "sx_Sx_1"), 'execute');
	}
}
function sx_Sx_1(&$_g, &$a1, &$readyCallback, &$task, &$tasks) {
	{
		$GLOBALS['%s']->push("sx.Sx::get_onFrame@142");
		$__hx__spos2 = $GLOBALS['%s']->length;
		sx_Sx::__doneInitTask($a1);
		$GLOBALS['%s']->pop();
	}
}
