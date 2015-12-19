<?php

class sx_properties_AutoSize {
	public function __construct($byDefault = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.properties.AutoSize::new");
		$__hx__spos = $GLOBALS['%s']->length;
		if($byDefault === null) {
			$byDefault = false;
		}
		$this->weak = false;
		$this->__height = false;
		$this->__width = false;
		$this->__width = $byDefault;
		$this->__height = $byDefault;
		$this->onChange = new sx_signals_Signal();
		$GLOBALS['%s']->pop();
	}}
	public $__width;
	public $__height;
	public $onChange;
	public $weak;
	public function either() {
		$GLOBALS['%s']->push("sx.properties.AutoSize::either");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->get_width() || $this->get_height();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function neither() {
		$GLOBALS['%s']->push("sx.properties.AutoSize::neither");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = !$this->get_width() && !$this->get_height();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function both() {
		$GLOBALS['%s']->push("sx.properties.AutoSize::both");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->get_width() && $this->get_height();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set($width, $height) {
		$GLOBALS['%s']->push("sx.properties.AutoSize::set");
		$__hx__spos = $GLOBALS['%s']->length;
		$widthChanged = $this->__width !== $width;
		$heightChanged = $this->__height !== $height;
		$this->__width = $width;
		$this->__height = $height;
		if($widthChanged || $heightChanged) {
			if($this->onChange !== null && $this->onChange->__listeners->length > 0) {
				if($this->onChange->__listenersInUse) {
					{
						$_g = 0;
						$_g1 = $this->onChange->__listeners;
						while($_g < $_g1->length) {
							$listener = $_g1[$_g];
							++$_g;
							call_user_func_array($listener, array($widthChanged, $heightChanged));
							unset($listener);
						}
					}
					false;
				} else {
					$this->onChange->__listenersInUse = true;
					{
						$_g2 = 0;
						$_g11 = $this->onChange->__listeners;
						while($_g2 < $_g11->length) {
							$listener1 = $_g11[$_g2];
							++$_g2;
							call_user_func_array($listener1, array($widthChanged, $heightChanged));
							unset($listener1);
						}
					}
					$this->onChange->__listenersInUse = false;
				}
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function copyValueFrom($autoSize) {
		$GLOBALS['%s']->push("sx.properties.AutoSize::copyValueFrom");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->set($autoSize->get_width(), $autoSize->get_height());
		if($autoSize->weak) {
			$autoSize->dispose();
		}
		{
			$GLOBALS['%s']->pop();
			return $this;
		}
		$GLOBALS['%s']->pop();
	}
	public function dispose() {
		$GLOBALS['%s']->push("sx.properties.AutoSize::dispose");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function __invokeOnChange($horizontalChanged, $verticalChanged) {
		$GLOBALS['%s']->push("sx.properties.AutoSize::__invokeOnChange");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->onChange !== null && $this->onChange->__listeners->length > 0) {
			if($this->onChange->__listenersInUse) {
				{
					$_g = 0;
					$_g1 = $this->onChange->__listeners;
					while($_g < $_g1->length) {
						$listener = $_g1[$_g];
						++$_g;
						call_user_func_array($listener, array($horizontalChanged, $verticalChanged));
						unset($listener);
					}
				}
				false;
			} else {
				$this->onChange->__listenersInUse = true;
				{
					$_g2 = 0;
					$_g11 = $this->onChange->__listeners;
					while($_g2 < $_g11->length) {
						$listener1 = $_g11[$_g2];
						++$_g2;
						call_user_func_array($listener1, array($horizontalChanged, $verticalChanged));
						unset($listener1);
					}
				}
				$this->onChange->__listenersInUse = false;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function set_width($value) {
		$GLOBALS['%s']->push("sx.properties.AutoSize::set_width");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__width !== $value) {
			$this->__width = $value;
			if($this->onChange !== null && $this->onChange->__listeners->length > 0) {
				if($this->onChange->__listenersInUse) {
					{
						$_g = 0;
						$_g1 = $this->onChange->__listeners;
						while($_g < $_g1->length) {
							$listener = $_g1[$_g];
							++$_g;
							call_user_func_array($listener, array(true, false));
							unset($listener);
						}
					}
					false;
				} else {
					$this->onChange->__listenersInUse = true;
					{
						$_g2 = 0;
						$_g11 = $this->onChange->__listeners;
						while($_g2 < $_g11->length) {
							$listener1 = $_g11[$_g2];
							++$_g2;
							call_user_func_array($listener1, array(true, false));
							unset($listener1);
						}
					}
					$this->onChange->__listenersInUse = false;
				}
			}
		} else {
			$this->__width = $value;
		}
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_height($value) {
		$GLOBALS['%s']->push("sx.properties.AutoSize::set_height");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__height !== $value) {
			$this->__height = $value;
			if($this->onChange !== null && $this->onChange->__listeners->length > 0) {
				if($this->onChange->__listenersInUse) {
					{
						$_g = 0;
						$_g1 = $this->onChange->__listeners;
						while($_g < $_g1->length) {
							$listener = $_g1[$_g];
							++$_g;
							call_user_func_array($listener, array(false, true));
							unset($listener);
						}
					}
					false;
				} else {
					$this->onChange->__listenersInUse = true;
					{
						$_g2 = 0;
						$_g11 = $this->onChange->__listeners;
						while($_g2 < $_g11->length) {
							$listener1 = $_g11[$_g2];
							++$_g2;
							call_user_func_array($listener1, array(false, true));
							unset($listener1);
						}
					}
					$this->onChange->__listenersInUse = false;
				}
			}
		} else {
			$this->__height = $value;
		}
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_width() {
		$GLOBALS['%s']->push("sx.properties.AutoSize::get_width");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__width;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_height() {
		$GLOBALS['%s']->push("sx.properties.AutoSize::get_height");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__height;
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
	static $__properties__ = array("set_height" => "set_height","get_height" => "get_height","set_width" => "set_width","get_width" => "get_width");
	function __toString() { return 'sx.properties.AutoSize'; }
}
