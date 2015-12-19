<?php

class sx_properties_metric_SizeSetterProxy extends sx_properties_metric_Size {
	public function __construct($orientation = null) { if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.properties.metric.SizeSetterProxy::new");
		$__hx__spos = $GLOBALS['%s']->length;
		parent::__construct($orientation);
		$GLOBALS['%s']->pop();
	}}
	public function __invokeOnChange($previousUnits, $previousValue) {
		$GLOBALS['%s']->push("sx.properties.metric.SizeSetterProxy::__invokeOnChange");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->onChange !== null && $this->onChange->__listeners->length > 0) {
			if($this->onChange->__listenersInUse) {
				{
					$_g = 0;
					$_g1 = $this->onChange->__listeners;
					while($_g < $_g1->length) {
						$listener = $_g1[$_g];
						++$_g;
						call_user_func_array($listener, array($this, $this->units, $this->__value));
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
						call_user_func_array($listener1, array($this, $this->units, $this->__value));
						unset($listener1);
					}
				}
				$this->onChange->__listenersInUse = false;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function get_dip() {
		$GLOBALS['%s']->push("sx.properties.metric.SizeSetterProxy::get_dip");
		$__hx__spos = $GLOBALS['%s']->length;
		throw new HException(new sx_exceptions_NoReadException(null, _hx_anonymous(array("fileName" => "SizeSetterProxy.hx", "lineNumber" => 30, "className" => "sx.properties.metric.SizeSetterProxy", "methodName" => "get_dip"))));
		$GLOBALS['%s']->pop();
	}
	public function get_px() {
		$GLOBALS['%s']->push("sx.properties.metric.SizeSetterProxy::get_px");
		$__hx__spos = $GLOBALS['%s']->length;
		throw new HException(new sx_exceptions_NoReadException(null, _hx_anonymous(array("fileName" => "SizeSetterProxy.hx", "lineNumber" => 31, "className" => "sx.properties.metric.SizeSetterProxy", "methodName" => "get_px"))));
		$GLOBALS['%s']->pop();
	}
	public function get_pct() {
		$GLOBALS['%s']->push("sx.properties.metric.SizeSetterProxy::get_pct");
		$__hx__spos = $GLOBALS['%s']->length;
		throw new HException(new sx_exceptions_NoReadException(null, _hx_anonymous(array("fileName" => "SizeSetterProxy.hx", "lineNumber" => 32, "className" => "sx.properties.metric.SizeSetterProxy", "methodName" => "get_pct"))));
		$GLOBALS['%s']->pop();
	}
	static $__properties__ = array("set_max" => "set_max","get_max" => "get_max","set_min" => "set_min","get_min" => "get_min","set_pct" => "set_pct","get_pct" => "get_pct","set_px" => "set_px","get_px" => "get_px","set_dip" => "set_dip","get_dip" => "get_dip","get_zeroProperty" => "get_zeroProperty");
	function __toString() { return 'sx.properties.metric.SizeSetterProxy'; }
}
