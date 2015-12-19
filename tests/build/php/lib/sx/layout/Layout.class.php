<?php

class sx_layout_Layout {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.layout.Layout::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->autoArrange = true;
		$GLOBALS['%s']->pop();
	}}
	public $autoArrange;
	public $__widget;
	public function arrangeChildren() {
		$GLOBALS['%s']->push("sx.layout.Layout::arrangeChildren");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function usedBy($widget) {
		$GLOBALS['%s']->push("sx.layout.Layout::usedBy");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__widget !== null) {
			$this->__widget->set_layout(null);
		}
		$this->__widget = $widget;
		{
			$this->__widget->get_onResize()->add((isset($this->__widgetResized) ? $this->__widgetResized: array($this, "__widgetResized")));
			$this->__widget->get_onChildAdded()->add((isset($this->__childAdded) ? $this->__childAdded: array($this, "__childAdded")));
			$this->__widget->get_onChildRemoved()->add((isset($this->__childRemoved) ? $this->__childRemoved: array($this, "__childRemoved")));
		}
		if($widget->initialized) {
			$this->arrangeChildren();
		} else {
			$widget->get_onInitialize()->add((isset($this->__widgetInitialized) ? $this->__widgetInitialized: array($this, "__widgetInitialized")));
		}
		$GLOBALS['%s']->pop();
	}
	public function removed() {
		$GLOBALS['%s']->push("sx.layout.Layout::removed");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__widget !== null) {
			{
				$widget = $this->__widget;
				if(!$widget->initialized) {
					$widget->get_onInitialize()->remove((isset($this->__widgetInitialized) ? $this->__widgetInitialized: array($this, "__widgetInitialized")));
				}
				$widget->get_onResize()->remove((isset($this->__widgetResized) ? $this->__widgetResized: array($this, "__widgetResized")));
				$widget->get_onChildAdded()->remove((isset($this->__childAdded) ? $this->__childAdded: array($this, "__childAdded")));
				$widget->get_onChildRemoved()->remove((isset($this->__childRemoved) ? $this->__childRemoved: array($this, "__childRemoved")));
			}
			$this->__widget = null;
		}
		$GLOBALS['%s']->pop();
	}
	public function __isChildArrangeable($child) {
		$GLOBALS['%s']->push("sx.layout.Layout::__isChildArrangeable");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $child->arrangeable && $child->visible;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function __hookWidget($widget) {
		$GLOBALS['%s']->push("sx.layout.Layout::__hookWidget");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__widget->get_onResize()->add((isset($this->__widgetResized) ? $this->__widgetResized: array($this, "__widgetResized")));
		$this->__widget->get_onChildAdded()->add((isset($this->__childAdded) ? $this->__childAdded: array($this, "__childAdded")));
		$this->__widget->get_onChildRemoved()->add((isset($this->__childRemoved) ? $this->__childRemoved: array($this, "__childRemoved")));
		$GLOBALS['%s']->pop();
	}
	public function __releaseWidget($widget) {
		$GLOBALS['%s']->push("sx.layout.Layout::__releaseWidget");
		$__hx__spos = $GLOBALS['%s']->length;
		if(!$widget->initialized) {
			$widget->get_onInitialize()->remove((isset($this->__widgetInitialized) ? $this->__widgetInitialized: array($this, "__widgetInitialized")));
		}
		$widget->get_onResize()->remove((isset($this->__widgetResized) ? $this->__widgetResized: array($this, "__widgetResized")));
		$widget->get_onChildAdded()->remove((isset($this->__childAdded) ? $this->__childAdded: array($this, "__childAdded")));
		$widget->get_onChildRemoved()->remove((isset($this->__childRemoved) ? $this->__childRemoved: array($this, "__childRemoved")));
		$GLOBALS['%s']->pop();
	}
	public function __widgetInitialized($widget) {
		$GLOBALS['%s']->push("sx.layout.Layout::__widgetInitialized");
		$__hx__spos = $GLOBALS['%s']->length;
		$widget->get_onInitialize()->remove((isset($this->__widgetInitialized) ? $this->__widgetInitialized: array($this, "__widgetInitialized")));
		if($this->autoArrange && $this->__widget === $widget) {
			$this->arrangeChildren();
		}
		$GLOBALS['%s']->pop();
	}
	public function __childAdded($parent, $child) {
		$GLOBALS['%s']->push("sx.layout.Layout::__childAdded");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->autoArrange && $this->__widget->initialized && $this->__isChildArrangeable($child)) {
			$this->arrangeChildren();
		}
		$GLOBALS['%s']->pop();
	}
	public function __childRemoved($parent, $child) {
		$GLOBALS['%s']->push("sx.layout.Layout::__childRemoved");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->autoArrange && $this->__widget->initialized && $this->__isChildArrangeable($child)) {
			$this->arrangeChildren();
		}
		$GLOBALS['%s']->pop();
	}
	public function __widgetResized($widget, $changed, $previousUnits, $previousValue) {
		$GLOBALS['%s']->push("sx.layout.Layout::__widgetResized");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->autoArrange && $this->__widget->initialized) {
			$this->arrangeChildren();
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
	function __toString() { return 'sx.layout.Layout'; }
}
