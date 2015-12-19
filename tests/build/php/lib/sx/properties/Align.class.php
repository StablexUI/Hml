<?php

class sx_properties_Align {
	public function __construct($horizontal = null, $vertical = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.properties.Align::new");
		$__hx__spos = $GLOBALS['%s']->length;
		if($vertical === null) {
			$vertical = "none";
		}
		if($horizontal === null) {
			$horizontal = "none";
		}
		$this->weak = false;
		$this->__vertical = "none";
		$this->__horizontal = "none";
		$this->__horizontal = $horizontal;
		$this->__vertical = $vertical;
		$this->onChange = new sx_signals_Signal();
		$GLOBALS['%s']->pop();
	}}
	public $__horizontal;
	public $__vertical;
	public $onChange;
	public $weak;
	public function set($horizontal, $vertical) {
		$GLOBALS['%s']->push("sx.properties.Align::set");
		$__hx__spos = $GLOBALS['%s']->length;
		$horizontalChanged = $this->__horizontal !== $horizontal;
		$verticalChanged = $this->__vertical !== $vertical;
		$this->__horizontal = $horizontal;
		$this->__vertical = $vertical;
		if($horizontalChanged || $verticalChanged) {
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
		}
		$GLOBALS['%s']->pop();
	}
	public function copyValueFrom($align) {
		$GLOBALS['%s']->push("sx.properties.Align::copyValueFrom");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->set($align->get_horizontal(), $align->get_vertical());
		if($align->weak) {
			$align->dispose();
		}
		{
			$GLOBALS['%s']->pop();
			return $this;
		}
		$GLOBALS['%s']->pop();
	}
	public function dispose() {
		$GLOBALS['%s']->push("sx.properties.Align::dispose");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function __invokeOnChange($horizontalChanged, $verticalChanged) {
		$GLOBALS['%s']->push("sx.properties.Align::__invokeOnChange");
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
	public function set_vertical($value) {
		$GLOBALS['%s']->push("sx.properties.Align::set_vertical");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__vertical = $value;
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
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_horizontal($value) {
		$GLOBALS['%s']->push("sx.properties.Align::set_horizontal");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__horizontal = $value;
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
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_vertical() {
		$GLOBALS['%s']->push("sx.properties.Align::get_vertical");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__vertical;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_horizontal() {
		$GLOBALS['%s']->push("sx.properties.Align::get_horizontal");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__horizontal;
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
	static $__properties__ = array("set_vertical" => "set_vertical","get_vertical" => "get_vertical","set_horizontal" => "set_horizontal","get_horizontal" => "get_horizontal");
	function __toString() { return 'sx.properties.Align'; }
}
