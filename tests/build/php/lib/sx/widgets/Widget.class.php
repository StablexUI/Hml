<?php

class sx_widgets_Widget {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.widgets.Widget::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__resizeCounter = 0;
		$this->__listeningParentResize = false;
		$this->disposed = false;
		$this->initialized = false;
		$this->style = "__DEFAULT__";
		$this->enabled = true;
		$this->arrangeable = true;
		$this->overflow = true;
		$this->visible = true;
		$this->alpha = 1;
		$this->rotation = 0;
		$this->scaleY = 1;
		$this->scaleX = 1;
		$this->numChildren = 0;
		$this->__createBackend();
		$this->__width = new sx_properties_metric_Size("horizontal");
		$this->__width->pctSource = (isset($this->__parentWidthProvider) ? $this->__parentWidthProvider: array($this, "__parentWidthProvider"));
		$this->__width->onChange->add((isset($this->__propertyResized) ? $this->__propertyResized: array($this, "__propertyResized")));
		$this->__height = new sx_properties_metric_Size("vertical");
		$this->__height->pctSource = (isset($this->__parentHeightProvider) ? $this->__parentHeightProvider: array($this, "__parentHeightProvider"));
		$this->__height->onChange->add((isset($this->__propertyResized) ? $this->__propertyResized: array($this, "__propertyResized")));
		$this->__left = new sx_properties_metric_Coordinate("horizontal");
		$this->__left->pctSource = (isset($this->__parentWidthProvider) ? $this->__parentWidthProvider: array($this, "__parentWidthProvider"));
		$this->__left->onChange->add((isset($this->__propertyMoved) ? $this->__propertyMoved: array($this, "__propertyMoved")));
		$this->__right = new sx_properties_metric_Coordinate("horizontal");
		$this->__right->pctSource = (isset($this->__parentWidthProvider) ? $this->__parentWidthProvider: array($this, "__parentWidthProvider"));
		$this->__right->onChange->add((isset($this->__propertyMoved) ? $this->__propertyMoved: array($this, "__propertyMoved")));
		$this->__top = new sx_properties_metric_Coordinate("vertical");
		$this->__top->pctSource = (isset($this->__parentHeightProvider) ? $this->__parentHeightProvider: array($this, "__parentHeightProvider"));
		$this->__top->onChange->add((isset($this->__propertyMoved) ? $this->__propertyMoved: array($this, "__propertyMoved")));
		$this->__bottom = new sx_properties_metric_Coordinate("vertical");
		$this->__bottom->pctSource = (isset($this->__parentHeightProvider) ? $this->__parentHeightProvider: array($this, "__parentHeightProvider"));
		$this->__bottom->onChange->add((isset($this->__propertyMoved) ? $this->__propertyMoved: array($this, "__propertyMoved")));
		$this->__left->pair = (isset($this->get_right) ? $this->get_right: array($this, "get_right"));
		$this->__right->pair = (isset($this->get_left) ? $this->get_left: array($this, "get_left"));
		$this->__top->pair = (isset($this->get_bottom) ? $this->get_bottom: array($this, "get_bottom"));
		$this->__bottom->pair = (isset($this->get_top) ? $this->get_top: array($this, "get_top"));
		$this->__left->ownerSize = $this->__right->ownerSize = (isset($this->get_width) ? $this->get_width: array($this, "get_width"));
		$this->__top->ownerSize = $this->__bottom->ownerSize = (isset($this->get_height) ? $this->get_height: array($this, "get_height"));
		{
			$_this = $this->__left;
			if(!$_this->selected) {
				$_this->selected = true;
				$_this->pair()->selected = false;
			}
		}
		{
			$_this1 = $this->__top;
			if(!$_this1->selected) {
				$_this1->selected = true;
				$_this1->pair()->selected = false;
			}
		}
		$GLOBALS['%s']->pop();
	}}
	public $name;
	public $__parent;
	public $numChildren;
	public $__left;
	public $__right;
	public $__top;
	public $__bottom;
	public $__origin;
	public $__offset;
	public $__width;
	public $__height;
	public $scaleX;
	public $scaleY;
	public $rotation;
	public $alpha;
	public $visible;
	public $overflow;
	public $__skin;
	public $__layout;
	public $arrangeable;
	public $enabled;
	public $style;
	public $backend;
	public $initialized;
	public $disposed;
	public $__tween;
	public $__onResize;
	public $__onMove;
	public $__onChildAdded;
	public $__onChildRemoved;
	public $__onParentChanged;
	public $__onEnable;
	public $__onDisable;
	public $__onPointerPress;
	public $__onPointerRelease;
	public $__onPointerTap;
	public $__onPointerMove;
	public $__onPointerOver;
	public $__onPointerOut;
	public $__onInitialize;
	public $__onDispose;
	public $__listeningParentResize;
	public $__resizeCounter;
	public function initialize() {
		$GLOBALS['%s']->push("sx.widgets.Widget::initialize");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->initialized) {
			$GLOBALS['%s']->pop();
			return;
		}
		if($this->style === "__DEFAULT__") {
			if($this->style !== null && sx_Sx::$theme !== null) {
				sx_Sx::$theme->apply($this);
			}
		}
		$this->initialized = true;
		$this->__initializeSelf();
		if($this->__onInitialize !== null && $this->__onInitialize->__listeners->length > 0) {
			if($this->__onInitialize->__listenersInUse) {
				{
					$_g = 0;
					$_g1 = $this->__onInitialize->__listeners;
					while($_g < $_g1->length) {
						$listener = $_g1[$_g];
						++$_g;
						call_user_func_array($listener, array($this));
						unset($listener);
					}
				}
				false;
			} else {
				$this->__onInitialize->__listenersInUse = true;
				{
					$_g2 = 0;
					$_g11 = $this->__onInitialize->__listeners;
					while($_g2 < $_g11->length) {
						$listener1 = $_g11[$_g2];
						++$_g2;
						call_user_func_array($listener1, array($this));
						unset($listener1);
					}
				}
				$this->__onInitialize->__listenersInUse = false;
			}
		}
		$this->__initializeChildren();
		$GLOBALS['%s']->pop();
	}
	public function addChild($child) {
		$GLOBALS['%s']->push("sx.widgets.Widget::addChild");
		$__hx__spos = $GLOBALS['%s']->length;
		if($child->get_parent() !== null) {
			$child->get_parent()->removeChild($child);
		}
		$this->backend->addWidget($child);
		$this->numChildren++;
		{
			if($child->__listeningParentResize && $child->get_parent() !== null) {
				$child->__listeningParentResize = false;
				$child->get_parent()->get_onResize()->remove((isset($child->__parentResized) ? $child->__parentResized: array($child, "__parentResized")));
			}
			$child->__parent = $this;
			if($child->__parent !== null) {
				$child->__updateParentResizeListener();
				if($child->__parent->initialized && !$child->initialized) {
					$child->initialize();
				}
			}
			$this;
		}
		if($this->__onChildAdded !== null && $this->__onChildAdded->__listeners->length > 0) {
			if($this->__onChildAdded->__listenersInUse) {
				{
					$_g = 0;
					$_g1 = $this->__onChildAdded->__listeners;
					while($_g < $_g1->length) {
						$listener = $_g1[$_g];
						++$_g;
						call_user_func_array($listener, array($this, $child));
						unset($listener);
					}
				}
				false;
			} else {
				$this->__onChildAdded->__listenersInUse = true;
				{
					$_g2 = 0;
					$_g11 = $this->__onChildAdded->__listeners;
					while($_g2 < $_g11->length) {
						$listener1 = $_g11[$_g2];
						++$_g2;
						call_user_func_array($listener1, array($this, $child));
						unset($listener1);
					}
				}
				$this->__onChildAdded->__listenersInUse = false;
			}
		}
		if($child->__onParentChanged !== null && $child->__onParentChanged->__listeners->length > 0) {
			if($child->__onParentChanged->__listenersInUse) {
				{
					$_g3 = 0;
					$_g12 = $child->__onParentChanged->__listeners;
					while($_g3 < $_g12->length) {
						$listener2 = $_g12[$_g3];
						++$_g3;
						call_user_func_array($listener2, array($this, $child));
						unset($listener2);
					}
				}
				false;
			} else {
				$child->__onParentChanged->__listenersInUse = true;
				{
					$_g4 = 0;
					$_g13 = $child->__onParentChanged->__listeners;
					while($_g4 < $_g13->length) {
						$listener3 = $_g13[$_g4];
						++$_g4;
						call_user_func_array($listener3, array($this, $child));
						unset($listener3);
					}
				}
				$child->__onParentChanged->__listenersInUse = false;
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $child;
		}
		$GLOBALS['%s']->pop();
	}
	public function addChildAt($child, $index) {
		$GLOBALS['%s']->push("sx.widgets.Widget::addChildAt");
		$__hx__spos = $GLOBALS['%s']->length;
		if($child->get_parent() !== null) {
			$child->get_parent()->removeChild($child);
		}
		$this->backend->addWidgetAt($child, $index);
		$this->numChildren++;
		{
			if($child->__listeningParentResize && $child->get_parent() !== null) {
				$child->__listeningParentResize = false;
				$child->get_parent()->get_onResize()->remove((isset($child->__parentResized) ? $child->__parentResized: array($child, "__parentResized")));
			}
			$child->__parent = $this;
			if($child->__parent !== null) {
				$child->__updateParentResizeListener();
				if($child->__parent->initialized && !$child->initialized) {
					$child->initialize();
				}
			}
			$this;
		}
		if($this->__onChildAdded !== null || $child->__onParentChanged !== null) {
			if($this->__onChildAdded !== null && $this->__onChildAdded->__listeners->length > 0) {
				if($this->__onChildAdded->__listenersInUse) {
					{
						$_g = 0;
						$_g1 = $this->__onChildAdded->__listeners;
						while($_g < $_g1->length) {
							$listener = $_g1[$_g];
							++$_g;
							call_user_func_array($listener, array($this, $child));
							unset($listener);
						}
					}
					false;
				} else {
					$this->__onChildAdded->__listenersInUse = true;
					{
						$_g2 = 0;
						$_g11 = $this->__onChildAdded->__listeners;
						while($_g2 < $_g11->length) {
							$listener1 = $_g11[$_g2];
							++$_g2;
							call_user_func_array($listener1, array($this, $child));
							unset($listener1);
						}
					}
					$this->__onChildAdded->__listenersInUse = false;
				}
			}
			if($child->__onParentChanged !== null && $child->__onParentChanged->__listeners->length > 0) {
				if($child->__onParentChanged->__listenersInUse) {
					{
						$_g3 = 0;
						$_g12 = $child->__onParentChanged->__listeners;
						while($_g3 < $_g12->length) {
							$listener2 = $_g12[$_g3];
							++$_g3;
							call_user_func_array($listener2, array($this, $child));
							unset($listener2);
						}
					}
					false;
				} else {
					$child->__onParentChanged->__listenersInUse = true;
					{
						$_g4 = 0;
						$_g13 = $child->__onParentChanged->__listeners;
						while($_g4 < $_g13->length) {
							$listener3 = $_g13[$_g4];
							++$_g4;
							call_user_func_array($listener3, array($this, $child));
							unset($listener3);
						}
					}
					$child->__onParentChanged->__listenersInUse = false;
				}
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $child;
		}
		$GLOBALS['%s']->pop();
	}
	public function removeChild($child) {
		$GLOBALS['%s']->push("sx.widgets.Widget::removeChild");
		$__hx__spos = $GLOBALS['%s']->length;
		if($child->get_parent() === $this) {
			$this->backend->removeWidget($child);
			$this->numChildren--;
			{
				if($child->__listeningParentResize && $child->get_parent() !== null) {
					$child->__listeningParentResize = false;
					$child->get_parent()->get_onResize()->remove((isset($child->__parentResized) ? $child->__parentResized: array($child, "__parentResized")));
				}
				$child->__parent = null;
				if($child->__parent !== null) {
					$child->__updateParentResizeListener();
					if($child->__parent->initialized && !$child->initialized) {
						$child->initialize();
					}
				}
				null;
			}
			if($this->__onChildRemoved !== null && $this->__onChildRemoved->__listeners->length > 0) {
				if($this->__onChildRemoved->__listenersInUse) {
					{
						$_g = 0;
						$_g1 = $this->__onChildRemoved->__listeners;
						while($_g < $_g1->length) {
							$listener = $_g1[$_g];
							++$_g;
							call_user_func_array($listener, array($this, $child));
							unset($listener);
						}
					}
					false;
				} else {
					$this->__onChildRemoved->__listenersInUse = true;
					{
						$_g2 = 0;
						$_g11 = $this->__onChildRemoved->__listeners;
						while($_g2 < $_g11->length) {
							$listener1 = $_g11[$_g2];
							++$_g2;
							call_user_func_array($listener1, array($this, $child));
							unset($listener1);
						}
					}
					$this->__onChildRemoved->__listenersInUse = false;
				}
			}
			if($child->__onParentChanged !== null && $child->__onParentChanged->__listeners->length > 0) {
				if($child->__onParentChanged->__listenersInUse) {
					{
						$_g3 = 0;
						$_g12 = $child->__onParentChanged->__listeners;
						while($_g3 < $_g12->length) {
							$listener2 = $_g12[$_g3];
							++$_g3;
							call_user_func_array($listener2, array(null, $child));
							unset($listener2);
						}
					}
					false;
				} else {
					$child->__onParentChanged->__listenersInUse = true;
					{
						$_g4 = 0;
						$_g13 = $child->__onParentChanged->__listeners;
						while($_g4 < $_g13->length) {
							$listener3 = $_g13[$_g4];
							++$_g4;
							call_user_func_array($listener3, array(null, $child));
							unset($listener3);
						}
					}
					$child->__onParentChanged->__listenersInUse = false;
				}
			}
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
		$GLOBALS['%s']->push("sx.widgets.Widget::removeChildAt");
		$__hx__spos = $GLOBALS['%s']->length;
		$removed = $this->backend->removeWidgetAt($index);
		if($removed !== null) {
			$this->numChildren--;
			{
				if($removed->__listeningParentResize && $removed->get_parent() !== null) {
					$removed->__listeningParentResize = false;
					$removed->get_parent()->get_onResize()->remove((isset($removed->__parentResized) ? $removed->__parentResized: array($removed, "__parentResized")));
				}
				$removed->__parent = null;
				if($removed->__parent !== null) {
					$removed->__updateParentResizeListener();
					if($removed->__parent->initialized && !$removed->initialized) {
						$removed->initialize();
					}
				}
				null;
			}
			if($this->__onChildRemoved !== null && $this->__onChildRemoved->__listeners->length > 0) {
				if($this->__onChildRemoved->__listenersInUse) {
					{
						$_g = 0;
						$_g1 = $this->__onChildRemoved->__listeners;
						while($_g < $_g1->length) {
							$listener = $_g1[$_g];
							++$_g;
							call_user_func_array($listener, array($this, $removed));
							unset($listener);
						}
					}
					false;
				} else {
					$this->__onChildRemoved->__listenersInUse = true;
					{
						$_g2 = 0;
						$_g11 = $this->__onChildRemoved->__listeners;
						while($_g2 < $_g11->length) {
							$listener1 = $_g11[$_g2];
							++$_g2;
							call_user_func_array($listener1, array($this, $removed));
							unset($listener1);
						}
					}
					$this->__onChildRemoved->__listenersInUse = false;
				}
			}
			if($removed->__onParentChanged !== null && $removed->__onParentChanged->__listeners->length > 0) {
				if($removed->__onParentChanged->__listenersInUse) {
					{
						$_g3 = 0;
						$_g12 = $removed->__onParentChanged->__listeners;
						while($_g3 < $_g12->length) {
							$listener2 = $_g12[$_g3];
							++$_g3;
							call_user_func_array($listener2, array(null, $removed));
							unset($listener2);
						}
					}
					false;
				} else {
					$removed->__onParentChanged->__listenersInUse = true;
					{
						$_g4 = 0;
						$_g13 = $removed->__onParentChanged->__listeners;
						while($_g4 < $_g13->length) {
							$listener3 = $_g13[$_g4];
							++$_g4;
							call_user_func_array($listener3, array(null, $removed));
							unset($listener3);
						}
					}
					$removed->__onParentChanged->__listenersInUse = false;
				}
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $removed;
		}
		$GLOBALS['%s']->pop();
	}
	public function removeChildren($beginIndex = null, $endIndex = null) {
		$GLOBALS['%s']->push("sx.widgets.Widget::removeChildren");
		$__hx__spos = $GLOBALS['%s']->length;
		if($endIndex === null) {
			$endIndex = -1;
		}
		if($beginIndex === null) {
			$beginIndex = 0;
		}
		if($beginIndex < 0) {
			$beginIndex = $this->numChildren + $beginIndex;
		}
		if($beginIndex < 0) {
			$beginIndex = 0;
		}
		if($endIndex < 0) {
			$endIndex = $this->numChildren + $endIndex;
		} else {
			if($endIndex >= $this->numChildren) {
				$endIndex = $this->numChildren - 1;
			}
		}
		if($beginIndex >= $this->numChildren || $endIndex < $beginIndex) {
			$GLOBALS['%s']->pop();
			return 0;
		}
		$removed = $endIndex - $beginIndex + 1;
		while($beginIndex <= $endIndex) {
			$this->removeChildAt($beginIndex);
			$endIndex--;
		}
		{
			$GLOBALS['%s']->pop();
			return $removed;
		}
		$GLOBALS['%s']->pop();
	}
	public function contains($child) {
		$GLOBALS['%s']->push("sx.widgets.Widget::contains");
		$__hx__spos = $GLOBALS['%s']->length;
		while($child !== null) {
			if($child === $this) {
				$GLOBALS['%s']->pop();
				return true;
			}
			$child = $child->get_parent();
		}
		{
			$GLOBALS['%s']->pop();
			return false;
		}
		$GLOBALS['%s']->pop();
	}
	public function getChildIndex($child) {
		$GLOBALS['%s']->push("sx.widgets.Widget::getChildIndex");
		$__hx__spos = $GLOBALS['%s']->length;
		if($child->get_parent() !== $this) {
			throw new HException(new sx_exceptions_NotChildException(null, _hx_anonymous(array("fileName" => "Widget.hx", "lineNumber" => 427, "className" => "sx.widgets.Widget", "methodName" => "getChildIndex"))));
		}
		{
			$tmp = $this->backend->getWidgetIndex($child);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function setChildIndex($child, $index) {
		$GLOBALS['%s']->push("sx.widgets.Widget::setChildIndex");
		$__hx__spos = $GLOBALS['%s']->length;
		if($child->get_parent() !== $this) {
			throw new HException(new sx_exceptions_NotChildException(null, _hx_anonymous(array("fileName" => "Widget.hx", "lineNumber" => 446, "className" => "sx.widgets.Widget", "methodName" => "setChildIndex"))));
		}
		{
			$tmp = $this->backend->setWidgetIndex($child, $index);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function getChildAt($index) {
		$GLOBALS['%s']->push("sx.widgets.Widget::getChildAt");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->backend->getWidgetAt($index);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function swapChildren($child1, $child2) {
		$GLOBALS['%s']->push("sx.widgets.Widget::swapChildren");
		$__hx__spos = $GLOBALS['%s']->length;
		if($child1->get_parent() !== $this || $child2->get_parent() !== $this) {
			throw new HException(new sx_exceptions_NotChildException(null, _hx_anonymous(array("fileName" => "Widget.hx", "lineNumber" => 472, "className" => "sx.widgets.Widget", "methodName" => "swapChildren"))));
		}
		$this->backend->swapWidgets($child1, $child2);
		$GLOBALS['%s']->pop();
	}
	public function swapChildrenAt($index1, $index2) {
		$GLOBALS['%s']->push("sx.widgets.Widget::swapChildrenAt");
		$__hx__spos = $GLOBALS['%s']->length;
		if($index1 < 0) {
			$index1 += $this->numChildren;
		}
		if($index2 < 0) {
			$index2 += $this->numChildren;
		}
		if($index1 < 0 || $index1 >= $this->numChildren || $index2 < 0 || $index2 > $this->numChildren) {
			throw new HException(new sx_exceptions_OutOfBoundsException("Provided index does not exist in display list of this widget.", _hx_anonymous(array("fileName" => "Widget.hx", "lineNumber" => 490, "className" => "sx.widgets.Widget", "methodName" => "swapChildrenAt"))));
		}
		$this->backend->swapWidgetsAt($index1, $index2);
		$GLOBALS['%s']->pop();
	}
	public function getChild($name) {
		$GLOBALS['%s']->push("sx.widgets.Widget::getChild");
		$__hx__spos = $GLOBALS['%s']->length;
		$child = null;
		{
			$_g1 = 0;
			$_g = $this->numChildren;
			while($_g1 < $_g) {
				$i = $_g1++;
				$child = $this->getChildAt($i);
				if($child->name === $name) {
					$GLOBALS['%s']->pop();
					return $child;
				}
				$child = $child->getChild($name);
				if($child !== null) {
					$GLOBALS['%s']->pop();
					return $child;
				}
				unset($i);
			}
		}
		{
			$GLOBALS['%s']->pop();
			return null;
		}
		$GLOBALS['%s']->pop();
	}
	public function getChildAs($name, $cls) {
		$GLOBALS['%s']->push("sx.widgets.Widget::getChildAs");
		$__hx__spos = $GLOBALS['%s']->length;
		$child = null;
		{
			$_g1 = 0;
			$_g = $this->numChildren;
			while($_g1 < $_g) {
				$i = $_g1++;
				$child = $this->getChildAt($i);
				if($child->name === $name && Std::is($child, $cls)) {
					$tmp = $child;
					$GLOBALS['%s']->pop();
					return $tmp;
					unset($tmp);
				}
				$child = $child->getChildAs($name, $cls);
				if($child !== null) {
					$tmp = $child;
					$GLOBALS['%s']->pop();
					return $tmp;
					unset($tmp);
				}
				unset($i);
			}
		}
		{
			$GLOBALS['%s']->pop();
			return null;
		}
		$GLOBALS['%s']->pop();
	}
	public function getDirectChild($name) {
		$GLOBALS['%s']->push("sx.widgets.Widget::getDirectChild");
		$__hx__spos = $GLOBALS['%s']->length;
		$child = null;
		{
			$_g1 = 0;
			$_g = $this->numChildren;
			while($_g1 < $_g) {
				$i = $_g1++;
				$child = $this->getChildAt($i);
				if($child->name === $name) {
					$GLOBALS['%s']->pop();
					return $child;
				}
				unset($i);
			}
		}
		{
			$GLOBALS['%s']->pop();
			return null;
		}
		$GLOBALS['%s']->pop();
	}
	public function getParent($name) {
		$GLOBALS['%s']->push("sx.widgets.Widget::getParent");
		$__hx__spos = $GLOBALS['%s']->length;
		$parent = $this->get_parent();
		while($parent !== null && $parent->name !== $name) {
			$parent = $parent->get_parent();
		}
		{
			$GLOBALS['%s']->pop();
			return $parent;
		}
		$GLOBALS['%s']->pop();
	}
	public function getParentAs($name, $cls) {
		$GLOBALS['%s']->push("sx.widgets.Widget::getParentAs");
		$__hx__spos = $GLOBALS['%s']->length;
		$parent = $this->get_parent();
		while($parent !== null && ($parent->name !== $name || !Std::is($parent, $cls))) {
			$parent = $parent->get_parent();
		}
		if($parent === null) {
			$GLOBALS['%s']->pop();
			return null;
		} else {
			$tmp = $parent;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function isEnabled() {
		$GLOBALS['%s']->push("sx.widgets.Widget::isEnabled");
		$__hx__spos = $GLOBALS['%s']->length;
		$current = $this;
		do {
			if(!$current->enabled) {
				$GLOBALS['%s']->pop();
				return false;
			}
			$current = $current->get_parent();
		} while($current !== null);
		{
			$GLOBALS['%s']->pop();
			return true;
		}
		$GLOBALS['%s']->pop();
	}
	public function globalToLocal($point) {
		$GLOBALS['%s']->push("sx.widgets.Widget::globalToLocal");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->backend->widgetGlobalToLocal($point);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function localToGlobal($point) {
		$GLOBALS['%s']->push("sx.widgets.Widget::localToGlobal");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->backend->widgetLocalToGlobal($point);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function dispose($disposeChildren = null) {
		$GLOBALS['%s']->push("sx.widgets.Widget::dispose");
		$__hx__spos = $GLOBALS['%s']->length;
		if($disposeChildren === null) {
			$disposeChildren = true;
		}
		if($this->__onDispose !== null && $this->__onDispose->__listeners->length > 0) {
			if($this->__onDispose->__listenersInUse) {
				{
					$_g = 0;
					$_g1 = $this->__onDispose->__listeners;
					while($_g < $_g1->length) {
						$listener = $_g1[$_g];
						++$_g;
						call_user_func_array($listener, array($this));
						unset($listener);
					}
				}
				false;
			} else {
				$this->__onDispose->__listenersInUse = true;
				{
					$_g2 = 0;
					$_g11 = $this->__onDispose->__listeners;
					while($_g2 < $_g11->length) {
						$listener1 = $_g11[$_g2];
						++$_g2;
						call_user_func_array($listener1, array($this));
						unset($listener1);
					}
				}
				$this->__onDispose->__listenersInUse = false;
			}
		}
		$this->disposed = true;
		if($this->get_parent() !== null) {
			$this->get_parent()->removeChild($this);
		}
		if($this->get_skin() !== null) {
			$this->set_skin(null);
		}
		if($this->get_layout() !== null) {
			$this->set_layout(null);
		}
		if($disposeChildren) {
			while($this->numChildren > 0) {
				$this->getChildAt(0)->dispose(true);
			}
		} else {
			$this->removeChildren(null, null);
		}
		if($this->__tween !== null) {
			$this->__tween->stop();
		}
		$this->backend->widgetDisposed();
		$GLOBALS['%s']->pop();
	}
	public function applyStyle() {
		$GLOBALS['%s']->push("sx.widgets.Widget::applyStyle");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->style !== null && sx_Sx::$theme !== null) {
			sx_Sx::$theme->apply($this);
		}
		$GLOBALS['%s']->pop();
	}
	public function __createBackend() {
		$GLOBALS['%s']->push("sx.widgets.Widget::__createBackend");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->backend = sx_Sx::get_backendManager()->widgetBackend($this);
		$GLOBALS['%s']->pop();
	}
	public function __propertyResized($changed, $previousUnits, $previousValue) {
		$GLOBALS['%s']->push("sx.widgets.Widget::__propertyResized");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->get_parent() !== null) {
			if($this->__listeningParentResize) {
				if($changed !== $this->__right && $changed !== $this->__top) {
					if($previousUnits === "pct" && $previousUnits !== $changed->units) {
						$this->__updateParentResizeListener();
					}
				}
			} else {
				if($changed->units === "pct" || $changed === $this->__right || $changed === $this->__bottom) {
					$this->__listeningParentResize = true;
					$this->get_parent()->get_onResize()->add((isset($this->__parentResized) ? $this->__parentResized: array($this, "__parentResized")));
				}
			}
		}
		{
			$this->__resizeCounter++;
			if($this->__resizeCounter > 5) {
				throw new HException(new sx_exceptions_LoopedResizeException(null, _hx_anonymous(array("fileName" => "Widget.hx", "lineNumber" => 686, "className" => "sx.widgets.Widget", "methodName" => "__resized"))));
			}
			if($this->initialized) {
				$this->backend->widgetResized();
			}
			if($this->__onResize !== null && $this->__onResize->__listeners->length > 0) {
				if($this->__onResize->__listenersInUse) {
					{
						$_g = 0;
						$_g1 = $this->__onResize->__listeners;
						while($_g < $_g1->length) {
							$listener = $_g1[$_g];
							++$_g;
							call_user_func_array($listener, array($this, $changed, $previousUnits, $previousValue));
							unset($listener);
						}
					}
					false;
				} else {
					$this->__onResize->__listenersInUse = true;
					{
						$_g2 = 0;
						$_g11 = $this->__onResize->__listeners;
						while($_g2 < $_g11->length) {
							$listener1 = $_g11[$_g2];
							++$_g2;
							call_user_func_array($listener1, array($this, $changed, $previousUnits, $previousValue));
							unset($listener1);
						}
					}
					$this->__onResize->__listenersInUse = false;
				}
			}
			if($changed->orientation === "horizontal" && $this->get_right()->selected) {
				if($this->initialized) {
					$this->backend->widgetMoved();
				}
			}
			if($changed->orientation === "vertical" && $this->get_bottom()->selected) {
				if($this->initialized) {
					$this->backend->widgetMoved();
				}
			}
			$this->__resizeCounter--;
		}
		$GLOBALS['%s']->pop();
	}
	public function __resized($changed, $previousUnits, $previousValue) {
		$GLOBALS['%s']->push("sx.widgets.Widget::__resized");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__resizeCounter++;
		if($this->__resizeCounter > 5) {
			throw new HException(new sx_exceptions_LoopedResizeException(null, _hx_anonymous(array("fileName" => "Widget.hx", "lineNumber" => 686, "className" => "sx.widgets.Widget", "methodName" => "__resized"))));
		}
		if($this->initialized) {
			$this->backend->widgetResized();
		}
		if($this->__onResize !== null && $this->__onResize->__listeners->length > 0) {
			if($this->__onResize->__listenersInUse) {
				{
					$_g = 0;
					$_g1 = $this->__onResize->__listeners;
					while($_g < $_g1->length) {
						$listener = $_g1[$_g];
						++$_g;
						call_user_func_array($listener, array($this, $changed, $previousUnits, $previousValue));
						unset($listener);
					}
				}
				false;
			} else {
				$this->__onResize->__listenersInUse = true;
				{
					$_g2 = 0;
					$_g11 = $this->__onResize->__listeners;
					while($_g2 < $_g11->length) {
						$listener1 = $_g11[$_g2];
						++$_g2;
						call_user_func_array($listener1, array($this, $changed, $previousUnits, $previousValue));
						unset($listener1);
					}
				}
				$this->__onResize->__listenersInUse = false;
			}
		}
		if($changed->orientation === "horizontal" && $this->get_right()->selected) {
			if($this->initialized) {
				$this->backend->widgetMoved();
			}
		}
		if($changed->orientation === "vertical" && $this->get_bottom()->selected) {
			if($this->initialized) {
				$this->backend->widgetMoved();
			}
		}
		$this->__resizeCounter--;
		$GLOBALS['%s']->pop();
	}
	public function __propertyMoved($changed, $previousUnits, $previousValue) {
		$GLOBALS['%s']->push("sx.widgets.Widget::__propertyMoved");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->get_parent() !== null) {
			if($this->__listeningParentResize) {
				if($changed !== $this->__right && $changed !== $this->__top) {
					if($previousUnits === "pct" && $previousUnits !== $changed->units) {
						$this->__updateParentResizeListener();
					}
				}
			} else {
				if($changed->units === "pct" || $changed === $this->__right || $changed === $this->__bottom) {
					$this->__listeningParentResize = true;
					$this->get_parent()->get_onResize()->add((isset($this->__parentResized) ? $this->__parentResized: array($this, "__parentResized")));
				}
			}
		}
		if($this->initialized) {
			$this->backend->widgetMoved();
		}
		if($this->__onMove !== null && $this->__onMove->__listeners->length > 0) {
			if($this->__onMove->__listenersInUse) {
				{
					$_g = 0;
					$_g1 = $this->__onMove->__listeners;
					while($_g < $_g1->length) {
						$listener = $_g1[$_g];
						++$_g;
						call_user_func_array($listener, array($this, $changed, $previousUnits, $previousValue));
						unset($listener);
					}
				}
				false;
			} else {
				$this->__onMove->__listenersInUse = true;
				{
					$_g2 = 0;
					$_g11 = $this->__onMove->__listeners;
					while($_g2 < $_g11->length) {
						$listener1 = $_g11[$_g2];
						++$_g2;
						call_user_func_array($listener1, array($this, $changed, $previousUnits, $previousValue));
						unset($listener1);
					}
				}
				$this->__onMove->__listenersInUse = false;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __moved() {
		$GLOBALS['%s']->push("sx.widgets.Widget::__moved");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->initialized) {
			$this->backend->widgetMoved();
		}
		$GLOBALS['%s']->pop();
	}
	public function __originChanged() {
		$GLOBALS['%s']->push("sx.widgets.Widget::__originChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->initialized) {
			$this->backend->widgetOriginChanged();
		}
		$GLOBALS['%s']->pop();
	}
	public function __offsetChanged() {
		$GLOBALS['%s']->push("sx.widgets.Widget::__offsetChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->initialized) {
			$this->backend->widgetOffsetChanged();
		}
		$GLOBALS['%s']->pop();
	}
	public function __parentWidthProvider() {
		$GLOBALS['%s']->push("sx.widgets.Widget::__parentWidthProvider");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->get_parent() === null) {
			$tmp = sx_properties_metric__Size_Size_Internal_ZeroSize::$instance;
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->get_parent()->get_width();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function __parentHeightProvider() {
		$GLOBALS['%s']->push("sx.widgets.Widget::__parentHeightProvider");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->get_parent() === null) {
			$tmp = sx_properties_metric__Size_Size_Internal_ZeroSize::$instance;
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->get_parent()->get_height();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function __parentResized($parent, $changed, $previousUnits, $previousValue) {
		$GLOBALS['%s']->push("sx.widgets.Widget::__parentResized");
		$__hx__spos = $GLOBALS['%s']->length;
		if($changed->orientation === "horizontal") {
			$position = $this->get_left();
			$size = $this->get_width();
			if($size->units === "pct") {
				$previousUnits1 = "pct";
				$previousValue1 = $size->get_pct();
				$this->__resizeCounter++;
				if($this->__resizeCounter > 5) {
					throw new HException(new sx_exceptions_LoopedResizeException(null, _hx_anonymous(array("fileName" => "Widget.hx", "lineNumber" => 686, "className" => "sx.widgets.Widget", "methodName" => "__resized"))));
				}
				if($this->initialized) {
					$this->backend->widgetResized();
				}
				if($this->__onResize !== null && $this->__onResize->__listeners->length > 0) {
					if($this->__onResize->__listenersInUse) {
						{
							$_g = 0;
							$_g1 = $this->__onResize->__listeners;
							while($_g < $_g1->length) {
								$listener = $_g1[$_g];
								++$_g;
								call_user_func_array($listener, array($this, $size, $previousUnits1, $previousValue1));
								unset($listener);
							}
						}
						false;
					} else {
						$this->__onResize->__listenersInUse = true;
						{
							$_g2 = 0;
							$_g11 = $this->__onResize->__listeners;
							while($_g2 < $_g11->length) {
								$listener1 = $_g11[$_g2];
								++$_g2;
								call_user_func_array($listener1, array($this, $size, $previousUnits1, $previousValue1));
								unset($listener1);
							}
						}
						$this->__onResize->__listenersInUse = false;
					}
				}
				if($size->orientation === "horizontal" && $this->get_right()->selected) {
					if($this->initialized) {
						$this->backend->widgetMoved();
					}
				}
				if($size->orientation === "vertical" && $this->get_bottom()->selected) {
					if($this->initialized) {
						$this->backend->widgetMoved();
					}
				}
				$this->__resizeCounter--;
			}
			if($position->selected) {
				if($position->units === "pct") {
					if($this->initialized) {
						$this->backend->widgetMoved();
					}
				}
			} else {
				if($this->initialized) {
					$this->backend->widgetMoved();
				}
			}
		} else {
			$position1 = $this->get_top();
			$size1 = $this->get_height();
			if($size1->units === "pct") {
				$previousUnits2 = "pct";
				$previousValue2 = $size1->get_pct();
				$this->__resizeCounter++;
				if($this->__resizeCounter > 5) {
					throw new HException(new sx_exceptions_LoopedResizeException(null, _hx_anonymous(array("fileName" => "Widget.hx", "lineNumber" => 686, "className" => "sx.widgets.Widget", "methodName" => "__resized"))));
				}
				if($this->initialized) {
					$this->backend->widgetResized();
				}
				if($this->__onResize !== null && $this->__onResize->__listeners->length > 0) {
					if($this->__onResize->__listenersInUse) {
						{
							$_g3 = 0;
							$_g12 = $this->__onResize->__listeners;
							while($_g3 < $_g12->length) {
								$listener2 = $_g12[$_g3];
								++$_g3;
								call_user_func_array($listener2, array($this, $size1, $previousUnits2, $previousValue2));
								unset($listener2);
							}
						}
						false;
					} else {
						$this->__onResize->__listenersInUse = true;
						{
							$_g4 = 0;
							$_g13 = $this->__onResize->__listeners;
							while($_g4 < $_g13->length) {
								$listener3 = $_g13[$_g4];
								++$_g4;
								call_user_func_array($listener3, array($this, $size1, $previousUnits2, $previousValue2));
								unset($listener3);
							}
						}
						$this->__onResize->__listenersInUse = false;
					}
				}
				if($size1->orientation === "horizontal" && $this->get_right()->selected) {
					if($this->initialized) {
						$this->backend->widgetMoved();
					}
				}
				if($size1->orientation === "vertical" && $this->get_bottom()->selected) {
					if($this->initialized) {
						$this->backend->widgetMoved();
					}
				}
				$this->__resizeCounter--;
			}
			if($position1->selected) {
				if($position1->units === "pct") {
					if($this->initialized) {
						$this->backend->widgetMoved();
					}
				}
			} else {
				if($this->initialized) {
					$this->backend->widgetMoved();
				}
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __reactParentResize($position, $size) {
		$GLOBALS['%s']->push("sx.widgets.Widget::__reactParentResize");
		$__hx__spos = $GLOBALS['%s']->length;
		if($size->units === "pct") {
			$previousUnits = "pct";
			$previousValue = $size->get_pct();
			$this->__resizeCounter++;
			if($this->__resizeCounter > 5) {
				throw new HException(new sx_exceptions_LoopedResizeException(null, _hx_anonymous(array("fileName" => "Widget.hx", "lineNumber" => 686, "className" => "sx.widgets.Widget", "methodName" => "__resized"))));
			}
			if($this->initialized) {
				$this->backend->widgetResized();
			}
			if($this->__onResize !== null && $this->__onResize->__listeners->length > 0) {
				if($this->__onResize->__listenersInUse) {
					{
						$_g = 0;
						$_g1 = $this->__onResize->__listeners;
						while($_g < $_g1->length) {
							$listener = $_g1[$_g];
							++$_g;
							call_user_func_array($listener, array($this, $size, $previousUnits, $previousValue));
							unset($listener);
						}
					}
					false;
				} else {
					$this->__onResize->__listenersInUse = true;
					{
						$_g2 = 0;
						$_g11 = $this->__onResize->__listeners;
						while($_g2 < $_g11->length) {
							$listener1 = $_g11[$_g2];
							++$_g2;
							call_user_func_array($listener1, array($this, $size, $previousUnits, $previousValue));
							unset($listener1);
						}
					}
					$this->__onResize->__listenersInUse = false;
				}
			}
			if($size->orientation === "horizontal" && $this->get_right()->selected) {
				if($this->initialized) {
					$this->backend->widgetMoved();
				}
			}
			if($size->orientation === "vertical" && $this->get_bottom()->selected) {
				if($this->initialized) {
					$this->backend->widgetMoved();
				}
			}
			$this->__resizeCounter--;
		}
		if($position->selected) {
			if($position->units === "pct") {
				if($this->initialized) {
					$this->backend->widgetMoved();
				}
			}
		} else {
			if($this->initialized) {
				$this->backend->widgetMoved();
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __affectParentResizeListener($changed, $previousUnits) {
		$GLOBALS['%s']->push("sx.widgets.Widget::__affectParentResizeListener");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->get_parent() !== null) {
			if($this->__listeningParentResize) {
				if($changed !== $this->__right && $changed !== $this->__top) {
					if($previousUnits === "pct" && $previousUnits !== $changed->units) {
						$this->__updateParentResizeListener();
					}
				}
			} else {
				if($changed->units === "pct" || $changed === $this->__right || $changed === $this->__bottom) {
					$this->__listeningParentResize = true;
					$this->get_parent()->get_onResize()->add((isset($this->__parentResized) ? $this->__parentResized: array($this, "__parentResized")));
				}
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __updateParentResizeListener() {
		$GLOBALS['%s']->push("sx.widgets.Widget::__updateParentResizeListener");
		$__hx__spos = $GLOBALS['%s']->length;
		$size = $this->get_width()->units === "pct" || $this->get_height()->units === "pct";
		$position = sx_tools_WidgetTools::positionDependsOnParent($this);
		if($size || $position) {
			$this->__listeningParentResize = true;
			$this->get_parent()->get_onResize()->add((isset($this->__parentResized) ? $this->__parentResized: array($this, "__parentResized")));
		} else {
			if(!$size && !$position) {
				$this->__listeningParentResize = false;
				$this->get_parent()->get_onResize()->remove((isset($this->__parentResized) ? $this->__parentResized: array($this, "__parentResized")));
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __initializeSelf() {
		$GLOBALS['%s']->push("sx.widgets.Widget::__initializeSelf");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__offset !== null) {
			$this->backend->widgetOffsetChanged();
		}
		if($this->__origin !== null) {
			$this->backend->widgetOriginChanged();
		}
		if(!_hx_equal($this->__width->__value, 0) || !(!_hx_equal($this->__height->__value, 0))) {
			$this->backend->widgetResized();
		}
		if(!_hx_equal($this->__left->__value, 0) || $this->__right->selected || !_hx_equal($this->__top->__value, 0) || $this->__bottom->selected) {
			$this->backend->widgetMoved();
		}
		if(!_hx_equal($this->rotation, 0)) {
			$this->backend->widgetRotated();
		}
		if(!_hx_equal($this->scaleX, 1)) {
			$this->backend->widgetScaledX();
		}
		if(!_hx_equal($this->scaleY, 1)) {
			$this->backend->widgetScaledY();
		}
		if(!_hx_equal($this->alpha, 1)) {
			$this->backend->widgetAlphaChanged();
		}
		if(!$this->visible) {
			$this->backend->widgetVisibilityChanged();
		}
		if(!$this->overflow) {
			$this->backend->widgetOverflowChanged();
		}
		if($this->__skin !== null) {
			$this->get_skin()->refresh();
			$this->backend->widgetSkinChanged();
		}
		$GLOBALS['%s']->pop();
	}
	public function __initializeChildren() {
		$GLOBALS['%s']->push("sx.widgets.Widget::__initializeChildren");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g1 = 0;
		$_g = $this->numChildren;
		while($_g1 < $_g) {
			$i = $_g1++;
			$this->getChildAt($i)->initialize();
			unset($i);
		}
		$GLOBALS['%s']->pop();
	}
	public function set_rotation($rotation) {
		$GLOBALS['%s']->push("sx.widgets.Widget::set_rotation");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->rotation = $rotation;
		if($this->initialized) {
			$this->backend->widgetRotated();
		}
		{
			$GLOBALS['%s']->pop();
			return $rotation;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_scaleX($scaleX) {
		$GLOBALS['%s']->push("sx.widgets.Widget::set_scaleX");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->scaleX = $scaleX;
		if($this->initialized) {
			$this->backend->widgetScaledX();
		}
		{
			$GLOBALS['%s']->pop();
			return $scaleX;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_scaleY($scaleY) {
		$GLOBALS['%s']->push("sx.widgets.Widget::set_scaleY");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->scaleY = $scaleY;
		if($this->initialized) {
			$this->backend->widgetScaledY();
		}
		{
			$GLOBALS['%s']->pop();
			return $scaleY;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_alpha($alpha) {
		$GLOBALS['%s']->push("sx.widgets.Widget::set_alpha");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->alpha = $alpha;
		if($this->initialized) {
			$this->backend->widgetAlphaChanged();
		}
		{
			$GLOBALS['%s']->pop();
			return $alpha;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_visible($value) {
		$GLOBALS['%s']->push("sx.widgets.Widget::set_visible");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->visible !== $value) {
			$this->visible = $value;
			if($this->initialized) {
				$this->backend->widgetVisibilityChanged();
			}
			if($this->get_parent() !== null && $this->get_parent()->initialized) {
				if($this->get_parent()->get_layout() !== null && $this->get_parent()->get_layout()->autoArrange) {
					$this->get_parent()->get_layout()->arrangeChildren();
				}
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_skin($value) {
		$GLOBALS['%s']->push("sx.widgets.Widget::set_skin");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__skin === $value) {
			$GLOBALS['%s']->pop();
			return $value;
		}
		if($this->__skin !== null) {
			$this->__skin->removed();
			if($this->initialized) {
				$this->backend->widgetSkinChanged();
			}
		}
		$this->__skin = $value;
		if($this->__skin !== null) {
			$this->__skin->usedBy($this);
			if($this->initialized) {
				$this->backend->widgetSkinChanged();
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_layout($value) {
		$GLOBALS['%s']->push("sx.widgets.Widget::set_layout");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__layout !== null) {
			$this->__layout->removed();
		}
		$this->__layout = $value;
		if($this->__layout !== null) {
			$this->__layout->usedBy($this);
		}
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_style($value) {
		$GLOBALS['%s']->push("sx.widgets.Widget::set_style");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->style = $value;
		if($this->style !== null && sx_Sx::$theme !== null) {
			sx_Sx::$theme->apply($this);
		}
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_origin() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_origin");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__origin === null) {
			$this->__origin = new sx_properties_metric_Offset((isset($this->get_width) ? $this->get_width: array($this, "get_width")), (isset($this->get_height) ? $this->get_height: array($this, "get_height")));
			$this->__origin->onChange->add((isset($this->__originChanged) ? $this->__originChanged: array($this, "__originChanged")));
		}
		{
			$tmp = $this->__origin;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_offset() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_offset");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__offset === null) {
			$this->__offset = new sx_properties_metric_Offset((isset($this->get_width) ? $this->get_width: array($this, "get_width")), (isset($this->get_height) ? $this->get_height: array($this, "get_height")));
			$this->__offset->onChange->add((isset($this->__offsetChanged) ? $this->__offsetChanged: array($this, "__offsetChanged")));
		}
		{
			$tmp = $this->__offset;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set___parent($value) {
		$GLOBALS['%s']->push("sx.widgets.Widget::set___parent");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__listeningParentResize && $this->get_parent() !== null) {
			$this->__listeningParentResize = false;
			$this->get_parent()->get_onResize()->remove((isset($this->__parentResized) ? $this->__parentResized: array($this, "__parentResized")));
		}
		$this->__parent = $value;
		if($this->__parent !== null) {
			$this->__updateParentResizeListener();
			if($this->__parent->initialized && !$this->initialized) {
				$this->initialize();
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_enabled($value) {
		$GLOBALS['%s']->push("sx.widgets.Widget::set_enabled");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->enabled !== $value) {
			$this->enabled = $value;
			if($this->enabled) {
				if($this->__onEnable !== null && $this->__onEnable->__listeners->length > 0) {
					if($this->__onEnable->__listenersInUse) {
						{
							$_g = 0;
							$_g1 = $this->__onEnable->__listeners;
							while($_g < $_g1->length) {
								$listener = $_g1[$_g];
								++$_g;
								call_user_func_array($listener, array($this));
								unset($listener);
							}
						}
						false;
					} else {
						$this->__onEnable->__listenersInUse = true;
						{
							$_g2 = 0;
							$_g11 = $this->__onEnable->__listeners;
							while($_g2 < $_g11->length) {
								$listener1 = $_g11[$_g2];
								++$_g2;
								call_user_func_array($listener1, array($this));
								unset($listener1);
							}
						}
						$this->__onEnable->__listenersInUse = false;
					}
				}
			} else {
				if($this->__onDisable !== null && $this->__onDisable->__listeners->length > 0) {
					if($this->__onDisable->__listenersInUse) {
						{
							$_g3 = 0;
							$_g12 = $this->__onDisable->__listeners;
							while($_g3 < $_g12->length) {
								$listener2 = $_g12[$_g3];
								++$_g3;
								call_user_func_array($listener2, array($this));
								unset($listener2);
							}
						}
						false;
					} else {
						$this->__onDisable->__listenersInUse = true;
						{
							$_g4 = 0;
							$_g13 = $this->__onDisable->__listeners;
							while($_g4 < $_g13->length) {
								$listener3 = $_g13[$_g4];
								++$_g4;
								call_user_func_array($listener3, array($this));
								unset($listener3);
							}
						}
						$this->__onDisable->__listenersInUse = false;
					}
				}
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_tween() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_tween");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__tween === null) {
			$this->__tween = new sx_tween_Tweener();
		}
		{
			$tmp = $this->__tween;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_overflow($value) {
		$GLOBALS['%s']->push("sx.widgets.Widget::set_overflow");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->overflow !== $value) {
			$this->overflow = $value;
			if($this->initialized) {
				$this->backend->widgetOverflowChanged();
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_arrangeable($value) {
		$GLOBALS['%s']->push("sx.widgets.Widget::set_arrangeable");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->arrangeable !== $value) {
			$this->arrangeable = $value;
			if($this->get_parent() !== null && $this->get_parent()->initialized) {
				if($this->get_parent()->get_layout() !== null && $this->get_parent()->get_layout()->autoArrange) {
					$this->get_parent()->get_layout()->arrangeChildren();
				}
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_parent() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_parent");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__parent;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_width() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_width");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__width;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_height() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_height");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__height;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_left() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_left");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__left;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_right() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_right");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__right;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_top() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_top");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__top;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_bottom() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_bottom");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__bottom;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_skin() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_skin");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__skin;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_layout() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_layout");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__layout;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_left($v) {
		$GLOBALS['%s']->push("sx.widgets.Widget::set_left");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__left->copyValueFrom($v);
		{
			$tmp = $this->__left;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_right($v) {
		$GLOBALS['%s']->push("sx.widgets.Widget::set_right");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__right->copyValueFrom($v);
		{
			$tmp = $this->__right;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_top($v) {
		$GLOBALS['%s']->push("sx.widgets.Widget::set_top");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__top->copyValueFrom($v);
		{
			$tmp = $this->__top;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_bottom($v) {
		$GLOBALS['%s']->push("sx.widgets.Widget::set_bottom");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__bottom->copyValueFrom($v);
		{
			$tmp = $this->__bottom;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_width($v) {
		$GLOBALS['%s']->push("sx.widgets.Widget::set_width");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__width->copyValueFrom($v);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_height($v) {
		$GLOBALS['%s']->push("sx.widgets.Widget::set_height");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__height->copyValueFrom($v);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_onResize() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_onResize");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__onResize === null) {
			$tmp = $this->__onResize = new sx_signals_Signal();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__onResize;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_onMove() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_onMove");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__onMove === null) {
			$tmp = $this->__onMove = new sx_signals_Signal();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__onMove;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_onInitialize() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_onInitialize");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__onInitialize === null) {
			$tmp = $this->__onInitialize = new sx_signals_Signal();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__onInitialize;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_onDispose() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_onDispose");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__onDispose === null) {
			$tmp = $this->__onDispose = new sx_signals_Signal();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__onDispose;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_onChildAdded() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_onChildAdded");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__onChildAdded === null) {
			$tmp = $this->__onChildAdded = new sx_signals_Signal();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__onChildAdded;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_onChildRemoved() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_onChildRemoved");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__onChildRemoved === null) {
			$tmp = $this->__onChildRemoved = new sx_signals_Signal();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__onChildRemoved;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_onEnable() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_onEnable");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__onEnable === null) {
			$tmp = $this->__onEnable = new sx_signals_Signal();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__onEnable;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_onDisable() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_onDisable");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__onDisable === null) {
			$tmp = $this->__onDisable = new sx_signals_Signal();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__onDisable;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_onParentChanged() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_onParentChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__onParentChanged === null) {
			$tmp = $this->__onParentChanged = new sx_signals_Signal();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__onParentChanged;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_onPointerPress() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_onPointerPress");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__onPointerPress === null) {
			$tmp = $this->__onPointerPress = new sx_signals_Signal();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__onPointerPress;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_onPointerRelease() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_onPointerRelease");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__onPointerRelease === null) {
			$tmp = $this->__onPointerRelease = new sx_signals_Signal();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__onPointerRelease;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_onPointerTap() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_onPointerTap");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__onPointerTap === null) {
			$tmp = $this->__onPointerTap = new sx_signals_Signal();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__onPointerTap;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_onClick() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_onClick");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__onPointerTap === null) {
			$tmp = $this->__onPointerTap = new sx_signals_Signal();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__onPointerTap;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_onPointerMove() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_onPointerMove");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__onPointerMove === null) {
			$tmp = $this->__onPointerMove = new sx_signals_Signal();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__onPointerMove;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_onPointerOver() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_onPointerOver");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__onPointerOver === null) {
			$tmp = $this->__onPointerOver = new sx_signals_Signal();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__onPointerOver;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_onPointerOut() {
		$GLOBALS['%s']->push("sx.widgets.Widget::get_onPointerOut");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__onPointerOut === null) {
			$tmp = $this->__onPointerOut = new sx_signals_Signal();
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $this->__onPointerOut;
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
	static $MAX_RESIZE_DEPTH = 5;
	static $__properties__ = array("get_onDispose" => "get_onDispose","get_onInitialize" => "get_onInitialize","get_onPointerOut" => "get_onPointerOut","get_onPointerOver" => "get_onPointerOver","get_onPointerMove" => "get_onPointerMove","get_onClick" => "get_onClick","get_onPointerTap" => "get_onPointerTap","get_onPointerRelease" => "get_onPointerRelease","get_onPointerPress" => "get_onPointerPress","get_onDisable" => "get_onDisable","get_onEnable" => "get_onEnable","get_onParentChanged" => "get_onParentChanged","get_onChildRemoved" => "get_onChildRemoved","get_onChildAdded" => "get_onChildAdded","get_onMove" => "get_onMove","get_onResize" => "get_onResize","get_tween" => "get_tween","set_style" => "set_style","set_enabled" => "set_enabled","set_arrangeable" => "set_arrangeable","set_layout" => "set_layout","get_layout" => "get_layout","set_skin" => "set_skin","get_skin" => "get_skin","set_overflow" => "set_overflow","set_visible" => "set_visible","set_alpha" => "set_alpha","set_rotation" => "set_rotation","set_scaleY" => "set_scaleY","set_scaleX" => "set_scaleX","set_height" => "set_height","get_height" => "get_height","set_width" => "set_width","get_width" => "get_width","get_offset" => "get_offset","get_origin" => "get_origin","set_bottom" => "set_bottom","get_bottom" => "get_bottom","set_top" => "set_top","get_top" => "get_top","set_right" => "set_right","get_right" => "get_right","set_left" => "set_left","get_left" => "get_left","set___parent" => "set___parent","get_parent" => "get_parent");
	function __toString() { return 'sx.widgets.Widget'; }
}
