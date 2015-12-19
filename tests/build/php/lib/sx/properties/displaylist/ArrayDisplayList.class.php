<?php

class sx_properties_displaylist_ArrayDisplayList {
	public function __construct($widget) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.properties.displaylist.ArrayDisplayList::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->widget = $widget;
		$this->children = (new _hx_array(array()));
		$GLOBALS['%s']->pop();
	}}
	public $widget;
	public $parent;
	public $children;
	public function addChild($child) {
		$GLOBALS['%s']->push("sx.properties.displaylist.ArrayDisplayList::addChild");
		$__hx__spos = $GLOBALS['%s']->length;
		if($child->parent !== null) {
			$_this = $child->parent;
			if($child->parent === $_this) {
				$_this->children->remove($child);
				$child->parent = null;
				$child;
			}
		}
		$this->children->push($child);
		$child->parent = $this;
		{
			$GLOBALS['%s']->pop();
			return $child;
		}
		$GLOBALS['%s']->pop();
	}
	public function addChildAt($child, $index) {
		$GLOBALS['%s']->push("sx.properties.displaylist.ArrayDisplayList::addChildAt");
		$__hx__spos = $GLOBALS['%s']->length;
		if($child->parent !== null) {
			$_this = $child->parent;
			if($child->parent === $_this) {
				$_this->children->remove($child);
				$child->parent = null;
				$child;
			}
		}
		$this->children->insert($index, $child);
		$child->parent = $this;
		{
			$GLOBALS['%s']->pop();
			return $child;
		}
		$GLOBALS['%s']->pop();
	}
	public function removeChild($child) {
		$GLOBALS['%s']->push("sx.properties.displaylist.ArrayDisplayList::removeChild");
		$__hx__spos = $GLOBALS['%s']->length;
		if($child->parent === $this) {
			$this->children->remove($child);
			$child->parent = null;
			{
				$GLOBALS['%s']->pop();
				return $child;
			}
		} else {
			$GLOBALS['%s']->pop();
			return null;
		}
		$GLOBALS['%s']->pop();
	}
	public function removeChildAt($index) {
		$GLOBALS['%s']->push("sx.properties.displaylist.ArrayDisplayList::removeChildAt");
		$__hx__spos = $GLOBALS['%s']->length;
		if($index < 0) {
			$index = $this->children->length + $index;
		}
		if($index < 0 || $index >= $this->children->length) {
			$GLOBALS['%s']->pop();
			return null;
		} else {
			$removed = _hx_array_get($this->children->splice($index, 1), 0);
			$removed->parent = null;
			{
				$GLOBALS['%s']->pop();
				return $removed;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function removeChildren($beginIndex = null, $endIndex = null) {
		$GLOBALS['%s']->push("sx.properties.displaylist.ArrayDisplayList::removeChildren");
		$__hx__spos = $GLOBALS['%s']->length;
		if($endIndex === null) {
			$endIndex = -1;
		}
		if($beginIndex === null) {
			$beginIndex = 0;
		}
		if($beginIndex < 0) {
			$beginIndex = $this->children->length + $beginIndex;
		}
		if($beginIndex < 0) {
			$beginIndex = 0;
		}
		if($endIndex < 0) {
			$endIndex = $this->children->length + $endIndex;
		}
		if($beginIndex >= $this->children->length || $endIndex < $beginIndex) {
			$GLOBALS['%s']->pop();
			return 0;
		}
		$removed = $this->children->splice($beginIndex, $endIndex - $beginIndex + 1);
		{
			$_g = 0;
			while($_g < $removed->length) {
				$node = $removed[$_g];
				++$_g;
				$node->parent = null;
				unset($node);
			}
		}
		{
			$tmp = $removed->length;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function contains($child) {
		$GLOBALS['%s']->push("sx.properties.displaylist.ArrayDisplayList::contains");
		$__hx__spos = $GLOBALS['%s']->length;
		$found = false;
		while($child !== null) {
			if($child === $this) {
				$found = true;
				break;
			}
			$child = $child->parent;
		}
		{
			$GLOBALS['%s']->pop();
			return $found;
		}
		$GLOBALS['%s']->pop();
	}
	public function getChildIndex($child) {
		$GLOBALS['%s']->push("sx.properties.displaylist.ArrayDisplayList::getChildIndex");
		$__hx__spos = $GLOBALS['%s']->length;
		$index = $this->children->indexOf($child, null);
		if($index < 0) {
			throw new HException(new sx_exceptions_NotChildException(null, _hx_anonymous(array("fileName" => "ArrayDisplayList.hx", "lineNumber" => 166, "className" => "sx.properties.displaylist.ArrayDisplayList", "methodName" => "getChildIndex"))));
		}
		{
			$GLOBALS['%s']->pop();
			return $index;
		}
		$GLOBALS['%s']->pop();
	}
	public function setChildIndex($child, $index) {
		$GLOBALS['%s']->push("sx.properties.displaylist.ArrayDisplayList::setChildIndex");
		$__hx__spos = $GLOBALS['%s']->length;
		$currentIndex = $this->children->indexOf($child, null);
		if($currentIndex < 0) {
			throw new HException(new sx_exceptions_NotChildException(null, _hx_anonymous(array("fileName" => "ArrayDisplayList.hx", "lineNumber" => 186, "className" => "sx.properties.displaylist.ArrayDisplayList", "methodName" => "setChildIndex"))));
		}
		if($index < 0) {
			$index = $this->children->length + $index;
		}
		if($index < 0) {
			$index = 0;
		} else {
			if($index >= $this->children->length) {
				$index = $this->children->length - 1;
			}
		}
		if($index !== $currentIndex) {
			$this->children->remove($child);
			$this->children->insert($index, $child);
			{
				$GLOBALS['%s']->pop();
				return $index;
			}
		} else {
			$GLOBALS['%s']->pop();
			return $currentIndex;
		}
		$GLOBALS['%s']->pop();
	}
	public function getChildAt($index) {
		$GLOBALS['%s']->push("sx.properties.displaylist.ArrayDisplayList::getChildAt");
		$__hx__spos = $GLOBALS['%s']->length;
		if($index < 0) {
			$index = $this->children->length + $index;
		}
		if($index < 0 || $index >= $this->children->length) {
			$GLOBALS['%s']->pop();
			return null;
		} else {
			$tmp = $this->children[$index];
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function swapChildren($child1, $child2) {
		$GLOBALS['%s']->push("sx.properties.displaylist.ArrayDisplayList::swapChildren");
		$__hx__spos = $GLOBALS['%s']->length;
		$index1 = $this->children->indexOf($child1, null);
		$index2 = $this->children->indexOf($child2, null);
		if($index1 < 0 || $index2 < 0) {
			throw new HException(new sx_exceptions_NotChildException(null, _hx_anonymous(array("fileName" => "ArrayDisplayList.hx", "lineNumber" => 235, "className" => "sx.properties.displaylist.ArrayDisplayList", "methodName" => "swapChildren"))));
		}
		$this->children[$index1] = $child2;
		$this->children[$index2] = $child1;
		$GLOBALS['%s']->pop();
	}
	public function swapChildrenAt($index1, $index2) {
		$GLOBALS['%s']->push("sx.properties.displaylist.ArrayDisplayList::swapChildrenAt");
		$__hx__spos = $GLOBALS['%s']->length;
		if($index1 < 0) {
			$index1 = $this->children->length + $index1;
		}
		if($index2 < 0) {
			$index2 = $this->children->length + $index2;
		}
		if($index1 < 0 || $index1 >= $this->children->length || $index2 < 0 || $index2 > $this->children->length) {
			throw new HException(new sx_exceptions_OutOfBoundsException("Provided index does not exist in display list of this widget.", _hx_anonymous(array("fileName" => "ArrayDisplayList.hx", "lineNumber" => 255, "className" => "sx.properties.displaylist.ArrayDisplayList", "methodName" => "swapChildrenAt"))));
		}
		$child = $this->children[$index1];
		$this->children[$index1] = $this->children[$index2];
		$this->children[$index2] = $child;
		$GLOBALS['%s']->pop();
	}
	public function get_numChildren() {
		$GLOBALS['%s']->push("sx.properties.displaylist.ArrayDisplayList::get_numChildren");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->children->length;
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
	static $__properties__ = array("get_numChildren" => "get_numChildren");
	function __toString() { return 'sx.properties.displaylist.ArrayDisplayList'; }
}
