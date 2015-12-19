<?php

class sx_backend_dummy_Backend implements sx_backend_interfaces_IBackend{
	public function __construct($widget) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__node = new sx_properties_displaylist_ArrayDisplayList($widget);
		$GLOBALS['%s']->pop();
	}}
	public $__node;
	public function addWidget($child) {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::addWidget");
		$__hx__spos = $GLOBALS['%s']->length;
		$_this = $this->__node;
		$child1 = $child->backend->__node;
		if($child1->parent !== null) {
			$_this1 = $child1->parent;
			if($child1->parent === $_this1) {
				$_this1->children->remove($child1);
				$child1->parent = null;
				$child1;
			}
		}
		$_this->children->push($child1);
		$child1->parent = $_this;
		$child1;
		$GLOBALS['%s']->pop();
	}
	public function addWidgetAt($child, $index) {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::addWidgetAt");
		$__hx__spos = $GLOBALS['%s']->length;
		$_this = $this->__node;
		$child1 = $child->backend->__node;
		if($child1->parent !== null) {
			$_this1 = $child1->parent;
			if($child1->parent === $_this1) {
				$_this1->children->remove($child1);
				$child1->parent = null;
				$child1;
			}
		}
		$_this->children->insert($index, $child1);
		$child1->parent = $_this;
		$child1;
		$GLOBALS['%s']->pop();
	}
	public function removeWidget($child) {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::removeWidget");
		$__hx__spos = $GLOBALS['%s']->length;
		$_this = $this->__node;
		$child1 = $child->backend->__node;
		if($child1->parent === $_this) {
			$_this->children->remove($child1);
			$child1->parent = null;
			$child1;
		}
		$GLOBALS['%s']->pop();
	}
	public function removeWidgetAt($index) {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::removeWidgetAt");
		$__hx__spos = $GLOBALS['%s']->length;
		$removed = null;
		{
			$_this = $this->__node;
			$index1 = $index;
			if($index1 < 0) {
				$index1 = $_this->children->length + $index1;
			}
			if($index1 < 0 || $index1 >= $_this->children->length) {
				$removed = null;
			} else {
				$removed1 = _hx_array_get($_this->children->splice($index1, 1), 0);
				$removed1->parent = null;
				$removed = $removed1;
			}
		}
		if($removed === null) {
			$GLOBALS['%s']->pop();
			return null;
		} else {
			$tmp = $removed->widget;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function getWidgetIndex($child) {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::getWidgetIndex");
		$__hx__spos = $GLOBALS['%s']->length;
		$index = $this->__node->children->indexOf($child->backend->__node, null);
		if($index < 0) {
			throw new HException(new sx_exceptions_NotChildException(null, _hx_anonymous(array("fileName" => "ArrayDisplayList.hx", "lineNumber" => 166, "className" => "sx.properties.displaylist.ArrayDisplayList", "methodName" => "getChildIndex"))));
		}
		{
			$GLOBALS['%s']->pop();
			return $index;
		}
		$GLOBALS['%s']->pop();
	}
	public function setWidgetIndex($child, $index) {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::setWidgetIndex");
		$__hx__spos = $GLOBALS['%s']->length;
		$_this = $this->__node;
		$child1 = $child->backend->__node;
		$index1 = $index;
		$currentIndex = $_this->children->indexOf($child1, null);
		if($currentIndex < 0) {
			throw new HException(new sx_exceptions_NotChildException(null, _hx_anonymous(array("fileName" => "ArrayDisplayList.hx", "lineNumber" => 186, "className" => "sx.properties.displaylist.ArrayDisplayList", "methodName" => "setChildIndex"))));
		}
		if($index1 < 0) {
			$index1 = $_this->children->length + $index1;
		}
		if($index1 < 0) {
			$index1 = 0;
		} else {
			if($index1 >= $_this->children->length) {
				$index1 = $_this->children->length - 1;
			}
		}
		if($index1 !== $currentIndex) {
			$_this->children->remove($child1);
			$_this->children->insert($index1, $child1);
			{
				$GLOBALS['%s']->pop();
				return $index1;
			}
		} else {
			$GLOBALS['%s']->pop();
			return $currentIndex;
		}
		$GLOBALS['%s']->pop();
	}
	public function getWidgetAt($index) {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::getWidgetAt");
		$__hx__spos = $GLOBALS['%s']->length;
		$childNode = null;
		{
			$_this = $this->__node;
			$index1 = $index;
			if($index1 < 0) {
				$index1 = $_this->children->length + $index1;
			}
			if($index1 < 0 || $index1 >= $_this->children->length) {
				$childNode = null;
			} else {
				$childNode = $_this->children[$index1];
			}
		}
		if($childNode === null) {
			$GLOBALS['%s']->pop();
			return null;
		} else {
			$tmp = $childNode->widget;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function swapWidgets($child1, $child2) {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::swapWidgets");
		$__hx__spos = $GLOBALS['%s']->length;
		$_this = $this->__node;
		$child11 = $child1->backend->__node;
		$child21 = $child2->backend->__node;
		$index1 = $_this->children->indexOf($child11, null);
		$index2 = $_this->children->indexOf($child21, null);
		if($index1 < 0 || $index2 < 0) {
			throw new HException(new sx_exceptions_NotChildException(null, _hx_anonymous(array("fileName" => "ArrayDisplayList.hx", "lineNumber" => 235, "className" => "sx.properties.displaylist.ArrayDisplayList", "methodName" => "swapChildren"))));
		}
		$_this->children[$index1] = $child21;
		$_this->children[$index2] = $child11;
		$GLOBALS['%s']->pop();
	}
	public function swapWidgetsAt($index1, $index2) {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::swapWidgetsAt");
		$__hx__spos = $GLOBALS['%s']->length;
		$_this = $this->__node;
		$index11 = $index1;
		$index21 = $index2;
		if($index11 < 0) {
			$index11 = $_this->children->length + $index11;
		}
		if($index21 < 0) {
			$index21 = $_this->children->length + $index21;
		}
		if($index11 < 0 || $index11 >= $_this->children->length || $index21 < 0 || $index21 > $_this->children->length) {
			throw new HException(new sx_exceptions_OutOfBoundsException("Provided index does not exist in display list of this widget.", _hx_anonymous(array("fileName" => "ArrayDisplayList.hx", "lineNumber" => 255, "className" => "sx.properties.displaylist.ArrayDisplayList", "methodName" => "swapChildrenAt"))));
		}
		$child = $_this->children[$index11];
		$_this->children[$index11] = $_this->children[$index21];
		$_this->children[$index21] = $child;
		$GLOBALS['%s']->pop();
	}
	public function widgetGlobalToLocal($point) {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::widgetGlobalToLocal");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new sx_backend_dummy_Point(null, null);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function widgetLocalToGlobal($point) {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::widgetLocalToGlobal");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = new sx_backend_dummy_Point(null, null);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function widgetOriginChanged() {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::widgetOriginChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function widgetOffsetChanged() {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::widgetOffsetChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function widgetResized() {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::widgetResized");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function widgetMoved() {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::widgetMoved");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function widgetRotated() {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::widgetRotated");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function widgetScaledX() {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::widgetScaledX");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function widgetScaledY() {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::widgetScaledY");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function widgetAlphaChanged() {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::widgetAlphaChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function widgetVisibilityChanged() {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::widgetVisibilityChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function widgetOverflowChanged() {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::widgetOverflowChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function widgetSkinChanged() {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::widgetSkinChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function widgetDisposed() {
		$GLOBALS['%s']->push("sx.backend.dummy.Backend::widgetDisposed");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__node = null;
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
	function __toString() { return 'sx.backend.dummy.Backend'; }
}
