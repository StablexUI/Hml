(function (console) { "use strict";
var $estr = function() { return js_Boot.__string_rec(this,''); };
function $extend(from, fields) {
	function Inherit() {} Inherit.prototype = from; var proto = new Inherit();
	for (var name in fields) proto[name] = fields[name];
	if( fields.toString !== Object.prototype.toString ) proto.toString = fields.toString;
	return proto;
}
var sx_widgets_Widget = function() {
	this.__resizeCounter = 0;
	this.__listeningParentResize = false;
	this.disposed = false;
	this.initialized = false;
	this.style = "__DEFAULT__";
	this.enabled = true;
	this.arrangeable = true;
	this.overflow = true;
	this.visible = true;
	this.alpha = 1;
	this.rotation = 0;
	this.scaleY = 1;
	this.scaleX = 1;
	this.numChildren = 0;
	this.__createBackend();
	this.__width = new sx_properties_metric_Size("horizontal");
	this.__width.pctSource = $bind(this,this.__parentWidthProvider);
	this.__width.onChange.add($bind(this,this.__propertyResized));
	this.__height = new sx_properties_metric_Size("vertical");
	this.__height.pctSource = $bind(this,this.__parentHeightProvider);
	this.__height.onChange.add($bind(this,this.__propertyResized));
	this.__left = new sx_properties_metric_Coordinate("horizontal");
	this.__left.pctSource = $bind(this,this.__parentWidthProvider);
	this.__left.onChange.add($bind(this,this.__propertyMoved));
	this.__right = new sx_properties_metric_Coordinate("horizontal");
	this.__right.pctSource = $bind(this,this.__parentWidthProvider);
	this.__right.onChange.add($bind(this,this.__propertyMoved));
	this.__top = new sx_properties_metric_Coordinate("vertical");
	this.__top.pctSource = $bind(this,this.__parentHeightProvider);
	this.__top.onChange.add($bind(this,this.__propertyMoved));
	this.__bottom = new sx_properties_metric_Coordinate("vertical");
	this.__bottom.pctSource = $bind(this,this.__parentHeightProvider);
	this.__bottom.onChange.add($bind(this,this.__propertyMoved));
	this.__left.pair = $bind(this,this.get_right);
	this.__right.pair = $bind(this,this.get_left);
	this.__top.pair = $bind(this,this.get_bottom);
	this.__bottom.pair = $bind(this,this.get_top);
	this.__left.ownerSize = this.__right.ownerSize = $bind(this,this.get_width);
	this.__top.ownerSize = this.__bottom.ownerSize = $bind(this,this.get_height);
	this.__left.select();
	this.__top.select();
};
sx_widgets_Widget.__name__ = ["sx","widgets","Widget"];
sx_widgets_Widget.prototype = {
	name: null
	,__parent: null
	,numChildren: null
	,__left: null
	,__right: null
	,__top: null
	,__bottom: null
	,__origin: null
	,__offset: null
	,__width: null
	,__height: null
	,scaleX: null
	,scaleY: null
	,rotation: null
	,alpha: null
	,visible: null
	,overflow: null
	,__skin: null
	,__layout: null
	,arrangeable: null
	,enabled: null
	,style: null
	,backend: null
	,initialized: null
	,disposed: null
	,__tween: null
	,__onResize: null
	,__onMove: null
	,__onChildAdded: null
	,__onChildRemoved: null
	,__onParentChanged: null
	,__onEnable: null
	,__onDisable: null
	,__onPointerPress: null
	,__onPointerRelease: null
	,__onPointerTap: null
	,__onPointerMove: null
	,__onPointerOver: null
	,__onPointerOut: null
	,__onInitialize: null
	,__onDispose: null
	,__listeningParentResize: null
	,__resizeCounter: null
	,initialize: function() {
		if(this.initialized) return;
		if(this.style == "__DEFAULT__") {
			if(this.style != null && sx_Sx.theme != null) sx_Sx.theme.apply(this);
		}
		this.initialized = true;
		this.__initializeSelf();
		if(this.__onInitialize != null && this.__onInitialize.__listeners.length > 0) {
			if(this.__onInitialize.__listenersInUse) {
				var _g = 0;
				var _g1 = this.__onInitialize.__listeners;
				while(_g < _g1.length) {
					var listener = _g1[_g];
					++_g;
					listener(this);
				}
				false;
			} else {
				this.__onInitialize.__listenersInUse = true;
				var _g2 = 0;
				var _g11 = this.__onInitialize.__listeners;
				while(_g2 < _g11.length) {
					var listener1 = _g11[_g2];
					++_g2;
					listener1(this);
				}
				this.__onInitialize.__listenersInUse = false;
			}
		}
		this.__initializeChildren();
	}
	,addChild: function(child) {
		if(child.get_parent() != null) child.get_parent().removeChild(child);
		this.backend.addWidget(child);
		this.numChildren++;
		if(child.__listeningParentResize && child.get_parent() != null) {
			child.__listeningParentResize = false;
			child.get_parent().get_onResize().remove($bind(child,child.__parentResized));
		}
		child.__parent = this;
		if(child.__parent != null) {
			child.__updateParentResizeListener();
			if(child.__parent.initialized && !child.initialized) child.initialize();
		}
		this;
		if(this.__onChildAdded != null && this.__onChildAdded.__listeners.length > 0) {
			if(this.__onChildAdded.__listenersInUse) {
				var _g = 0;
				var _g1 = this.__onChildAdded.__listeners;
				while(_g < _g1.length) {
					var listener = _g1[_g];
					++_g;
					listener(this,child);
				}
				false;
			} else {
				this.__onChildAdded.__listenersInUse = true;
				var _g2 = 0;
				var _g11 = this.__onChildAdded.__listeners;
				while(_g2 < _g11.length) {
					var listener1 = _g11[_g2];
					++_g2;
					listener1(this,child);
				}
				this.__onChildAdded.__listenersInUse = false;
			}
		}
		if(child.__onParentChanged != null && child.__onParentChanged.__listeners.length > 0) {
			if(child.__onParentChanged.__listenersInUse) {
				var _g3 = 0;
				var _g12 = child.__onParentChanged.__listeners;
				while(_g3 < _g12.length) {
					var listener2 = _g12[_g3];
					++_g3;
					listener2(this,child);
				}
				false;
			} else {
				child.__onParentChanged.__listenersInUse = true;
				var _g4 = 0;
				var _g13 = child.__onParentChanged.__listeners;
				while(_g4 < _g13.length) {
					var listener3 = _g13[_g4];
					++_g4;
					listener3(this,child);
				}
				child.__onParentChanged.__listenersInUse = false;
			}
		}
		return child;
	}
	,addChildAt: function(child,index) {
		if(child.get_parent() != null) child.get_parent().removeChild(child);
		this.backend.addWidgetAt(child,index);
		this.numChildren++;
		if(child.__listeningParentResize && child.get_parent() != null) {
			child.__listeningParentResize = false;
			child.get_parent().get_onResize().remove($bind(child,child.__parentResized));
		}
		child.__parent = this;
		if(child.__parent != null) {
			child.__updateParentResizeListener();
			if(child.__parent.initialized && !child.initialized) child.initialize();
		}
		this;
		if(this.__onChildAdded != null || child.__onParentChanged != null) {
			if(this.__onChildAdded != null && this.__onChildAdded.__listeners.length > 0) {
				if(this.__onChildAdded.__listenersInUse) {
					var _g = 0;
					var _g1 = this.__onChildAdded.__listeners;
					while(_g < _g1.length) {
						var listener = _g1[_g];
						++_g;
						listener(this,child);
					}
					false;
				} else {
					this.__onChildAdded.__listenersInUse = true;
					var _g2 = 0;
					var _g11 = this.__onChildAdded.__listeners;
					while(_g2 < _g11.length) {
						var listener1 = _g11[_g2];
						++_g2;
						listener1(this,child);
					}
					this.__onChildAdded.__listenersInUse = false;
				}
			}
			if(child.__onParentChanged != null && child.__onParentChanged.__listeners.length > 0) {
				if(child.__onParentChanged.__listenersInUse) {
					var _g3 = 0;
					var _g12 = child.__onParentChanged.__listeners;
					while(_g3 < _g12.length) {
						var listener2 = _g12[_g3];
						++_g3;
						listener2(this,child);
					}
					false;
				} else {
					child.__onParentChanged.__listenersInUse = true;
					var _g4 = 0;
					var _g13 = child.__onParentChanged.__listeners;
					while(_g4 < _g13.length) {
						var listener3 = _g13[_g4];
						++_g4;
						listener3(this,child);
					}
					child.__onParentChanged.__listenersInUse = false;
				}
			}
		}
		return child;
	}
	,removeChild: function(child) {
		if(child.get_parent() == this) {
			this.backend.removeWidget(child);
			this.numChildren--;
			if(child.__listeningParentResize && child.get_parent() != null) {
				child.__listeningParentResize = false;
				child.get_parent().get_onResize().remove($bind(child,child.__parentResized));
			}
			child.__parent = null;
			if(child.__parent != null) {
				child.__updateParentResizeListener();
				if(child.__parent.initialized && !child.initialized) child.initialize();
			}
			null;
			if(this.__onChildRemoved != null && this.__onChildRemoved.__listeners.length > 0) {
				if(this.__onChildRemoved.__listenersInUse) {
					var _g = 0;
					var _g1 = this.__onChildRemoved.__listeners;
					while(_g < _g1.length) {
						var listener = _g1[_g];
						++_g;
						listener(this,child);
					}
					false;
				} else {
					this.__onChildRemoved.__listenersInUse = true;
					var _g2 = 0;
					var _g11 = this.__onChildRemoved.__listeners;
					while(_g2 < _g11.length) {
						var listener1 = _g11[_g2];
						++_g2;
						listener1(this,child);
					}
					this.__onChildRemoved.__listenersInUse = false;
				}
			}
			if(child.__onParentChanged != null && child.__onParentChanged.__listeners.length > 0) {
				if(child.__onParentChanged.__listenersInUse) {
					var _g3 = 0;
					var _g12 = child.__onParentChanged.__listeners;
					while(_g3 < _g12.length) {
						var listener2 = _g12[_g3];
						++_g3;
						listener2(null,child);
					}
					false;
				} else {
					child.__onParentChanged.__listenersInUse = true;
					var _g4 = 0;
					var _g13 = child.__onParentChanged.__listeners;
					while(_g4 < _g13.length) {
						var listener3 = _g13[_g4];
						++_g4;
						listener3(null,child);
					}
					child.__onParentChanged.__listenersInUse = false;
				}
			}
			return child;
		} else return null;
	}
	,removeChildAt: function(index) {
		var removed = this.backend.removeWidgetAt(index);
		if(removed != null) {
			this.numChildren--;
			if(removed.__listeningParentResize && removed.get_parent() != null) {
				removed.__listeningParentResize = false;
				removed.get_parent().get_onResize().remove($bind(removed,removed.__parentResized));
			}
			removed.__parent = null;
			if(removed.__parent != null) {
				removed.__updateParentResizeListener();
				if(removed.__parent.initialized && !removed.initialized) removed.initialize();
			}
			null;
			if(this.__onChildRemoved != null && this.__onChildRemoved.__listeners.length > 0) {
				if(this.__onChildRemoved.__listenersInUse) {
					var _g = 0;
					var _g1 = this.__onChildRemoved.__listeners;
					while(_g < _g1.length) {
						var listener = _g1[_g];
						++_g;
						listener(this,removed);
					}
					false;
				} else {
					this.__onChildRemoved.__listenersInUse = true;
					var _g2 = 0;
					var _g11 = this.__onChildRemoved.__listeners;
					while(_g2 < _g11.length) {
						var listener1 = _g11[_g2];
						++_g2;
						listener1(this,removed);
					}
					this.__onChildRemoved.__listenersInUse = false;
				}
			}
			if(removed.__onParentChanged != null && removed.__onParentChanged.__listeners.length > 0) {
				if(removed.__onParentChanged.__listenersInUse) {
					var _g3 = 0;
					var _g12 = removed.__onParentChanged.__listeners;
					while(_g3 < _g12.length) {
						var listener2 = _g12[_g3];
						++_g3;
						listener2(null,removed);
					}
					false;
				} else {
					removed.__onParentChanged.__listenersInUse = true;
					var _g4 = 0;
					var _g13 = removed.__onParentChanged.__listeners;
					while(_g4 < _g13.length) {
						var listener3 = _g13[_g4];
						++_g4;
						listener3(null,removed);
					}
					removed.__onParentChanged.__listenersInUse = false;
				}
			}
		}
		return removed;
	}
	,removeChildren: function(beginIndex,endIndex) {
		if(endIndex == null) endIndex = -1;
		if(beginIndex == null) beginIndex = 0;
		if(beginIndex < 0) beginIndex = this.numChildren + beginIndex;
		if(beginIndex < 0) beginIndex = 0;
		if(endIndex < 0) endIndex = this.numChildren + endIndex; else if(endIndex >= this.numChildren) endIndex = this.numChildren - 1;
		if(beginIndex >= this.numChildren || endIndex < beginIndex) return 0;
		var removed = endIndex - beginIndex + 1;
		while(beginIndex <= endIndex) {
			this.removeChildAt(beginIndex);
			endIndex--;
		}
		return removed;
	}
	,contains: function(child) {
		while(child != null) {
			if(child == this) return true;
			child = child.get_parent();
		}
		return false;
	}
	,getChildIndex: function(child) {
		if(child.get_parent() != this) throw new js__$Boot_HaxeError(new sx_exceptions_NotChildException(null,{ fileName : "Widget.hx", lineNumber : 427, className : "sx.widgets.Widget", methodName : "getChildIndex"}));
		return this.backend.getWidgetIndex(child);
	}
	,setChildIndex: function(child,index) {
		if(child.get_parent() != this) throw new js__$Boot_HaxeError(new sx_exceptions_NotChildException(null,{ fileName : "Widget.hx", lineNumber : 446, className : "sx.widgets.Widget", methodName : "setChildIndex"}));
		return this.backend.setWidgetIndex(child,index);
	}
	,getChildAt: function(index) {
		return this.backend.getWidgetAt(index);
	}
	,swapChildren: function(child1,child2) {
		if(child1.get_parent() != this || child2.get_parent() != this) throw new js__$Boot_HaxeError(new sx_exceptions_NotChildException(null,{ fileName : "Widget.hx", lineNumber : 472, className : "sx.widgets.Widget", methodName : "swapChildren"}));
		this.backend.swapWidgets(child1,child2);
	}
	,swapChildrenAt: function(index1,index2) {
		if(index1 < 0) index1 += this.numChildren;
		if(index2 < 0) index2 += this.numChildren;
		if(index1 < 0 || index1 >= this.numChildren || index2 < 0 || index2 > this.numChildren) throw new js__$Boot_HaxeError(new sx_exceptions_OutOfBoundsException("Provided index does not exist in display list of this widget.",{ fileName : "Widget.hx", lineNumber : 490, className : "sx.widgets.Widget", methodName : "swapChildrenAt"}));
		this.backend.swapWidgetsAt(index1,index2);
	}
	,getChild: function(name) {
		var child = null;
		var _g1 = 0;
		var _g = this.numChildren;
		while(_g1 < _g) {
			var i = _g1++;
			child = this.getChildAt(i);
			if(child.name == name) return child;
			child = child.getChild(name);
			if(child != null) return child;
		}
		return null;
	}
	,getChildAs: function(name,cls) {
		var child = null;
		var _g1 = 0;
		var _g = this.numChildren;
		while(_g1 < _g) {
			var i = _g1++;
			child = this.getChildAt(i);
			if(child.name == name && js_Boot.__instanceof(child,cls)) return child;
			child = child.getChildAs(name,cls);
			if(child != null) return child;
		}
		return null;
	}
	,getDirectChild: function(name) {
		var child = null;
		var _g1 = 0;
		var _g = this.numChildren;
		while(_g1 < _g) {
			var i = _g1++;
			child = this.getChildAt(i);
			if(child.name == name) return child;
		}
		return null;
	}
	,getParent: function(name) {
		var parent = this.get_parent();
		while(parent != null && parent.name != name) parent = parent.get_parent();
		return parent;
	}
	,getParentAs: function(name,cls) {
		var parent = this.get_parent();
		while(parent != null && (parent.name != name || !js_Boot.__instanceof(parent,cls))) parent = parent.get_parent();
		if(parent == null) return null; else return parent;
	}
	,isEnabled: function() {
		var current = this;
		do {
			if(!current.enabled) return false;
			current = current.get_parent();
		} while(current != null);
		return true;
	}
	,globalToLocal: function(point) {
		return this.backend.widgetGlobalToLocal(point);
	}
	,localToGlobal: function(point) {
		return this.backend.widgetLocalToGlobal(point);
	}
	,dispose: function(disposeChildren) {
		if(disposeChildren == null) disposeChildren = true;
		if(this.__onDispose != null && this.__onDispose.__listeners.length > 0) {
			if(this.__onDispose.__listenersInUse) {
				var _g = 0;
				var _g1 = this.__onDispose.__listeners;
				while(_g < _g1.length) {
					var listener = _g1[_g];
					++_g;
					listener(this);
				}
				false;
			} else {
				this.__onDispose.__listenersInUse = true;
				var _g2 = 0;
				var _g11 = this.__onDispose.__listeners;
				while(_g2 < _g11.length) {
					var listener1 = _g11[_g2];
					++_g2;
					listener1(this);
				}
				this.__onDispose.__listenersInUse = false;
			}
		}
		this.disposed = true;
		if(this.get_parent() != null) this.get_parent().removeChild(this);
		if(this.get_skin() != null) this.set_skin(null);
		if(this.get_layout() != null) this.set_layout(null);
		if(disposeChildren) while(this.numChildren > 0) this.getChildAt(0).dispose(true); else this.removeChildren();
		if(this.__tween != null) this.__tween.stop();
		this.backend.widgetDisposed();
	}
	,applyStyle: function() {
		if(this.style != null && sx_Sx.theme != null) sx_Sx.theme.apply(this);
	}
	,__createBackend: function() {
		this.backend = sx_Sx.get_backendManager().widgetBackend(this);
	}
	,__propertyResized: function(changed,previousUnits,previousValue) {
		if(this.get_parent() != null) {
			if(this.__listeningParentResize) {
				if(changed != this.__right && changed != this.__top) {
					if(previousUnits == "pct" && previousUnits != changed.units) this.__updateParentResizeListener();
				}
			} else if(changed.units == "pct" || changed == this.__right || changed == this.__bottom) {
				this.__listeningParentResize = true;
				this.get_parent().get_onResize().add($bind(this,this.__parentResized));
			}
		}
		this.__resized(changed,previousUnits,previousValue);
	}
	,__resized: function(changed,previousUnits,previousValue) {
		this.__resizeCounter++;
		if(this.__resizeCounter > 5) throw new js__$Boot_HaxeError(new sx_exceptions_LoopedResizeException(null,{ fileName : "Widget.hx", lineNumber : 686, className : "sx.widgets.Widget", methodName : "__resized"}));
		if(this.initialized) this.backend.widgetResized();
		if(this.__onResize != null && this.__onResize.__listeners.length > 0) {
			if(this.__onResize.__listenersInUse) {
				var _g = 0;
				var _g1 = this.__onResize.__listeners;
				while(_g < _g1.length) {
					var listener = _g1[_g];
					++_g;
					listener(this,changed,previousUnits,previousValue);
				}
				false;
			} else {
				this.__onResize.__listenersInUse = true;
				var _g2 = 0;
				var _g11 = this.__onResize.__listeners;
				while(_g2 < _g11.length) {
					var listener1 = _g11[_g2];
					++_g2;
					listener1(this,changed,previousUnits,previousValue);
				}
				this.__onResize.__listenersInUse = false;
			}
		}
		if(changed.orientation == "horizontal" && this.get_right().selected) {
			if(this.initialized) this.backend.widgetMoved();
		}
		if(changed.orientation == "vertical" && this.get_bottom().selected) {
			if(this.initialized) this.backend.widgetMoved();
		}
		this.__resizeCounter--;
	}
	,__propertyMoved: function(changed,previousUnits,previousValue) {
		if(this.get_parent() != null) {
			if(this.__listeningParentResize) {
				if(changed != this.__right && changed != this.__top) {
					if(previousUnits == "pct" && previousUnits != changed.units) this.__updateParentResizeListener();
				}
			} else if(changed.units == "pct" || changed == this.__right || changed == this.__bottom) {
				this.__listeningParentResize = true;
				this.get_parent().get_onResize().add($bind(this,this.__parentResized));
			}
		}
		if(this.initialized) this.backend.widgetMoved();
		if(this.__onMove != null && this.__onMove.__listeners.length > 0) {
			if(this.__onMove.__listenersInUse) {
				var _g = 0;
				var _g1 = this.__onMove.__listeners;
				while(_g < _g1.length) {
					var listener = _g1[_g];
					++_g;
					listener(this,changed,previousUnits,previousValue);
				}
				false;
			} else {
				this.__onMove.__listenersInUse = true;
				var _g2 = 0;
				var _g11 = this.__onMove.__listeners;
				while(_g2 < _g11.length) {
					var listener1 = _g11[_g2];
					++_g2;
					listener1(this,changed,previousUnits,previousValue);
				}
				this.__onMove.__listenersInUse = false;
			}
		}
	}
	,__moved: function() {
		if(this.initialized) this.backend.widgetMoved();
	}
	,__originChanged: function() {
		if(this.initialized) this.backend.widgetOriginChanged();
	}
	,__offsetChanged: function() {
		if(this.initialized) this.backend.widgetOffsetChanged();
	}
	,__parentWidthProvider: function() {
		if(this.get_parent() == null) return sx_properties_metric__$Size_Size_$Internal_$ZeroSize.instance; else return this.get_parent().get_width();
	}
	,__parentHeightProvider: function() {
		if(this.get_parent() == null) return sx_properties_metric__$Size_Size_$Internal_$ZeroSize.instance; else return this.get_parent().get_height();
	}
	,__parentResized: function(parent,changed,previousUnits,previousValue) {
		if(changed.orientation == "horizontal") this.__reactParentResize(this.get_left(),this.get_width()); else this.__reactParentResize(this.get_top(),this.get_height());
	}
	,__reactParentResize: function(position,size) {
		if(size.units == "pct") this.__resized(size,"pct",size.get_pct());
		if(position.selected) {
			if(position.units == "pct") {
				if(this.initialized) this.backend.widgetMoved();
			}
		} else if(this.initialized) this.backend.widgetMoved();
	}
	,__affectParentResizeListener: function(changed,previousUnits) {
		if(this.get_parent() != null) {
			if(this.__listeningParentResize) {
				if(changed != this.__right && changed != this.__top) {
					if(previousUnits == "pct" && previousUnits != changed.units) this.__updateParentResizeListener();
				}
			} else if(changed.units == "pct" || changed == this.__right || changed == this.__bottom) {
				this.__listeningParentResize = true;
				this.get_parent().get_onResize().add($bind(this,this.__parentResized));
			}
		}
	}
	,__updateParentResizeListener: function() {
		var size = this.get_width().units == "pct" || this.get_height().units == "pct";
		var position = sx_tools_WidgetTools.positionDependsOnParent(this);
		if(size || position) {
			this.__listeningParentResize = true;
			this.get_parent().get_onResize().add($bind(this,this.__parentResized));
		} else if(!size && !position) {
			this.__listeningParentResize = false;
			this.get_parent().get_onResize().remove($bind(this,this.__parentResized));
		}
	}
	,__initializeSelf: function() {
		if(this.__offset != null) this.backend.widgetOffsetChanged();
		if(this.__origin != null) this.backend.widgetOriginChanged();
		if(this.__width.__value != 0 || !(this.__height.__value != 0)) this.backend.widgetResized();
		if(this.__left.__value != 0 || this.__right.selected || this.__top.__value != 0 || this.__bottom.selected) this.backend.widgetMoved();
		if(this.rotation != 0) this.backend.widgetRotated();
		if(this.scaleX != 1) this.backend.widgetScaledX();
		if(this.scaleY != 1) this.backend.widgetScaledY();
		if(this.alpha != 1) this.backend.widgetAlphaChanged();
		if(!this.visible) this.backend.widgetVisibilityChanged();
		if(!this.overflow) this.backend.widgetOverflowChanged();
		if(this.__skin != null) {
			this.get_skin().refresh();
			this.backend.widgetSkinChanged();
		}
	}
	,__initializeChildren: function() {
		var _g1 = 0;
		var _g = this.numChildren;
		while(_g1 < _g) {
			var i = _g1++;
			this.getChildAt(i).initialize();
		}
	}
	,set_rotation: function(rotation) {
		this.rotation = rotation;
		if(this.initialized) this.backend.widgetRotated();
		return rotation;
	}
	,set_scaleX: function(scaleX) {
		this.scaleX = scaleX;
		if(this.initialized) this.backend.widgetScaledX();
		return scaleX;
	}
	,set_scaleY: function(scaleY) {
		this.scaleY = scaleY;
		if(this.initialized) this.backend.widgetScaledY();
		return scaleY;
	}
	,set_alpha: function(alpha) {
		this.alpha = alpha;
		if(this.initialized) this.backend.widgetAlphaChanged();
		return alpha;
	}
	,set_visible: function(value) {
		if(this.visible != value) {
			this.visible = value;
			if(this.initialized) this.backend.widgetVisibilityChanged();
			if(this.get_parent() != null && this.get_parent().initialized) {
				if(this.get_parent().get_layout() != null && this.get_parent().get_layout().autoArrange) this.get_parent().get_layout().arrangeChildren();
			}
		}
		return value;
	}
	,set_skin: function(value) {
		if(this.__skin == value) return value;
		if(this.__skin != null) {
			this.__skin.removed();
			if(this.initialized) this.backend.widgetSkinChanged();
		}
		this.__skin = value;
		if(this.__skin != null) {
			this.__skin.usedBy(this);
			if(this.initialized) this.backend.widgetSkinChanged();
		}
		return value;
	}
	,set_layout: function(value) {
		if(this.__layout != null) this.__layout.removed();
		this.__layout = value;
		if(this.__layout != null) this.__layout.usedBy(this);
		return value;
	}
	,set_style: function(value) {
		this.style = value;
		if(this.style != null && sx_Sx.theme != null) sx_Sx.theme.apply(this);
		return value;
	}
	,get_origin: function() {
		if(this.__origin == null) {
			this.__origin = new sx_properties_metric_Offset($bind(this,this.get_width),$bind(this,this.get_height));
			this.__origin.onChange.add($bind(this,this.__originChanged));
		}
		return this.__origin;
	}
	,get_offset: function() {
		if(this.__offset == null) {
			this.__offset = new sx_properties_metric_Offset($bind(this,this.get_width),$bind(this,this.get_height));
			this.__offset.onChange.add($bind(this,this.__offsetChanged));
		}
		return this.__offset;
	}
	,set___parent: function(value) {
		if(this.__listeningParentResize && this.get_parent() != null) {
			this.__listeningParentResize = false;
			this.get_parent().get_onResize().remove($bind(this,this.__parentResized));
		}
		this.__parent = value;
		if(this.__parent != null) {
			this.__updateParentResizeListener();
			if(this.__parent.initialized && !this.initialized) this.initialize();
		}
		return value;
	}
	,set_enabled: function(value) {
		if(this.enabled != value) {
			this.enabled = value;
			if(this.enabled) {
				if(this.__onEnable != null && this.__onEnable.__listeners.length > 0) {
					if(this.__onEnable.__listenersInUse) {
						var _g = 0;
						var _g1 = this.__onEnable.__listeners;
						while(_g < _g1.length) {
							var listener = _g1[_g];
							++_g;
							listener(this);
						}
						false;
					} else {
						this.__onEnable.__listenersInUse = true;
						var _g2 = 0;
						var _g11 = this.__onEnable.__listeners;
						while(_g2 < _g11.length) {
							var listener1 = _g11[_g2];
							++_g2;
							listener1(this);
						}
						this.__onEnable.__listenersInUse = false;
					}
				}
			} else if(this.__onDisable != null && this.__onDisable.__listeners.length > 0) {
				if(this.__onDisable.__listenersInUse) {
					var _g3 = 0;
					var _g12 = this.__onDisable.__listeners;
					while(_g3 < _g12.length) {
						var listener2 = _g12[_g3];
						++_g3;
						listener2(this);
					}
					false;
				} else {
					this.__onDisable.__listenersInUse = true;
					var _g4 = 0;
					var _g13 = this.__onDisable.__listeners;
					while(_g4 < _g13.length) {
						var listener3 = _g13[_g4];
						++_g4;
						listener3(this);
					}
					this.__onDisable.__listenersInUse = false;
				}
			}
		}
		return value;
	}
	,get_tween: function() {
		if(this.__tween == null) this.__tween = new sx_tween_Tweener();
		return this.__tween;
	}
	,set_overflow: function(value) {
		if(this.overflow != value) {
			this.overflow = value;
			if(this.initialized) this.backend.widgetOverflowChanged();
		}
		return value;
	}
	,set_arrangeable: function(value) {
		if(this.arrangeable != value) {
			this.arrangeable = value;
			if(this.get_parent() != null && this.get_parent().initialized) {
				if(this.get_parent().get_layout() != null && this.get_parent().get_layout().autoArrange) this.get_parent().get_layout().arrangeChildren();
			}
		}
		return value;
	}
	,get_parent: function() {
		return this.__parent;
	}
	,get_width: function() {
		return this.__width;
	}
	,get_height: function() {
		return this.__height;
	}
	,get_left: function() {
		return this.__left;
	}
	,get_right: function() {
		return this.__right;
	}
	,get_top: function() {
		return this.__top;
	}
	,get_bottom: function() {
		return this.__bottom;
	}
	,get_skin: function() {
		return this.__skin;
	}
	,get_layout: function() {
		return this.__layout;
	}
	,set_left: function(v) {
		this.__left.copyValueFrom(v);
		return this.__left;
	}
	,set_right: function(v) {
		this.__right.copyValueFrom(v);
		return this.__right;
	}
	,set_top: function(v) {
		this.__top.copyValueFrom(v);
		return this.__top;
	}
	,set_bottom: function(v) {
		this.__bottom.copyValueFrom(v);
		return this.__bottom;
	}
	,set_width: function(v) {
		return this.__width.copyValueFrom(v);
	}
	,set_height: function(v) {
		return this.__height.copyValueFrom(v);
	}
	,get_onResize: function() {
		if(this.__onResize == null) return this.__onResize = new sx_signals_Signal(); else return this.__onResize;
	}
	,get_onMove: function() {
		if(this.__onMove == null) return this.__onMove = new sx_signals_Signal(); else return this.__onMove;
	}
	,get_onInitialize: function() {
		if(this.__onInitialize == null) return this.__onInitialize = new sx_signals_Signal(); else return this.__onInitialize;
	}
	,get_onDispose: function() {
		if(this.__onDispose == null) return this.__onDispose = new sx_signals_Signal(); else return this.__onDispose;
	}
	,get_onChildAdded: function() {
		if(this.__onChildAdded == null) return this.__onChildAdded = new sx_signals_Signal(); else return this.__onChildAdded;
	}
	,get_onChildRemoved: function() {
		if(this.__onChildRemoved == null) return this.__onChildRemoved = new sx_signals_Signal(); else return this.__onChildRemoved;
	}
	,get_onEnable: function() {
		if(this.__onEnable == null) return this.__onEnable = new sx_signals_Signal(); else return this.__onEnable;
	}
	,get_onDisable: function() {
		if(this.__onDisable == null) return this.__onDisable = new sx_signals_Signal(); else return this.__onDisable;
	}
	,get_onParentChanged: function() {
		if(this.__onParentChanged == null) return this.__onParentChanged = new sx_signals_Signal(); else return this.__onParentChanged;
	}
	,get_onPointerPress: function() {
		if(this.__onPointerPress == null) return this.__onPointerPress = new sx_signals_Signal(); else return this.__onPointerPress;
	}
	,get_onPointerRelease: function() {
		if(this.__onPointerRelease == null) return this.__onPointerRelease = new sx_signals_Signal(); else return this.__onPointerRelease;
	}
	,get_onPointerTap: function() {
		if(this.__onPointerTap == null) return this.__onPointerTap = new sx_signals_Signal(); else return this.__onPointerTap;
	}
	,get_onClick: function() {
		if(this.__onPointerTap == null) return this.__onPointerTap = new sx_signals_Signal(); else return this.__onPointerTap;
	}
	,get_onPointerMove: function() {
		if(this.__onPointerMove == null) return this.__onPointerMove = new sx_signals_Signal(); else return this.__onPointerMove;
	}
	,get_onPointerOver: function() {
		if(this.__onPointerOver == null) return this.__onPointerOver = new sx_signals_Signal(); else return this.__onPointerOver;
	}
	,get_onPointerOut: function() {
		if(this.__onPointerOut == null) return this.__onPointerOut = new sx_signals_Signal(); else return this.__onPointerOut;
	}
	,__class__: sx_widgets_Widget
	,__properties__: {get_onDispose:"get_onDispose",get_onInitialize:"get_onInitialize",get_onPointerOut:"get_onPointerOut",get_onPointerOver:"get_onPointerOver",get_onPointerMove:"get_onPointerMove",get_onClick:"get_onClick",get_onPointerTap:"get_onPointerTap",get_onPointerRelease:"get_onPointerRelease",get_onPointerPress:"get_onPointerPress",get_onDisable:"get_onDisable",get_onEnable:"get_onEnable",get_onParentChanged:"get_onParentChanged",get_onChildRemoved:"get_onChildRemoved",get_onChildAdded:"get_onChildAdded",get_onMove:"get_onMove",get_onResize:"get_onResize",get_tween:"get_tween",set_style:"set_style",set_enabled:"set_enabled",set_arrangeable:"set_arrangeable",set_layout:"set_layout",get_layout:"get_layout",set_skin:"set_skin",get_skin:"get_skin",set_overflow:"set_overflow",set_visible:"set_visible",set_alpha:"set_alpha",set_rotation:"set_rotation",set_scaleY:"set_scaleY",set_scaleX:"set_scaleX",set_height:"set_height",get_height:"get_height",set_width:"set_width",get_width:"get_width",get_offset:"get_offset",get_origin:"get_origin",set_bottom:"set_bottom",get_bottom:"get_bottom",set_top:"set_top",get_top:"get_top",set_right:"set_right",get_right:"get_right",set_left:"set_left",get_left:"get_left",set___parent:"set___parent",get_parent:"get_parent"}
};
var Child = function() {
	this.level2_initialized = false;
	this.level1_initialized = false;
	sx_widgets_Widget.call(this);
	this.addChild(this.get_level1());
};
Child.__name__ = ["Child"];
Child.__super__ = sx_widgets_Widget;
Child.prototype = $extend(sx_widgets_Widget.prototype,{
	level1_initialized: null
	,level1: null
	,level2_initialized: null
	,level2: null
	,destroyHml: function() {
	}
	,set_level1: function(value) {
		this.level1_initialized = true;
		return this.level1 = value;
	}
	,set_level2: function(value) {
		this.level2_initialized = true;
		return this.level2 = value;
	}
	,get_level2: function() {
		if(this.level2_initialized) return this.level2;
		this.level2_initialized = true;
		this.set_level2(new sx_widgets_Widget());
		var res = this.level2;
		return res;
	}
	,get_level1: function() {
		if(this.level1_initialized) return this.level1;
		this.level1_initialized = true;
		this.set_level1(new sx_widgets_Widget());
		var res = this.level1;
		res.addChild(this.get_level2());
		return res;
	}
	,__class__: Child
	,__properties__: $extend(sx_widgets_Widget.prototype.__properties__,{set_level2:"set_level2",get_level2:"get_level2",set_level1:"set_level1",get_level1:"get_level1"})
});
var hunit_TestCase = function() {
	this.set_match(new hunit_match_MatchFactory());
	this.set_assert(new hunit_assert_AssertFactory(this));
};
hunit_TestCase.__name__ = ["hunit","TestCase"];
hunit_TestCase.getMockData = function(mock) {
	return mock.__hu_mock__;
};
hunit_TestCase.prototype = {
	match: null
	,assert: null
	,__hu_state: null
	,setupTestCase: function() {
	}
	,setup: function() {
	}
	,tearDown: function() {
	}
	,tearDownTestCase: function() {
	}
	,expectException: function(match,pos) {
		if(match == null) match = new hunit_match_AnyMatch();
		this.__hu_state.set_expectedException(new hunit_exceptions_ExpectedExceptionData(match,pos));
	}
	,notice: function(msg,pos) {
		this.__hu_state.notice(msg,pos);
	}
	,set_match: function(match) {
		if(this.match != null) throw new js__$Boot_HaxeError(new hunit_exceptions_InvalidTestException("Matcher factory already set",{ fileName : "TestCase.hx", lineNumber : 201, className : "hunit.TestCase", methodName : "set_match"}));
		return this.match = match;
	}
	,set_assert: function(assert) {
		if(this.assert != null) throw new js__$Boot_HaxeError(new hunit_exceptions_InvalidTestException("Assertion factory already set",{ fileName : "TestCase.hx", lineNumber : 216, className : "hunit.TestCase", methodName : "set_assert"}));
		return this.assert = assert;
	}
	,__class__: hunit_TestCase
	,__properties__: {set_assert:"set_assert",set_match:"set_match"}
};
var ChildWidgetNodeTest = function() {
	hunit_TestCase.call(this);
};
ChildWidgetNodeTest.__name__ = ["ChildWidgetNodeTest"];
ChildWidgetNodeTest.__super__ = hunit_TestCase;
ChildWidgetNodeTest.prototype = $extend(hunit_TestCase.prototype,{
	childWidgetNode: function() {
		var root = new Child();
		var level1 = root.get_level1();
		var level2 = root.get_level2();
		this.assert.equal(level1,level2.get_parent(),null,{ fileName : "ChildWidgetNodeTest.hx", lineNumber : 22, className : "ChildWidgetNodeTest", methodName : "childWidgetNode"});
		this.assert.equal(root,level1.get_parent(),null,{ fileName : "ChildWidgetNodeTest.hx", lineNumber : 23, className : "ChildWidgetNodeTest", methodName : "childWidgetNode"});
	}
	,__class__: ChildWidgetNodeTest
});
var EReg = function(r,opt) {
	opt = opt.split("u").join("");
	this.r = new RegExp(r,opt);
};
EReg.__name__ = ["EReg"];
EReg.prototype = {
	r: null
	,match: function(s) {
		if(this.r.global) this.r.lastIndex = 0;
		this.r.m = this.r.exec(s);
		this.r.s = s;
		return this.r.m != null;
	}
	,matched: function(n) {
		if(this.r.m != null && n >= 0 && n < this.r.m.length) return this.r.m[n]; else throw new js__$Boot_HaxeError("EReg::matched");
	}
	,replace: function(s,by) {
		return s.replace(this.r,by);
	}
	,__class__: EReg
};
var Exception = function(message,pos) {
	this.message = message;
	this.pos = pos;
	this.stack = this.buildStack(haxe_CallStack.callStack());
};
Exception.__name__ = ["Exception"];
Exception.wrap = function(e,pos) {
	if(js_Boot.__instanceof(e,Exception)) return e;
	var exceptionStack = haxe_CallStack.exceptionStack();
	var exception = new Exception(Std.string(e),pos);
	if(exceptionStack.length > 0) exception.stack = exceptionStack;
	return exception;
};
Exception.processCallStackOnCreation = function(stack) {
	return stack;
};
Exception.prototype = {
	message: null
	,pos: null
	,stack: null
	,truncateStack: function(pos,count) {
		if(count == null) count = 0;
		if(pos != null) this.stack = exception_StackTools.jsTruncate(this.stack,pos,false);
		if(count > 0) this.stack = this.stack.slice(count);
	}
	,stringStack: function() {
		return haxe_CallStack.toString(this.stack);
	}
	,toString: function() {
		var className = Type.getClassName(js_Boot.getClass(this));
		var position;
		if(this.pos == null) position = "unknown position"; else position = this.pos.fileName + ":" + this.pos.lineNumber;
		var msg = "" + className + ": " + this.message + "\n\tCreated at " + position;
		msg += StringTools.replace(haxe_CallStack.toString(this.stack),"\n","\n\t");
		return msg;
	}
	,buildStack: function(stack) {
		var stack1 = exception_StackTools.jsTruncate(stack,this.pos,false);
		return Exception.processCallStackOnCreation(stack1);
	}
	,__class__: Exception
};
var HUnit = function() { };
HUnit.__name__ = ["HUnit"];
HUnit.main = function() {
	Exception.processCallStackOnCreation = HUnit.processExceptionStack;
	var suite = new hunit_TestSuite();
	suite.add(new SignalValueTest());
	suite.add(new MetricValueTest());
	suite.add(new ChildWidgetNodeTest());
	suite.run();
};
HUnit.processExceptionStack = function(stack) {
	var count = 4;
	return stack.slice(0,-count);
};
var HxOverrides = function() { };
HxOverrides.__name__ = ["HxOverrides"];
HxOverrides.cca = function(s,index) {
	var x = s.charCodeAt(index);
	if(x != x) return undefined;
	return x;
};
HxOverrides.substr = function(s,pos,len) {
	if(pos != null && pos != 0 && len != null && len < 0) return "";
	if(len == null) len = s.length;
	if(pos < 0) {
		pos = s.length + pos;
		if(pos < 0) pos = 0;
	} else if(len < 0) len = s.length + len - pos;
	return s.substr(pos,len);
};
HxOverrides.indexOf = function(a,obj,i) {
	var len = a.length;
	if(i < 0) {
		i += len;
		if(i < 0) i = 0;
	}
	while(i < len) {
		if(a[i] === obj) return i;
		i++;
	}
	return -1;
};
HxOverrides.remove = function(a,obj) {
	var i = HxOverrides.indexOf(a,obj,0);
	if(i == -1) return false;
	a.splice(i,1);
	return true;
};
HxOverrides.iter = function(a) {
	return { cur : 0, arr : a, hasNext : function() {
		return this.cur < this.arr.length;
	}, next : function() {
		return this.arr[this.cur++];
	}};
};
var List = function() {
	this.length = 0;
};
List.__name__ = ["List"];
List.prototype = {
	h: null
	,q: null
	,length: null
	,add: function(item) {
		var x = [item];
		if(this.h == null) this.h = x; else this.q[1] = x;
		this.q = x;
		this.length++;
	}
	,last: function() {
		if(this.q == null) return null; else return this.q[0];
	}
	,remove: function(v) {
		var prev = null;
		var l = this.h;
		while(l != null) {
			if(l[0] == v) {
				if(prev == null) this.h = l[1]; else prev[1] = l[1];
				if(this.q == l) this.q = prev;
				this.length--;
				return true;
			}
			prev = l;
			l = l[1];
		}
		return false;
	}
	,iterator: function() {
		return new _$List_ListIterator(this.h);
	}
	,__class__: List
};
var _$List_ListIterator = function(head) {
	this.head = head;
	this.val = null;
};
_$List_ListIterator.__name__ = ["_List","ListIterator"];
_$List_ListIterator.prototype = {
	head: null
	,val: null
	,hasNext: function() {
		return this.head != null;
	}
	,next: function() {
		this.val = this.head[0];
		this.head = this.head[1];
		return this.val;
	}
	,__class__: _$List_ListIterator
};
Math.__name__ = ["Math"];
var Metric = function() {
	this.percents_initialized = false;
	this.pixels_initialized = false;
	this.dips_initialized = false;
	sx_widgets_Widget.call(this);
	this.addChild(this.get_dips());
	this.addChild(this.get_pixels());
	this.addChild(this.get_percents());
};
Metric.__name__ = ["Metric"];
Metric.__super__ = sx_widgets_Widget;
Metric.prototype = $extend(sx_widgets_Widget.prototype,{
	dips_initialized: null
	,dips: null
	,pixels_initialized: null
	,pixels: null
	,percents_initialized: null
	,percents: null
	,destroyHml: function() {
	}
	,set_dips: function(value) {
		this.dips_initialized = true;
		return this.dips = value;
	}
	,get_dips: function() {
		if(this.dips_initialized) return this.dips;
		this.dips_initialized = true;
		this.set_dips(new sx_widgets_Widget());
		var res = this.dips;
		res.get_left().set_dip(10);
		return res;
	}
	,set_pixels: function(value) {
		this.pixels_initialized = true;
		return this.pixels = value;
	}
	,get_pixels: function() {
		if(this.pixels_initialized) return this.pixels;
		this.pixels_initialized = true;
		this.set_pixels(new sx_widgets_Widget());
		var res = this.pixels;
		res.get_left().set_px(10);
		return res;
	}
	,set_percents: function(value) {
		this.percents_initialized = true;
		return this.percents = value;
	}
	,get_percents: function() {
		if(this.percents_initialized) return this.percents;
		this.percents_initialized = true;
		this.set_percents(new sx_widgets_Widget());
		var res = this.percents;
		res.get_left().set_pct(10);
		return res;
	}
	,__class__: Metric
	,__properties__: $extend(sx_widgets_Widget.prototype.__properties__,{set_percents:"set_percents",get_percents:"get_percents",set_pixels:"set_pixels",get_pixels:"get_pixels",set_dips:"set_dips",get_dips:"get_dips"})
});
var MetricValueTest = function() {
	hunit_TestCase.call(this);
};
MetricValueTest.__name__ = ["MetricValueTest"];
MetricValueTest.__super__ = hunit_TestCase;
MetricValueTest.prototype = $extend(hunit_TestCase.prototype,{
	dip: function() {
		var ui = new Metric();
		this.assert.equal("dip",ui.get_dips().get_left().units,null,{ fileName : "MetricValueTest.hx", lineNumber : 19, className : "MetricValueTest", methodName : "dip"});
	}
	,pixel: function() {
		var ui = new Metric();
		this.assert.equal("px",ui.get_pixels().get_left().units,null,{ fileName : "MetricValueTest.hx", lineNumber : 28, className : "MetricValueTest", methodName : "pixel"});
	}
	,pct: function() {
		var ui = new Metric();
		this.assert.equal("pct",ui.get_percents().get_left().units,null,{ fileName : "MetricValueTest.hx", lineNumber : 37, className : "MetricValueTest", methodName : "pct"});
	}
	,__class__: MetricValueTest
});
var Reflect = function() { };
Reflect.__name__ = ["Reflect"];
Reflect.field = function(o,field) {
	try {
		return o[field];
	} catch( e ) {
		haxe_CallStack.lastException = e;
		if (e instanceof js__$Boot_HaxeError) e = e.val;
		return null;
	}
};
Reflect.getProperty = function(o,field) {
	var tmp;
	if(o == null) return null; else if(o.__properties__ && (tmp = o.__properties__["get_" + field])) return o[tmp](); else return o[field];
};
Reflect.setProperty = function(o,field,value) {
	var tmp;
	if(o.__properties__ && (tmp = o.__properties__["set_" + field])) o[tmp](value); else o[field] = value;
};
Reflect.callMethod = function(o,func,args) {
	return func.apply(o,args);
};
Reflect.fields = function(o) {
	var a = [];
	if(o != null) {
		var hasOwnProperty = Object.prototype.hasOwnProperty;
		for( var f in o ) {
		if(f != "__id__" && f != "hx__closures__" && hasOwnProperty.call(o,f)) a.push(f);
		}
	}
	return a;
};
Reflect.isFunction = function(f) {
	return typeof(f) == "function" && !(f.__name__ || f.__ename__);
};
Reflect.compareMethods = function(f1,f2) {
	if(f1 == f2) return true;
	if(!Reflect.isFunction(f1) || !Reflect.isFunction(f2)) return false;
	return f1.scope == f2.scope && f1.method == f2.method && f1.method != null;
};
var Signal = function() {
	this.closureSingleExpr_initialized = false;
	this.closureBlockBody_initialized = false;
	this.simple_initialized = false;
	this.closureSingleExprClicked_initialized = false;
	this.closureBlockClicked_initialized = false;
	this.simpleClicked_initialized = false;
	sx_widgets_Widget.call(this);
	this.addChild(this.get_simple());
	this.addChild(this.get_closureBlockBody());
	this.addChild(this.get_closureSingleExpr());
};
Signal.__name__ = ["Signal"];
Signal.__super__ = sx_widgets_Widget;
Signal.prototype = $extend(sx_widgets_Widget.prototype,{
	simpleClicked_initialized: null
	,simpleClicked: null
	,closureBlockClicked_initialized: null
	,closureBlockClicked: null
	,closureSingleExprClicked_initialized: null
	,closureSingleExprClicked: null
	,simple_initialized: null
	,simple: null
	,closureBlockBody_initialized: null
	,closureBlockBody: null
	,closureSingleExpr_initialized: null
	,closureSingleExpr: null
	,destroyHml: function() {
	}
	,set_simpleClicked: function(value) {
		this.simpleClicked_initialized = true;
		return this.simpleClicked = value;
	}
	,get_simpleClicked: function() {
		if(this.simpleClicked_initialized) return this.simpleClicked;
		this.simpleClicked_initialized = true;
		this.set_simpleClicked(false);
		var res = this.simpleClicked;
		return res;
	}
	,set_closureBlockClicked: function(value) {
		this.closureBlockClicked_initialized = true;
		return this.closureBlockClicked = value;
	}
	,get_closureBlockClicked: function() {
		if(this.closureBlockClicked_initialized) return this.closureBlockClicked;
		this.closureBlockClicked_initialized = true;
		this.set_closureBlockClicked(false);
		var res = this.closureBlockClicked;
		return res;
	}
	,set_closureSingleExprClicked: function(value) {
		this.closureSingleExprClicked_initialized = true;
		return this.closureSingleExprClicked = value;
	}
	,get_closureSingleExprClicked: function() {
		if(this.closureSingleExprClicked_initialized) return this.closureSingleExprClicked;
		this.closureSingleExprClicked_initialized = true;
		this.set_closureSingleExprClicked(false);
		var res = this.closureSingleExprClicked;
		return res;
	}
	,set_simple: function(value) {
		this.simple_initialized = true;
		return this.simple = value;
	}
	,get_simple: function() {
		var _g = this;
		if(this.simple_initialized) return this.simple;
		this.simple_initialized = true;
		this.set_simple(new sx_widgets_Widget());
		var res = this.simple;
		res.get_onClick().add(function(__0,__1,__2) {
			_g.set_simpleClicked(true);
		});
		return res;
	}
	,set_closureBlockBody: function(value) {
		this.closureBlockBody_initialized = true;
		return this.closureBlockBody = value;
	}
	,get_closureBlockBody: function() {
		var _g = this;
		if(this.closureBlockBody_initialized) return this.closureBlockBody;
		this.closureBlockBody_initialized = true;
		this.set_closureBlockBody(new sx_widgets_Widget());
		var res = this.closureBlockBody;
		res.get_onClick().add(function(processor,dispatcher,touchId) {
			_g.set_closureBlockClicked(true);
		});
		return res;
	}
	,set_closureSingleExpr: function(value) {
		this.closureSingleExpr_initialized = true;
		return this.closureSingleExpr = value;
	}
	,get_closureSingleExpr: function() {
		var _g = this;
		if(this.closureSingleExpr_initialized) return this.closureSingleExpr;
		this.closureSingleExpr_initialized = true;
		this.set_closureSingleExpr(new sx_widgets_Widget());
		var res = this.closureSingleExpr;
		res.get_onClick().add(function(processor,dispatcher,touchId) {
			_g.set_closureSingleExprClicked(true);
		});
		return res;
	}
	,__class__: Signal
	,__properties__: $extend(sx_widgets_Widget.prototype.__properties__,{set_closureSingleExpr:"set_closureSingleExpr",get_closureSingleExpr:"get_closureSingleExpr",set_closureBlockBody:"set_closureBlockBody",get_closureBlockBody:"get_closureBlockBody",set_simple:"set_simple",get_simple:"get_simple",set_closureSingleExprClicked:"set_closureSingleExprClicked",get_closureSingleExprClicked:"get_closureSingleExprClicked",set_closureBlockClicked:"set_closureBlockClicked",get_closureBlockClicked:"get_closureBlockClicked",set_simpleClicked:"set_simpleClicked",get_simpleClicked:"get_simpleClicked"})
});
var SignalValueTest = function() {
	hunit_TestCase.call(this);
};
SignalValueTest.__name__ = ["SignalValueTest"];
SignalValueTest.__super__ = hunit_TestCase;
SignalValueTest.prototype = $extend(hunit_TestCase.prototype,{
	simple: function() {
		var ui = new Signal();
		if(ui.get_simple().get_onClick() != null && ui.get_simple().get_onClick().__listeners.length > 0) {
			if(ui.get_simple().get_onClick().__listenersInUse) {
				var _g = 0;
				var _g1 = ui.get_simple().get_onClick().__listeners;
				while(_g < _g1.length) {
					var listener = _g1[_g];
					++_g;
					listener(ui.get_simple(),ui.get_simple(),-1);
				}
				false;
			} else {
				ui.get_simple().get_onClick().__listenersInUse = true;
				var _g2 = 0;
				var _g11 = ui.get_simple().get_onClick().__listeners;
				while(_g2 < _g11.length) {
					var listener1 = _g11[_g2];
					++_g2;
					listener1(ui.get_simple(),ui.get_simple(),-1);
				}
				ui.get_simple().get_onClick().__listenersInUse = false;
			}
		}
		this.assert.isTrue(ui.get_simpleClicked(),null,{ fileName : "SignalValueTest.hx", lineNumber : 21, className : "SignalValueTest", methodName : "simple"});
	}
	,closureWithBlockBody: function() {
		var ui = new Signal();
		if(ui.get_closureBlockBody().get_onClick() != null && ui.get_closureBlockBody().get_onClick().__listeners.length > 0) {
			if(ui.get_closureBlockBody().get_onClick().__listenersInUse) {
				var _g = 0;
				var _g1 = ui.get_closureBlockBody().get_onClick().__listeners;
				while(_g < _g1.length) {
					var listener = _g1[_g];
					++_g;
					listener(ui.get_closureBlockBody(),ui.get_closureBlockBody(),-1);
				}
				false;
			} else {
				ui.get_closureBlockBody().get_onClick().__listenersInUse = true;
				var _g2 = 0;
				var _g11 = ui.get_closureBlockBody().get_onClick().__listeners;
				while(_g2 < _g11.length) {
					var listener1 = _g11[_g2];
					++_g2;
					listener1(ui.get_closureBlockBody(),ui.get_closureBlockBody(),-1);
				}
				ui.get_closureBlockBody().get_onClick().__listenersInUse = false;
			}
		}
		this.assert.isTrue(ui.get_closureBlockClicked(),null,{ fileName : "SignalValueTest.hx", lineNumber : 32, className : "SignalValueTest", methodName : "closureWithBlockBody"});
	}
	,closureWithSingleExprBody: function() {
		var ui = new Signal();
		if(ui.get_closureSingleExpr().get_onClick() != null && ui.get_closureSingleExpr().get_onClick().__listeners.length > 0) {
			if(ui.get_closureSingleExpr().get_onClick().__listenersInUse) {
				var _g = 0;
				var _g1 = ui.get_closureSingleExpr().get_onClick().__listeners;
				while(_g < _g1.length) {
					var listener = _g1[_g];
					++_g;
					listener(ui.get_closureSingleExpr(),ui.get_closureSingleExpr(),-1);
				}
				false;
			} else {
				ui.get_closureSingleExpr().get_onClick().__listenersInUse = true;
				var _g2 = 0;
				var _g11 = ui.get_closureSingleExpr().get_onClick().__listeners;
				while(_g2 < _g11.length) {
					var listener1 = _g11[_g2];
					++_g2;
					listener1(ui.get_closureSingleExpr(),ui.get_closureSingleExpr(),-1);
				}
				ui.get_closureSingleExpr().get_onClick().__listenersInUse = false;
			}
		}
		this.assert.isTrue(ui.get_closureSingleExprClicked(),null,{ fileName : "SignalValueTest.hx", lineNumber : 43, className : "SignalValueTest", methodName : "closureWithSingleExprBody"});
	}
	,__class__: SignalValueTest
});
var Std = function() { };
Std.__name__ = ["Std"];
Std.string = function(s) {
	return js_Boot.__string_rec(s,"");
};
Std.parseInt = function(x) {
	var v = parseInt(x,10);
	if(v == 0 && (HxOverrides.cca(x,1) == 120 || HxOverrides.cca(x,1) == 88)) v = parseInt(x);
	if(isNaN(v)) return null;
	return v;
};
var StringBuf = function() {
	this.b = "";
};
StringBuf.__name__ = ["StringBuf"];
StringBuf.prototype = {
	b: null
	,add: function(x) {
		this.b += Std.string(x);
	}
	,addSub: function(s,pos,len) {
		if(len == null) this.b += HxOverrides.substr(s,pos,null); else this.b += HxOverrides.substr(s,pos,len);
	}
	,__class__: StringBuf
};
var StringTools = function() { };
StringTools.__name__ = ["StringTools"];
StringTools.htmlEscape = function(s,quotes) {
	s = s.split("&").join("&amp;").split("<").join("&lt;").split(">").join("&gt;");
	if(quotes) return s.split("\"").join("&quot;").split("'").join("&#039;"); else return s;
};
StringTools.isSpace = function(s,pos) {
	var c = HxOverrides.cca(s,pos);
	return c > 8 && c < 14 || c == 32;
};
StringTools.ltrim = function(s) {
	var l = s.length;
	var r = 0;
	while(r < l && StringTools.isSpace(s,r)) r++;
	if(r > 0) return HxOverrides.substr(s,r,l - r); else return s;
};
StringTools.rtrim = function(s) {
	var l = s.length;
	var r = 0;
	while(r < l && StringTools.isSpace(s,l - r - 1)) r++;
	if(r > 0) return HxOverrides.substr(s,0,l - r); else return s;
};
StringTools.trim = function(s) {
	return StringTools.ltrim(StringTools.rtrim(s));
};
StringTools.replace = function(s,sub,by) {
	return s.split(sub).join(by);
};
StringTools.fastCodeAt = function(s,index) {
	return s.charCodeAt(index);
};
var ValueType = { __ename__ : ["ValueType"], __constructs__ : ["TNull","TInt","TFloat","TBool","TObject","TFunction","TClass","TEnum","TUnknown"] };
ValueType.TNull = ["TNull",0];
ValueType.TNull.toString = $estr;
ValueType.TNull.__enum__ = ValueType;
ValueType.TInt = ["TInt",1];
ValueType.TInt.toString = $estr;
ValueType.TInt.__enum__ = ValueType;
ValueType.TFloat = ["TFloat",2];
ValueType.TFloat.toString = $estr;
ValueType.TFloat.__enum__ = ValueType;
ValueType.TBool = ["TBool",3];
ValueType.TBool.toString = $estr;
ValueType.TBool.__enum__ = ValueType;
ValueType.TObject = ["TObject",4];
ValueType.TObject.toString = $estr;
ValueType.TObject.__enum__ = ValueType;
ValueType.TFunction = ["TFunction",5];
ValueType.TFunction.toString = $estr;
ValueType.TFunction.__enum__ = ValueType;
ValueType.TClass = function(c) { var $x = ["TClass",6,c]; $x.__enum__ = ValueType; $x.toString = $estr; return $x; };
ValueType.TEnum = function(e) { var $x = ["TEnum",7,e]; $x.__enum__ = ValueType; $x.toString = $estr; return $x; };
ValueType.TUnknown = ["TUnknown",8];
ValueType.TUnknown.toString = $estr;
ValueType.TUnknown.__enum__ = ValueType;
var Type = function() { };
Type.__name__ = ["Type"];
Type.getClass = function(o) {
	if(o == null) return null; else return js_Boot.getClass(o);
};
Type.getClassName = function(c) {
	var a = c.__name__;
	if(a == null) return null;
	return a.join(".");
};
Type.getEnumName = function(e) {
	var a = e.__ename__;
	return a.join(".");
};
Type.createEmptyInstance = function(cl) {
	function empty() {}; empty.prototype = cl.prototype;
	return new empty();
};
Type.getInstanceFields = function(c) {
	var a = [];
	for(var i in c.prototype) a.push(i);
	HxOverrides.remove(a,"__class__");
	HxOverrides.remove(a,"__properties__");
	return a;
};
Type["typeof"] = function(v) {
	var _g = typeof(v);
	switch(_g) {
	case "boolean":
		return ValueType.TBool;
	case "string":
		return ValueType.TClass(String);
	case "number":
		if(Math.ceil(v) == v % 2147483648.0) return ValueType.TInt;
		return ValueType.TFloat;
	case "object":
		if(v == null) return ValueType.TNull;
		var e = v.__enum__;
		if(e != null) return ValueType.TEnum(e);
		var c = js_Boot.getClass(v);
		if(c != null) return ValueType.TClass(c);
		return ValueType.TObject;
	case "function":
		if(v.__name__ || v.__ename__) return ValueType.TObject;
		return ValueType.TFunction;
	case "undefined":
		return ValueType.TNull;
	default:
		return ValueType.TUnknown;
	}
};
Type.enumEq = function(a,b) {
	if(a == b) return true;
	try {
		if(a[0] != b[0]) return false;
		var _g1 = 2;
		var _g = a.length;
		while(_g1 < _g) {
			var i = _g1++;
			if(!Type.enumEq(a[i],b[i])) return false;
		}
		var e = a.__enum__;
		if(e != b.__enum__ || e == null) return false;
	} catch( e1 ) {
		haxe_CallStack.lastException = e1;
		if (e1 instanceof js__$Boot_HaxeError) e1 = e1.val;
		return false;
	}
	return true;
};
var Xml = function(nodeType) {
	this.nodeType = nodeType;
	this.children = [];
	this.attributeMap = new haxe_ds_StringMap();
};
Xml.__name__ = ["Xml"];
Xml.parse = function(str) {
	return haxe_xml_Parser.parse(str);
};
Xml.createElement = function(name) {
	var xml = new Xml(Xml.Element);
	if(xml.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element but found " + xml.nodeType);
	xml.nodeName = name;
	return xml;
};
Xml.createPCData = function(data) {
	var xml = new Xml(Xml.PCData);
	if(xml.nodeType == Xml.Document || xml.nodeType == Xml.Element) throw new js__$Boot_HaxeError("Bad node type, unexpected " + xml.nodeType);
	xml.nodeValue = data;
	return xml;
};
Xml.createCData = function(data) {
	var xml = new Xml(Xml.CData);
	if(xml.nodeType == Xml.Document || xml.nodeType == Xml.Element) throw new js__$Boot_HaxeError("Bad node type, unexpected " + xml.nodeType);
	xml.nodeValue = data;
	return xml;
};
Xml.createComment = function(data) {
	var xml = new Xml(Xml.Comment);
	if(xml.nodeType == Xml.Document || xml.nodeType == Xml.Element) throw new js__$Boot_HaxeError("Bad node type, unexpected " + xml.nodeType);
	xml.nodeValue = data;
	return xml;
};
Xml.createDocType = function(data) {
	var xml = new Xml(Xml.DocType);
	if(xml.nodeType == Xml.Document || xml.nodeType == Xml.Element) throw new js__$Boot_HaxeError("Bad node type, unexpected " + xml.nodeType);
	xml.nodeValue = data;
	return xml;
};
Xml.createProcessingInstruction = function(data) {
	var xml = new Xml(Xml.ProcessingInstruction);
	if(xml.nodeType == Xml.Document || xml.nodeType == Xml.Element) throw new js__$Boot_HaxeError("Bad node type, unexpected " + xml.nodeType);
	xml.nodeValue = data;
	return xml;
};
Xml.createDocument = function() {
	return new Xml(Xml.Document);
};
Xml.prototype = {
	nodeType: null
	,nodeName: null
	,nodeValue: null
	,parent: null
	,children: null
	,attributeMap: null
	,get_nodeName: function() {
		if(this.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element but found " + this.nodeType);
		return this.nodeName;
	}
	,get: function(att) {
		if(this.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element but found " + this.nodeType);
		return this.attributeMap.get(att);
	}
	,set: function(att,value) {
		if(this.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element but found " + this.nodeType);
		this.attributeMap.set(att,value);
	}
	,exists: function(att) {
		if(this.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element but found " + this.nodeType);
		return this.attributeMap.exists(att);
	}
	,attributes: function() {
		if(this.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element but found " + this.nodeType);
		return this.attributeMap.keys();
	}
	,iterator: function() {
		if(this.nodeType != Xml.Document && this.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element or Document but found " + this.nodeType);
		return HxOverrides.iter(this.children);
	}
	,elements: function() {
		if(this.nodeType != Xml.Document && this.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element or Document but found " + this.nodeType);
		var ret;
		var _g = [];
		var _g1 = 0;
		var _g2 = this.children;
		while(_g1 < _g2.length) {
			var child = _g2[_g1];
			++_g1;
			if(child.nodeType == Xml.Element) _g.push(child);
		}
		ret = _g;
		return HxOverrides.iter(ret);
	}
	,elementsNamed: function(name) {
		if(this.nodeType != Xml.Document && this.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element or Document but found " + this.nodeType);
		var ret;
		var _g = [];
		var _g1 = 0;
		var _g2 = this.children;
		while(_g1 < _g2.length) {
			var child = _g2[_g1];
			++_g1;
			if(child.nodeType == Xml.Element && (function($this) {
				var $r;
				if(child.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element but found " + child.nodeType);
				$r = child.nodeName;
				return $r;
			}(this)) == name) _g.push(child);
		}
		ret = _g;
		return HxOverrides.iter(ret);
	}
	,firstElement: function() {
		if(this.nodeType != Xml.Document && this.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element or Document but found " + this.nodeType);
		var _g = 0;
		var _g1 = this.children;
		while(_g < _g1.length) {
			var child = _g1[_g];
			++_g;
			if(child.nodeType == Xml.Element) return child;
		}
		return null;
	}
	,addChild: function(x) {
		if(this.nodeType != Xml.Document && this.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element or Document but found " + this.nodeType);
		if(x.parent != null) x.parent.removeChild(x);
		this.children.push(x);
		x.parent = this;
	}
	,removeChild: function(x) {
		if(this.nodeType != Xml.Document && this.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element or Document but found " + this.nodeType);
		if(HxOverrides.remove(this.children,x)) {
			x.parent = null;
			return true;
		}
		return false;
	}
	,__class__: Xml
	,__properties__: {get_nodeName:"get_nodeName"}
};
var exception_StackTools = function() { };
exception_StackTools.__name__ = ["exception","StackTools"];
exception_StackTools.truncate = function(stack,pos,fromTop) {
	if(fromTop == null) fromTop = false;
	return exception_StackTools.jsTruncate(stack,pos,fromTop);
};
exception_StackTools.jsTruncate = function(stack,pos,fromTop) {
	if(fromTop == null) fromTop = false;
	var posIndex = 0;
	var posClass = StringTools.replace(pos.className,".","_");
	var _g1 = 0;
	var _g = stack.length;
	try {
		while(_g1 < _g) {
			var i = _g1++;
			{
				var _g2 = stack[i];
				switch(_g2[1]) {
				case 2:
					if(_g2[2] != null) switch(_g2[2][1]) {
					case 3:
						var line = _g2[4];
						var file = _g2[3];
						var methodName = _g2[2][3];
						var className = _g2[2][2];
						if(className == posClass && methodName == pos.methodName) {
							posIndex = i;
							throw "__break__";
						}
						break;
					default:
					} else {
					}
					break;
				default:
				}
			}
		}
	} catch( e ) { if( e != "__break__" ) throw e; }
	if(fromTop) return stack.slice(0,posIndex + 1); else return stack.slice(posIndex);
};
var exception__$StackTools_IntIterator = function(from,till) {
	this.till = 0;
	this.current = 0;
	this.current = from;
	this.till = till;
};
exception__$StackTools_IntIterator.__name__ = ["exception","_StackTools","IntIterator"];
exception__$StackTools_IntIterator.prototype = {
	current: null
	,till: null
	,hasNext: function() {
		return this.current != this.till;
	}
	,next: function() {
		if(this.current < this.till) return this.current++; else return this.current--;
	}
	,__class__: exception__$StackTools_IntIterator
};
var haxe_StackItem = { __ename__ : ["haxe","StackItem"], __constructs__ : ["CFunction","Module","FilePos","Method","LocalFunction"] };
haxe_StackItem.CFunction = ["CFunction",0];
haxe_StackItem.CFunction.toString = $estr;
haxe_StackItem.CFunction.__enum__ = haxe_StackItem;
haxe_StackItem.Module = function(m) { var $x = ["Module",1,m]; $x.__enum__ = haxe_StackItem; $x.toString = $estr; return $x; };
haxe_StackItem.FilePos = function(s,file,line) { var $x = ["FilePos",2,s,file,line]; $x.__enum__ = haxe_StackItem; $x.toString = $estr; return $x; };
haxe_StackItem.Method = function(classname,method) { var $x = ["Method",3,classname,method]; $x.__enum__ = haxe_StackItem; $x.toString = $estr; return $x; };
haxe_StackItem.LocalFunction = function(v) { var $x = ["LocalFunction",4,v]; $x.__enum__ = haxe_StackItem; $x.toString = $estr; return $x; };
var haxe_CallStack = function() { };
haxe_CallStack.__name__ = ["haxe","CallStack"];
haxe_CallStack.getStack = function(e) {
	if(e == null) return [];
	var oldValue = Error.prepareStackTrace;
	Error.prepareStackTrace = function(error,callsites) {
		var stack = [];
		var _g = 0;
		while(_g < callsites.length) {
			var site = callsites[_g];
			++_g;
			if(haxe_CallStack.wrapCallSite != null) site = haxe_CallStack.wrapCallSite(site);
			var method = null;
			var fullName = site.getFunctionName();
			if(fullName != null) {
				var idx = fullName.lastIndexOf(".");
				if(idx >= 0) {
					var className = HxOverrides.substr(fullName,0,idx);
					var methodName = HxOverrides.substr(fullName,idx + 1,null);
					method = haxe_StackItem.Method(className,methodName);
				}
			}
			stack.push(haxe_StackItem.FilePos(method,site.getFileName(),site.getLineNumber()));
		}
		return stack;
	};
	var a = haxe_CallStack.makeStack(e.stack);
	Error.prepareStackTrace = oldValue;
	return a;
};
haxe_CallStack.callStack = function() {
	try {
		throw new Error();
	} catch( e ) {
		haxe_CallStack.lastException = e;
		if (e instanceof js__$Boot_HaxeError) e = e.val;
		var a = haxe_CallStack.getStack(e);
		a.shift();
		return a;
	}
};
haxe_CallStack.exceptionStack = function() {
	return haxe_CallStack.getStack(haxe_CallStack.lastException);
};
haxe_CallStack.toString = function(stack) {
	var b = new StringBuf();
	var _g = 0;
	while(_g < stack.length) {
		var s = stack[_g];
		++_g;
		b.b += "\nCalled from ";
		haxe_CallStack.itemToString(b,s);
	}
	return b.b;
};
haxe_CallStack.itemToString = function(b,s) {
	switch(s[1]) {
	case 0:
		b.b += "a C function";
		break;
	case 1:
		var m = s[2];
		b.b += "module ";
		if(m == null) b.b += "null"; else b.b += "" + m;
		break;
	case 2:
		var line = s[4];
		var file = s[3];
		var s1 = s[2];
		if(s1 != null) {
			haxe_CallStack.itemToString(b,s1);
			b.b += " (";
		}
		if(file == null) b.b += "null"; else b.b += "" + file;
		b.b += " line ";
		if(line == null) b.b += "null"; else b.b += "" + line;
		if(s1 != null) b.b += ")";
		break;
	case 3:
		var meth = s[3];
		var cname = s[2];
		if(cname == null) b.b += "null"; else b.b += "" + cname;
		b.b += ".";
		if(meth == null) b.b += "null"; else b.b += "" + meth;
		break;
	case 4:
		var n = s[2];
		b.b += "local function #";
		if(n == null) b.b += "null"; else b.b += "" + n;
		break;
	}
};
haxe_CallStack.makeStack = function(s) {
	if(s == null) return []; else if(typeof(s) == "string") {
		var stack = s.split("\n");
		if(stack[0] == "Error") stack.shift();
		var m = [];
		var rie10 = new EReg("^   at ([A-Za-z0-9_. ]+) \\(([^)]+):([0-9]+):([0-9]+)\\)$","");
		var _g = 0;
		while(_g < stack.length) {
			var line = stack[_g];
			++_g;
			if(rie10.match(line)) {
				var path = rie10.matched(1).split(".");
				var meth = path.pop();
				var file = rie10.matched(2);
				var line1 = Std.parseInt(rie10.matched(3));
				m.push(haxe_StackItem.FilePos(meth == "Anonymous function"?haxe_StackItem.LocalFunction():meth == "Global code"?null:haxe_StackItem.Method(path.join("."),meth),file,line1));
			} else m.push(haxe_StackItem.Module(StringTools.trim(line)));
		}
		return m;
	} else return s;
};
var haxe_IMap = function() { };
haxe_IMap.__name__ = ["haxe","IMap"];
haxe_IMap.prototype = {
	get: null
	,keys: null
	,__class__: haxe_IMap
};
var haxe_Log = function() { };
haxe_Log.__name__ = ["haxe","Log"];
haxe_Log.trace = function(v,infos) {
	js_Boot.__trace(v,infos);
};
var haxe_Timer = function() { };
haxe_Timer.__name__ = ["haxe","Timer"];
haxe_Timer.stamp = function() {
	return new Date().getTime() / 1000;
};
var haxe_ds_StringMap = function() {
	this.h = { };
};
haxe_ds_StringMap.__name__ = ["haxe","ds","StringMap"];
haxe_ds_StringMap.__interfaces__ = [haxe_IMap];
haxe_ds_StringMap.prototype = {
	h: null
	,rh: null
	,set: function(key,value) {
		if(__map_reserved[key] != null) this.setReserved(key,value); else this.h[key] = value;
	}
	,get: function(key) {
		if(__map_reserved[key] != null) return this.getReserved(key);
		return this.h[key];
	}
	,exists: function(key) {
		if(__map_reserved[key] != null) return this.existsReserved(key);
		return this.h.hasOwnProperty(key);
	}
	,setReserved: function(key,value) {
		if(this.rh == null) this.rh = { };
		this.rh["$" + key] = value;
	}
	,getReserved: function(key) {
		if(this.rh == null) return null; else return this.rh["$" + key];
	}
	,existsReserved: function(key) {
		if(this.rh == null) return false;
		return this.rh.hasOwnProperty("$" + key);
	}
	,keys: function() {
		var _this = this.arrayKeys();
		return HxOverrides.iter(_this);
	}
	,arrayKeys: function() {
		var out = [];
		for( var key in this.h ) {
		if(this.h.hasOwnProperty(key)) out.push(key);
		}
		if(this.rh != null) {
			for( var key in this.rh ) {
			if(key.charCodeAt(0) == 36) out.push(key.substr(1));
			}
		}
		return out;
	}
	,__class__: haxe_ds_StringMap
};
var haxe_rtti_CType = { __ename__ : ["haxe","rtti","CType"], __constructs__ : ["CUnknown","CEnum","CClass","CTypedef","CFunction","CAnonymous","CDynamic","CAbstract"] };
haxe_rtti_CType.CUnknown = ["CUnknown",0];
haxe_rtti_CType.CUnknown.toString = $estr;
haxe_rtti_CType.CUnknown.__enum__ = haxe_rtti_CType;
haxe_rtti_CType.CEnum = function(name,params) { var $x = ["CEnum",1,name,params]; $x.__enum__ = haxe_rtti_CType; $x.toString = $estr; return $x; };
haxe_rtti_CType.CClass = function(name,params) { var $x = ["CClass",2,name,params]; $x.__enum__ = haxe_rtti_CType; $x.toString = $estr; return $x; };
haxe_rtti_CType.CTypedef = function(name,params) { var $x = ["CTypedef",3,name,params]; $x.__enum__ = haxe_rtti_CType; $x.toString = $estr; return $x; };
haxe_rtti_CType.CFunction = function(args,ret) { var $x = ["CFunction",4,args,ret]; $x.__enum__ = haxe_rtti_CType; $x.toString = $estr; return $x; };
haxe_rtti_CType.CAnonymous = function(fields) { var $x = ["CAnonymous",5,fields]; $x.__enum__ = haxe_rtti_CType; $x.toString = $estr; return $x; };
haxe_rtti_CType.CDynamic = function(t) { var $x = ["CDynamic",6,t]; $x.__enum__ = haxe_rtti_CType; $x.toString = $estr; return $x; };
haxe_rtti_CType.CAbstract = function(name,params) { var $x = ["CAbstract",7,name,params]; $x.__enum__ = haxe_rtti_CType; $x.toString = $estr; return $x; };
var haxe_rtti_Rights = { __ename__ : ["haxe","rtti","Rights"], __constructs__ : ["RNormal","RNo","RCall","RMethod","RDynamic","RInline"] };
haxe_rtti_Rights.RNormal = ["RNormal",0];
haxe_rtti_Rights.RNormal.toString = $estr;
haxe_rtti_Rights.RNormal.__enum__ = haxe_rtti_Rights;
haxe_rtti_Rights.RNo = ["RNo",1];
haxe_rtti_Rights.RNo.toString = $estr;
haxe_rtti_Rights.RNo.__enum__ = haxe_rtti_Rights;
haxe_rtti_Rights.RCall = function(m) { var $x = ["RCall",2,m]; $x.__enum__ = haxe_rtti_Rights; $x.toString = $estr; return $x; };
haxe_rtti_Rights.RMethod = ["RMethod",3];
haxe_rtti_Rights.RMethod.toString = $estr;
haxe_rtti_Rights.RMethod.__enum__ = haxe_rtti_Rights;
haxe_rtti_Rights.RDynamic = ["RDynamic",4];
haxe_rtti_Rights.RDynamic.toString = $estr;
haxe_rtti_Rights.RDynamic.__enum__ = haxe_rtti_Rights;
haxe_rtti_Rights.RInline = ["RInline",5];
haxe_rtti_Rights.RInline.toString = $estr;
haxe_rtti_Rights.RInline.__enum__ = haxe_rtti_Rights;
var haxe_rtti_TypeTree = { __ename__ : ["haxe","rtti","TypeTree"], __constructs__ : ["TPackage","TClassdecl","TEnumdecl","TTypedecl","TAbstractdecl"] };
haxe_rtti_TypeTree.TPackage = function(name,full,subs) { var $x = ["TPackage",0,name,full,subs]; $x.__enum__ = haxe_rtti_TypeTree; $x.toString = $estr; return $x; };
haxe_rtti_TypeTree.TClassdecl = function(c) { var $x = ["TClassdecl",1,c]; $x.__enum__ = haxe_rtti_TypeTree; $x.toString = $estr; return $x; };
haxe_rtti_TypeTree.TEnumdecl = function(e) { var $x = ["TEnumdecl",2,e]; $x.__enum__ = haxe_rtti_TypeTree; $x.toString = $estr; return $x; };
haxe_rtti_TypeTree.TTypedecl = function(t) { var $x = ["TTypedecl",3,t]; $x.__enum__ = haxe_rtti_TypeTree; $x.toString = $estr; return $x; };
haxe_rtti_TypeTree.TAbstractdecl = function(a) { var $x = ["TAbstractdecl",4,a]; $x.__enum__ = haxe_rtti_TypeTree; $x.toString = $estr; return $x; };
var haxe_rtti_Rtti = function() { };
haxe_rtti_Rtti.__name__ = ["haxe","rtti","Rtti"];
haxe_rtti_Rtti.getRtti = function(c) {
	var rtti = Reflect.field(c,"__rtti");
	if(rtti == null) throw new js__$Boot_HaxeError("Class " + Type.getClassName(c) + " has no RTTI information, consider adding @:rtti");
	var x = Xml.parse(rtti).firstElement();
	var infos = new haxe_rtti_XmlParser().processElement(x);
	{
		var t = infos;
		switch(infos[1]) {
		case 1:
			var c1 = infos[2];
			return c1;
		default:
			throw new js__$Boot_HaxeError("Enum mismatch: expected TClassDecl but found " + Std.string(t));
		}
	}
};
var haxe_rtti_XmlParser = function() {
	this.root = [];
};
haxe_rtti_XmlParser.__name__ = ["haxe","rtti","XmlParser"];
haxe_rtti_XmlParser.prototype = {
	root: null
	,curplatform: null
	,mkPath: function(p) {
		return p;
	}
	,mkTypeParams: function(p) {
		var pl = p.split(":");
		if(pl[0] == "") return [];
		return pl;
	}
	,mkRights: function(r) {
		switch(r) {
		case "null":
			return haxe_rtti_Rights.RNo;
		case "method":
			return haxe_rtti_Rights.RMethod;
		case "dynamic":
			return haxe_rtti_Rights.RDynamic;
		case "inline":
			return haxe_rtti_Rights.RInline;
		default:
			return haxe_rtti_Rights.RCall(r);
		}
	}
	,xerror: function(c) {
		throw new js__$Boot_HaxeError("Invalid " + c.get_name());
	}
	,processElement: function(x) {
		var c = new haxe_xml_Fast(x);
		var _g = c.get_name();
		switch(_g) {
		case "class":
			return haxe_rtti_TypeTree.TClassdecl(this.xclass(c));
		case "enum":
			return haxe_rtti_TypeTree.TEnumdecl(this.xenum(c));
		case "typedef":
			return haxe_rtti_TypeTree.TTypedecl(this.xtypedef(c));
		case "abstract":
			return haxe_rtti_TypeTree.TAbstractdecl(this.xabstract(c));
		default:
			return this.xerror(c);
		}
	}
	,xmeta: function(x) {
		var ml = [];
		var _g = x.nodes.resolve("m").iterator();
		while(_g.head != null) {
			var m;
			m = (function($this) {
				var $r;
				_g.val = _g.head[0];
				_g.head = _g.head[1];
				$r = _g.val;
				return $r;
			}(this));
			var pl = [];
			var _g1 = m.nodes.resolve("e").iterator();
			while(_g1.head != null) {
				var p;
				p = (function($this) {
					var $r;
					_g1.val = _g1.head[0];
					_g1.head = _g1.head[1];
					$r = _g1.val;
					return $r;
				}(this));
				pl.push(p.get_innerHTML());
			}
			ml.push({ name : m.att.resolve("n"), params : pl});
		}
		return ml;
	}
	,xoverloads: function(x) {
		var l = new List();
		var $it0 = x.get_elements();
		while( $it0.hasNext() ) {
			var m = $it0.next();
			l.add(this.xclassfield(m));
		}
		return l;
	}
	,xpath: function(x) {
		var path = this.mkPath(x.att.resolve("path"));
		var params = new List();
		var $it0 = x.get_elements();
		while( $it0.hasNext() ) {
			var c = $it0.next();
			params.add(this.xtype(c));
		}
		return { path : path, params : params};
	}
	,xclass: function(x) {
		var csuper = null;
		var doc = null;
		var tdynamic = null;
		var interfaces = new List();
		var fields = new List();
		var statics = new List();
		var meta = [];
		var $it0 = x.get_elements();
		while( $it0.hasNext() ) {
			var c = $it0.next();
			var _g = c.get_name();
			switch(_g) {
			case "haxe_doc":
				doc = c.get_innerData();
				break;
			case "extends":
				csuper = this.xpath(c);
				break;
			case "implements":
				interfaces.add(this.xpath(c));
				break;
			case "haxe_dynamic":
				tdynamic = this.xtype(new haxe_xml_Fast(c.x.firstElement()));
				break;
			case "meta":
				meta = this.xmeta(c);
				break;
			default:
				if(c.x.exists("static")) statics.add(this.xclassfield(c)); else fields.add(this.xclassfield(c));
			}
		}
		return { file : x.has.resolve("file")?x.att.resolve("file"):null, path : this.mkPath(x.att.resolve("path")), module : x.has.resolve("module")?this.mkPath(x.att.resolve("module")):null, doc : doc, isPrivate : x.x.exists("private"), isExtern : x.x.exists("extern"), isInterface : x.x.exists("interface"), params : this.mkTypeParams(x.att.resolve("params")), superClass : csuper, interfaces : interfaces, fields : fields, statics : statics, tdynamic : tdynamic, platforms : this.defplat(), meta : meta};
	}
	,xclassfield: function(x,defPublic) {
		if(defPublic == null) defPublic = false;
		var e = x.get_elements();
		var t = this.xtype(e.next());
		var doc = null;
		var meta = [];
		var overloads = null;
		while( e.hasNext() ) {
			var c = e.next();
			var _g = c.get_name();
			switch(_g) {
			case "haxe_doc":
				doc = c.get_innerData();
				break;
			case "meta":
				meta = this.xmeta(c);
				break;
			case "overloads":
				overloads = this.xoverloads(c);
				break;
			default:
				this.xerror(c);
			}
		}
		return { name : x.get_name(), type : t, isPublic : x.x.exists("public") || defPublic, isOverride : x.x.exists("override"), line : x.has.resolve("line")?Std.parseInt(x.att.resolve("line")):null, doc : doc, get : x.has.resolve("get")?this.mkRights(x.att.resolve("get")):haxe_rtti_Rights.RNormal, set : x.has.resolve("set")?this.mkRights(x.att.resolve("set")):haxe_rtti_Rights.RNormal, params : x.has.resolve("params")?this.mkTypeParams(x.att.resolve("params")):[], platforms : this.defplat(), meta : meta, overloads : overloads, expr : x.has.resolve("expr")?x.att.resolve("expr"):null};
	}
	,xenum: function(x) {
		var cl = new List();
		var doc = null;
		var meta = [];
		var $it0 = x.get_elements();
		while( $it0.hasNext() ) {
			var c = $it0.next();
			if(c.get_name() == "haxe_doc") doc = c.get_innerData(); else if(c.get_name() == "meta") meta = this.xmeta(c); else cl.add(this.xenumfield(c));
		}
		return { file : x.has.resolve("file")?x.att.resolve("file"):null, path : this.mkPath(x.att.resolve("path")), module : x.has.resolve("module")?this.mkPath(x.att.resolve("module")):null, doc : doc, isPrivate : x.x.exists("private"), isExtern : x.x.exists("extern"), params : this.mkTypeParams(x.att.resolve("params")), constructors : cl, platforms : this.defplat(), meta : meta};
	}
	,xenumfield: function(x) {
		var args = null;
		var xdoc = x.x.elementsNamed("haxe_doc").next();
		var meta;
		if(x.hasNode.resolve("meta")) meta = this.xmeta(x.node.resolve("meta")); else meta = [];
		if(x.has.resolve("a")) {
			var names = x.att.resolve("a").split(":");
			var elts = x.get_elements();
			args = new List();
			var _g = 0;
			while(_g < names.length) {
				var c = names[_g];
				++_g;
				var opt = false;
				if(c.charAt(0) == "?") {
					opt = true;
					c = HxOverrides.substr(c,1,null);
				}
				args.add({ name : c, opt : opt, t : this.xtype(elts.next())});
			}
		}
		return { name : x.get_name(), args : args, doc : xdoc == null?null:new haxe_xml_Fast(xdoc).get_innerData(), meta : meta, platforms : this.defplat()};
	}
	,xabstract: function(x) {
		var doc = null;
		var impl = null;
		var athis = null;
		var meta = [];
		var to = [];
		var from = [];
		var $it0 = x.get_elements();
		while( $it0.hasNext() ) {
			var c = $it0.next();
			var _g = c.get_name();
			switch(_g) {
			case "haxe_doc":
				doc = c.get_innerData();
				break;
			case "meta":
				meta = this.xmeta(c);
				break;
			case "to":
				var $it1 = c.get_elements();
				while( $it1.hasNext() ) {
					var t = $it1.next();
					to.push({ t : this.xtype(new haxe_xml_Fast(t.x.firstElement())), field : t.has.resolve("field")?t.att.resolve("field"):null});
				}
				break;
			case "from":
				var $it2 = c.get_elements();
				while( $it2.hasNext() ) {
					var t1 = $it2.next();
					from.push({ t : this.xtype(new haxe_xml_Fast(t1.x.firstElement())), field : t1.has.resolve("field")?t1.att.resolve("field"):null});
				}
				break;
			case "impl":
				impl = this.xclass(c.node.resolve("class"));
				break;
			case "this":
				athis = this.xtype(new haxe_xml_Fast(c.x.firstElement()));
				break;
			default:
				this.xerror(c);
			}
		}
		return { file : x.has.resolve("file")?x.att.resolve("file"):null, path : this.mkPath(x.att.resolve("path")), module : x.has.resolve("module")?this.mkPath(x.att.resolve("module")):null, doc : doc, isPrivate : x.x.exists("private"), params : this.mkTypeParams(x.att.resolve("params")), platforms : this.defplat(), meta : meta, athis : athis, to : to, from : from, impl : impl};
	}
	,xtypedef: function(x) {
		var doc = null;
		var t = null;
		var meta = [];
		var $it0 = x.get_elements();
		while( $it0.hasNext() ) {
			var c = $it0.next();
			if(c.get_name() == "haxe_doc") doc = c.get_innerData(); else if(c.get_name() == "meta") meta = this.xmeta(c); else t = this.xtype(c);
		}
		var types = new haxe_ds_StringMap();
		if(this.curplatform != null) types.set(this.curplatform,t);
		return { file : x.has.resolve("file")?x.att.resolve("file"):null, path : this.mkPath(x.att.resolve("path")), module : x.has.resolve("module")?this.mkPath(x.att.resolve("module")):null, doc : doc, isPrivate : x.x.exists("private"), params : this.mkTypeParams(x.att.resolve("params")), type : t, types : types, platforms : this.defplat(), meta : meta};
	}
	,xtype: function(x) {
		var _g = x.get_name();
		switch(_g) {
		case "unknown":
			return haxe_rtti_CType.CUnknown;
		case "e":
			return haxe_rtti_CType.CEnum(this.mkPath(x.att.resolve("path")),this.xtypeparams(x));
		case "c":
			return haxe_rtti_CType.CClass(this.mkPath(x.att.resolve("path")),this.xtypeparams(x));
		case "t":
			return haxe_rtti_CType.CTypedef(this.mkPath(x.att.resolve("path")),this.xtypeparams(x));
		case "x":
			return haxe_rtti_CType.CAbstract(this.mkPath(x.att.resolve("path")),this.xtypeparams(x));
		case "f":
			var args = new List();
			var aname = x.att.resolve("a").split(":");
			var eargs = HxOverrides.iter(aname);
			var evalues;
			if(x.has.resolve("v")) {
				var _this = x.att.resolve("v").split(":");
				evalues = HxOverrides.iter(_this);
			} else evalues = null;
			var $it0 = x.get_elements();
			while( $it0.hasNext() ) {
				var e = $it0.next();
				var opt = false;
				var a = eargs.next();
				if(a == null) a = "";
				if(a.charAt(0) == "?") {
					opt = true;
					a = HxOverrides.substr(a,1,null);
				}
				var v;
				if(evalues == null) v = null; else v = evalues.next();
				args.add({ name : a, opt : opt, t : this.xtype(e), value : v == ""?null:v});
			}
			var ret = args.last();
			args.remove(ret);
			return haxe_rtti_CType.CFunction(args,ret.t);
		case "a":
			var fields = new List();
			var $it1 = x.get_elements();
			while( $it1.hasNext() ) {
				var f = $it1.next();
				var f1 = this.xclassfield(f,true);
				f1.platforms = new List();
				fields.add(f1);
			}
			return haxe_rtti_CType.CAnonymous(fields);
		case "d":
			var t = null;
			var tx = x.x.firstElement();
			if(tx != null) t = this.xtype(new haxe_xml_Fast(tx));
			return haxe_rtti_CType.CDynamic(t);
		default:
			return this.xerror(x);
		}
	}
	,xtypeparams: function(x) {
		var p = new List();
		var $it0 = x.get_elements();
		while( $it0.hasNext() ) {
			var c = $it0.next();
			p.add(this.xtype(c));
		}
		return p;
	}
	,defplat: function() {
		var l = new List();
		if(this.curplatform != null) l.add(this.curplatform);
		return l;
	}
	,__class__: haxe_rtti_XmlParser
};
var haxe_unit_TestCase = function() {
};
haxe_unit_TestCase.__name__ = ["haxe","unit","TestCase"];
haxe_unit_TestCase.prototype = {
	currentTest: null
	,setup: function() {
	}
	,tearDown: function() {
	}
	,print: function(v) {
		haxe_unit_TestRunner.print(v);
	}
	,assertTrue: function(b,c) {
		this.currentTest.done = true;
		if(b != true) {
			this.currentTest.success = false;
			this.currentTest.error = "expected true but was false";
			this.currentTest.posInfos = c;
			throw new js__$Boot_HaxeError(this.currentTest);
		}
	}
	,assertFalse: function(b,c) {
		this.currentTest.done = true;
		if(b == true) {
			this.currentTest.success = false;
			this.currentTest.error = "expected false but was true";
			this.currentTest.posInfos = c;
			throw new js__$Boot_HaxeError(this.currentTest);
		}
	}
	,assertEquals: function(expected,actual,c) {
		this.currentTest.done = true;
		if(actual != expected) {
			this.currentTest.success = false;
			this.currentTest.error = "expected '" + Std.string(expected) + "' but was '" + Std.string(actual) + "'";
			this.currentTest.posInfos = c;
			throw new js__$Boot_HaxeError(this.currentTest);
		}
	}
	,__class__: haxe_unit_TestCase
};
var haxe_unit_TestRunner = function() { };
haxe_unit_TestRunner.__name__ = ["haxe","unit","TestRunner"];
haxe_unit_TestRunner.print = function(v) {
	var msg = js_Boot.__string_rec(v,"");
	var d;
	if(typeof(document) != "undefined" && (d = document.getElementById("haxe:trace")) != null) {
		msg = StringTools.htmlEscape(msg).split("\n").join("<br/>");
		d.innerHTML += msg + "<br/>";
	} else if(typeof process != "undefined" && process.stdout != null && process.stdout.write != null) process.stdout.write(msg); else if(typeof console != "undefined" && console.log != null) console.log(msg);
};
var haxe_unit_TestStatus = function() { };
haxe_unit_TestStatus.__name__ = ["haxe","unit","TestStatus"];
haxe_unit_TestStatus.prototype = {
	done: null
	,success: null
	,error: null
	,posInfos: null
	,__class__: haxe_unit_TestStatus
};
var haxe_xml__$Fast_NodeAccess = function(x) {
	this.__x = x;
};
haxe_xml__$Fast_NodeAccess.__name__ = ["haxe","xml","_Fast","NodeAccess"];
haxe_xml__$Fast_NodeAccess.prototype = {
	__x: null
	,resolve: function(name) {
		var x = this.__x.elementsNamed(name).next();
		if(x == null) {
			var xname;
			if(this.__x.nodeType == Xml.Document) xname = "Document"; else xname = this.__x.get_nodeName();
			throw new js__$Boot_HaxeError(xname + " is missing element " + name);
		}
		return new haxe_xml_Fast(x);
	}
	,__class__: haxe_xml__$Fast_NodeAccess
};
var haxe_xml__$Fast_AttribAccess = function(x) {
	this.__x = x;
};
haxe_xml__$Fast_AttribAccess.__name__ = ["haxe","xml","_Fast","AttribAccess"];
haxe_xml__$Fast_AttribAccess.prototype = {
	__x: null
	,resolve: function(name) {
		if(this.__x.nodeType == Xml.Document) throw new js__$Boot_HaxeError("Cannot access document attribute " + name);
		var v = this.__x.get(name);
		if(v == null) throw new js__$Boot_HaxeError(this.__x.get_nodeName() + " is missing attribute " + name);
		return v;
	}
	,__class__: haxe_xml__$Fast_AttribAccess
};
var haxe_xml__$Fast_HasAttribAccess = function(x) {
	this.__x = x;
};
haxe_xml__$Fast_HasAttribAccess.__name__ = ["haxe","xml","_Fast","HasAttribAccess"];
haxe_xml__$Fast_HasAttribAccess.prototype = {
	__x: null
	,resolve: function(name) {
		if(this.__x.nodeType == Xml.Document) throw new js__$Boot_HaxeError("Cannot access document attribute " + name);
		return this.__x.exists(name);
	}
	,__class__: haxe_xml__$Fast_HasAttribAccess
};
var haxe_xml__$Fast_HasNodeAccess = function(x) {
	this.__x = x;
};
haxe_xml__$Fast_HasNodeAccess.__name__ = ["haxe","xml","_Fast","HasNodeAccess"];
haxe_xml__$Fast_HasNodeAccess.prototype = {
	__x: null
	,resolve: function(name) {
		return this.__x.elementsNamed(name).hasNext();
	}
	,__class__: haxe_xml__$Fast_HasNodeAccess
};
var haxe_xml__$Fast_NodeListAccess = function(x) {
	this.__x = x;
};
haxe_xml__$Fast_NodeListAccess.__name__ = ["haxe","xml","_Fast","NodeListAccess"];
haxe_xml__$Fast_NodeListAccess.prototype = {
	__x: null
	,resolve: function(name) {
		var l = new List();
		var $it0 = this.__x.elementsNamed(name);
		while( $it0.hasNext() ) {
			var x = $it0.next();
			l.add(new haxe_xml_Fast(x));
		}
		return l;
	}
	,__class__: haxe_xml__$Fast_NodeListAccess
};
var haxe_xml_Fast = function(x) {
	if(x.nodeType != Xml.Document && x.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Invalid nodeType " + x.nodeType);
	this.x = x;
	this.node = new haxe_xml__$Fast_NodeAccess(x);
	this.nodes = new haxe_xml__$Fast_NodeListAccess(x);
	this.att = new haxe_xml__$Fast_AttribAccess(x);
	this.has = new haxe_xml__$Fast_HasAttribAccess(x);
	this.hasNode = new haxe_xml__$Fast_HasNodeAccess(x);
};
haxe_xml_Fast.__name__ = ["haxe","xml","Fast"];
haxe_xml_Fast.prototype = {
	x: null
	,node: null
	,nodes: null
	,att: null
	,has: null
	,hasNode: null
	,get_name: function() {
		if(this.x.nodeType == Xml.Document) return "Document"; else return this.x.get_nodeName();
	}
	,get_innerData: function() {
		var it = this.x.iterator();
		if(!it.hasNext()) throw new js__$Boot_HaxeError(this.get_name() + " does not have data");
		var v = it.next();
		var n = it.next();
		if(n != null) {
			if(v.nodeType == Xml.PCData && n.nodeType == Xml.CData && StringTools.trim((function($this) {
				var $r;
				if(v.nodeType == Xml.Document || v.nodeType == Xml.Element) throw new js__$Boot_HaxeError("Bad node type, unexpected " + v.nodeType);
				$r = v.nodeValue;
				return $r;
			}(this))) == "") {
				var n2 = it.next();
				if(n2 == null || n2.nodeType == Xml.PCData && StringTools.trim((function($this) {
					var $r;
					if(n2.nodeType == Xml.Document || n2.nodeType == Xml.Element) throw new js__$Boot_HaxeError("Bad node type, unexpected " + n2.nodeType);
					$r = n2.nodeValue;
					return $r;
				}(this))) == "" && it.next() == null) {
					if(n.nodeType == Xml.Document || n.nodeType == Xml.Element) throw new js__$Boot_HaxeError("Bad node type, unexpected " + n.nodeType);
					return n.nodeValue;
				}
			}
			throw new js__$Boot_HaxeError(this.get_name() + " does not only have data");
		}
		if(v.nodeType != Xml.PCData && v.nodeType != Xml.CData) throw new js__$Boot_HaxeError(this.get_name() + " does not have data");
		if(v.nodeType == Xml.Document || v.nodeType == Xml.Element) throw new js__$Boot_HaxeError("Bad node type, unexpected " + v.nodeType);
		return v.nodeValue;
	}
	,get_innerHTML: function() {
		var s = new StringBuf();
		var $it0 = this.x.iterator();
		while( $it0.hasNext() ) {
			var x = $it0.next();
			s.add(haxe_xml_Printer.print(x));
		}
		return s.b;
	}
	,get_elements: function() {
		var it = this.x.elements();
		return { hasNext : $bind(it,it.hasNext), next : function() {
			var x = it.next();
			if(x == null) return null;
			return new haxe_xml_Fast(x);
		}};
	}
	,__class__: haxe_xml_Fast
	,__properties__: {get_elements:"get_elements",get_innerHTML:"get_innerHTML",get_innerData:"get_innerData",get_name:"get_name"}
};
var haxe_xml_Parser = function() { };
haxe_xml_Parser.__name__ = ["haxe","xml","Parser"];
haxe_xml_Parser.parse = function(str,strict) {
	if(strict == null) strict = false;
	var doc = Xml.createDocument();
	haxe_xml_Parser.doParse(str,strict,0,doc);
	return doc;
};
haxe_xml_Parser.doParse = function(str,strict,p,parent) {
	if(p == null) p = 0;
	var xml = null;
	var state = 1;
	var next = 1;
	var aname = null;
	var start = 0;
	var nsubs = 0;
	var nbrackets = 0;
	var c = str.charCodeAt(p);
	var buf = new StringBuf();
	var escapeNext = 1;
	var attrValQuote = -1;
	while(!(c != c)) {
		switch(state) {
		case 0:
			switch(c) {
			case 10:case 13:case 9:case 32:
				break;
			default:
				state = next;
				continue;
			}
			break;
		case 1:
			switch(c) {
			case 60:
				state = 0;
				next = 2;
				break;
			default:
				start = p;
				state = 13;
				continue;
			}
			break;
		case 13:
			if(c == 60) {
				buf.addSub(str,start,p - start);
				var child = Xml.createPCData(buf.b);
				buf = new StringBuf();
				parent.addChild(child);
				nsubs++;
				state = 0;
				next = 2;
			} else if(c == 38) {
				buf.addSub(str,start,p - start);
				state = 18;
				escapeNext = 13;
				start = p + 1;
			}
			break;
		case 17:
			if(c == 93 && str.charCodeAt(p + 1) == 93 && str.charCodeAt(p + 2) == 62) {
				var child1 = Xml.createCData(HxOverrides.substr(str,start,p - start));
				parent.addChild(child1);
				nsubs++;
				p += 2;
				state = 1;
			}
			break;
		case 2:
			switch(c) {
			case 33:
				if(str.charCodeAt(p + 1) == 91) {
					p += 2;
					if(HxOverrides.substr(str,p,6).toUpperCase() != "CDATA[") throw new js__$Boot_HaxeError("Expected <![CDATA[");
					p += 5;
					state = 17;
					start = p + 1;
				} else if(str.charCodeAt(p + 1) == 68 || str.charCodeAt(p + 1) == 100) {
					if(HxOverrides.substr(str,p + 2,6).toUpperCase() != "OCTYPE") throw new js__$Boot_HaxeError("Expected <!DOCTYPE");
					p += 8;
					state = 16;
					start = p + 1;
				} else if(str.charCodeAt(p + 1) != 45 || str.charCodeAt(p + 2) != 45) throw new js__$Boot_HaxeError("Expected <!--"); else {
					p += 2;
					state = 15;
					start = p + 1;
				}
				break;
			case 63:
				state = 14;
				start = p;
				break;
			case 47:
				if(parent == null) throw new js__$Boot_HaxeError("Expected node name");
				start = p + 1;
				state = 0;
				next = 10;
				break;
			default:
				state = 3;
				start = p;
				continue;
			}
			break;
		case 3:
			if(!(c >= 97 && c <= 122 || c >= 65 && c <= 90 || c >= 48 && c <= 57 || c == 58 || c == 46 || c == 95 || c == 45)) {
				if(p == start) throw new js__$Boot_HaxeError("Expected node name");
				xml = Xml.createElement(HxOverrides.substr(str,start,p - start));
				parent.addChild(xml);
				nsubs++;
				state = 0;
				next = 4;
				continue;
			}
			break;
		case 4:
			switch(c) {
			case 47:
				state = 11;
				break;
			case 62:
				state = 9;
				break;
			default:
				state = 5;
				start = p;
				continue;
			}
			break;
		case 5:
			if(!(c >= 97 && c <= 122 || c >= 65 && c <= 90 || c >= 48 && c <= 57 || c == 58 || c == 46 || c == 95 || c == 45)) {
				var tmp;
				if(start == p) throw new js__$Boot_HaxeError("Expected attribute name");
				tmp = HxOverrides.substr(str,start,p - start);
				aname = tmp;
				if(xml.exists(aname)) throw new js__$Boot_HaxeError("Duplicate attribute");
				state = 0;
				next = 6;
				continue;
			}
			break;
		case 6:
			switch(c) {
			case 61:
				state = 0;
				next = 7;
				break;
			default:
				throw new js__$Boot_HaxeError("Expected =");
			}
			break;
		case 7:
			switch(c) {
			case 34:case 39:
				buf = new StringBuf();
				state = 8;
				start = p + 1;
				attrValQuote = c;
				break;
			default:
				throw new js__$Boot_HaxeError("Expected \"");
			}
			break;
		case 8:
			switch(c) {
			case 38:
				buf.addSub(str,start,p - start);
				state = 18;
				escapeNext = 8;
				start = p + 1;
				break;
			case 62:
				if(strict) throw new js__$Boot_HaxeError("Invalid unescaped " + String.fromCharCode(c) + " in attribute value"); else if(c == attrValQuote) {
					buf.addSub(str,start,p - start);
					var val = buf.b;
					buf = new StringBuf();
					xml.set(aname,val);
					state = 0;
					next = 4;
				}
				break;
			case 60:
				if(strict) throw new js__$Boot_HaxeError("Invalid unescaped " + String.fromCharCode(c) + " in attribute value"); else if(c == attrValQuote) {
					buf.addSub(str,start,p - start);
					var val1 = buf.b;
					buf = new StringBuf();
					xml.set(aname,val1);
					state = 0;
					next = 4;
				}
				break;
			default:
				if(c == attrValQuote) {
					buf.addSub(str,start,p - start);
					var val2 = buf.b;
					buf = new StringBuf();
					xml.set(aname,val2);
					state = 0;
					next = 4;
				}
			}
			break;
		case 9:
			p = haxe_xml_Parser.doParse(str,strict,p,xml);
			start = p;
			state = 1;
			break;
		case 11:
			switch(c) {
			case 62:
				state = 1;
				break;
			default:
				throw new js__$Boot_HaxeError("Expected >");
			}
			break;
		case 12:
			switch(c) {
			case 62:
				if(nsubs == 0) parent.addChild(Xml.createPCData(""));
				return p;
			default:
				throw new js__$Boot_HaxeError("Expected >");
			}
			break;
		case 10:
			if(!(c >= 97 && c <= 122 || c >= 65 && c <= 90 || c >= 48 && c <= 57 || c == 58 || c == 46 || c == 95 || c == 45)) {
				if(start == p) throw new js__$Boot_HaxeError("Expected node name");
				var v = HxOverrides.substr(str,start,p - start);
				if(v != (function($this) {
					var $r;
					if(parent.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element but found " + parent.nodeType);
					$r = parent.nodeName;
					return $r;
				}(this))) throw new js__$Boot_HaxeError("Expected </" + (function($this) {
					var $r;
					if(parent.nodeType != Xml.Element) throw "Bad node type, expected Element but found " + parent.nodeType;
					$r = parent.nodeName;
					return $r;
				}(this)) + ">");
				state = 0;
				next = 12;
				continue;
			}
			break;
		case 15:
			if(c == 45 && str.charCodeAt(p + 1) == 45 && str.charCodeAt(p + 2) == 62) {
				var xml1 = Xml.createComment(HxOverrides.substr(str,start,p - start));
				parent.addChild(xml1);
				nsubs++;
				p += 2;
				state = 1;
			}
			break;
		case 16:
			if(c == 91) nbrackets++; else if(c == 93) nbrackets--; else if(c == 62 && nbrackets == 0) {
				var xml2 = Xml.createDocType(HxOverrides.substr(str,start,p - start));
				parent.addChild(xml2);
				nsubs++;
				state = 1;
			}
			break;
		case 14:
			if(c == 63 && str.charCodeAt(p + 1) == 62) {
				p++;
				var str1 = HxOverrides.substr(str,start + 1,p - start - 2);
				var xml3 = Xml.createProcessingInstruction(str1);
				parent.addChild(xml3);
				nsubs++;
				state = 1;
			}
			break;
		case 18:
			if(c == 59) {
				var s = HxOverrides.substr(str,start,p - start);
				if(s.charCodeAt(0) == 35) {
					var c1;
					if(s.charCodeAt(1) == 120) c1 = Std.parseInt("0" + HxOverrides.substr(s,1,s.length - 1)); else c1 = Std.parseInt(HxOverrides.substr(s,1,s.length - 1));
					buf.b += String.fromCharCode(c1);
				} else if(!haxe_xml_Parser.escapes.exists(s)) {
					if(strict) throw new js__$Boot_HaxeError("Undefined entity: " + s);
					buf.b += Std.string("&" + s + ";");
				} else buf.add(haxe_xml_Parser.escapes.get(s));
				start = p + 1;
				state = escapeNext;
			} else if(!(c >= 97 && c <= 122 || c >= 65 && c <= 90 || c >= 48 && c <= 57 || c == 58 || c == 46 || c == 95 || c == 45) && c != 35) {
				if(strict) throw new js__$Boot_HaxeError("Invalid character in entity: " + String.fromCharCode(c));
				buf.b += "&";
				buf.addSub(str,start,p - start);
				p--;
				start = p + 1;
				state = escapeNext;
			}
			break;
		}
		c = StringTools.fastCodeAt(str,++p);
	}
	if(state == 1) {
		start = p;
		state = 13;
	}
	if(state == 13) {
		if(p != start || nsubs == 0) {
			buf.addSub(str,start,p - start);
			var xml4 = Xml.createPCData(buf.b);
			parent.addChild(xml4);
			nsubs++;
		}
		return p;
	}
	if(!strict && state == 18 && escapeNext == 13) {
		buf.b += "&";
		buf.addSub(str,start,p - start);
		var xml5 = Xml.createPCData(buf.b);
		parent.addChild(xml5);
		nsubs++;
		return p;
	}
	throw new js__$Boot_HaxeError("Unexpected end");
};
var haxe_xml_Printer = function(pretty) {
	this.output = new StringBuf();
	this.pretty = pretty;
};
haxe_xml_Printer.__name__ = ["haxe","xml","Printer"];
haxe_xml_Printer.print = function(xml,pretty) {
	if(pretty == null) pretty = false;
	var printer = new haxe_xml_Printer(pretty);
	printer.writeNode(xml,"");
	return printer.output.b;
};
haxe_xml_Printer.prototype = {
	output: null
	,pretty: null
	,writeNode: function(value,tabs) {
		var _g = value.nodeType;
		switch(_g) {
		case 2:
			this.output.b += Std.string(tabs + "<![CDATA[");
			this.write(StringTools.trim((function($this) {
				var $r;
				if(value.nodeType == Xml.Document || value.nodeType == Xml.Element) throw new js__$Boot_HaxeError("Bad node type, unexpected " + value.nodeType);
				$r = value.nodeValue;
				return $r;
			}(this))));
			this.output.b += "]]>";
			if(this.pretty) this.output.b += "";
			break;
		case 3:
			var commentContent;
			if(value.nodeType == Xml.Document || value.nodeType == Xml.Element) throw new js__$Boot_HaxeError("Bad node type, unexpected " + value.nodeType);
			commentContent = value.nodeValue;
			commentContent = new EReg("[\n\r\t]+","g").replace(commentContent,"");
			commentContent = "<!--" + commentContent + "-->";
			if(tabs == null) this.output.b += "null"; else this.output.b += "" + tabs;
			this.write(StringTools.trim(commentContent));
			if(this.pretty) this.output.b += "";
			break;
		case 6:
			var $it0 = (function($this) {
				var $r;
				if(value.nodeType != Xml.Document && value.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element or Document but found " + value.nodeType);
				$r = HxOverrides.iter(value.children);
				return $r;
			}(this));
			while( $it0.hasNext() ) {
				var child = $it0.next();
				this.writeNode(child,tabs);
			}
			break;
		case 0:
			this.output.b += Std.string(tabs + "<");
			this.write((function($this) {
				var $r;
				if(value.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element but found " + value.nodeType);
				$r = value.nodeName;
				return $r;
			}(this)));
			var $it1 = value.attributes();
			while( $it1.hasNext() ) {
				var attribute = $it1.next();
				this.output.b += Std.string(" " + attribute + "=\"");
				this.write(StringTools.htmlEscape(value.get(attribute),true));
				this.output.b += "\"";
			}
			if(this.hasChildren(value)) {
				this.output.b += ">";
				if(this.pretty) this.output.b += "";
				var $it2 = (function($this) {
					var $r;
					if(value.nodeType != Xml.Document && value.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element or Document but found " + value.nodeType);
					$r = HxOverrides.iter(value.children);
					return $r;
				}(this));
				while( $it2.hasNext() ) {
					var child1 = $it2.next();
					this.writeNode(child1,this.pretty?tabs + "\t":tabs);
				}
				this.output.b += Std.string(tabs + "</");
				this.write((function($this) {
					var $r;
					if(value.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element but found " + value.nodeType);
					$r = value.nodeName;
					return $r;
				}(this)));
				this.output.b += ">";
				if(this.pretty) this.output.b += "";
			} else {
				this.output.b += "/>";
				if(this.pretty) this.output.b += "";
			}
			break;
		case 1:
			var nodeValue;
			if(value.nodeType == Xml.Document || value.nodeType == Xml.Element) throw new js__$Boot_HaxeError("Bad node type, unexpected " + value.nodeType);
			nodeValue = value.nodeValue;
			if(nodeValue.length != 0) {
				this.write(tabs + StringTools.htmlEscape(nodeValue));
				if(this.pretty) this.output.b += "";
			}
			break;
		case 5:
			this.write("<?" + (function($this) {
				var $r;
				if(value.nodeType == Xml.Document || value.nodeType == Xml.Element) throw new js__$Boot_HaxeError("Bad node type, unexpected " + value.nodeType);
				$r = value.nodeValue;
				return $r;
			}(this)) + "?>");
			break;
		case 4:
			this.write("<!DOCTYPE " + (function($this) {
				var $r;
				if(value.nodeType == Xml.Document || value.nodeType == Xml.Element) throw new js__$Boot_HaxeError("Bad node type, unexpected " + value.nodeType);
				$r = value.nodeValue;
				return $r;
			}(this)) + ">");
			break;
		}
	}
	,write: function(input) {
		if(input == null) this.output.b += "null"; else this.output.b += "" + input;
	}
	,hasChildren: function(value) {
		var $it0 = (function($this) {
			var $r;
			if(value.nodeType != Xml.Document && value.nodeType != Xml.Element) throw new js__$Boot_HaxeError("Bad node type, expected Element or Document but found " + value.nodeType);
			$r = HxOverrides.iter(value.children);
			return $r;
		}(this));
		while( $it0.hasNext() ) {
			var child = $it0.next();
			var _g = child.nodeType;
			switch(_g) {
			case 0:case 1:
				return true;
			case 2:case 3:
				if(StringTools.ltrim((function($this) {
					var $r;
					if(child.nodeType == Xml.Document || child.nodeType == Xml.Element) throw new js__$Boot_HaxeError("Bad node type, unexpected " + child.nodeType);
					$r = child.nodeValue;
					return $r;
				}(this))).length != 0) return true;
				break;
			default:
			}
		}
		return false;
	}
	,__class__: haxe_xml_Printer
};
var hunit__$Match_Match_$Impl_$ = {};
hunit__$Match_Match_$Impl_$.__name__ = ["hunit","_Match","Match_Impl_"];
hunit__$Match_Match_$Impl_$.fromValue = function(value) {
	if(value == null) return hunit__$Match_Match_$Impl_$._new(new hunit_match_AnyMatch()); else return hunit__$Match_Match_$Impl_$._new(value);
};
hunit__$Match_Match_$Impl_$._new = function(value) {
	var this1;
	if(js_Boot.__instanceof(value,hunit_match_Match)) this1 = value; else this1 = new hunit_match_EqualMatch(value);
	return this1;
};
var hunit_TestState = function(testCase,testName,report,print) {
	this.warned = false;
	this.testCase = testCase;
	this.testName = testName;
	this.report = report;
	this.print = print;
	this.pendingExceptions = [];
	this.callExceptions = [];
	this.expectedCalls = new List();
	this.asserted = new List();
};
hunit_TestState.__name__ = ["hunit","TestState"];
hunit_TestState.prototype = {
	testCase: null
	,testName: null
	,report: null
	,expectedException: null
	,print: null
	,warned: null
	,expectedCalls: null
	,asserted: null
	,pendingExceptions: null
	,callExceptions: null
	,expectingException: function() {
		return this.expectedException != null;
	}
	,validateException: function(e,catchExceptionStack,exceptionStack) {
		if(e != null) {
			if(this.expectedException != null) this.expectedException.validate(e,this.getOriginalExceptionStack(e,catchExceptionStack,exceptionStack)); else throw new js__$Boot_HaxeError(new hunit_exceptions_UnexpectedException(e,this.getOriginalExceptionStack(e,catchExceptionStack,exceptionStack),{ fileName : "TestState.hx", lineNumber : 86, className : "hunit.TestState", methodName : "validateException"}));
		}
	}
	,success: function() {
		this.report.addSuccess(this.testCase,this.testName);
	}
	,warn: function(warning) {
		this.warned = true;
		this.report.addWarning(this.testCase,this.testName,warning);
	}
	,fail: function(exception) {
		HxOverrides.remove(this.pendingExceptions,exception);
		this.report.addFail(this.testCase,this.testName,exception);
	}
	,notice: function(msg,pos) {
		this.report.addNotice(this.testCase,this.testName,msg,pos);
	}
	,pendingFail: function(exception) {
		this.pendingExceptions.push(exception);
	}
	,cacheCallException: function(call) {
		this.callExceptions.push(call);
	}
	,getOriginalExceptionStack: function(e,catchExceptionStack,exceptionStack) {
		var _g = 0;
		var _g1 = this.callExceptions;
		while(_g < _g1.length) {
			var call = _g1[_g];
			++_g;
			if(hunit_utils_ValueTools.getValue(call.exceptionValue) == e) return call.exceptionStack;
		}
		return exceptionStack.concat(catchExceptionStack);
	}
	,madeAssertions: function() {
		return this.expectedCalls.length > 0 || this.asserted.length > 0 || this.expectingException();
	}
	,finalize: function() {
		this.report.assertionCount += this.asserted.length;
		this.report.assertionCount += this.expectedCalls.length;
		if(this.expectingException()) this.report.assertionCount++;
	}
	,set_expectedException: function(expectedException) {
		if(this.expectedException != null) throw new js__$Boot_HaxeError(new hunit_exceptions_InvalidTestException("Expected exception is already set",{ fileName : "TestState.hx", lineNumber : 203, className : "hunit.TestState", methodName : "set_expectedException"}));
		return this.expectedException = expectedException;
	}
	,__class__: hunit_TestState
	,__properties__: {set_expectedException:"set_expectedException"}
};
var hunit_TestSuite = function(reportWriter,printer) {
	this.shutDownStandaloneFlashPlayer = false;
	this.groups = [];
	this.excludeGroups = [];
	this.exclude = [];
	if(printer == null) printer = hunit_Utils.print;
	this.printer = printer;
	if(reportWriter == null) reportWriter = new hunit_report_DefaultWriter(printer);
	this.reportWriter = reportWriter;
	this.cases = [];
	this.report = this.createReport();
};
hunit_TestSuite.__name__ = ["hunit","TestSuite"];
hunit_TestSuite.prototype = {
	shutDownStandaloneFlashPlayer: null
	,report: null
	,groups: null
	,excludeGroups: null
	,exclude: null
	,state: null
	,cases: null
	,originalTrace: null
	,printer: null
	,executeTestCallStack: null
	,reportWriter: null
	,add: function(testCase) {
		this.cases.push(testCase);
	}
	,run: function() {
		if(this.cases.length == 0) {
			this.printer("\nNo test cases added to test suite.\n\n");
			return;
		}
		this.redirectTraces();
		this.report.startTime = haxe_Timer.stamp();
		this.printHeader();
		var total = 1;
		var _g = 0;
		var _g1 = hunit_Utils.filterCases(this.cases,this.exclude);
		while(_g < _g1.length) {
			var testCase = _g1[_g];
			++_g;
			try {
				var data = new hunit_utils_TestCaseData(testCase);
				this.onCaseBegin(testCase,data);
				if(data.get_totalTestCount() == 0) {
					var cls = Type.getClassName(testCase == null?null:js_Boot.getClass(testCase));
					this.report.addWarning(testCase,"<none>",new hunit_warnings_NoTestsWarning("" + cls + " does not contain any tests."));
				} else {
					var runQueue = data.getTests(this.groups,this.excludeGroups);
					while(runQueue.length > 0) {
						var test = runQueue.shift();
						if(total % 80 == 0) this.another80Tests();
						var passed = this.executeTest(testCase,test);
						if(!passed) runQueue = this.skipDependent(testCase,test,runQueue);
						total++;
					}
				}
				this.onCaseEnd(testCase);
			} catch( e ) {
				haxe_CallStack.lastException = e;
				if (e instanceof js__$Boot_HaxeError) e = e.val;
				this.printer("E");
				this.report.addFail(testCase,"<none>",Exception.wrap(e,{ fileName : "TestSuite.hx", lineNumber : 161, className : "hunit.TestSuite", methodName : "run"}));
			}
		}
		this.report.set_endTime(haxe_Timer.stamp());
		this.printer("\n\n");
		this.report.output();
		this.printSummary();
		this.restoreOriginalTrace();
	}
	,createReport: function() {
		return new hunit_report_TestReport(this.reportWriter);
	}
	,createTestState: function(testCase,testName) {
		return new hunit_TestState(testCase,testName,this.report,this.printer);
	}
	,redirectTraces: function() {
		this.originalTrace = haxe_Log.trace;
		haxe_Log.trace = (function(f,a1) {
			return function(a2,a3) {
				f(a1,a2,a3);
			};
		})(hunit_Utils.printTrace,this.printer);
	}
	,restoreOriginalTrace: function() {
		haxe_Log.trace = this.originalTrace;
	}
	,onCaseBegin: function(testCase,data) {
		this.report.cases.add(testCase);
		testCase.setupTestCase();
	}
	,onCaseEnd: function(testCase) {
		testCase.tearDownTestCase();
	}
	,executeTest: function(testCase,test) {
		this.executeTestCallStack = haxe_CallStack.callStack();
		this.beforeTestStart(testCase,test.name);
		testCase.setup();
		var passed = false;
		try {
			if(test.isIncomplete) this.state.warn(new hunit_warnings_IncompleteTestWarning(test.incompleteMsg)); else try {
				test.callback.apply(testCase,[]);
				this.validateTest(test);
			} catch( $e0 ) {
				haxe_CallStack.lastException = $e0;
				if ($e0 instanceof js__$Boot_HaxeError) $e0 = $e0.val;
				if( js_Boot.__instanceof($e0,hunit_exceptions_TestFailException) ) {
					var e = $e0;
					throw new js__$Boot_HaxeError(e);
				} else {
				var e1 = $e0;
				this.validateTest(test,e1,haxe_CallStack.exceptionStack());
				}
			}
			if(!this.state.warned) {
				this.state.success();
				passed = true;
				this.printer(".");
			} else this.printer("W");
			this.state.finalize();
		} catch( e2 ) {
			haxe_CallStack.lastException = e2;
			if (e2 instanceof js__$Boot_HaxeError) e2 = e2.val;
			if( js_Boot.__instanceof(e2,Exception) ) {
				this.state.fail(e2);
				this.printer(js_Boot.__instanceof(e2,hunit_exceptions_InvalidTestException)?"E":"F");
			} else throw(e2);
		}
		testCase.tearDown();
		this.afterTestDone(testCase);
		return passed;
	}
	,beforeTestStart: function(testCase,test) {
		this.state = this.createTestState(testCase,test);
		testCase.__hu_state = this.state;
	}
	,afterTestDone: function(testCase) {
		this.state = null;
	}
	,validateTest: function(test,exception,exceptionStack) {
		if(this.state.pendingExceptions.length > 0) throw new js__$Boot_HaxeError(this.state.pendingExceptions[0]);
		if(exception != null) this.state.validateException(exception,this.executeTestCallStack,exceptionStack);
		var _g_head = this.state.expectedCalls.h;
		var _g_val = null;
		while(_g_head != null) {
			var expect;
			expect = (function($this) {
				var $r;
				_g_val = _g_head[0];
				_g_head = _g_head[1];
				$r = _g_val;
				return $r;
			}(this));
			expect.validate();
		}
		if(this.state.expectingException() && !this.state.expectedException.satisfied) throw new js__$Boot_HaxeError(new hunit_exceptions_NoExpectedException(this.state.expectedException.match,this.state.expectedException.pos));
		if(!test.isIncomplete && !this.state.madeAssertions()) this.state.warn(new hunit_warnings_NoAssertionsWarning("This test did not perform any assertions"));
	}
	,skipDependent: function(testCase,failed,runQueue) {
		var dependent = hunit_utils_TestCaseData.getDependent(failed,runQueue);
		var _g = 0;
		while(_g < dependent.length) {
			var test = dependent[_g];
			++_g;
			this.printer("S");
			HxOverrides.remove(runQueue,test);
			this.report.addSkip(testCase,test.name,test.depends);
		}
		return runQueue;
	}
	,version: function() {
		return "0.1.32";
	}
	,printHeader: function() {
		this.printer("HUnit " + this.version() + "\n\n");
	}
	,printSummary: function() {
		this.printer(this.report.getSummary() + "\n");
		this.printer("\n");
	}
	,another80Tests: function() {
		this.printer("\n");
	}
	,__class__: hunit_TestSuite
};
var hunit_Utils = function() { };
hunit_Utils.__name__ = ["hunit","Utils"];
hunit_Utils.isObject = function(value) {
	{
		var _g = Type["typeof"](value);
		switch(_g[1]) {
		case 6:
			switch(_g[2]) {
			case String:
				return false;
			default:
				return true;
			}
			break;
		case 4:
			return true;
		default:
			return false;
		}
	}
};
hunit_Utils.shortenString = function(str) {
	if(str.length > 70) return HxOverrides.substr(str,0,65) + "<...>"; else return str;
};
hunit_Utils.hasToString = function(value) {
	if(typeof(value) == "string") return true;
	{
		var _g = Type["typeof"](value);
		switch(_g[1]) {
		case 6:
			var cls = _g[2];
			return (function($this) {
				var $r;
				var _this = Type.getInstanceFields(cls);
				$r = HxOverrides.indexOf(_this,"toString",0);
				return $r;
			}(this)) >= 0;
		default:
			return false;
		}
	}
};
hunit_Utils.safeToString = function(value) {
	return Std.string(value);
};
hunit_Utils.shortenQuote = function(value) {
	var str = hunit_Utils.shortenString(hunit_Utils.safeToString(value));
	if(hunit_Utils.hasToString(value)) return "\"" + str + "\""; else return str;
};
hunit_Utils.printTrace = function(printer,value,pos) {
	var file = pos.fileName;
	var line = pos.lineNumber;
	var msg = hunit_Utils.safeToString(value);
	printer("HUnit: " + file + ":" + line + ": " + msg + "\n");
};
hunit_Utils.print = function(value) {
	var msg = js_Boot.__string_rec(value,"");
	hunit_Utils.bufferedPrint(msg,console.log);
};
hunit_Utils.bufferedPrint = function(value,printer) {
	hunit_Utils.buffer += value;
	if(hunit_Utils.buffer.indexOf("\n") >= 0) {
		var lines = hunit_Utils.buffer.split("\n");
		var _g1 = 0;
		var _g = lines.length - 1;
		while(_g1 < _g) {
			var i = _g1++;
			printer(lines[i]);
		}
		hunit_Utils.buffer = lines[lines.length - 1];
	}
};
hunit_Utils.filterCases = function(cases,excludes) {
	return cases.filter(function(c) {
		var className = Type.getClassName(c == null?null:js_Boot.getClass(c));
		var _g = 0;
		while(_g < excludes.length) {
			var e = excludes[_g];
			++_g;
			if(className.indexOf(e) == 0) return false;
		}
		return true;
	});
};
var hunit_assert_AssertFactory = function(testCase) {
	this.testCase = testCase;
};
hunit_assert_AssertFactory.__name__ = ["hunit","assert","AssertFactory"];
hunit_assert_AssertFactory.prototype = {
	testCase: null
	,match: function(match,value,message,pos) {
		var assert = new hunit_assert_MatchAssert(match,value,message,pos);
		this.testCase.__hu_state.asserted.add(assert);
		assert.validate();
	}
	,equal: function(expected,actual,message,pos) {
		var assert = new hunit_assert_MatchAssert(this.testCase.match.equal(expected),actual,message,pos);
		this.testCase.__hu_state.asserted.add(assert);
		assert.validate();
	}
	,notEqual: function(expected,actual,message,pos) {
		var assert = new hunit_assert_MatchAssert(this.testCase.match.notEqual(expected),actual,message,pos);
		this.testCase.__hu_state.asserted.add(assert);
		assert.validate();
	}
	,type: function(expectedType,value,message,pos) {
		var assert = new hunit_assert_MatchAssert(this.testCase.match.type(expectedType),value,message,pos);
		this.testCase.__hu_state.asserted.add(assert);
		assert.validate();
	}
	,isNull: function(value,message,pos) {
		var assert = new hunit_assert_MatchAssert(this.testCase.match.equal(null),value,message,pos);
		this.testCase.__hu_state.asserted.add(assert);
		assert.validate();
	}
	,notNull: function(value,message,pos) {
		var assert = new hunit_assert_MatchAssert(this.testCase.match.notEqual(null),value,message,pos);
		this.testCase.__hu_state.asserted.add(assert);
		assert.validate();
	}
	,isTrue: function(value,message,pos) {
		var assert = new hunit_assert_MatchAssert(this.testCase.match.equal(true),value,message,pos);
		this.testCase.__hu_state.asserted.add(assert);
		assert.validate();
	}
	,isFalse: function(value,message,pos) {
		var assert = new hunit_assert_MatchAssert(this.testCase.match.equal(false),value,message,pos);
		this.testCase.__hu_state.asserted.add(assert);
		assert.validate();
	}
	,regexp: function(pattern,value,message,pos) {
		var assert = new hunit_assert_MatchAssert(this.testCase.match.regexp(pattern),value,message,pos);
		this.testCase.__hu_state.asserted.add(assert);
		assert.validate();
	}
	,similar: function(expected,actual,message,pos) {
		var assert = new hunit_assert_MatchAssert(this.testCase.match.similar(expected),actual,message,pos);
		this.testCase.__hu_state.asserted.add(assert);
		assert.validate();
	}
	,fail: function(message,pos) {
		throw new js__$Boot_HaxeError(new hunit_exceptions_AssertException(message == null?"Forced test failure.":message,pos));
	}
	,warn: function(message,pos) {
		this.testCase.__hu_state.warn(new hunit_warnings_ForcedWarning(message == null?"Forced warning":message));
		this.testCase.__hu_state.asserted.add(new hunit_assert_BaseAssert(pos));
	}
	,success: function(pos) {
		this.testCase.__hu_state.asserted.add(new hunit_assert_BaseAssert(pos));
	}
	,__class__: hunit_assert_AssertFactory
};
var hunit_assert_BaseAssert = function(pos) {
	this.pos = pos;
};
hunit_assert_BaseAssert.__name__ = ["hunit","assert","BaseAssert"];
hunit_assert_BaseAssert.prototype = {
	pos: null
	,validate: function() {
		throw new js__$Boot_HaxeError("To be overriden");
	}
	,failed: function(message) {
		throw new js__$Boot_HaxeError(new hunit_exceptions_AssertException(message,this.pos));
	}
	,__class__: hunit_assert_BaseAssert
};
var hunit_assert_MatchAssert = function(expected,actual,message,pos) {
	hunit_assert_BaseAssert.call(this,pos);
	this.expected = expected;
	this.actual = actual;
	this.message = message;
};
hunit_assert_MatchAssert.__name__ = ["hunit","assert","MatchAssert"];
hunit_assert_MatchAssert.__super__ = hunit_assert_BaseAssert;
hunit_assert_MatchAssert.prototype = $extend(hunit_assert_BaseAssert.prototype,{
	expected: null
	,actual: null
	,message: null
	,validate: function() {
		if(this.expected.match(this.actual)) return;
		this.failed(this.message == null?this.buildMessage():this.message);
	}
	,buildMessage: function() {
		var a = hunit_Utils.shortenQuote(this.actual);
		if(this.expected.isChained()) return "Failed asserting that " + a + " matches " + Std.string(this.expected) + "."; else {
			var cls = Type.getClass(this.expected);
			switch(cls) {
			case hunit_match_TypeMatch:
				return "Failed asserting that " + this.actualType() + " is " + Type.getClassName((js_Boot.__cast(this.expected , hunit_match_TypeMatch)).type);
			case hunit_match_NotEqualMatch:
				return "Failed asserting that " + a + " does not equal " + hunit_Utils.shortenQuote((js_Boot.__cast(this.expected , hunit_match_NotEqualMatch)).value);
			case hunit_match_EqualMatch:
				return "Failed asserting that " + a + " equals " + hunit_Utils.shortenQuote((js_Boot.__cast(this.expected , hunit_match_EqualMatch)).value);
			default:
				return "Failed asserting that " + a + " matches " + Std.string(this.expected) + ".";
			}
		}
	}
	,actualType: function() {
		{
			var _g = Type["typeof"](this.actual);
			switch(_g[1]) {
			case 6:
				var c = _g[2];
				return Type.getClassName(c);
			case 7:
				var e = _g[2];
				return Type.getEnumName(e);
			case 0:
				return "Null";
			case 1:
				return "Int";
			case 2:
				return "Float";
			case 3:
				return "Bool";
			case 4:
				return "Object";
			case 5:
				return "Function";
			case 8:
				return "Unknown Type";
			}
		}
	}
	,__class__: hunit_assert_MatchAssert
});
var hunit_call_Call = function(id,mockData,method,$arguments,stack,pos,isStub,stub) {
	this.isStub = false;
	this.id = id;
	this.mockData = mockData;
	this.method = method;
	this["arguments"] = $arguments;
	this.isStub = isStub;
	this.stub = stub;
	this.pos = pos;
	this.stack = stack;
	this.result = hunit_utils_Value.Nothing;
	this.set_exceptionValue(hunit_utils_Value.Nothing);
};
hunit_call_Call.__name__ = ["hunit","call","Call"];
hunit_call_Call.prototype = {
	id: null
	,mockData: null
	,method: null
	,'arguments': null
	,result: null
	,stack: null
	,exceptionValue: null
	,exceptionStack: null
	,isStub: null
	,stub: null
	,pos: null
	,toString: function() {
		var str = "";
		if(hunit_utils_ValueTools.hasValue(this.result)) {
			var value = hunit_utils_ValueTools.getValue(this.result);
			str = "returned " + hunit_Utils.shortenQuote(value) + "";
		}
		if(hunit_utils_ValueTools.hasValue(this.exceptionValue)) {
			var e = hunit_utils_ValueTools.getValue(this.exceptionValue);
			var exceptionMsg;
			if(js_Boot.__instanceof(e,Exception)) exceptionMsg = hunit_Utils.shortenString((js_Boot.__cast(e , Exception)).message); else exceptionMsg = hunit_Utils.shortenQuote(e);
			str = "threw " + exceptionMsg;
		}
		var className = this.mockData.mockClassName();
		var args = this["arguments"].map(function(a) {
			return hunit_Utils.shortenQuote(a);
		}).join(", ");
		var msg = "" + className + "." + this.method + "(" + args + ") " + str;
		return msg;
	}
	,set_exceptionValue: function(value) {
		if(hunit_utils_ValueTools.hasValue(value)) this.exceptionStack = haxe_CallStack.exceptionStack().concat(this.stack);
		return this.exceptionValue = value;
	}
	,__class__: hunit_call_Call
	,__properties__: {set_exceptionValue:"set_exceptionValue"}
};
var hunit_call_CallCount = { __ename__ : ["hunit","call","CallCount"], __constructs__ : ["Never","Any","Once","AtLeast","Exactly"] };
hunit_call_CallCount.Never = ["Never",0];
hunit_call_CallCount.Never.toString = $estr;
hunit_call_CallCount.Never.__enum__ = hunit_call_CallCount;
hunit_call_CallCount.Any = ["Any",1];
hunit_call_CallCount.Any.toString = $estr;
hunit_call_CallCount.Any.__enum__ = hunit_call_CallCount;
hunit_call_CallCount.Once = ["Once",2];
hunit_call_CallCount.Once.toString = $estr;
hunit_call_CallCount.Once.__enum__ = hunit_call_CallCount;
hunit_call_CallCount.AtLeast = function(amount) { var $x = ["AtLeast",3,amount]; $x.__enum__ = hunit_call_CallCount; $x.toString = $estr; return $x; };
hunit_call_CallCount.Exactly = function(amount) { var $x = ["Exactly",4,amount]; $x.__enum__ = hunit_call_CallCount; $x.toString = $estr; return $x; };
var hunit_call_IExpect = function() { };
hunit_call_IExpect.__name__ = ["hunit","call","IExpect"];
hunit_call_IExpect.prototype = {
	validate: null
	,__class__: hunit_call_IExpect
};
var hunit_call_Expect = function(mockData,method,$arguments,returns,$throws,count,pos) {
	this.fromCallId = 0;
	this.timesMatched = 0;
	this.mockData = mockData;
	this.method = method;
	this["arguments"] = $arguments;
	this.returns = returns;
	this["throws"] = $throws;
	this.count = count;
	this.pos = pos;
};
hunit_call_Expect.__name__ = ["hunit","call","Expect"];
hunit_call_Expect.__interfaces__ = [hunit_call_IExpect];
hunit_call_Expect.prototype = {
	mockData: null
	,method: null
	,'arguments': null
	,returns: null
	,'throws': null
	,count: null
	,pos: null
	,timesMatched: null
	,fromCallId: null
	,sameObjectMethod: function(call) {
		return this.mockData == call.mockData && this.method == call.method;
	}
	,match: function(call) {
		if(this.mockData != call.mockData) return false;
		if(this.method != call.method) return false;
		if(this["arguments"].length != call["arguments"].length) throw new js__$Boot_HaxeError("Arguments count does not match");
		var _g1 = 0;
		var _g = this["arguments"].length;
		while(_g1 < _g) {
			var i = _g1++;
			if(!this["arguments"][i].match(call["arguments"][i])) return false;
		}
		if(hunit_utils_ValueTools.hasValue(this.returns)) {
			if(!hunit_utils_ValueTools.hasValue(call.result)) return false;
			var expected = hunit_utils_ValueTools.getValue(this.returns);
			var actual = hunit_utils_ValueTools.getValue(call.result);
			if(!expected.match(actual)) return false;
		}
		if(hunit_utils_ValueTools.hasValue(this["throws"])) {
			if(!hunit_utils_ValueTools.hasValue(call.exceptionValue)) return false;
			var e = hunit_utils_ValueTools.getValue(call.exceptionValue);
			if(!hunit_utils_ValueTools.getValue(this["throws"]).match(e)) return false;
		}
		return true;
	}
	,validate: function() {
		this.mockData.validateExpectation(this);
	}
	,tooManyCalls: function() {
		{
			var _g = this.count;
			switch(_g[1]) {
			case 0:
				return this.timesMatched > 0;
			case 1:
				return false;
			case 2:
				return this.timesMatched > 1;
			case 3:
				var amount = _g[2];
				return false;
			case 4:
				var amount1 = _g[2];
				return this.timesMatched > amount1;
			}
		}
	}
	,toString: function() {
		var cls = this.mockData.mockClassName();
		var args = this["arguments"].map(function(a) {
			return "" + a.toString();
		}).join(", ");
		var results = [];
		if(hunit_utils_ValueTools.hasValue(this.returns)) results.push("to return " + Std.string(hunit_utils_ValueTools.getValue(this.returns)));
		if(hunit_utils_ValueTools.hasValue(this["throws"])) results.push("to throw " + Std.string(hunit_utils_ValueTools.getValue(this["throws"])));
		{
			var _g = this.count;
			switch(_g[1]) {
			case 1:
				results.push("to be called zero or more times");
				break;
			case 0:
				results.push("to be never called");
				break;
			case 2:
				results.push("to be called once");
				break;
			case 3:
				var amount = _g[2];
				results.push("to be called at least " + amount + " time" + (amount == 1?"":"s"));
				break;
			case 4:
				var amount1 = _g[2];
				results.push("to be called exactly " + amount1 + " time" + (amount1 == 1?"":"s"));
				break;
			}
		}
		var last = results.pop();
		var toDo;
		if(results.length == 0) toDo = last; else toDo = results.join(", ") + (" and " + last);
		var msg = "" + cls + "." + this.method + "(" + args + ") is expected " + toDo;
		return msg;
	}
	,__class__: hunit_call_Expect
};
var hunit_call_Stub = function(mockData,method,$arguments,returns,$throws,pos) {
	this.mockData = mockData;
	this.method = method;
	this["arguments"] = $arguments;
	this.returns = returns;
	this["throws"] = $throws;
	this.pos = pos;
};
hunit_call_Stub.__name__ = ["hunit","call","Stub"];
hunit_call_Stub.prototype = {
	mockData: null
	,method: null
	,'arguments': null
	,returns: null
	,'throws': null
	,implementation: null
	,pos: null
	,expect: function(count) {
		var expect = new hunit_call_Expect(this.mockData,this.method,this["arguments"],hunit_utils_Value.Nothing,hunit_utils_Value.Nothing,count,this.pos);
		this.mockData.expect(expect);
		return expect;
	}
	,match: function(method,$arguments) {
		if(this.method != method) return false;
		if($arguments.length != this["arguments"].length) throw new js__$Boot_HaxeError("Arguments count does not match");
		var _g1 = 0;
		var _g = this["arguments"].length;
		while(_g1 < _g) {
			var i = _g1++;
			if(!this["arguments"][i].match($arguments[i])) return false;
		}
		return true;
	}
	,__class__: hunit_call_Stub
};
var hunit_exceptions_TestFailException = function(message,pos) {
	Exception.call(this,message,pos);
};
hunit_exceptions_TestFailException.__name__ = ["hunit","exceptions","TestFailException"];
hunit_exceptions_TestFailException.__super__ = Exception;
hunit_exceptions_TestFailException.prototype = $extend(Exception.prototype,{
	__class__: hunit_exceptions_TestFailException
});
var hunit_exceptions_AssertException = function(message,pos) {
	hunit_exceptions_TestFailException.call(this,message,pos);
};
hunit_exceptions_AssertException.__name__ = ["hunit","exceptions","AssertException"];
hunit_exceptions_AssertException.__super__ = hunit_exceptions_TestFailException;
hunit_exceptions_AssertException.prototype = $extend(hunit_exceptions_TestFailException.prototype,{
	__class__: hunit_exceptions_AssertException
});
var hunit_exceptions_InvalidTestException = function(message,pos) {
	Exception.call(this,message,pos);
};
hunit_exceptions_InvalidTestException.__name__ = ["hunit","exceptions","InvalidTestException"];
hunit_exceptions_InvalidTestException.__super__ = Exception;
hunit_exceptions_InvalidTestException.prototype = $extend(Exception.prototype,{
	__class__: hunit_exceptions_InvalidTestException
});
var hunit_exceptions_CircularTestDependencyException = function(message,pos) {
	hunit_exceptions_InvalidTestException.call(this,message,pos);
};
hunit_exceptions_CircularTestDependencyException.__name__ = ["hunit","exceptions","CircularTestDependencyException"];
hunit_exceptions_CircularTestDependencyException.__super__ = hunit_exceptions_InvalidTestException;
hunit_exceptions_CircularTestDependencyException.prototype = $extend(hunit_exceptions_InvalidTestException.prototype,{
	__class__: hunit_exceptions_CircularTestDependencyException
});
var hunit_exceptions_ExpectedExceptionData = function(match,pos) {
	this.satisfied = false;
	this.match = match;
	this.pos = pos;
};
hunit_exceptions_ExpectedExceptionData.__name__ = ["hunit","exceptions","ExpectedExceptionData"];
hunit_exceptions_ExpectedExceptionData.prototype = {
	match: null
	,satisfied: null
	,pos: null
	,validate: function(e,exceptionStack) {
		this.satisfied = this.match.match(e);
		if(!this.satisfied) throw new js__$Boot_HaxeError(new hunit_exceptions_UnexpectedException(e,exceptionStack,{ fileName : "ExpectedExceptionData.hx", lineNumber : 45, className : "hunit.exceptions.ExpectedExceptionData", methodName : "validate"}));
	}
	,__class__: hunit_exceptions_ExpectedExceptionData
};
var hunit_exceptions_NoExpectedException = function(exceptionMatch,pos) {
	hunit_exceptions_TestFailException.call(this,"Expected exception was not thrown: " + exceptionMatch.toString(),pos);
};
hunit_exceptions_NoExpectedException.__name__ = ["hunit","exceptions","NoExpectedException"];
hunit_exceptions_NoExpectedException.__super__ = hunit_exceptions_TestFailException;
hunit_exceptions_NoExpectedException.prototype = $extend(hunit_exceptions_TestFailException.prototype,{
	__class__: hunit_exceptions_NoExpectedException
});
var hunit_exceptions_UnexpectedCallException = function(call,expect,reason,pos) {
	var msg;
	if(reason != null) msg = reason; else msg = hunit_exceptions_UnexpectedCallException.generateMessage(call,expect);
	hunit_exceptions_TestFailException.call(this,msg,pos);
	this.stack = Exception.processCallStackOnCreation(call.stack);
};
hunit_exceptions_UnexpectedCallException.__name__ = ["hunit","exceptions","UnexpectedCallException"];
hunit_exceptions_UnexpectedCallException.generateMessage = function(call,expect) {
	var expectMsg = "";
	if(expect != null) {
		var s;
		if(expect.timesMatched == 1) s = ""; else s = "s";
		expectMsg = " " + Std.string(expect) + ", but called " + expect.timesMatched + " time" + s + " and last one was";
	}
	var msg = "Unexpected call:" + expectMsg + " " + Std.string(call);
	return msg;
};
hunit_exceptions_UnexpectedCallException.__super__ = hunit_exceptions_TestFailException;
hunit_exceptions_UnexpectedCallException.prototype = $extend(hunit_exceptions_TestFailException.prototype,{
	__class__: hunit_exceptions_UnexpectedCallException
});
var hunit_exceptions_UnexpectedException = function(e,exceptionStack,pos) {
	this.originalExceptionStack = exceptionStack;
	this.original = e;
	Exception.call(this,Std.string(e),pos);
};
hunit_exceptions_UnexpectedException.__name__ = ["hunit","exceptions","UnexpectedException"];
hunit_exceptions_UnexpectedException.__super__ = Exception;
hunit_exceptions_UnexpectedException.prototype = $extend(Exception.prototype,{
	original: null
	,originalExceptionStack: null
	,toString: function() {
		if(js_Boot.__instanceof(this.original,Exception)) {
			var className = Type.getClassName(js_Boot.getClass(this));
			return "" + className + ": " + (js_Boot.__cast(this.original , Exception)).toString();
		} else return Exception.prototype.toString.call(this);
	}
	,buildStack: function(stack) {
		var exceptionStack = this.originalExceptionStack;
		if(js_Boot.__instanceof(this.original,Exception)) {
			this.pos = (js_Boot.__cast(this.original , Exception)).pos;
			var _this;
			_this = (js_Boot.__cast(this.original , Exception)).stack;
			exceptionStack = _this.slice();
		} else if(exceptionStack.length == 0) exceptionStack = stack; else {
			var _g = exceptionStack[0];
			switch(_g[1]) {
			case 2:
				if(_g[2] == null) {
					var line = _g[4];
					var file = _g[3];
					this.pos.fileName = file;
					this.pos.lineNumber = line;
				} else switch(_g[2][1]) {
				case 3:
					var line1 = _g[4];
					var file1 = _g[3];
					var methodName = _g[2][3];
					var className = _g[2][2];
					this.pos.className = className;
					this.pos.methodName = methodName;
					this.pos.fileName = file1;
					this.pos.lineNumber = line1;
					break;
				default:
				}
				break;
			case 3:
				var methodName1 = _g[3];
				var className1 = _g[2];
				this.pos.methodName = methodName1;
				this.pos.className = className1;
				break;
			default:
			}
		}
		return Exception.prototype.buildStack.call(this,exceptionStack);
	}
	,__class__: hunit_exceptions_UnexpectedException
});
var hunit_exceptions_UnmetExpectationException = function(expect,reason,pos) {
	if(reason == null) reason = "";
	var file = expect.pos.fileName;
	var line = expect.pos.lineNumber;
	var msg;
	msg = "" + Std.string(expect) + (reason.length != 0?"" + reason:"");
	hunit_exceptions_TestFailException.call(this,msg,pos);
};
hunit_exceptions_UnmetExpectationException.__name__ = ["hunit","exceptions","UnmetExpectationException"];
hunit_exceptions_UnmetExpectationException.__super__ = hunit_exceptions_TestFailException;
hunit_exceptions_UnmetExpectationException.prototype = $extend(hunit_exceptions_TestFailException.prototype,{
	__class__: hunit_exceptions_UnmetExpectationException
});
var hunit_exceptions_WarningException = function(message,pos) {
	Exception.call(this,message,pos);
};
hunit_exceptions_WarningException.__name__ = ["hunit","exceptions","WarningException"];
hunit_exceptions_WarningException.__super__ = Exception;
hunit_exceptions_WarningException.prototype = $extend(Exception.prototype,{
	__class__: hunit_exceptions_WarningException
});
var hunit_match_Match = function(previous,chainLogic) {
	this.previous = previous;
	this.chainLogic = chainLogic;
};
hunit_match_Match.__name__ = ["hunit","match","Match"];
hunit_match_Match.prototype = {
	previous: null
	,chainLogic: null
	,_and: null
	,_or: null
	,match: function(value) {
		var result = this.checkMatch(value);
		var current = this;
		while(current.chainLogic != null) {
			var _g = current.chainLogic;
			if(_g != null) switch(_g[1]) {
			case 0:
				result = result && current.previous.checkMatch(value);
				break;
			case 1:
				result = result || current.previous.checkMatch(value);
				break;
			}
			current = current.previous;
		}
		return result;
	}
	,isChained: function() {
		return this.previous != null;
	}
	,toString: function() {
		var code = this.shortCode();
		if(this.previous == null) return "[" + code + "]"; else {
			var result = "" + code;
			var current = this;
			while(current.chainLogic != null) {
				var _g = current.chainLogic;
				if(_g != null) switch(_g[1]) {
				case 0:
					result = current.previous.shortCode() + (" && " + result);
					break;
				case 1:
					result = current.previous.shortCode() + (" || " + result);
					break;
				}
				current = current.previous;
			}
			return "[" + result + "]";
		}
	}
	,shortCode: function() {
		throw new js__$Boot_HaxeError("To be overriden");
	}
	,checkMatch: function(value) {
		throw new js__$Boot_HaxeError("To be overriden");
	}
	,get_and: function() {
		if(this._and == null) this._and = new hunit_match_GenericMatchFactory(this,hunit_match_MatchChainLogic.And);
		return this._and;
	}
	,get_or: function() {
		if(this._or == null) this._or = new hunit_match_GenericMatchFactory(this,hunit_match_MatchChainLogic.Or);
		return this._or;
	}
	,__class__: hunit_match_Match
	,__properties__: {get_or:"get_or",get_and:"get_and"}
};
var hunit_match_AnyMatch = function(previous,chainLogic) {
	hunit_match_Match.call(this,previous,chainLogic);
};
hunit_match_AnyMatch.__name__ = ["hunit","match","AnyMatch"];
hunit_match_AnyMatch.__super__ = hunit_match_Match;
hunit_match_AnyMatch.prototype = $extend(hunit_match_Match.prototype,{
	checkMatch: function(value) {
		return true;
	}
	,shortCode: function() {
		return "ANY";
	}
	,__class__: hunit_match_AnyMatch
});
var hunit_match_CallbackMatch = function(verify,previous,chainLogic) {
	hunit_match_Match.call(this,previous,chainLogic);
	this.verify = verify;
};
hunit_match_CallbackMatch.__name__ = ["hunit","match","CallbackMatch"];
hunit_match_CallbackMatch.__super__ = hunit_match_Match;
hunit_match_CallbackMatch.prototype = $extend(hunit_match_Match.prototype,{
	verify: null
	,checkMatch: function(value) {
		return this.verify(value);
	}
	,shortCode: function() {
		return "CALLBACK";
	}
	,__class__: hunit_match_CallbackMatch
});
var hunit_match_ERegMatch = function(regexp,previous,chainLogic) {
	hunit_match_Match.call(this,previous,chainLogic);
	this.regexp = regexp;
};
hunit_match_ERegMatch.__name__ = ["hunit","match","ERegMatch"];
hunit_match_ERegMatch.__super__ = hunit_match_Match;
hunit_match_ERegMatch.prototype = $extend(hunit_match_Match.prototype,{
	regexp: null
	,checkMatch: function(value) {
		return this.regexp.match(Std.string(value));
	}
	,shortCode: function() {
		return this.extractPattern();
	}
	,extractPattern: function() {
		var pattern = "~" + Std.string(Reflect.getProperty(this.regexp,"r").toString());
		return pattern;
	}
	,__class__: hunit_match_ERegMatch
});
var hunit_match_EqualMatch = function(value,previous,chainLogic) {
	hunit_match_Match.call(this,previous,chainLogic);
	this.value = value;
};
hunit_match_EqualMatch.__name__ = ["hunit","match","EqualMatch"];
hunit_match_EqualMatch.__super__ = hunit_match_Match;
hunit_match_EqualMatch.prototype = $extend(hunit_match_Match.prototype,{
	value: null
	,checkMatch: function(value) {
		try {
			{
				var _g = Type["typeof"](this.value);
				switch(_g[1]) {
				case 5:
					return Reflect.compareMethods(this.value,value);
				case 7:
					return Type.enumEq(this.value,value);
				default:
					return this.value == value;
				}
			}
		} catch( e ) {
			haxe_CallStack.lastException = e;
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			return false;
		}
	}
	,shortCode: function() {
		var code = hunit_Utils.shortenString(hunit_Utils.safeToString(this.value));
		if(hunit_Utils.hasToString(this.value)) return "=\"" + code + "\""; else return "=" + code;
	}
	,__class__: hunit_match_EqualMatch
});
var hunit_match_GenericMatchFactory = function(previous,chainLogic) {
	this.previous = previous;
	this.chainLogic = chainLogic;
};
hunit_match_GenericMatchFactory.__name__ = ["hunit","match","GenericMatchFactory"];
hunit_match_GenericMatchFactory.prototype = {
	previous: null
	,chainLogic: null
	,any: function() {
		return new hunit_match_AnyMatch(this.previous,this.chainLogic);
	}
	,type: function(type) {
		return new hunit_match_TypeMatch(type,this.previous,this.chainLogic);
	}
	,regexp: function(pattern) {
		return new hunit_match_ERegMatch(pattern);
	}
	,similar: function(pattern) {
		return new hunit_match_SimilarMatch(pattern);
	}
	,equal: function(value) {
		return new hunit_match_EqualMatch(value,this.previous,this.chainLogic);
	}
	,notEqual: function(value) {
		return new hunit_match_NotEqualMatch(value,this.previous,this.chainLogic);
	}
	,callback: function(verify) {
		return new hunit_match_CallbackMatch(verify);
	}
	,__class__: hunit_match_GenericMatchFactory
};
var hunit_match_MatchChainLogic = { __ename__ : ["hunit","match","MatchChainLogic"], __constructs__ : ["And","Or"] };
hunit_match_MatchChainLogic.And = ["And",0];
hunit_match_MatchChainLogic.And.toString = $estr;
hunit_match_MatchChainLogic.And.__enum__ = hunit_match_MatchChainLogic;
hunit_match_MatchChainLogic.Or = ["Or",1];
hunit_match_MatchChainLogic.Or.toString = $estr;
hunit_match_MatchChainLogic.Or.__enum__ = hunit_match_MatchChainLogic;
var hunit_match_MatchFactory = function() {
};
hunit_match_MatchFactory.__name__ = ["hunit","match","MatchFactory"];
hunit_match_MatchFactory.prototype = {
	any: function() {
		return new hunit_match_AnyMatch();
	}
	,type: function(type) {
		return new hunit_match_TypeMatch(type);
	}
	,regexp: function(pattern) {
		return new hunit_match_ERegMatch(pattern);
	}
	,similar: function(pattern) {
		return new hunit_match_SimilarMatch(pattern);
	}
	,equal: function(value) {
		return new hunit_match_EqualMatch(value);
	}
	,notEqual: function(value) {
		return new hunit_match_NotEqualMatch(value);
	}
	,callback: function(verify) {
		return new hunit_match_CallbackMatch(verify);
	}
	,__class__: hunit_match_MatchFactory
};
var hunit_match_MatchFailDescription = function(expected,actual) {
	this.expected = expected;
	this.actual = actual;
};
hunit_match_MatchFailDescription.__name__ = ["hunit","match","MatchFailDescription"];
hunit_match_MatchFailDescription.prototype = {
	expected: null
	,actual: null
	,__class__: hunit_match_MatchFailDescription
};
var hunit_match_NotEqualMatch = function(value,previous,chainLogic) {
	hunit_match_EqualMatch.call(this,value,previous,chainLogic);
};
hunit_match_NotEqualMatch.__name__ = ["hunit","match","NotEqualMatch"];
hunit_match_NotEqualMatch.__super__ = hunit_match_EqualMatch;
hunit_match_NotEqualMatch.prototype = $extend(hunit_match_EqualMatch.prototype,{
	checkMatch: function(value) {
		try {
			{
				var _g = Type["typeof"](this.value);
				switch(_g[1]) {
				case 5:
					return !Reflect.compareMethods(this.value,value);
				case 7:
					return !Type.enumEq(this.value,value);
				default:
					return this.value != value;
				}
			}
		} catch( e ) {
			haxe_CallStack.lastException = e;
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			return false;
		}
	}
	,shortCode: function() {
		var code = hunit_Utils.shortenString(Std.string(this.value));
		if(hunit_Utils.hasToString(this.value)) return "!=\"" + code + "\""; else return "!=" + code;
	}
	,__class__: hunit_match_NotEqualMatch
});
var hunit_match_SimilarMatch = function(expected,previous,chainLogic,root,processedObjects) {
	hunit_match_Match.call(this,previous,chainLogic);
	this.root = root;
	if(processedObjects == null) processedObjects = new hunit_match_ObjectCache();
	processedObjects.set(expected,this);
	if(this.isRoot()) this.buildMatcher(this,expected,processedObjects); else this.buildMatcher(root,expected,processedObjects);
};
hunit_match_SimilarMatch.__name__ = ["hunit","match","SimilarMatch"];
hunit_match_SimilarMatch.getAType = function(value) {
	if(js_Boot.__instanceof(value,haxe_IMap)) return "map";
	{
		var _g = Type["typeof"](value);
		switch(_g[1]) {
		case 6:
			switch(_g[2]) {
			case String:
				throw new js__$Boot_HaxeError(new hunit_exceptions_InvalidTestException("Invalid `expected` value similar matcher",{ fileName : "SimilarMatch.hx", lineNumber : 54, className : "hunit.match.SimilarMatch", methodName : "getAType"}));
				break;
			case Array:
				return "array";
			default:
				return "object";
			}
			break;
		case 4:
			return "object";
		default:
			throw new js__$Boot_HaxeError(new hunit_exceptions_InvalidTestException("Invalid `expected` value similar matcher",{ fileName : "SimilarMatch.hx", lineNumber : 58, className : "hunit.match.SimilarMatch", methodName : "getAType"}));
		}
	}
};
hunit_match_SimilarMatch.__super__ = hunit_match_Match;
hunit_match_SimilarMatch.prototype = $extend(hunit_match_Match.prototype,{
	root: null
	,matcher: null
	,checkedObjects: null
	,buildMatcher: function(root,expected,processedObjects) {
		var _g = hunit_match_SimilarMatch.getAType(expected);
		switch(_g) {
		case "object":
			this.matcher = new hunit_match_similar_SimilarObjectMatch(root,processedObjects,expected);
			break;
		case "array":
			this.matcher = new hunit_match_similar_SimilarArrayMatch(root,processedObjects,expected);
			break;
		case "map":
			this.matcher = new hunit_match_similar_SimilarMapMatch(root,processedObjects,expected);
			break;
		default:
			throw new js__$Boot_HaxeError(new hunit_exceptions_InvalidTestException("Provided value can not be used with `similar` matcher",{ fileName : "SimilarMatch.hx", lineNumber : 95, className : "hunit.match.SimilarMatch", methodName : "buildMatcher"}));
		}
	}
	,isRoot: function() {
		return this.root == null;
	}
	,checkMatch: function(value) {
		if(this.isRoot()) {
			this.checkedObjects = [];
			this.checkedObjects.push(value);
		} else this.root.checkedObjects.push(value);
		var result = this.matcher.checkMatch(value);
		if(this.isRoot()) this.checkedObjects = null;
		return result;
	}
	,shortCode: function() {
		return this.matcher.shortCode();
	}
	,createMatcherForValue: function(value,processedObjects) {
		var match = null;
		if(js_Boot.__instanceof(value,hunit_match_Match)) match = value; else if(hunit_Utils.isObject(value)) {
			match = processedObjects.get(value);
			if(match == null) match = new hunit_match_SimilarMatch(value,null,null,this,processedObjects);
		} else match = new hunit_match_EqualMatch(value);
		return match;
	}
	,__class__: hunit_match_SimilarMatch
});
var hunit_match_ObjectCache = function() {
	this.keys = [];
	this.values = [];
};
hunit_match_ObjectCache.__name__ = ["hunit","match","ObjectCache"];
hunit_match_ObjectCache.prototype = {
	keys: null
	,values: null
	,get: function(key) {
		if(HxOverrides.indexOf(this.keys,key,0) < 0) return null; else return this.values[HxOverrides.indexOf(this.keys,key,0)];
	}
	,set: function(key,value) {
		if(HxOverrides.indexOf(this.keys,key,0) >= 0) this.values[HxOverrides.indexOf(this.keys,key,0)] = value; else {
			this.keys.push(key);
			this.values.push(value);
		}
	}
	,__class__: hunit_match_ObjectCache
};
var hunit_match_TypeMatch = function(type,previous,chainLogic) {
	hunit_match_Match.call(this,previous,chainLogic);
	this.type = type;
};
hunit_match_TypeMatch.__name__ = ["hunit","match","TypeMatch"];
hunit_match_TypeMatch.__super__ = hunit_match_Match;
hunit_match_TypeMatch.prototype = $extend(hunit_match_Match.prototype,{
	type: null
	,checkMatch: function(value) {
		return value != null && js_Boot.__instanceof(value,this.type);
	}
	,shortCode: function() {
		return "Class<" + Type.getClassName(this.type) + ">";
	}
	,__class__: hunit_match_TypeMatch
});
var hunit_match_similar_SimilarArrayMatch = function(root,processedObjects,expected,previous,chainLogic) {
	if(!((expected instanceof Array) && expected.__enum__ == null)) throw new js__$Boot_HaxeError(new hunit_exceptions_InvalidTestException("`expected` value should be an array.",{ fileName : "SimilarArrayMatch.hx", lineNumber : 35, className : "hunit.match.similar.SimilarArrayMatch", methodName : "new"}));
	hunit_match_Match.call(this,previous,chainLogic);
	this.root = root;
	this.expected = this.getArrayMatchMap(expected,processedObjects);
};
hunit_match_similar_SimilarArrayMatch.__name__ = ["hunit","match","similar","SimilarArrayMatch"];
hunit_match_similar_SimilarArrayMatch.__super__ = hunit_match_Match;
hunit_match_similar_SimilarArrayMatch.prototype = $extend(hunit_match_Match.prototype,{
	expected: null
	,root: null
	,checkMatch: function(value) {
		if(!((value instanceof Array) && value.__enum__ == null)) return false;
		var value1 = value;
		if(this.expected.length != value1.length) return false;
		var actual;
		var match;
		var _g1 = 0;
		var _g = this.expected.length;
		while(_g1 < _g) {
			var i = _g1++;
			actual = value1[i];
			match = this.expected[i];
			if(js_Boot.__instanceof(match,hunit_match_SimilarMatch)) {
				if((function($this) {
					var $r;
					var x = actual;
					$r = HxOverrides.indexOf($this.root.checkedObjects,x,0);
					return $r;
				}(this)) >= 0) continue;
			}
			if(!match.match(actual)) return false;
		}
		return true;
	}
	,shortCode: function() {
		var parts = this.expected.map(function(m) {
			return m.toString();
		});
		var str = "[" + parts.join(", ") + "]";
		if(str.length == hunit_Utils.shortenString(str).length) return str; else {
			str = hunit_Utils.shortenString(str);
			return HxOverrides.substr(str,0,str.length - 6) + "<...>]";
		}
	}
	,getArrayMatchMap: function(expected,processedObjects) {
		var matchers = [];
		var _g1 = 0;
		var _g = expected.length;
		while(_g1 < _g) {
			var i = _g1++;
			matchers.push(this.root.createMatcherForValue(expected[i],processedObjects));
		}
		return matchers;
	}
	,__class__: hunit_match_similar_SimilarArrayMatch
});
var hunit_match_similar_SimilarMapMatch = function(root,processedObjects,expected,previous,chainLogic) {
	if(!js_Boot.__instanceof(expected,haxe_IMap)) throw new js__$Boot_HaxeError(new hunit_exceptions_InvalidTestException("`expected` value should be an `haxe.Constraints.IMap` instance.",{ fileName : "SimilarMapMatch.hx", lineNumber : 36, className : "hunit.match.similar.SimilarMapMatch", methodName : "new"}));
	hunit_match_Match.call(this,previous,chainLogic);
	this.root = root;
	this.expected = this.getMatchMap(expected,processedObjects);
};
hunit_match_similar_SimilarMapMatch.__name__ = ["hunit","match","similar","SimilarMapMatch"];
hunit_match_similar_SimilarMapMatch.__super__ = hunit_match_Match;
hunit_match_similar_SimilarMapMatch.prototype = $extend(hunit_match_Match.prototype,{
	expected: null
	,root: null
	,checkMatch: function(value) {
		if(!js_Boot.__instanceof(value,haxe_IMap)) return false;
		var value1 = value;
		var cnt = 0;
		var $it0 = value1.keys();
		while( $it0.hasNext() ) {
			var k = $it0.next();
			cnt++;
		}
		var _g = 0;
		var _g1 = this.expected.keys();
		while(_g < _g1.length) {
			var k1 = _g1[_g];
			++_g;
			cnt--;
		}
		if(cnt != 0) return false;
		var actual;
		var match;
		var _g2 = 0;
		var _g11 = this.expected.keys();
		while(_g2 < _g11.length) {
			var key = _g11[_g2];
			++_g2;
			actual = value1.get(key);
			match = this.expected.get(key);
			if(js_Boot.__instanceof(match,hunit_match_SimilarMatch)) {
				if((function($this) {
					var $r;
					var x = actual;
					$r = HxOverrides.indexOf($this.root.checkedObjects,x,0);
					return $r;
				}(this)) >= 0) continue;
			}
			if(!match.match(actual)) return false;
		}
		return true;
	}
	,shortCode: function() {
		var parts = [];
		var _g = 0;
		var _g1 = this.expected.keys();
		while(_g < _g1.length) {
			var key = _g1[_g];
			++_g;
			parts.push(Std.string(key) + "=>" + this.expected.get(key).toString());
		}
		var str = "[" + parts.join(", ") + "]";
		if(str.length == hunit_Utils.shortenString(str).length) return str; else {
			str = hunit_Utils.shortenString(str);
			return HxOverrides.substr(str,0,str.length - 6) + "<...>]";
		}
	}
	,getMatchMap: function(expected,processedObjects) {
		var map = new hunit_match_similar__$SimilarMapMatch_DynamicMatchMap();
		var $it0 = expected.keys();
		while( $it0.hasNext() ) {
			var key = $it0.next();
			map.set(key,this.root.createMatcherForValue(expected.get(key),processedObjects));
		}
		return map;
	}
	,__class__: hunit_match_similar_SimilarMapMatch
});
var hunit_match_similar__$SimilarMapMatch_DynamicMatchMap = function() {
	this.keyList = [];
	this.valueList = [];
};
hunit_match_similar__$SimilarMapMatch_DynamicMatchMap.__name__ = ["hunit","match","similar","_SimilarMapMatch","DynamicMatchMap"];
hunit_match_similar__$SimilarMapMatch_DynamicMatchMap.prototype = {
	keyList: null
	,valueList: null
	,keys: function() {
		return this.keyList;
	}
	,exists: function(key) {
		return HxOverrides.indexOf(this.keyList,key,0) >= 0;
	}
	,get: function(key) {
		if(!this.exists(key)) return null; else return this.valueList[HxOverrides.indexOf(this.keyList,key,0)];
	}
	,set: function(key,value) {
		if(HxOverrides.indexOf(this.keyList,key,0) >= 0) this.valueList[HxOverrides.indexOf(this.keyList,key,0)] = value; else {
			this.keyList.push(key);
			this.valueList.push(value);
		}
	}
	,__class__: hunit_match_similar__$SimilarMapMatch_DynamicMatchMap
};
var hunit_match_similar_SimilarObjectMatch = function(root,processedObjects,expected,previous,chainLogic) {
	if(!hunit_Utils.isObject(expected)) throw new js__$Boot_HaxeError(new hunit_exceptions_InvalidTestException("`expected` value should be an object.",{ fileName : "SimilarObjectMatch.hx", lineNumber : 35, className : "hunit.match.similar.SimilarObjectMatch", methodName : "new"}));
	hunit_match_Match.call(this,previous,chainLogic);
	this.root = root;
	this.expected = this.getFieldMatchMap(expected,processedObjects);
};
hunit_match_similar_SimilarObjectMatch.__name__ = ["hunit","match","similar","SimilarObjectMatch"];
hunit_match_similar_SimilarObjectMatch.getFieldValueMap = function(object) {
	var map = new haxe_ds_StringMap();
	var fields;
	{
		var _g = Type["typeof"](object);
		switch(_g[1]) {
		case 4:
			fields = Reflect.fields(object);
			break;
		case 6:
			var cls = _g[2];
			switch(_g[2]) {
			case String:
				fields = [];
				break;
			default:
				fields = Type.getInstanceFields(cls);
			}
			break;
		default:
			fields = [];
		}
	}
	var property;
	var _g1 = 0;
	while(_g1 < fields.length) {
		var field = fields[_g1];
		++_g1;
		property = Reflect.getProperty(object,field);
		if(!Reflect.isFunction(property)) {
			if(__map_reserved[field] != null) map.setReserved(field,property); else map.h[field] = property;
		}
	}
	return map;
};
hunit_match_similar_SimilarObjectMatch.__super__ = hunit_match_Match;
hunit_match_similar_SimilarObjectMatch.prototype = $extend(hunit_match_Match.prototype,{
	expected: null
	,root: null
	,checkMatch: function(value) {
		var valueMap = hunit_match_similar_SimilarObjectMatch.getFieldValueMap(value);
		var actual;
		var match;
		var $it0 = this.expected.keys();
		while( $it0.hasNext() ) {
			var field = $it0.next();
			if(!(__map_reserved[field] != null?valueMap.existsReserved(field):valueMap.h.hasOwnProperty(field))) return false;
			actual = __map_reserved[field] != null?valueMap.getReserved(field):valueMap.h[field];
			match = this.expected.get(field);
			if(js_Boot.__instanceof(match,hunit_match_SimilarMatch)) {
				if((function($this) {
					var $r;
					var x = actual;
					$r = HxOverrides.indexOf($this.root.checkedObjects,x,0);
					return $r;
				}(this)) >= 0) continue;
			}
			if(!match.match(actual)) return false;
		}
		return true;
	}
	,shortCode: function() {
		var parts = [];
		var $it0 = this.expected.keys();
		while( $it0.hasNext() ) {
			var field = $it0.next();
			parts.unshift(field + ":" + this.expected.get(field).toString());
		}
		var str = "{" + parts.join(", ") + "}";
		if(str.length == hunit_Utils.shortenString(str).length) return str; else {
			str = hunit_Utils.shortenString(str);
			return HxOverrides.substr(str,0,str.length - 6) + "<...>}";
		}
	}
	,getFieldMatchMap: function(object,processedObjects) {
		var fieldValue = hunit_match_similar_SimilarObjectMatch.getFieldValueMap(object);
		var fieldMatch = new haxe_ds_StringMap();
		var value;
		var $it0 = fieldValue.keys();
		while( $it0.hasNext() ) {
			var field = $it0.next();
			value = __map_reserved[field] != null?fieldValue.getReserved(field):fieldValue.h[field];
			var value1 = this.root.createMatcherForValue(value,processedObjects);
			if(__map_reserved[field] != null) fieldMatch.setReserved(field,value1); else fieldMatch.h[field] = value1;
		}
		return fieldMatch;
	}
	,__class__: hunit_match_similar_SimilarObjectMatch
});
var hunit_mock_IMock = function() { };
hunit_mock_IMock.__name__ = ["hunit","mock","IMock"];
hunit_mock_IMock.prototype = {
	__hu_mock__: null
	,__class__: hunit_mock_IMock
};
var hunit_mock_MockBuilder = function(test,mockClass,targetClass) {
	this.strictMode = false;
	this.fullStub = false;
	this.test = test;
	this.mockClass = mockClass;
	this.targetClass = targetClass;
};
hunit_mock_MockBuilder.__name__ = ["hunit","mock","MockBuilder"];
hunit_mock_MockBuilder.prototype = {
	test: null
	,mockClass: null
	,targetClass: null
	,fullStub: null
	,strictMode: null
	,get: function() {
		var instance = Type.createEmptyInstance(this.mockClass);
		this.assignMockData(instance);
		return instance;
	}
	,assignMockData: function(instance) {
		var mockData = this.createMockData();
		Reflect.setProperty(instance,"__hu_mock__",mockData);
	}
	,createMockData: function() {
		return new hunit_mock_MockData(this.test,this.targetClass,this.fullStub,this.strictMode);
	}
	,set_strictMode: function(value) {
		if(this.fullStub) throw new js__$Boot_HaxeError(new hunit_exceptions_InvalidTestException("Cannot use `stubAll()` and `strict()` together.",{ fileName : "MockBuilder.hx", lineNumber : 77, className : "hunit.mock.MockBuilder", methodName : "set_strictMode"}));
		return this.strictMode = value;
	}
	,set_fullStub: function(value) {
		if(this.strictMode) throw new js__$Boot_HaxeError(new hunit_exceptions_InvalidTestException("Cannot use `stubAll()` and `strict()` together.",{ fileName : "MockBuilder.hx", lineNumber : 91, className : "hunit.mock.MockBuilder", methodName : "set_fullStub"}));
		return this.fullStub = value;
	}
	,__class__: hunit_mock_MockBuilder
	,__properties__: {set_strictMode:"set_strictMode",set_fullStub:"set_fullStub"}
};
var hunit_mock_MockData = function(testCase,mockClass,fullStub,strictMode) {
	if(strictMode == null) strictMode = false;
	if(fullStub == null) fullStub = false;
	this.strictMode = false;
	this.fullStub = false;
	this.callCounter = 0;
	this.mockClass = mockClass;
	this.testCase = testCase;
	this.fullStub = fullStub;
	this.strictMode = strictMode;
	this.unstubbedMethods = [];
	this.unstubPositions = [];
	this.callLog = [];
	this.stubs = [];
	this.expectations = [];
};
hunit_mock_MockData.__name__ = ["hunit","mock","MockData"];
hunit_mock_MockData.prototype = {
	mockClass: null
	,testCase: null
	,callCounter: null
	,callLog: null
	,stubs: null
	,expectations: null
	,fullStub: null
	,strictMode: null
	,unstubbedMethods: null
	,unstubPositions: null
	,mockClassName: function() {
		return Type.getClassName(this.mockClass);
	}
	,stub: function(stub) {
		if(HxOverrides.indexOf(this.unstubbedMethods,stub.method,0) >= 0) {
			var pos = this.unstubPositions[HxOverrides.indexOf(this.unstubbedMethods,stub.method,0)];
			var unstubPos = pos.fileName + ":" + pos.lineNumber;
			throw new js__$Boot_HaxeError(new hunit_exceptions_InvalidTestException("Cannot stub method which was unstubbed at " + unstubPos,stub.pos));
		}
		this.stubs.push(stub);
	}
	,unstub: function(method,pos) {
		var _g = 0;
		var _g1 = this.stubs;
		while(_g < _g1.length) {
			var stub = _g1[_g];
			++_g;
			if(stub.method == method) {
				var stubPos = stub.pos.fileName + ":" + stub.pos.lineNumber;
				throw new js__$Boot_HaxeError(new hunit_exceptions_InvalidTestException("Cannot unstub method which was stubbed directly at " + stubPos,pos));
			}
		}
		if(HxOverrides.indexOf(this.unstubbedMethods,method,0) < 0) {
			this.unstubbedMethods.push(method);
			this.unstubPositions.push(pos);
		}
	}
	,expect: function(expect) {
		expect.fromCallId = this.callCounter;
		this.expectations.push(expect);
		this.testCase.__hu_state.expectedCalls.add(expect);
	}
	,removeExpect: function(expect) {
		HxOverrides.remove(this.expectations,expect);
		this.testCase.__hu_state.expectedCalls.remove(expect);
	}
	,methodInvoked: function(name,args,pos) {
		var isStub = this.fullStub && HxOverrides.indexOf(this.unstubbedMethods,name,0) < 0;
		var stub = null;
		var _g1 = 0;
		var _g = this.stubs.length;
		while(_g1 < _g) {
			var i = _g1++;
			stub = this.stubs[i];
			if(stub.method == name) {
				isStub = true;
				if(stub.match(name,args)) break;
			}
			stub = null;
		}
		var stack = haxe_CallStack.callStack();
		stack.shift();
		var call = new hunit_call_Call(this.callCounter++,this,name,args,stack,pos,isStub,stub);
		this.callLog.push(call);
		return call.id;
	}
	,isMethodMocked: function(callId) {
		var call = this.callLog[callId];
		return call.isStub;
	}
	,getMockedCallResult: function(callId) {
		var call = this.callLog[callId];
		if(!call.isStub) {
			var cls = Type.getClassName(this.mockClass);
			throw new js__$Boot_HaxeError(new Exception("Trying to get mocked result while `" + cls + "." + call.method + "()` is not stubbed",{ fileName : "MockData.hx", lineNumber : 199, className : "hunit.mock.MockData", methodName : "getMockedCallResult"}));
		}
		if(call.stub == null) return null;
		if(hunit_utils_ValueTools.hasValue(call.stub.implementation)) return Reflect.callMethod(null,hunit_utils_ValueTools.getValue(call.stub.implementation),call["arguments"]);
		if(hunit_utils_ValueTools.hasValue(call.stub["throws"])) throw new js__$Boot_HaxeError(hunit_utils_ValueTools.getValue(call.stub["throws"]));
		if(hunit_utils_ValueTools.hasValue(call.stub.returns)) return hunit_utils_ValueTools.getValue(call.stub.returns); else return null;
	}
	,addCallResult: function(callId,result) {
		this.callLog[callId].result = hunit_utils_Value.Thing(result);
	}
	,addCallException: function(callId,exception) {
		this.callLog[callId].set_exceptionValue(hunit_utils_Value.Thing(exception));
		this.testCase.__hu_state.cacheCallException(this.callLog[callId]);
	}
	,validateExpectation: function(expect) {
		var failed = false;
		var reason = "";
		var call;
		var count = 0;
		var _g1 = 0;
		var _g = this.callLog.length;
		while(_g1 < _g) {
			var i = _g1++;
			call = this.callLog[i];
			if(call.id < expect.fromCallId) continue;
			if(expect.match(call)) count++;
		}
		var s;
		if(count == 1) s = ""; else s = "s";
		{
			var _g2 = expect.count;
			switch(_g2[1]) {
			case 0:
				if(count > 0) {
					failed = true;
					reason = ", actually called " + count + " time" + s + ".";
				}
				break;
			case 1:
				break;
			case 2:
				if(count != 1) {
					failed = true;
					reason = ", actually called " + count + " time" + s + ".";
				}
				break;
			case 3:
				var amount = _g2[2];
				if(count < amount) {
					failed = true;
					reason = ", actually called " + count + " time" + s + ".";
				}
				break;
			case 4:
				var amount1 = _g2[2];
				if(count != amount1) {
					failed = true;
					reason = ", actually called " + count + " time" + s + ".";
				}
				break;
			}
		}
		if(failed) throw new js__$Boot_HaxeError(new hunit_exceptions_UnmetExpectationException(expect,reason,expect.pos));
	}
	,validateStrictMode: function(callId) {
		if(!this.strictMode) return;
		var call = this.callLog[callId];
		if(call.stub != null) return;
		var _g1 = 0;
		var _g = this.expectations.length;
		while(_g1 < _g) {
			var i = _g1++;
			if(this.expectations[i].sameObjectMethod(call)) return;
		}
		var msg = "" + Std.string(call) + " is not expected nor stubbed.";
		this.throwUnexpectedCallException(call,msg);
	}
	,validateCall: function(callId) {
		var isExpected = false;
		var satisfies = false;
		var call = this.callLog[callId];
		var expect;
		var _g1 = 0;
		var _g = this.expectations.length;
		while(_g1 < _g) {
			var i = _g1++;
			expect = this.expectations[i];
			if(expect.sameObjectMethod(call)) {
				isExpected = true;
				if(expect.match(call)) {
					expect.timesMatched++;
					satisfies = true;
					if(expect.tooManyCalls()) this.throwUnexpectedCallException(call,null,expect);
				}
			}
		}
		if(isExpected && !satisfies) this.throwUnexpectedCallException(call);
	}
	,throwUnexpectedCallException: function(call,msg,expect) {
		var e = new hunit_exceptions_UnexpectedCallException(call,expect,msg,call.pos);
		this.testCase.__hu_state.pendingFail(e);
		e.truncateStack({ fileName : "MockData.hx", lineNumber : 360, className : "hunit.mock.MockData", methodName : "throwUnexpectedCallException"},1);
		throw new js__$Boot_HaxeError(e);
	}
	,__class__: hunit_mock_MockData
};
var hunit_report_IReportWriter = function() { };
hunit_report_IReportWriter.__name__ = ["hunit","report","IReportWriter"];
hunit_report_IReportWriter.prototype = {
	write: null
	,__class__: hunit_report_IReportWriter
};
var hunit_report_DefaultWriter = function(printer) {
	this.itemsWriteCounter = 0;
	this.printer = printer;
};
hunit_report_DefaultWriter.__name__ = ["hunit","report","DefaultWriter"];
hunit_report_DefaultWriter.__interfaces__ = [hunit_report_IReportWriter];
hunit_report_DefaultWriter.prototype = {
	itemsWriteCounter: null
	,printer: null
	,write: function(report) {
		if(report.notices.length > 0) {
			this.printer("NOTICES:\n\n");
			var _g_head = report.notices.h;
			var _g_val = null;
			while(_g_head != null) {
				var notice;
				notice = (function($this) {
					var $r;
					_g_val = _g_head[0];
					_g_head = _g_head[1];
					$r = _g_val;
					return $r;
				}(this));
				this.writeNotice(notice);
			}
		}
		this.itemsWriteCounter = 0;
		if(report.fails.length > 0) {
			this.printer("FAILURES:\n\n");
			var _g_head1 = report.fails.h;
			var _g_val1 = null;
			while(_g_head1 != null) {
				var fail;
				fail = (function($this) {
					var $r;
					_g_val1 = _g_head1[0];
					_g_head1 = _g_head1[1];
					$r = _g_val1;
					return $r;
				}(this));
				this.writeFail(fail);
			}
		}
		this.itemsWriteCounter = 0;
		if(report.warnings.length > 0) {
			this.printer("WARNINGS:\n\n");
			var _g_head2 = report.warnings.h;
			var _g_val2 = null;
			while(_g_head2 != null) {
				var warning;
				warning = (function($this) {
					var $r;
					_g_val2 = _g_head2[0];
					_g_head2 = _g_head2[1];
					$r = _g_val2;
					return $r;
				}(this));
				this.writeWarning(warning);
			}
		}
	}
	,writeFail: function(item) {
		var pos = item.exception.pos;
		var message = item.exception.message;
		var e = item.exception;
		if(js_Boot.__instanceof(e,hunit_exceptions_TestFailException)) {
			if(js_Boot.__instanceof(e,hunit_exceptions_UnexpectedCallException)) {
				pos = null;
				message += StringTools.replace((js_Boot.__cast(e , Exception)).stringStack(),"\n","\n\t");
			}
		} else {
			pos = null;
			var customMessage = false;
			if(js_Boot.__instanceof(e,hunit_exceptions_UnexpectedException)) {
				var e1;
				e1 = js_Boot.__cast(e , hunit_exceptions_UnexpectedException);
				customMessage = true;
				if(js_Boot.__instanceof(e1.original,Exception)) message = "ERROR: " + (js_Boot.__cast(e1.original , Exception)).toString(); else message = "ERROR: " + Std.string(e1);
			}
			if(!customMessage) message = "ERROR: " + e.message + "\n\n" + e.toString();
		}
		this.writeItem(item.caseName,item.testName,message,pos);
	}
	,writeWarning: function(item) {
		this.writeItem(item.caseName,item.testName,item.warning.message,null);
	}
	,writeNotice: function(item) {
		this.writeItem(item.caseName,item.testName,item.message,item.pos,true);
	}
	,writeItem: function(caseName,test,message,pos,addPosToTestName) {
		if(addPosToTestName == null) addPosToTestName = false;
		this.itemsWriteCounter++;
		var idx = this.itemsWriteCounter;
		var posStr;
		if(pos == null) posStr = ""; else posStr = "" + pos.fileName + ":" + pos.lineNumber;
		this.printer("" + idx + ") " + caseName + "::" + test + "()" + (addPosToTestName?" at " + posStr:"") + "\n");
		this.printer("" + message + "\n");
		this.printer("\n");
		if(pos != null && !addPosToTestName) {
			this.printer("\t" + posStr + "\n");
			this.printer("\n");
		}
	}
	,__class__: hunit_report_DefaultWriter
};
var hunit_report_TestReport = function(writer) {
	this.assertionCount = 0;
	this.spentTime = 0;
	this.endTime = 0;
	this.startTime = 0;
	this.cases = new List();
	this.fails = new List();
	this.warnings = new List();
	this.successful = new List();
	this.skipped = new List();
	this.notices = new List();
	this.writer = writer;
};
hunit_report_TestReport.__name__ = ["hunit","report","TestReport"];
hunit_report_TestReport.prototype = {
	startTime: null
	,endTime: null
	,spentTime: null
	,writer: null
	,cases: null
	,fails: null
	,warnings: null
	,successful: null
	,skipped: null
	,notices: null
	,assertionCount: null
	,addFail: function(testCase,test,e) {
		this.fails.add({ caseName : Type.getClassName(testCase == null?null:js_Boot.getClass(testCase)), testName : test, exception : e});
	}
	,addSuccess: function(testCase,test) {
		this.successful.add({ caseName : Type.getClassName(testCase == null?null:js_Boot.getClass(testCase)), testName : test});
	}
	,addWarning: function(testCase,test,warning) {
		this.warnings.add({ caseName : Type.getClassName(testCase == null?null:js_Boot.getClass(testCase)), testName : test, warning : warning});
	}
	,addSkip: function(testCase,test,depends) {
		this.skipped.add({ caseName : Type.getClassName(testCase == null?null:js_Boot.getClass(testCase)), testName : test, depends : depends});
	}
	,addNotice: function(testCase,test,message,pos) {
		this.notices.add({ caseName : Type.getClassName(testCase == null?null:js_Boot.getClass(testCase)), testName : test, message : message, pos : pos});
	}
	,output: function() {
		this.writer.write(this);
	}
	,getSummary: function() {
		var failed = this.fails.length;
		var warned = this.warnings.length;
		var passed = warned + this.successful.length;
		var total = failed + passed;
		var failedMsg;
		if(failed == 0) failedMsg = ""; else failedMsg = ", " + failed + " failure" + (failed == 1?"":"s");
		var warnedMsg;
		if(warned == 0) warnedMsg = ""; else warnedMsg = ", " + warned + " warning" + (warned == 1?"":"s");
		var skippedMsg;
		if(this.skipped.length == 0) skippedMsg = ""; else skippedMsg = ", " + this.skipped.length + " skipped";
		var summary = "Time: " + this.spentTime + " seconds.\n\n";
		if(this.fails.length == 0 && this.warnings.length == 0 && this.skipped.length == 0) summary += "OK (" + total + " tests, " + this.assertionCount + " assertions)"; else if(this.fails.length == 0) summary += "OK, but with risky tests! (" + total + " tests, " + this.assertionCount + " assertions" + warnedMsg + skippedMsg + ")"; else summary += "FAILURES! (" + total + " tests" + failedMsg + warnedMsg + skippedMsg + ")";
		return summary;
	}
	,set_endTime: function(endTime) {
		this.spentTime = Math.round((endTime - this.startTime) * 1000) / 1000;
		return this.endTime = endTime;
	}
	,get_testCount: function() {
		return this.successful.length + this.warnings.length + this.fails.length + this.skipped.length;
	}
	,__class__: hunit_report_TestReport
	,__properties__: {get_testCount:"get_testCount",set_endTime:"set_endTime"}
};
var hunit_utils_CTypeClassFieldsUtils = function() { };
hunit_utils_CTypeClassFieldsUtils.__name__ = ["hunit","utils","CTypeClassFieldsUtils"];
hunit_utils_CTypeClassFieldsUtils.isTest = function(field) {
	if(HxOverrides.substr(field.name,0,"test".length) == "test") return true; else {
		var _g = 0;
		var _g1 = field.meta;
		while(_g < _g1.length) {
			var meta = _g1[_g];
			++_g;
			if(meta.name == "test") return true;
		}
	}
	return false;
};
hunit_utils_CTypeClassFieldsUtils.mIsTest = function(field) {
	if(HxOverrides.substr(field.name,0,"test".length) == "test") return true; else return field.meta.has("test");
	return false;
};
var hunit_utils_TestCaseData = function(testCase) {
	this.tests = [];
	this.defaultGroups = [];
	this.set_testCase(testCase);
	this.processTestCaseRttiMeta();
	this.gatherTestData();
};
hunit_utils_TestCaseData.__name__ = ["hunit","utils","TestCaseData"];
hunit_utils_TestCaseData.getDependent = function(test,list,dependencyStack) {
	var dependent = [];
	if(dependencyStack != null) {
		if(HxOverrides.indexOf(dependencyStack,test,0) >= 0) throw new js__$Boot_HaxeError(new hunit_exceptions_CircularTestDependencyException("Tests with circular dependancies detected. Check @depends() metas.",{ fileName : "TestCaseData.hx", lineNumber : 58, className : "hunit.utils.TestCaseData", methodName : "getDependent"}));
		dependencyStack.push(test);
	}
	var _g = 0;
	while(_g < list.length) {
		var t = list[_g];
		++_g;
		if(t == test) continue;
		if(HxOverrides.indexOf(t.depends,test.name,0) >= 0) {
			dependent.push(t);
			var subStack;
			if(dependencyStack == null) subStack = null; else subStack = dependencyStack.slice();
			dependent = dependent.concat(hunit_utils_TestCaseData.getDependent(t,list,subStack));
		}
	}
	return dependent;
};
hunit_utils_TestCaseData.sortByDependencies = function(list) {
	if(list.length == 0) return [];
	var result = list.slice();
	result.sort(function(a,b) {
		return a.depends.length - b.depends.length;
	});
	if(result[0].depends.length > 0) throw new js__$Boot_HaxeError(new hunit_exceptions_CircularTestDependencyException("Can't find tests without dependencies.",{ fileName : "TestCaseData.hx", lineNumber : 88, className : "hunit.utils.TestCaseData", methodName : "sortByDependencies"}));
	var idx = 0;
	var dependent;
	while(idx < list.length) {
		dependent = hunit_utils_TestCaseData.getDependent(result[idx],result,[]);
		var _g = 0;
		while(_g < dependent.length) {
			var test = dependent[_g];
			++_g;
			HxOverrides.remove(result,test);
			result.push(test);
		}
		idx++;
	}
	return result;
};
hunit_utils_TestCaseData.prototype = {
	testCase: null
	,rtti: null
	,tests: null
	,defaultGroups: null
	,getTests: function(groups,excludeGroups) {
		var _g = this;
		var result;
		if(groups == null || groups.length == 0) result = this.tests.slice(); else result = this.tests.filter(function(t) {
			return _g.testIsInGroups(t,groups);
		});
		if(excludeGroups != null) result = result.filter(function(t1) {
			return !_g.testIsInGroups(t1,excludeGroups);
		});
		return hunit_utils_TestCaseData.sortByDependencies(result);
	}
	,processTestCaseRttiMeta: function() {
		var _g = 0;
		var _g1 = this.rtti.meta;
		while(_g < _g1.length) {
			var meta = _g1[_g];
			++_g;
			var _g2 = meta.name;
			switch(_g2) {
			case "group":
				var mGroups = meta.params.map((function(f,a1,by) {
					return function(s) {
						return f(s,a1,by);
					};
				})(StringTools.replace,"\"",""));
				this.defaultGroups = this.defaultGroups.concat(mGroups);
				break;
			default:
			}
		}
	}
	,gatherTestData: function() {
		var _g_head = this.rtti.fields.h;
		var _g_val = null;
		while(_g_head != null) {
			var field;
			field = (function($this) {
				var $r;
				_g_val = _g_head[0];
				_g_head = _g_head[1];
				$r = _g_val;
				return $r;
			}(this));
			if(!hunit_utils_CTypeClassFieldsUtils.isTest(field)) continue;
			if(!Reflect.isFunction(Reflect.field(this.testCase,field.name))) continue;
			this.tests.push(this.getTestData(field));
		}
	}
	,getTestData: function(field) {
		var callback = Reflect.field(this.testCase,field.name);
		var isIncomplete = false;
		var groups = this.defaultGroups.slice();
		var incompleteMsg = null;
		var depends = [];
		var _g = 0;
		var _g1 = field.meta;
		while(_g < _g1.length) {
			var meta = _g1[_g];
			++_g;
			var _g2 = meta.name;
			switch(_g2) {
			case "group":
				var mGroups = meta.params.map((function(f,a1,by) {
					return function(s) {
						return f(s,a1,by);
					};
				})(StringTools.replace,"\"",""));
				groups = groups.concat(mGroups);
				break;
			case "incomplete":
				isIncomplete = true;
				incompleteMsg = meta.params.map((function(f1,a11,by1) {
					return function(s1) {
						return f1(s1,a11,by1);
					};
				})(StringTools.replace,"\"","")).join("; ");
				break;
			case "depends":
				depends = meta.params.map((function(f2,a12,by2) {
					return function(s2) {
						return f2(s2,a12,by2);
					};
				})(StringTools.replace,"\"",""));
				break;
			default:
			}
		}
		return { name : field.name, callback : callback, isIncomplete : isIncomplete, incompleteMsg : incompleteMsg, groups : groups, depends : depends};
	}
	,testIsInGroups: function(test,groups) {
		var _g = 0;
		while(_g < groups.length) {
			var group = groups[_g];
			++_g;
			if(HxOverrides.indexOf(test.groups,group,0) >= 0) return true;
		}
		return false;
	}
	,get_className: function() {
		return Type.getClassName(Type.getClass(this.testCase));
	}
	,get_file: function() {
		return this.rtti.file;
	}
	,get_totalTestCount: function() {
		return this.tests.length;
	}
	,set_testCase: function(value) {
		this.rtti = haxe_rtti_Rtti.getRtti(value == null?null:js_Boot.getClass(value));
		return this.testCase = value;
	}
	,__class__: hunit_utils_TestCaseData
	,__properties__: {set_testCase:"set_testCase",get_totalTestCount:"get_totalTestCount",get_file:"get_file",get_className:"get_className"}
};
var hunit_utils_Value = { __ename__ : ["hunit","utils","Value"], __constructs__ : ["Nothing","Thing"] };
hunit_utils_Value.Nothing = ["Nothing",0];
hunit_utils_Value.Nothing.toString = $estr;
hunit_utils_Value.Nothing.__enum__ = hunit_utils_Value;
hunit_utils_Value.Thing = function(v) { var $x = ["Thing",1,v]; $x.__enum__ = hunit_utils_Value; $x.toString = $estr; return $x; };
var hunit_utils_ValueTools = function() { };
hunit_utils_ValueTools.__name__ = ["hunit","utils","ValueTools"];
hunit_utils_ValueTools.hasValue = function(holder) {
	if(holder == null) return false;
	if(holder != null) switch(holder[1]) {
	case 0:
		return false;
	case 1:
		return true;
	}
	return false;
};
hunit_utils_ValueTools.getValue = function(holder) {
	if(holder == null) throw new js__$Boot_HaxeError(new Exception("No value here",{ fileName : "Value.hx", lineNumber : 46, className : "hunit.utils.ValueTools", methodName : "getValue"}));
	if(holder != null) switch(holder[1]) {
	case 0:
		throw new js__$Boot_HaxeError(new Exception("No value here",{ fileName : "Value.hx", lineNumber : 50, className : "hunit.utils.ValueTools", methodName : "getValue"}));
		break;
	case 1:
		var v = holder[2];
		return v;
	}
	throw new js__$Boot_HaxeError(new Exception("No value here",{ fileName : "Value.hx", lineNumber : 54, className : "hunit.utils.ValueTools", methodName : "getValue"}));
};
var hunit_warnings_Warning = function(message) {
	if(message == null || StringTools.trim(message).length == 0) message = this.defaultMessage();
	this.message = message;
};
hunit_warnings_Warning.__name__ = ["hunit","warnings","Warning"];
hunit_warnings_Warning.prototype = {
	message: null
	,defaultMessage: function() {
		var className = Type.getClassName(js_Boot.getClass(this)).split(".").pop();
		var words = [];
		var wordStart = -1;
		var _g1 = 0;
		var _g = className.length;
		while(_g1 < _g) {
			var i = _g1++;
			var $char = className.charAt(i);
			if($char.toUpperCase() == $char) {
				if(wordStart >= 0) {
					var word = className.substring(wordStart,i);
					if(wordStart > 0) word = word.toLowerCase();
					words.push(word);
				}
				wordStart = i;
			}
		}
		if(wordStart >= 0) words.push(HxOverrides.substr(className,wordStart,null).toLowerCase());
		return words.join(" ");
	}
	,__class__: hunit_warnings_Warning
};
var hunit_warnings_ForcedWarning = function(message) {
	hunit_warnings_Warning.call(this,message);
};
hunit_warnings_ForcedWarning.__name__ = ["hunit","warnings","ForcedWarning"];
hunit_warnings_ForcedWarning.__super__ = hunit_warnings_Warning;
hunit_warnings_ForcedWarning.prototype = $extend(hunit_warnings_Warning.prototype,{
	__class__: hunit_warnings_ForcedWarning
});
var hunit_warnings_IncompleteTestWarning = function(message) {
	hunit_warnings_Warning.call(this,message);
};
hunit_warnings_IncompleteTestWarning.__name__ = ["hunit","warnings","IncompleteTestWarning"];
hunit_warnings_IncompleteTestWarning.__super__ = hunit_warnings_Warning;
hunit_warnings_IncompleteTestWarning.prototype = $extend(hunit_warnings_Warning.prototype,{
	defaultMessage: function() {
		return "Incomplete test.";
	}
	,__class__: hunit_warnings_IncompleteTestWarning
});
var hunit_warnings_NoAssertionsWarning = function(message) {
	hunit_warnings_Warning.call(this,message);
};
hunit_warnings_NoAssertionsWarning.__name__ = ["hunit","warnings","NoAssertionsWarning"];
hunit_warnings_NoAssertionsWarning.__super__ = hunit_warnings_Warning;
hunit_warnings_NoAssertionsWarning.prototype = $extend(hunit_warnings_Warning.prototype,{
	__class__: hunit_warnings_NoAssertionsWarning
});
var hunit_warnings_NoTestsWarning = function(message) {
	hunit_warnings_Warning.call(this,message);
};
hunit_warnings_NoTestsWarning.__name__ = ["hunit","warnings","NoTestsWarning"];
hunit_warnings_NoTestsWarning.__super__ = hunit_warnings_Warning;
hunit_warnings_NoTestsWarning.prototype = $extend(hunit_warnings_Warning.prototype,{
	__class__: hunit_warnings_NoTestsWarning
});
var js__$Boot_HaxeError = function(val) {
	Error.call(this);
	this.val = val;
	this.message = String(val);
	if(Error.captureStackTrace) Error.captureStackTrace(this,js__$Boot_HaxeError);
};
js__$Boot_HaxeError.__name__ = ["js","_Boot","HaxeError"];
js__$Boot_HaxeError.__super__ = Error;
js__$Boot_HaxeError.prototype = $extend(Error.prototype,{
	val: null
	,__class__: js__$Boot_HaxeError
});
var js_Boot = function() { };
js_Boot.__name__ = ["js","Boot"];
js_Boot.__unhtml = function(s) {
	return s.split("&").join("&amp;").split("<").join("&lt;").split(">").join("&gt;");
};
js_Boot.__trace = function(v,i) {
	var msg;
	if(i != null) msg = i.fileName + ":" + i.lineNumber + ": "; else msg = "";
	msg += js_Boot.__string_rec(v,"");
	if(i != null && i.customParams != null) {
		var _g = 0;
		var _g1 = i.customParams;
		while(_g < _g1.length) {
			var v1 = _g1[_g];
			++_g;
			msg += "," + js_Boot.__string_rec(v1,"");
		}
	}
	var d;
	if(typeof(document) != "undefined" && (d = document.getElementById("haxe:trace")) != null) d.innerHTML += js_Boot.__unhtml(msg) + "<br/>"; else if(typeof console != "undefined" && console.log != null) console.log(msg);
};
js_Boot.getClass = function(o) {
	if((o instanceof Array) && o.__enum__ == null) return Array; else {
		var cl = o.__class__;
		if(cl != null) return cl;
		var name = js_Boot.__nativeClassName(o);
		if(name != null) return js_Boot.__resolveNativeClass(name);
		return null;
	}
};
js_Boot.__string_rec = function(o,s) {
	if(o == null) return "null";
	if(s.length >= 5) return "<...>";
	var t = typeof(o);
	if(t == "function" && (o.__name__ || o.__ename__)) t = "object";
	switch(t) {
	case "object":
		if(o instanceof Array) {
			if(o.__enum__) {
				if(o.length == 2) return o[0];
				var str2 = o[0] + "(";
				s += "\t";
				var _g1 = 2;
				var _g = o.length;
				while(_g1 < _g) {
					var i1 = _g1++;
					if(i1 != 2) str2 += "," + js_Boot.__string_rec(o[i1],s); else str2 += js_Boot.__string_rec(o[i1],s);
				}
				return str2 + ")";
			}
			var l = o.length;
			var i;
			var str1 = "[";
			s += "\t";
			var _g2 = 0;
			while(_g2 < l) {
				var i2 = _g2++;
				str1 += (i2 > 0?",":"") + js_Boot.__string_rec(o[i2],s);
			}
			str1 += "]";
			return str1;
		}
		var tostr;
		try {
			tostr = o.toString;
		} catch( e ) {
			haxe_CallStack.lastException = e;
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			return "???";
		}
		if(tostr != null && tostr != Object.toString && typeof(tostr) == "function") {
			var s2 = o.toString();
			if(s2 != "[object Object]") return s2;
		}
		var k = null;
		var str = "{\n";
		s += "\t";
		var hasp = o.hasOwnProperty != null;
		for( var k in o ) {
		if(hasp && !o.hasOwnProperty(k)) {
			continue;
		}
		if(k == "prototype" || k == "__class__" || k == "__super__" || k == "__interfaces__" || k == "__properties__") {
			continue;
		}
		if(str.length != 2) str += ", \n";
		str += s + k + " : " + js_Boot.__string_rec(o[k],s);
		}
		s = s.substring(1);
		str += "\n" + s + "}";
		return str;
	case "function":
		return "<function>";
	case "string":
		return o;
	default:
		return String(o);
	}
};
js_Boot.__interfLoop = function(cc,cl) {
	if(cc == null) return false;
	if(cc == cl) return true;
	var intf = cc.__interfaces__;
	if(intf != null) {
		var _g1 = 0;
		var _g = intf.length;
		while(_g1 < _g) {
			var i = _g1++;
			var i1 = intf[i];
			if(i1 == cl || js_Boot.__interfLoop(i1,cl)) return true;
		}
	}
	return js_Boot.__interfLoop(cc.__super__,cl);
};
js_Boot.__instanceof = function(o,cl) {
	if(cl == null) return false;
	switch(cl) {
	case Int:
		return (o|0) === o;
	case Float:
		return typeof(o) == "number";
	case Bool:
		return typeof(o) == "boolean";
	case String:
		return typeof(o) == "string";
	case Array:
		return (o instanceof Array) && o.__enum__ == null;
	case Dynamic:
		return true;
	default:
		if(o != null) {
			if(typeof(cl) == "function") {
				if(o instanceof cl) return true;
				if(js_Boot.__interfLoop(js_Boot.getClass(o),cl)) return true;
			} else if(typeof(cl) == "object" && js_Boot.__isNativeObj(cl)) {
				if(o instanceof cl) return true;
			}
		} else return false;
		if(cl == Class && o.__name__ != null) return true;
		if(cl == Enum && o.__ename__ != null) return true;
		return o.__enum__ == cl;
	}
};
js_Boot.__cast = function(o,t) {
	if(js_Boot.__instanceof(o,t)) return o; else throw new js__$Boot_HaxeError("Cannot cast " + Std.string(o) + " to " + Std.string(t));
};
js_Boot.__nativeClassName = function(o) {
	var name = js_Boot.__toStr.call(o).slice(8,-1);
	if(name == "Object" || name == "Function" || name == "Math" || name == "JSON") return null;
	return name;
};
js_Boot.__isNativeObj = function(o) {
	return js_Boot.__nativeClassName(o) != null;
};
js_Boot.__resolveNativeClass = function(name) {
	return (Function("return typeof " + name + " != \"undefined\" ? " + name + " : null"))();
};
var sx_Sx = function() {
};
sx_Sx.__name__ = ["sx","Sx"];
sx_Sx.__properties__ = {get_stageHeight:"get_stageHeight",get_stageWidth:"get_stageWidth",get_onFrame:"get_onFrame",set_root:"set_root",get_root:"get_root",get_backendManager:"get_backendManager"}
sx_Sx.toDip = function(px) {
	return px / sx_Sx.dipFactor;
};
sx_Sx.toPx = function(dip) {
	return dip * sx_Sx.dipFactor;
};
sx_Sx.snap = function(value) {
	if(sx_Sx.pixelSnapping) value = Math.round(value);
	return value;
};
sx_Sx.setBackendManger = function(manager) {
	if(sx_Sx.__backendManager != null) throw new js__$Boot_HaxeError(new sx_exceptions_InvalidBackendException("Backend manager is already set.",{ fileName : "Sx.hx", lineNumber : 97, className : "sx.Sx", methodName : "setBackendManger"}));
	sx_Sx.__backendManager = manager;
};
sx_Sx.registerSkin = function(name,factory) {
	sx_Sx.__skins.set(name,factory);
};
sx_Sx.addInitTask = function(task) {
	sx_Sx.__initTasks.push(task);
};
sx_Sx.init = function(readyCallback) {
	sx_Sx.__readyCallback = readyCallback;
	if(sx_Sx.__backendManager == null) sx_Sx.__backendManager = new sx_backend_dummy_BackendManager();
	if(sx_Sx.__initTasks.length == 0) {
		sx_tween_Tweener.__time = sx_tween_Tweener.getTime() - sx_tween_Tweener.__totalPausedTime;
		sx_Sx.__backendManager.setupPointerDevices();
		sx_Sx.__backendManager.setupFrames();
		sx_Sx.__readyCallback();
	} else {
		var tasks = sx_Sx.__initTasks.slice();
		var _g = 0;
		while(_g < tasks.length) {
			var task = tasks[_g];
			++_g;
			task((function(f,a1) {
				return function() {
					f(a1);
				};
			})(sx_Sx.__doneInitTask,task));
		}
	}
};
sx_Sx.skin = function(name) {
	var factory = sx_Sx.__skins.get(name);
	if(factory == null) return null; else return factory();
};
sx_Sx.dropSkins = function() {
	sx_Sx.__skins = new haxe_ds_StringMap();
};
sx_Sx.frame = function() {
	if(sx_Sx.__onFrame != null && sx_Sx.__onFrame.__listeners.length > 0) {
		if(sx_Sx.__onFrame.__listenersInUse) {
			var _g = 0;
			var _g1 = sx_Sx.__onFrame.__listeners;
			while(_g < _g1.length) {
				var listener = _g1[_g];
				++_g;
				listener();
			}
			false;
		} else {
			sx_Sx.__onFrame.__listenersInUse = true;
			var _g2 = 0;
			var _g11 = sx_Sx.__onFrame.__listeners;
			while(_g2 < _g11.length) {
				var listener1 = _g11[_g2];
				++_g2;
				listener1();
			}
			sx_Sx.__onFrame.__listenersInUse = false;
		}
	}
	sx_tween_Tweener.update();
};
sx_Sx.__doneInitTask = function(task) {
	var _g1 = 0;
	var _g = sx_Sx.__initTasks.length;
	while(_g1 < _g) {
		var i = _g1++;
		if(Reflect.compareMethods(sx_Sx.__initTasks[i],task)) {
			sx_Sx.__initTasks.splice(i,1);
			break;
		}
	}
	if(sx_Sx.__initTasks.length == 0) {
		sx_tween_Tweener.__time = sx_tween_Tweener.getTime() - sx_tween_Tweener.__totalPausedTime;
		sx_Sx.__backendManager.setupPointerDevices();
		sx_Sx.__backendManager.setupFrames();
		sx_Sx.__readyCallback();
	}
};
sx_Sx.__initializationFinished = function() {
	sx_tween_Tweener.__time = sx_tween_Tweener.getTime() - sx_tween_Tweener.__totalPausedTime;
	sx_Sx.__backendManager.setupPointerDevices();
	sx_Sx.__backendManager.setupFrames();
	sx_Sx.__readyCallback();
};
sx_Sx.get_backendManager = function() {
	if(sx_Sx.__backendManager == null) sx_Sx.__backendManager = new sx_backend_dummy_BackendManager();
	return sx_Sx.__backendManager;
};
sx_Sx.get_root = function() {
	if(sx_Sx.__root == null) return sx_Sx.get_backendManager().getRoot(); else return sx_Sx.__root;
};
sx_Sx.set_root = function(value) {
	return sx_Sx.__root = value;
};
sx_Sx.get_stageWidth = function() {
	return sx_Sx.get_backendManager().getRoot().get_width();
};
sx_Sx.get_stageHeight = function() {
	return sx_Sx.get_backendManager().getRoot().get_height();
};
sx_Sx.get_onFrame = function() {
	if(sx_Sx.__onFrame == null) return sx_Sx.__onFrame = new sx_signals_Signal(); else return sx_Sx.__onFrame;
};
sx_Sx.prototype = {
	__class__: sx_Sx
};
var sx_backend_interfaces_IBackend = function() { };
sx_backend_interfaces_IBackend.__name__ = ["sx","backend","interfaces","IBackend"];
sx_backend_interfaces_IBackend.prototype = {
	addWidget: null
	,addWidgetAt: null
	,removeWidget: null
	,removeWidgetAt: null
	,getWidgetIndex: null
	,setWidgetIndex: null
	,getWidgetAt: null
	,swapWidgets: null
	,swapWidgetsAt: null
	,widgetGlobalToLocal: null
	,widgetLocalToGlobal: null
	,widgetOriginChanged: null
	,widgetOffsetChanged: null
	,widgetResized: null
	,widgetMoved: null
	,widgetRotated: null
	,widgetScaledX: null
	,widgetScaledY: null
	,widgetAlphaChanged: null
	,widgetVisibilityChanged: null
	,widgetOverflowChanged: null
	,widgetSkinChanged: null
	,widgetDisposed: null
	,__class__: sx_backend_interfaces_IBackend
};
var sx_backend_dummy_Backend = function(widget) {
	this.__node = new sx_properties_displaylist_ArrayDisplayList(widget);
};
sx_backend_dummy_Backend.__name__ = ["sx","backend","dummy","Backend"];
sx_backend_dummy_Backend.__interfaces__ = [sx_backend_interfaces_IBackend];
sx_backend_dummy_Backend.prototype = {
	__node: null
	,addWidget: function(child) {
		this.__node.addChild(child.backend.__node);
	}
	,addWidgetAt: function(child,index) {
		this.__node.addChildAt(child.backend.__node,index);
	}
	,removeWidget: function(child) {
		this.__node.removeChild(child.backend.__node);
	}
	,removeWidgetAt: function(index) {
		var removed = this.__node.removeChildAt(index);
		if(removed == null) return null; else return removed.widget;
	}
	,getWidgetIndex: function(child) {
		return this.__node.getChildIndex(child.backend.__node);
	}
	,setWidgetIndex: function(child,index) {
		return this.__node.setChildIndex(child.backend.__node,index);
	}
	,getWidgetAt: function(index) {
		var childNode = this.__node.getChildAt(index);
		if(childNode == null) return null; else return childNode.widget;
	}
	,swapWidgets: function(child1,child2) {
		this.__node.swapChildren(child1.backend.__node,child2.backend.__node);
	}
	,swapWidgetsAt: function(index1,index2) {
		this.__node.swapChildrenAt(index1,index2);
	}
	,widgetGlobalToLocal: function(point) {
		return new sx_backend_dummy_Point();
	}
	,widgetLocalToGlobal: function(point) {
		return new sx_backend_dummy_Point();
	}
	,widgetOriginChanged: function() {
	}
	,widgetOffsetChanged: function() {
	}
	,widgetResized: function() {
	}
	,widgetMoved: function() {
	}
	,widgetRotated: function() {
	}
	,widgetScaledX: function() {
	}
	,widgetScaledY: function() {
	}
	,widgetAlphaChanged: function() {
	}
	,widgetVisibilityChanged: function() {
	}
	,widgetOverflowChanged: function() {
	}
	,widgetSkinChanged: function() {
	}
	,widgetDisposed: function() {
		this.__node = null;
	}
	,__class__: sx_backend_dummy_Backend
};
var sx_backend_interfaces_IBackendManager = function() { };
sx_backend_interfaces_IBackendManager.__name__ = ["sx","backend","interfaces","IBackendManager"];
sx_backend_interfaces_IBackendManager.prototype = {
	setupPointerDevices: null
	,setupFrames: null
	,getRoot: null
	,getPointerPosition: null
	,widgetBackend: null
	,textRenderer: null
	,textInputRenderer: null
	,bitmapRenderer: null
	,__class__: sx_backend_interfaces_IBackendManager
};
var sx_backend_dummy_BackendManager = function() {
};
sx_backend_dummy_BackendManager.__name__ = ["sx","backend","dummy","BackendManager"];
sx_backend_dummy_BackendManager.__interfaces__ = [sx_backend_interfaces_IBackendManager];
sx_backend_dummy_BackendManager.prototype = {
	__root: null
	,setupPointerDevices: function() {
	}
	,setupFrames: function() {
	}
	,getPointerPosition: function(touchId) {
		if(touchId == null) touchId = 0;
		return new sx_backend_dummy_Point();
	}
	,getRoot: function() {
		if(this.__root == null) this.__root = new sx_widgets_Widget();
		return this.__root;
	}
	,widgetBackend: function(widget) {
		return new sx_backend_dummy_Backend(widget);
	}
	,textRenderer: function(textField) {
		return new sx_backend_dummy_TextRenderer(textField);
	}
	,textInputRenderer: function(textInput) {
		return new sx_backend_dummy_TextInputRenderer(textInput);
	}
	,bitmapRenderer: function(bmp) {
		return new sx_backend_dummy_BitmapRenderer(bmp);
	}
	,__class__: sx_backend_dummy_BackendManager
};
var sx_backend_interfaces_IRenderer = function() { };
sx_backend_interfaces_IRenderer.__name__ = ["sx","backend","interfaces","IRenderer"];
sx_backend_interfaces_IRenderer.prototype = {
	getWidth: null
	,getHeight: null
	,onResize: null
	,setAvailableAreaWidth: null
	,setAvailableAreaHeight: null
	,dispose: null
	,__class__: sx_backend_interfaces_IRenderer
};
var sx_backend_interfaces_IBitmapRenderer = function() { };
sx_backend_interfaces_IBitmapRenderer.__name__ = ["sx","backend","interfaces","IBitmapRenderer"];
sx_backend_interfaces_IBitmapRenderer.__interfaces__ = [sx_backend_interfaces_IRenderer];
sx_backend_interfaces_IBitmapRenderer.prototype = {
	setBitmapData: null
	,getBitmapDataWidth: null
	,getBitmapDataHeight: null
	,setBitmapScale: null
	,setBitmapSmoothing: null
	,__class__: sx_backend_interfaces_IBitmapRenderer
};
var sx_backend_dummy_BitmapRenderer = function(bmp) {
	this.__bmp = bmp;
};
sx_backend_dummy_BitmapRenderer.__name__ = ["sx","backend","dummy","BitmapRenderer"];
sx_backend_dummy_BitmapRenderer.__interfaces__ = [sx_backend_interfaces_IBitmapRenderer];
sx_backend_dummy_BitmapRenderer.prototype = {
	__bmp: null
	,__bitmapData: null
	,__onResize: null
	,setBitmapData: function(bitmapData) {
		this.__bitmapData = bitmapData;
	}
	,getBitmapDataWidth: function() {
		if(this.__bitmapData == null || this.__bitmapData.width == null) return 0; else return this.__bitmapData.width;
	}
	,getBitmapDataHeight: function() {
		if(this.__bitmapData == null || this.__bitmapData.height == null) return 0; else return this.__bitmapData.height;
	}
	,setBitmapScale: function(scaleX,scaleY) {
	}
	,setBitmapSmoothing: function(smooth) {
	}
	,getWidth: function() {
		return this.__bitmapData == null || this.__bitmapData.width == null?0:this.__bitmapData.width;
	}
	,getHeight: function() {
		return this.__bitmapData == null || this.__bitmapData.height == null?0:this.__bitmapData.height;
	}
	,onResize: function(callback) {
		this.__onResize = callback;
	}
	,setAvailableAreaWidth: function(width) {
		if(this.__bitmapData != null) this.__bitmapData.width = width;
	}
	,setAvailableAreaHeight: function(height) {
		if(this.__bitmapData != null) this.__bitmapData.height = height;
	}
	,dispose: function() {
		this.__bmp = null;
		this.__onResize = null;
		this.__bitmapData = null;
	}
	,__class__: sx_backend_dummy_BitmapRenderer
};
var sx_backend_dummy_Point = function(x,y) {
	if(y == null) y = 0;
	if(x == null) x = 0;
	this.x = x;
	this.y = y;
};
sx_backend_dummy_Point.__name__ = ["sx","backend","dummy","Point"];
sx_backend_dummy_Point.prototype = {
	x: null
	,y: null
	,__class__: sx_backend_dummy_Point
};
var sx_backend_interfaces_ITextInputRenderer = function() { };
sx_backend_interfaces_ITextInputRenderer.__name__ = ["sx","backend","interfaces","ITextInputRenderer"];
sx_backend_interfaces_ITextInputRenderer.__interfaces__ = [sx_backend_interfaces_IRenderer];
sx_backend_interfaces_ITextInputRenderer.prototype = {
	onTextChange: null
	,onReceiveCursor: null
	,onLoseCursor: null
	,getText: null
	,setText: null
	,getFormat: null
	,setFormat: null
	,__class__: sx_backend_interfaces_ITextInputRenderer
};
var sx_backend_dummy_TextInputRenderer = function(textInput) {
	this.__height = 0;
	this.__width = 0;
	this.__text = "";
	this.__textInput = textInput;
};
sx_backend_dummy_TextInputRenderer.__name__ = ["sx","backend","dummy","TextInputRenderer"];
sx_backend_dummy_TextInputRenderer.__interfaces__ = [sx_backend_interfaces_ITextInputRenderer];
sx_backend_dummy_TextInputRenderer.prototype = {
	__textInput: null
	,__text: null
	,__onTextChange: null
	,__format: null
	,__width: null
	,__height: null
	,onTextChange: function(onTextChange) {
		this.__onTextChange = onTextChange;
	}
	,onReceiveCursor: function(callback) {
	}
	,onLoseCursor: function(callback) {
	}
	,getText: function() {
		return this.__text;
	}
	,setText: function(text) {
		this.__text = text;
	}
	,getFormat: function() {
		return this.__format;
	}
	,setFormat: function(format) {
		this.__format = format;
	}
	,onResize: function(callback) {
	}
	,getWidth: function() {
		return this.__width;
	}
	,getHeight: function() {
		return this.__height;
	}
	,setAvailableAreaWidth: function(width) {
		this.__width = width;
	}
	,setAvailableAreaHeight: function(height) {
		this.__height = height;
	}
	,dispose: function() {
		this.__textInput = null;
	}
	,set_text: function(value) {
		this.__text = value;
		if(this.__onTextChange != null) this.__onTextChange(value);
		return value;
	}
	,get_text: function() {
		return this.__text;
	}
	,__class__: sx_backend_dummy_TextInputRenderer
	,__properties__: {set_text:"set_text",get_text:"get_text"}
};
var sx_backend_interfaces_ITextRenderer = function() { };
sx_backend_interfaces_ITextRenderer.__name__ = ["sx","backend","interfaces","ITextRenderer"];
sx_backend_interfaces_ITextRenderer.__interfaces__ = [sx_backend_interfaces_IRenderer];
sx_backend_interfaces_ITextRenderer.prototype = {
	setText: null
	,getFormat: null
	,setFormat: null
	,__class__: sx_backend_interfaces_ITextRenderer
};
var sx_backend_dummy_TextRenderer = function(textField) {
	this.__text = "";
	this.__textField = textField;
};
sx_backend_dummy_TextRenderer.__name__ = ["sx","backend","dummy","TextRenderer"];
sx_backend_dummy_TextRenderer.__interfaces__ = [sx_backend_interfaces_ITextRenderer];
sx_backend_dummy_TextRenderer.prototype = {
	__textField: null
	,__text: null
	,__onResize: null
	,__format: null
	,setText: function(text) {
		this.__text = text;
		if(this.__onResize != null) this.__onResize(this.getWidth(),this.getHeight());
	}
	,getFormat: function() {
		return this.__format;
	}
	,setFormat: function(format) {
		this.__format = format;
	}
	,onResize: function(callback) {
		this.__onResize = callback;
	}
	,getWidth: function() {
		var max = 0;
		var nlPos = 0;
		var prevPos = 0;
		do {
			nlPos = this.__text.indexOf("\n",prevPos);
			if(nlPos > 0 && nlPos - prevPos > max) max = nlPos - prevPos;
			prevPos = nlPos + 1;
		} while(nlPos >= 0);
		return max;
	}
	,getHeight: function() {
		var linesCount = 0;
		var pos = this.__text.indexOf("\n");
		while(pos >= 0) pos = this.__text.indexOf("\n",pos + 1);
		return linesCount;
	}
	,setAvailableAreaWidth: function(width) {
	}
	,setAvailableAreaHeight: function(height) {
	}
	,dispose: function() {
		this.__textField = null;
	}
	,__class__: sx_backend_dummy_TextRenderer
};
var sx_ds_ObjectPool = function() {
	this.length = 0;
	this.__pool = [];
};
sx_ds_ObjectPool.__name__ = ["sx","ds","ObjectPool"];
sx_ds_ObjectPool.prototype = {
	length: null
	,__pool: null
	,push: function(obj) {
		this.__pool[this.length] = obj;
		this.length++;
	}
	,pop: function() {
		if(this.length > 0) {
			this.length--;
			return this.__pool[this.length];
		} else return null;
	}
	,clear: function() {
		var _g1 = 0;
		var _g = this.length;
		while(_g1 < _g) {
			var i = _g1++;
			this.__pool[i] = null;
		}
		this.length = 0;
	}
	,__class__: sx_ds_ObjectPool
};
var sx_exceptions_SxException = function(msg,pos) {
	if(msg == null) msg = "";
	Exception.call(this,msg,pos);
	this.truncateStack({ fileName : "SxException.hx", lineNumber : 20, className : "sx.exceptions.SxException", methodName : "new"},1);
};
sx_exceptions_SxException.__name__ = ["sx","exceptions","SxException"];
sx_exceptions_SxException.__super__ = Exception;
sx_exceptions_SxException.prototype = $extend(Exception.prototype,{
	__class__: sx_exceptions_SxException
});
var sx_exceptions_InvalidBackendException = function(msg,pos) {
	sx_exceptions_SxException.call(this,msg,pos);
};
sx_exceptions_InvalidBackendException.__name__ = ["sx","exceptions","InvalidBackendException"];
sx_exceptions_InvalidBackendException.__super__ = sx_exceptions_SxException;
sx_exceptions_InvalidBackendException.prototype = $extend(sx_exceptions_SxException.prototype,{
	__class__: sx_exceptions_InvalidBackendException
});
var sx_exceptions_LockedPropertyException = function(msg,pos) {
	if(msg == null) msg = "Property cannot be changed.";
	Exception.call(this,msg,pos);
};
sx_exceptions_LockedPropertyException.__name__ = ["sx","exceptions","LockedPropertyException"];
sx_exceptions_LockedPropertyException.__super__ = Exception;
sx_exceptions_LockedPropertyException.prototype = $extend(Exception.prototype,{
	__class__: sx_exceptions_LockedPropertyException
});
var sx_exceptions_LoopedResizeException = function(msg,pos) {
	if(msg == null) msg = "Possible endless resizing loop detected.";
	sx_exceptions_SxException.call(this,msg,pos);
};
sx_exceptions_LoopedResizeException.__name__ = ["sx","exceptions","LoopedResizeException"];
sx_exceptions_LoopedResizeException.__super__ = sx_exceptions_SxException;
sx_exceptions_LoopedResizeException.prototype = $extend(sx_exceptions_SxException.prototype,{
	__class__: sx_exceptions_LoopedResizeException
});
var sx_exceptions_NoReadException = function(msg,pos) {
	if(msg == null) msg = "Accessing this property for reading is not allowed.";
	sx_exceptions_SxException.call(this,msg,pos);
};
sx_exceptions_NoReadException.__name__ = ["sx","exceptions","NoReadException"];
sx_exceptions_NoReadException.__super__ = sx_exceptions_SxException;
sx_exceptions_NoReadException.prototype = $extend(sx_exceptions_SxException.prototype,{
	__class__: sx_exceptions_NoReadException
});
var sx_exceptions_NotChildException = function(msg,pos) {
	if(msg == null) msg = "Provided widget is not a child of this one.";
	sx_exceptions_SxException.call(this,msg,pos);
};
sx_exceptions_NotChildException.__name__ = ["sx","exceptions","NotChildException"];
sx_exceptions_NotChildException.__super__ = sx_exceptions_SxException;
sx_exceptions_NotChildException.prototype = $extend(sx_exceptions_SxException.prototype,{
	__class__: sx_exceptions_NotChildException
});
var sx_exceptions_OutOfBoundsException = function(msg,pos) {
	if(msg == null) msg = "Provided argument does not fit required bounds.";
	sx_exceptions_SxException.call(this,msg,pos);
};
sx_exceptions_OutOfBoundsException.__name__ = ["sx","exceptions","OutOfBoundsException"];
sx_exceptions_OutOfBoundsException.__super__ = sx_exceptions_SxException;
sx_exceptions_OutOfBoundsException.prototype = $extend(sx_exceptions_SxException.prototype,{
	__class__: sx_exceptions_OutOfBoundsException
});
var sx_layout_Layout = function() {
	this.autoArrange = true;
};
sx_layout_Layout.__name__ = ["sx","layout","Layout"];
sx_layout_Layout.prototype = {
	autoArrange: null
	,__widget: null
	,arrangeChildren: function() {
	}
	,usedBy: function(widget) {
		if(this.__widget != null) this.__widget.set_layout(null);
		this.__widget = widget;
		this.__widget.get_onResize().add($bind(this,this.__widgetResized));
		this.__widget.get_onChildAdded().add($bind(this,this.__childAdded));
		this.__widget.get_onChildRemoved().add($bind(this,this.__childRemoved));
		if(widget.initialized) this.arrangeChildren(); else widget.get_onInitialize().add($bind(this,this.__widgetInitialized));
	}
	,removed: function() {
		if(this.__widget != null) {
			this.__releaseWidget(this.__widget);
			this.__widget = null;
		}
	}
	,__isChildArrangeable: function(child) {
		return child.arrangeable && child.visible;
	}
	,__hookWidget: function(widget) {
		this.__widget.get_onResize().add($bind(this,this.__widgetResized));
		this.__widget.get_onChildAdded().add($bind(this,this.__childAdded));
		this.__widget.get_onChildRemoved().add($bind(this,this.__childRemoved));
	}
	,__releaseWidget: function(widget) {
		if(!widget.initialized) widget.get_onInitialize().remove($bind(this,this.__widgetInitialized));
		widget.get_onResize().remove($bind(this,this.__widgetResized));
		widget.get_onChildAdded().remove($bind(this,this.__childAdded));
		widget.get_onChildRemoved().remove($bind(this,this.__childRemoved));
	}
	,__widgetInitialized: function(widget) {
		widget.get_onInitialize().remove($bind(this,this.__widgetInitialized));
		if(this.autoArrange && this.__widget == widget) this.arrangeChildren();
	}
	,__childAdded: function(parent,child) {
		if(this.autoArrange && this.__widget.initialized && this.__isChildArrangeable(child)) this.arrangeChildren();
	}
	,__childRemoved: function(parent,child) {
		if(this.autoArrange && this.__widget.initialized && this.__isChildArrangeable(child)) this.arrangeChildren();
	}
	,__widgetResized: function(widget,changed,previousUnits,previousValue) {
		if(this.autoArrange && this.__widget.initialized) this.arrangeChildren();
	}
	,__class__: sx_layout_Layout
};
var sx_properties__$Align_HorizontalAlign_$Impl_$ = {};
sx_properties__$Align_HorizontalAlign_$Impl_$.__name__ = ["sx","properties","_Align","HorizontalAlign_Impl_"];
sx_properties__$Align_HorizontalAlign_$Impl_$.andVertical = function(this1,b) {
	var weakAlign = sx_properties_abstracts__$AAlign_AAlign_$Impl_$.fromVertical(b);
	weakAlign.set_horizontal(this1);
	return weakAlign;
};
var sx_properties__$Align_VerticalAlign_$Impl_$ = {};
sx_properties__$Align_VerticalAlign_$Impl_$.__name__ = ["sx","properties","_Align","VerticalAlign_Impl_"];
sx_properties__$Align_VerticalAlign_$Impl_$.andHorizontal = function(this1,b) {
	var weakAlign = sx_properties_abstracts__$AAlign_AAlign_$Impl_$.fromHorizontal(b);
	weakAlign.set_vertical(this1);
	return weakAlign;
};
var sx_properties__$Align_NoneAlign_$Impl_$ = {};
sx_properties__$Align_NoneAlign_$Impl_$.__name__ = ["sx","properties","_Align","NoneAlign_Impl_"];
sx_properties__$Align_NoneAlign_$Impl_$.toHorizontal = function(this1) {
	return "none";
};
sx_properties__$Align_NoneAlign_$Impl_$.toVertical = function(this1) {
	return "none";
};
var sx_properties_Align = function(horizontal,vertical) {
	if(vertical == null) vertical = "none";
	if(horizontal == null) horizontal = "none";
	this.weak = false;
	this.__vertical = "none";
	this.__horizontal = "none";
	this.__horizontal = horizontal;
	this.__vertical = vertical;
	this.onChange = new sx_signals_Signal();
};
sx_properties_Align.__name__ = ["sx","properties","Align"];
sx_properties_Align.prototype = {
	__horizontal: null
	,__vertical: null
	,onChange: null
	,weak: null
	,set: function(horizontal,vertical) {
		var horizontalChanged = this.__horizontal != horizontal;
		var verticalChanged = this.__vertical != vertical;
		this.__horizontal = horizontal;
		this.__vertical = vertical;
		if(horizontalChanged || verticalChanged) this.__invokeOnChange(horizontalChanged,verticalChanged);
	}
	,copyValueFrom: function(align) {
		this.set(align.get_horizontal(),align.get_vertical());
		if(align.weak) align.dispose();
		return this;
	}
	,dispose: function() {
	}
	,__invokeOnChange: function(horizontalChanged,verticalChanged) {
		if(this.onChange != null && this.onChange.__listeners.length > 0) {
			if(this.onChange.__listenersInUse) {
				var _g = 0;
				var _g1 = this.onChange.__listeners;
				while(_g < _g1.length) {
					var listener = _g1[_g];
					++_g;
					listener(horizontalChanged,verticalChanged);
				}
				false;
			} else {
				this.onChange.__listenersInUse = true;
				var _g2 = 0;
				var _g11 = this.onChange.__listeners;
				while(_g2 < _g11.length) {
					var listener1 = _g11[_g2];
					++_g2;
					listener1(horizontalChanged,verticalChanged);
				}
				this.onChange.__listenersInUse = false;
			}
		}
	}
	,set_vertical: function(value) {
		this.__vertical = value;
		this.__invokeOnChange(false,true);
		return value;
	}
	,set_horizontal: function(value) {
		this.__horizontal = value;
		this.__invokeOnChange(true,false);
		return value;
	}
	,get_vertical: function() {
		return this.__vertical;
	}
	,get_horizontal: function() {
		return this.__horizontal;
	}
	,__class__: sx_properties_Align
	,__properties__: {set_vertical:"set_vertical",get_vertical:"get_vertical",set_horizontal:"set_horizontal",get_horizontal:"get_horizontal"}
};
var sx_properties_AutoSize = function(byDefault) {
	if(byDefault == null) byDefault = false;
	this.weak = false;
	this.__height = false;
	this.__width = false;
	this.__width = byDefault;
	this.__height = byDefault;
	this.onChange = new sx_signals_Signal();
};
sx_properties_AutoSize.__name__ = ["sx","properties","AutoSize"];
sx_properties_AutoSize.prototype = {
	__width: null
	,__height: null
	,onChange: null
	,weak: null
	,either: function() {
		return this.get_width() || this.get_height();
	}
	,neither: function() {
		return !this.get_width() && !this.get_height();
	}
	,both: function() {
		return this.get_width() && this.get_height();
	}
	,set: function(width,height) {
		var widthChanged = this.__width != width;
		var heightChanged = this.__height != height;
		this.__width = width;
		this.__height = height;
		if(widthChanged || heightChanged) this.__invokeOnChange(widthChanged,heightChanged);
	}
	,copyValueFrom: function(autoSize) {
		this.set(autoSize.get_width(),autoSize.get_height());
		if(autoSize.weak) autoSize.dispose();
		return this;
	}
	,dispose: function() {
	}
	,__invokeOnChange: function(horizontalChanged,verticalChanged) {
		if(this.onChange != null && this.onChange.__listeners.length > 0) {
			if(this.onChange.__listenersInUse) {
				var _g = 0;
				var _g1 = this.onChange.__listeners;
				while(_g < _g1.length) {
					var listener = _g1[_g];
					++_g;
					listener(horizontalChanged,verticalChanged);
				}
				false;
			} else {
				this.onChange.__listenersInUse = true;
				var _g2 = 0;
				var _g11 = this.onChange.__listeners;
				while(_g2 < _g11.length) {
					var listener1 = _g11[_g2];
					++_g2;
					listener1(horizontalChanged,verticalChanged);
				}
				this.onChange.__listenersInUse = false;
			}
		}
	}
	,set_width: function(value) {
		if(this.__width != value) {
			this.__width = value;
			this.__invokeOnChange(true,false);
		} else this.__width = value;
		return value;
	}
	,set_height: function(value) {
		if(this.__height != value) {
			this.__height = value;
			this.__invokeOnChange(false,true);
		} else this.__height = value;
		return value;
	}
	,get_width: function() {
		return this.__width;
	}
	,get_height: function() {
		return this.__height;
	}
	,__class__: sx_properties_AutoSize
	,__properties__: {set_height:"set_height",get_height:"get_height",set_width:"set_width",get_width:"get_width"}
};
var sx_properties_abstracts__$AAlign_AAlign_$Impl_$ = {};
sx_properties_abstracts__$AAlign_AAlign_$Impl_$.__name__ = ["sx","properties","abstracts","_AAlign","AAlign_Impl_"];
sx_properties_abstracts__$AAlign_AAlign_$Impl_$.fromHorizontal = function(v) {
	var weakAlign = sx_properties_abstracts__$AAlign_AAlign_$Impl_$.__pool.pop();
	if(weakAlign == null) weakAlign = new sx_properties_abstracts__$AAlign_WeakAlign();
	weakAlign.weak = true;
	weakAlign.set(v,"none");
	return weakAlign;
};
sx_properties_abstracts__$AAlign_AAlign_$Impl_$.fromVertical = function(v) {
	var weakAlign = sx_properties_abstracts__$AAlign_AAlign_$Impl_$.__pool.pop();
	if(weakAlign == null) weakAlign = new sx_properties_abstracts__$AAlign_WeakAlign();
	weakAlign.weak = true;
	weakAlign.set("none",v);
	return weakAlign;
};
sx_properties_abstracts__$AAlign_AAlign_$Impl_$.fromNone = function(v) {
	return sx_properties_abstracts__$AAlign_AAlign_$Impl_$.fromHorizontal("none");
};
var sx_properties_abstracts__$AAlign_WeakAlign = function() {
	sx_properties_Align.call(this);
	this.onChange = null;
};
sx_properties_abstracts__$AAlign_WeakAlign.__name__ = ["sx","properties","abstracts","_AAlign","WeakAlign"];
sx_properties_abstracts__$AAlign_WeakAlign.__super__ = sx_properties_Align;
sx_properties_abstracts__$AAlign_WeakAlign.prototype = $extend(sx_properties_Align.prototype,{
	dispose: function() {
		sx_properties_abstracts__$AAlign_AAlign_$Impl_$.__pool.push(this);
		this.weak = false;
	}
	,__class__: sx_properties_abstracts__$AAlign_WeakAlign
});
var sx_properties_abstracts__$AAutoSize_AAutoSize_$Impl_$ = {};
sx_properties_abstracts__$AAutoSize_AAutoSize_$Impl_$.__name__ = ["sx","properties","abstracts","_AAutoSize","AAutoSize_Impl_"];
sx_properties_abstracts__$AAutoSize_AAutoSize_$Impl_$.fromBool = function(v) {
	var weakAutoSize = sx_properties_abstracts__$AAutoSize_AAutoSize_$Impl_$.__pool.pop();
	if(weakAutoSize == null) weakAutoSize = new sx_properties_abstracts__$AAutoSize_WeakAutoSize();
	weakAutoSize.weak = true;
	weakAutoSize.set_width(v);
	weakAutoSize.set_height(v);
	return weakAutoSize;
};
var sx_properties_abstracts__$AAutoSize_WeakAutoSize = function() {
	sx_properties_AutoSize.call(this);
	this.onChange = null;
};
sx_properties_abstracts__$AAutoSize_WeakAutoSize.__name__ = ["sx","properties","abstracts","_AAutoSize","WeakAutoSize"];
sx_properties_abstracts__$AAutoSize_WeakAutoSize.__super__ = sx_properties_AutoSize;
sx_properties_abstracts__$AAutoSize_WeakAutoSize.prototype = $extend(sx_properties_AutoSize.prototype,{
	dispose: function() {
		sx_properties_abstracts__$AAutoSize_AAutoSize_$Impl_$.__pool.push(this);
		this.weak = false;
	}
	,__class__: sx_properties_abstracts__$AAutoSize_WeakAutoSize
});
var sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$ = {};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.__name__ = ["sx","properties","abstracts","_ACoordinate","ACoordinate_Impl_"];
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.fromFloat = function(v) {
	var weakCoordinate = sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.__pool.pop();
	if(weakCoordinate == null) weakCoordinate = new sx_properties_abstracts__$ACoordinate_WeakCoordinate();
	weakCoordinate.weak = true;
	weakCoordinate.set_dip(v);
	return weakCoordinate;
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.fromSize = function(size) {
	return sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.fromFloat(size.get_dip());
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.toFloat = function(this1) {
	return this1.get_dip();
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$._new = function(coordinate) {
	return coordinate;
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AincB = function(a,b) {
	var _g = a;
	return _g.set_dip(_g.get_dip() + b.get_dip());
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AdecB = function(a,b) {
	var _g = a;
	return _g.set_dip(_g.get_dip() - b.get_dip());
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AmulIncB = function(a,b) {
	var _g = a;
	return _g.set_dip(_g.get_dip() * b.get_dip());
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AdevDecB = function(a,b) {
	var _g = a;
	return _g.set_dip(_g.get_dip() / b.get_dip());
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AplusB = function(a,b) {
	return a.get_dip() + b.get_dip();
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AminusB = function(a,b) {
	return a.get_dip() - b.get_dip();
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AmulB = function(a,b) {
	return a.get_dip() * b.get_dip();
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AdivB = function(a,b) {
	return a.get_dip() / b.get_dip();
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AltB = function(a,b) {
	return a.get_dip() < b.get_dip();
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AlteB = function(a,b) {
	return a.get_dip() <= b.get_dip();
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AneB = function(a,b) {
	return a.get_dip() != b.get_dip();
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AgteB = function(a,b) {
	return a.get_dip() >= b.get_dip();
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AgtB = function(a,b) {
	return a.get_dip() > b.get_dip();
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AeqB = function(a,b) {
	return a.get_dip() == b.get_dip();
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.minusA = function(a) {
	return -a.get_dip();
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.Ainc = function(a) {
	var _g = a;
	var _g1 = _g.get_dip();
	_g.set_dip(_g1 + 1);
	return _g1;
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.Bdec = function(a) {
	var _g = a;
	var _g1 = _g.get_dip();
	_g.set_dip(_g1 - 1);
	return _g1;
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AincBf = function(a,b) {
	var _g = a;
	return _g.set_dip(_g.get_dip() + b);
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AdecBf = function(a,b) {
	var _g = a;
	return _g.set_dip(_g.get_dip() - b);
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AmulIncBf = function(a,b) {
	var _g = a;
	return _g.set_dip(_g.get_dip() * b);
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AdevDecBf = function(a,b) {
	var _g = a;
	return _g.set_dip(_g.get_dip() / b);
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AplusBf = function(a,b) {
	return a.get_dip() + b;
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AminusBf = function(a,b) {
	return a.get_dip() - b;
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AmulBf = function(a,b) {
	return a.get_dip() * b;
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AdivBf = function(a,b) {
	return a.get_dip() / b;
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AltBf = function(a,b) {
	return a.get_dip() < b;
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AlteBf = function(a,b) {
	return a.get_dip() <= b;
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AneBf = function(a,b) {
	return a.get_dip() != b;
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AgteBf = function(a,b) {
	return a.get_dip() >= b;
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AgtBf = function(a,b) {
	return a.get_dip() > b;
};
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.AeqBf = function(a,b) {
	return a.get_dip() == b;
};
var sx_properties_metric_Size = function(orientation) {
	if(orientation == null) orientation = "horizontal";
	this.__value = 0;
	this.weak = false;
	this.units = "dip";
	this.orientation = orientation;
	this.onChange = new sx_signals_Signal();
};
sx_properties_metric_Size.__name__ = ["sx","properties","metric","Size"];
sx_properties_metric_Size.__properties__ = {get_zeroProperty:"get_zeroProperty"}
sx_properties_metric_Size.get_zeroProperty = function() {
	return sx_properties_metric__$Size_Size_$Internal_$ZeroSize.instance;
};
sx_properties_metric_Size.prototype = {
	__min: null
	,__max: null
	,units: null
	,orientation: null
	,pctSource: null
	,onChange: null
	,weak: null
	,__value: null
	,isVertical: function() {
		return this.orientation == "vertical";
	}
	,isHorizontal: function() {
		return this.orientation == "horizontal";
	}
	,toString: function() {
		var value;
		var _g = this.units;
		switch(_g) {
		case "dip":
			value = this.get_dip();
			break;
		case "px":
			value = this.get_px();
			break;
		case "pct":
			value = this.get_pct();
			break;
		}
		return "" + value + this.units;
	}
	,copyValueFrom: function(size) {
		var previousUnits = this.units;
		var previousValue = this.__value;
		this.units = size.units;
		this.__value = size.__value;
		if(size.weak) size.dispose();
		this.__invokeOnChange(previousUnits,previousValue);
		return this;
	}
	,hasMin: function() {
		return this.__min != null;
	}
	,dispose: function() {
	}
	,__pctSource: function() {
		if(this.pctSource == null) return sx_properties_metric__$Size_Size_$Internal_$ZeroSize.instance; else return this.pctSource();
	}
	,__invokeOnChange: function(previousUnits,previousValue) {
		if(this.onChange != null && this.onChange.__listeners.length > 0) {
			if(this.onChange.__listenersInUse) {
				var _g = 0;
				var _g1 = this.onChange.__listeners;
				while(_g < _g1.length) {
					var listener = _g1[_g];
					++_g;
					listener(this,previousUnits,previousValue);
				}
				false;
			} else {
				this.onChange.__listenersInUse = true;
				var _g2 = 0;
				var _g11 = this.onChange.__listeners;
				while(_g2 < _g11.length) {
					var listener1 = _g11[_g2];
					++_g2;
					listener1(this,previousUnits,previousValue);
				}
				this.onChange.__listenersInUse = false;
			}
		}
	}
	,__constraintChanged: function(constraint,previousUnits,previousValue) {
		if(constraint == this.__min) {
			var minValue = sx_tools_SizeTools.get(this.__min,this.units);
			if(this.__value < minValue) {
				var previous = this.__value;
				this.__value = minValue;
				this.__invokeOnChange(this.units,previous);
			}
			return;
		}
		if(constraint == this.__max) {
			var maxValue = sx_tools_SizeTools.get(this.__max,this.units);
			if(this.__value > maxValue) {
				var previous1 = this.__value;
				this.__value = maxValue;
				this.__invokeOnChange(this.units,previous1);
			}
			return;
		}
	}
	,get_dip: function() {
		var _g = this.units;
		switch(_g) {
		case "dip":
			return this.__value;
		case "px":
			return this.__value / sx_Sx.dipFactor;
		case "pct":
			return this.__pctSource().get_dip() * this.__value * 0.01;
		}
	}
	,get_px: function() {
		var _g = this.units;
		switch(_g) {
		case "dip":
			return this.__value * sx_Sx.dipFactor;
		case "px":
			return this.__value;
		case "pct":
			return this.__pctSource().get_px() * this.__value * 0.01;
		}
	}
	,get_pct: function() {
		var _g = this.units;
		switch(_g) {
		case "dip":
			var dip = this.__pctSource().get_dip();
			if(dip == 0) return 100; else return this.__value / dip * 100;
			break;
		case "px":
			var px = this.__pctSource().get_px();
			if(px == 0) return 100; else return this.__value / px * 100;
			break;
		case "pct":
			return this.__value;
		}
	}
	,set_dip: function(value) {
		var previousUnits = this.units;
		var previousValue = this.__value;
		this.units = "dip";
		if(this.__min != null && this.__min.get_dip() > value) this.__value = this.__min.get_dip(); else if(this.__max != null && this.__max.get_dip() < value) this.__value = this.__max.get_dip(); else this.__value = value;
		this.__invokeOnChange(previousUnits,previousValue);
		return value;
	}
	,set_px: function(value) {
		var previousUnits = this.units;
		var previousValue = this.__value;
		this.units = "px";
		if(this.__min != null && this.__min.get_px() > value) this.__value = this.__min.get_px(); else if(this.__max != null && this.__max.get_px() < value) this.__value = this.__max.get_px(); else this.__value = value;
		this.__invokeOnChange(previousUnits,previousValue);
		return value;
	}
	,set_pct: function(value) {
		var previousUnits = this.units;
		var previousValue = this.__value;
		this.units = "pct";
		if(this.__min != null && this.__min.get_pct() > value) this.__value = this.__min.get_pct(); else if(this.__max != null && this.__max.get_pct() < value) this.__value = this.__max.get_pct(); else this.__value = value;
		this.__invokeOnChange(previousUnits,previousValue);
		return value;
	}
	,get_min: function() {
		if(this.__min == null) {
			this.__min = new sx_properties_metric_Size(this.orientation);
			this.__min.pctSource = $bind(this,this.__pctSource);
			this.__min.__value = -Infinity;
			this.__min.onChange.add($bind(this,this.__constraintChanged));
		}
		return this.__min;
	}
	,set_min: function(value) {
		if(value == null) {
			if(this.__min != null) {
				var _g = this.__min.units;
				switch(_g) {
				case "dip":
					this.__min.set_dip(-Infinity);
					break;
				case "px":
					this.__min.set_px(-Infinity);
					break;
				case "pct":
					this.__min.set_pct(-Infinity);
					break;
				}
			}
		} else this.get_min().copyValueFrom(value);
		return value;
	}
	,get_max: function() {
		if(this.__max == null) {
			this.__max = new sx_properties_metric_Size(this.orientation);
			this.__max.pctSource = $bind(this,this.__pctSource);
			this.__max.__value = Infinity;
			this.__max.onChange.add($bind(this,this.__constraintChanged));
		}
		return this.__max;
	}
	,set_max: function(value) {
		if(value == null) {
			if(this.__max != null) {
				var _g = this.__max.units;
				switch(_g) {
				case "dip":
					this.__max.set_dip(-Infinity);
					break;
				case "px":
					this.__max.set_px(-Infinity);
					break;
				case "pct":
					this.__max.set_pct(-Infinity);
					break;
				}
			}
		} else this.get_max().copyValueFrom(value);
		return value;
	}
	,__class__: sx_properties_metric_Size
	,__properties__: {set_max:"set_max",get_max:"get_max",set_min:"set_min",get_min:"get_min",set_pct:"set_pct",get_pct:"get_pct",set_px:"set_px",get_px:"get_px",set_dip:"set_dip",get_dip:"get_dip"}
};
var sx_properties_metric_Coordinate = function(orientation) {
	this.selected = false;
	sx_properties_metric_Size.call(this,orientation);
};
sx_properties_metric_Coordinate.__name__ = ["sx","properties","metric","Coordinate"];
sx_properties_metric_Coordinate.__super__ = sx_properties_metric_Size;
sx_properties_metric_Coordinate.prototype = $extend(sx_properties_metric_Size.prototype,{
	ownerSize: null
	,pair: null
	,selected: null
	,select: function() {
		if(!this.selected) {
			this.selected = true;
			this.pair().selected = false;
		}
	}
	,__ownerSize: function() {
		if(this.ownerSize == null) return sx_properties_metric__$Size_Size_$Internal_$ZeroSize.instance; else return this.ownerSize();
	}
	,get_px: function() {
		if(this.selected) return sx_properties_metric_Size.prototype.get_px.call(this);
		return this.__pctSource().get_px() - this.pair().get_px() - this.__ownerSize().get_px();
	}
	,get_pct: function() {
		if(this.selected) return sx_properties_metric_Size.prototype.get_pct.call(this);
		return this.__pctSource().get_pct() - this.pair().get_pct() - this.__ownerSize().get_pct();
	}
	,get_dip: function() {
		if(this.selected) return sx_properties_metric_Size.prototype.get_dip.call(this);
		return this.__pctSource().get_dip() - this.pair().get_dip() - this.__ownerSize().get_dip();
	}
	,__invokeOnChange: function(previousUnits,previousValue) {
		if(!this.selected) {
			this.selected = true;
			this.pair().selected = false;
		}
		sx_properties_metric_Size.prototype.__invokeOnChange.call(this,previousUnits,previousValue);
	}
	,__class__: sx_properties_metric_Coordinate
});
var sx_properties_abstracts__$ACoordinate_WeakCoordinate = function() {
	sx_properties_metric_Coordinate.call(this);
	this.selected = true;
	this.onChange = null;
};
sx_properties_abstracts__$ACoordinate_WeakCoordinate.__name__ = ["sx","properties","abstracts","_ACoordinate","WeakCoordinate"];
sx_properties_abstracts__$ACoordinate_WeakCoordinate.__super__ = sx_properties_metric_Coordinate;
sx_properties_abstracts__$ACoordinate_WeakCoordinate.prototype = $extend(sx_properties_metric_Coordinate.prototype,{
	dispose: function() {
		sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.__pool.push(this);
		this.weak = false;
	}
	,__invokeOnChange: function(previousUnits,previousValue) {
	}
	,__class__: sx_properties_abstracts__$ACoordinate_WeakCoordinate
});
var sx_properties_abstracts__$APadding_APadding_$Impl_$ = {};
sx_properties_abstracts__$APadding_APadding_$Impl_$.__name__ = ["sx","properties","abstracts","_APadding","APadding_Impl_"];
sx_properties_abstracts__$APadding_APadding_$Impl_$.__properties__ = {get_onChange:"get_onChange",set_pct:"set_pct",set_px:"set_px",set_dip:"set_dip"}
sx_properties_abstracts__$APadding_APadding_$Impl_$.fromFloat = function(v) {
	var weakPadding = sx_properties_abstracts__$APadding_APadding_$Impl_$.__pool.pop();
	if(weakPadding == null) weakPadding = new sx_properties_abstracts__$APadding_WeakPadding();
	weakPadding.weak = true;
	weakPadding.set_dip(v);
	return weakPadding;
};
sx_properties_abstracts__$APadding_APadding_$Impl_$.get_onChange = function(this1) {
	return this1.onComponentsChange;
};
sx_properties_abstracts__$APadding_APadding_$Impl_$.set_dip = function(this1,v) {
	return this1.set_dip(v);
};
sx_properties_abstracts__$APadding_APadding_$Impl_$.set_px = function(this1,v) {
	return this1.set_px(v);
};
sx_properties_abstracts__$APadding_APadding_$Impl_$.set_pct = function(this1,v) {
	return this1.set_pct(v);
};
var sx_properties_metric_SizeSetterProxy = function(orientation) {
	sx_properties_metric_Size.call(this,orientation);
};
sx_properties_metric_SizeSetterProxy.__name__ = ["sx","properties","metric","SizeSetterProxy"];
sx_properties_metric_SizeSetterProxy.__super__ = sx_properties_metric_Size;
sx_properties_metric_SizeSetterProxy.prototype = $extend(sx_properties_metric_Size.prototype,{
	__invokeOnChange: function(previousUnits,previousValue) {
		if(this.onChange != null && this.onChange.__listeners.length > 0) {
			if(this.onChange.__listenersInUse) {
				var _g = 0;
				var _g1 = this.onChange.__listeners;
				while(_g < _g1.length) {
					var listener = _g1[_g];
					++_g;
					listener(this,this.units,this.__value);
				}
				false;
			} else {
				this.onChange.__listenersInUse = true;
				var _g2 = 0;
				var _g11 = this.onChange.__listeners;
				while(_g2 < _g11.length) {
					var listener1 = _g11[_g2];
					++_g2;
					listener1(this,this.units,this.__value);
				}
				this.onChange.__listenersInUse = false;
			}
		}
	}
	,get_dip: function() {
		throw new js__$Boot_HaxeError(new sx_exceptions_NoReadException(null,{ fileName : "SizeSetterProxy.hx", lineNumber : 30, className : "sx.properties.metric.SizeSetterProxy", methodName : "get_dip"}));
	}
	,get_px: function() {
		throw new js__$Boot_HaxeError(new sx_exceptions_NoReadException(null,{ fileName : "SizeSetterProxy.hx", lineNumber : 31, className : "sx.properties.metric.SizeSetterProxy", methodName : "get_px"}));
	}
	,get_pct: function() {
		throw new js__$Boot_HaxeError(new sx_exceptions_NoReadException(null,{ fileName : "SizeSetterProxy.hx", lineNumber : 32, className : "sx.properties.metric.SizeSetterProxy", methodName : "get_pct"}));
	}
	,__class__: sx_properties_metric_SizeSetterProxy
});
var sx_properties_metric_Padding = function() {
	this.__batchChanges = false;
	sx_properties_metric_SizeSetterProxy.call(this);
	this.onChange.add($bind(this,this.__setAll));
	this.__left = new sx_properties_metric_Size("horizontal");
	this.__right = new sx_properties_metric_Size("horizontal");
	this.__top = new sx_properties_metric_Size("vertical");
	this.__bottom = new sx_properties_metric_Size("vertical");
	this.__left.onChange.add($bind(this,this.__sideChanged));
	this.__right.onChange.add($bind(this,this.__sideChanged));
	this.__top.onChange.add($bind(this,this.__sideChanged));
	this.__bottom.onChange.add($bind(this,this.__sideChanged));
	this.__left.pctSource = $bind(this,this.__ownerWidthProvider);
	this.__right.pctSource = $bind(this,this.__ownerWidthProvider);
	this.__top.pctSource = $bind(this,this.__ownerHeightProvider);
	this.__bottom.pctSource = $bind(this,this.__ownerHeightProvider);
	this.onComponentsChange = new sx_signals_Signal();
};
sx_properties_metric_Padding.__name__ = ["sx","properties","metric","Padding"];
sx_properties_metric_Padding.__super__ = sx_properties_metric_SizeSetterProxy;
sx_properties_metric_Padding.prototype = $extend(sx_properties_metric_SizeSetterProxy.prototype,{
	__left: null
	,__right: null
	,__top: null
	,__bottom: null
	,__horizontal: null
	,__vertical: null
	,ownerWidth: null
	,ownerHeight: null
	,onComponentsChange: null
	,__batchChanges: null
	,__sideChanged: function(changed,previousUnits,previousValue) {
		if(this.__batchChanges) return;
		this.__invokeOnComponentsChange(changed.orientation == "horizontal",changed.orientation == "vertical");
	}
	,__dimensionChanged: function(changed,units,value) {
		this.__batchChanges = true;
		if(changed.orientation == "horizontal") this.__setDimension(this.get_left(),this.get_right(),units,value); else this.__setDimension(this.get_top(),this.get_bottom(),units,value);
		this.__batchChanges = false;
		this.__invokeOnComponentsChange(changed.orientation == "horizontal",changed.orientation == "vertical");
	}
	,__setDimension: function(first,second,units,value) {
		switch(units) {
		case "dip":
			first.set_dip(value);
			second.set_dip(value);
			break;
		case "px":
			first.set_px(value);
			second.set_px(value);
			break;
		case "pct":
			first.set_pct(value);
			second.set_pct(value);
			break;
		}
	}
	,__setAll: function(changed,units,value) {
		this.__batchChanges = true;
		switch(units) {
		case "dip":
			this.get_left().set_dip(value);
			this.get_right().set_dip(value);
			this.get_top().set_dip(value);
			this.get_bottom().set_dip(value);
			break;
		case "px":
			this.get_left().set_px(value);
			this.get_right().set_px(value);
			this.get_top().set_px(value);
			this.get_bottom().set_px(value);
			break;
		case "pct":
			this.get_left().set_pct(value);
			this.get_right().set_pct(value);
			this.get_top().set_pct(value);
			this.get_bottom().set_pct(value);
			break;
		}
		this.__batchChanges = false;
		this.__invokeOnComponentsChange(true,true);
	}
	,__invokeOnComponentsChange: function(horizontal,vertical) {
		if(this.onComponentsChange != null && this.onComponentsChange.__listeners.length > 0) {
			if(this.onComponentsChange.__listenersInUse) {
				var _g = 0;
				var _g1 = this.onComponentsChange.__listeners;
				while(_g < _g1.length) {
					var listener = _g1[_g];
					++_g;
					listener(horizontal,vertical);
				}
				false;
			} else {
				this.onComponentsChange.__listenersInUse = true;
				var _g2 = 0;
				var _g11 = this.onComponentsChange.__listeners;
				while(_g2 < _g11.length) {
					var listener1 = _g11[_g2];
					++_g2;
					listener1(horizontal,vertical);
				}
				this.onComponentsChange.__listenersInUse = false;
			}
		}
	}
	,__ownerWidthProvider: function() {
		if(this.ownerWidth == null) return sx_properties_metric__$Size_Size_$Internal_$ZeroSize.instance; else return this.ownerWidth();
	}
	,__ownerHeightProvider: function() {
		if(this.ownerHeight == null) return sx_properties_metric__$Size_Size_$Internal_$ZeroSize.instance; else return this.ownerHeight();
	}
	,__constraintChanged: function(constraint,previousUnits,previousValue) {
		sx_properties_metric_SizeSetterProxy.prototype.__constraintChanged.call(this,constraint,previousUnits,previousValue);
		if(constraint == this.__min) {
			if(this.__horizontal != null) this.__horizontal.set_min(constraint); else {
				this.get_left().set_min(constraint);
				this.get_right().set_min(constraint);
			}
			if(this.__vertical != null) this.__vertical.set_min(constraint); else {
				this.get_top().set_min(constraint);
				this.get_bottom().set_min(constraint);
			}
		} else if(constraint == this.__max) {
			if(this.__horizontal != null) this.__horizontal.set_max(constraint); else {
				this.get_left().set_max(constraint);
				this.get_right().set_max(constraint);
			}
			if(this.__vertical != null) this.__vertical.set_max(constraint); else {
				this.get_top().set_max(constraint);
				this.get_bottom().set_max(constraint);
			}
		}
	}
	,__verticalConstraintChanged: function(constraint,previousUnits,previousValue) {
		if((function($this) {
			var $r;
			var b = $this.__vertical.get_max();
			$r = constraint.get_dip() == b.get_dip();
			return $r;
		}(this))) {
			this.get_top().set_max(constraint);
			this.get_bottom().set_max(constraint);
		} else if((function($this) {
			var $r;
			var b1 = $this.__vertical.get_min();
			$r = constraint.get_dip() == b1.get_dip();
			return $r;
		}(this))) {
			this.get_top().set_min(constraint);
			this.get_bottom().set_min(constraint);
		}
	}
	,__horizontalConstraintChanged: function(constraint,previousUnits,previousValue) {
		if((function($this) {
			var $r;
			var b = $this.__horizontal.get_max();
			$r = constraint.get_dip() == b.get_dip();
			return $r;
		}(this))) {
			this.get_left().set_max(constraint);
			this.get_right().set_max(constraint);
		} else if((function($this) {
			var $r;
			var b1 = $this.__horizontal.get_min();
			$r = constraint.get_dip() == b1.get_dip();
			return $r;
		}(this))) {
			this.get_left().set_min(constraint);
			this.get_right().set_min(constraint);
		}
	}
	,get_horizontal: function() {
		if(this.__horizontal == null) {
			this.__horizontal = new sx_properties_metric_SizeSetterProxy("horizontal");
			this.__horizontal.onChange.add($bind(this,this.__dimensionChanged));
			this.__horizontal.get_min().onChange.add($bind(this,this.__horizontalConstraintChanged));
			this.__horizontal.get_max().onChange.add($bind(this,this.__horizontalConstraintChanged));
		}
		return this.__horizontal;
	}
	,get_vertical: function() {
		if(this.__vertical == null) {
			this.__vertical = new sx_properties_metric_SizeSetterProxy("vertical");
			this.__vertical.onChange.add($bind(this,this.__dimensionChanged));
			this.__vertical.get_min().onChange.add($bind(this,this.__verticalConstraintChanged));
			this.__vertical.get_max().onChange.add($bind(this,this.__verticalConstraintChanged));
		}
		return this.__vertical;
	}
	,set_horizontal: function(value) {
		var proxy = this.get_horizontal();
		proxy.copyValueFrom(value);
		return proxy;
	}
	,set_vertical: function(value) {
		var proxy = this.get_vertical();
		proxy.copyValueFrom(value);
		return proxy;
	}
	,toString: function() {
		return "{ left : " + Std.string(this.get_left()) + ", top : " + Std.string(this.get_top()) + ", right : " + Std.string(this.get_right()) + ", bottom : " + Std.string(this.get_bottom()) + " }";
	}
	,get_left: function() {
		return this.__left;
	}
	,get_right: function() {
		return this.__right;
	}
	,get_top: function() {
		return this.__top;
	}
	,get_bottom: function() {
		return this.__bottom;
	}
	,set_left: function(v) {
		return this.__left.copyValueFrom(v);
	}
	,set_right: function(v) {
		return this.__right.copyValueFrom(v);
	}
	,set_top: function(v) {
		return this.__top.copyValueFrom(v);
	}
	,set_bottom: function(v) {
		return this.__bottom.copyValueFrom(v);
	}
	,__class__: sx_properties_metric_Padding
	,__properties__: $extend(sx_properties_metric_SizeSetterProxy.prototype.__properties__,{set_vertical:"set_vertical",get_vertical:"get_vertical",set_horizontal:"set_horizontal",get_horizontal:"get_horizontal",set_bottom:"set_bottom",get_bottom:"get_bottom",set_top:"set_top",get_top:"get_top",set_right:"set_right",get_right:"get_right",set_left:"set_left",get_left:"get_left"})
});
var sx_properties_abstracts__$APadding_WeakPadding = function() {
	sx_properties_metric_Padding.call(this);
	this.onChange = null;
};
sx_properties_abstracts__$APadding_WeakPadding.__name__ = ["sx","properties","abstracts","_APadding","WeakPadding"];
sx_properties_abstracts__$APadding_WeakPadding.__super__ = sx_properties_metric_Padding;
sx_properties_abstracts__$APadding_WeakPadding.prototype = $extend(sx_properties_metric_Padding.prototype,{
	dispose: function() {
		sx_properties_abstracts__$APadding_APadding_$Impl_$.__pool.push(this);
		this.weak = false;
	}
	,__invokeOnChange: function(units,value) {
	}
	,__class__: sx_properties_abstracts__$APadding_WeakPadding
});
var sx_properties_abstracts__$ASize_ASize_$Impl_$ = {};
sx_properties_abstracts__$ASize_ASize_$Impl_$.__name__ = ["sx","properties","abstracts","_ASize","ASize_Impl_"];
sx_properties_abstracts__$ASize_ASize_$Impl_$.fromFloat = function(v) {
	var weakSize = sx_properties_abstracts__$ASize_ASize_$Impl_$.__pool.pop();
	if(weakSize == null) weakSize = new sx_properties_abstracts__$ASize_WeakSize();
	weakSize.weak = true;
	weakSize.set_dip(v);
	return weakSize;
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.fromSize = function(coordinate) {
	return sx_properties_abstracts__$ASize_ASize_$Impl_$.fromFloat(coordinate.get_dip());
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.toFloat = function(this1) {
	return this1.get_dip();
};
sx_properties_abstracts__$ASize_ASize_$Impl_$._new = function(size) {
	return size;
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AincB = function(a,b) {
	var _g = a;
	return _g.set_dip(_g.get_dip() + b.get_dip());
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AdecB = function(a,b) {
	var _g = a;
	return _g.set_dip(_g.get_dip() - b.get_dip());
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AmulIncB = function(a,b) {
	var _g = a;
	return _g.set_dip(_g.get_dip() * b.get_dip());
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AdevDecB = function(a,b) {
	var _g = a;
	return _g.set_dip(_g.get_dip() / b.get_dip());
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AplusB = function(a,b) {
	return a.get_dip() + b.get_dip();
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AminusB = function(a,b) {
	return a.get_dip() - b.get_dip();
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AmulB = function(a,b) {
	return a.get_dip() * b.get_dip();
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AdivB = function(a,b) {
	return a.get_dip() / b.get_dip();
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AltB = function(a,b) {
	return a.get_dip() < b.get_dip();
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AlteB = function(a,b) {
	return a.get_dip() <= b.get_dip();
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AneB = function(a,b) {
	return a.get_dip() != b.get_dip();
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AgteB = function(a,b) {
	return a.get_dip() >= b.get_dip();
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AgtB = function(a,b) {
	return a.get_dip() > b.get_dip();
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AeqB = function(a,b) {
	return a.get_dip() == b.get_dip();
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.minusA = function(a) {
	return -a.get_dip();
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.Ainc = function(a) {
	var _g = a;
	var _g1 = _g.get_dip();
	_g.set_dip(_g1 + 1);
	return _g1;
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.Bdec = function(a) {
	var _g = a;
	var _g1 = _g.get_dip();
	_g.set_dip(_g1 - 1);
	return _g1;
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AincBf = function(a,b) {
	var _g = a;
	return _g.set_dip(_g.get_dip() + b);
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AdecBf = function(a,b) {
	var _g = a;
	return _g.set_dip(_g.get_dip() - b);
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AmulIncBf = function(a,b) {
	var _g = a;
	return _g.set_dip(_g.get_dip() * b);
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AdevDecBf = function(a,b) {
	var _g = a;
	return _g.set_dip(_g.get_dip() / b);
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AplusBf = function(a,b) {
	return a.get_dip() + b;
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AminusBf = function(a,b) {
	return a.get_dip() - b;
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AmulBf = function(a,b) {
	return a.get_dip() * b;
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AdivBf = function(a,b) {
	return a.get_dip() / b;
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AltBf = function(a,b) {
	return a.get_dip() < b;
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AlteBf = function(a,b) {
	return a.get_dip() <= b;
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AneBf = function(a,b) {
	return a.get_dip() != b;
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AgteBf = function(a,b) {
	return a.get_dip() >= b;
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AgtBf = function(a,b) {
	return a.get_dip() > b;
};
sx_properties_abstracts__$ASize_ASize_$Impl_$.AeqBf = function(a,b) {
	return a.get_dip() == b;
};
var sx_properties_abstracts__$ASize_WeakSize = function() {
	sx_properties_metric_Size.call(this);
	this.onChange = null;
};
sx_properties_abstracts__$ASize_WeakSize.__name__ = ["sx","properties","abstracts","_ASize","WeakSize"];
sx_properties_abstracts__$ASize_WeakSize.__super__ = sx_properties_metric_Size;
sx_properties_abstracts__$ASize_WeakSize.prototype = $extend(sx_properties_metric_Size.prototype,{
	dispose: function() {
		sx_properties_abstracts__$ASize_ASize_$Impl_$.__pool.push(this);
		this.weak = false;
	}
	,__invokeOnChange: function(previousUnits,previousValue) {
	}
	,__class__: sx_properties_abstracts__$ASize_WeakSize
});
var sx_properties_abstracts__$ASizeGetterProxy_ASizeGetterProxy_$Impl_$ = {};
sx_properties_abstracts__$ASizeGetterProxy_ASizeGetterProxy_$Impl_$.__name__ = ["sx","properties","abstracts","_ASizeGetterProxy","ASizeGetterProxy_Impl_"];
sx_properties_abstracts__$ASizeGetterProxy_ASizeGetterProxy_$Impl_$.__properties__ = {get_pct:"get_pct",get_px:"get_px",get_dip:"get_dip"}
sx_properties_abstracts__$ASizeGetterProxy_ASizeGetterProxy_$Impl_$.get_dip = function(this1) {
	return this1.get_dip();
};
sx_properties_abstracts__$ASizeGetterProxy_ASizeGetterProxy_$Impl_$.get_px = function(this1) {
	return this1.get_px();
};
sx_properties_abstracts__$ASizeGetterProxy_ASizeGetterProxy_$Impl_$.get_pct = function(this1) {
	return this1.get_pct();
};
sx_properties_abstracts__$ASizeGetterProxy_ASizeGetterProxy_$Impl_$.AplusBf = function(a,b) {
	return a.get_dip() + b;
};
sx_properties_abstracts__$ASizeGetterProxy_ASizeGetterProxy_$Impl_$.AminusBf = function(a,b) {
	return a.get_dip() - b;
};
sx_properties_abstracts__$ASizeGetterProxy_ASizeGetterProxy_$Impl_$.AmulBf = function(a,b) {
	return a.get_dip() * b;
};
sx_properties_abstracts__$ASizeGetterProxy_ASizeGetterProxy_$Impl_$.AdivBf = function(a,b) {
	return a.get_dip() / b;
};
sx_properties_abstracts__$ASizeGetterProxy_ASizeGetterProxy_$Impl_$.AltBf = function(a,b) {
	return a.get_dip() < b;
};
sx_properties_abstracts__$ASizeGetterProxy_ASizeGetterProxy_$Impl_$.AlteBf = function(a,b) {
	return a.get_dip() <= b;
};
sx_properties_abstracts__$ASizeGetterProxy_ASizeGetterProxy_$Impl_$.AneBf = function(a,b) {
	return a.get_dip() != b;
};
sx_properties_abstracts__$ASizeGetterProxy_ASizeGetterProxy_$Impl_$.AgteBf = function(a,b) {
	return a.get_dip() >= b;
};
sx_properties_abstracts__$ASizeGetterProxy_ASizeGetterProxy_$Impl_$.AgtBf = function(a,b) {
	return a.get_dip() > b;
};
sx_properties_abstracts__$ASizeGetterProxy_ASizeGetterProxy_$Impl_$.AeqBf = function(a,b) {
	return a.get_dip() == b;
};
var sx_properties_abstracts__$ASizeSetterProxy_ASizeSetterProxy_$Impl_$ = {};
sx_properties_abstracts__$ASizeSetterProxy_ASizeSetterProxy_$Impl_$.__name__ = ["sx","properties","abstracts","_ASizeSetterProxy","ASizeSetterProxy_Impl_"];
sx_properties_abstracts__$ASizeSetterProxy_ASizeSetterProxy_$Impl_$.__properties__ = {set_pct:"set_pct",set_px:"set_px",set_dip:"set_dip"}
sx_properties_abstracts__$ASizeSetterProxy_ASizeSetterProxy_$Impl_$.fromFloat = function(v) {
	var weakSizeSetterProxy = sx_properties_abstracts__$ASizeSetterProxy_ASizeSetterProxy_$Impl_$.__pool.pop();
	if(weakSizeSetterProxy == null) weakSizeSetterProxy = new sx_properties_abstracts__$ASizeSetterProxy_WeakSizeSetterProxy();
	weakSizeSetterProxy.weak = true;
	weakSizeSetterProxy.set_dip(v);
	return weakSizeSetterProxy;
};
sx_properties_abstracts__$ASizeSetterProxy_ASizeSetterProxy_$Impl_$.set_dip = function(this1,v) {
	return this1.set_dip(v);
};
sx_properties_abstracts__$ASizeSetterProxy_ASizeSetterProxy_$Impl_$.set_px = function(this1,v) {
	return this1.set_px(v);
};
sx_properties_abstracts__$ASizeSetterProxy_ASizeSetterProxy_$Impl_$.set_pct = function(this1,v) {
	return this1.set_pct(v);
};
var sx_properties_abstracts__$ASizeSetterProxy_WeakSizeSetterProxy = function() {
	sx_properties_metric_SizeSetterProxy.call(this);
	this.onChange = null;
};
sx_properties_abstracts__$ASizeSetterProxy_WeakSizeSetterProxy.__name__ = ["sx","properties","abstracts","_ASizeSetterProxy","WeakSizeSetterProxy"];
sx_properties_abstracts__$ASizeSetterProxy_WeakSizeSetterProxy.__super__ = sx_properties_metric_SizeSetterProxy;
sx_properties_abstracts__$ASizeSetterProxy_WeakSizeSetterProxy.prototype = $extend(sx_properties_metric_SizeSetterProxy.prototype,{
	dispose: function() {
		sx_properties_abstracts__$ASizeSetterProxy_ASizeSetterProxy_$Impl_$.__pool.push(this);
		this.weak = false;
	}
	,__invokeOnChange: function(units,value) {
	}
	,__class__: sx_properties_abstracts__$ASizeSetterProxy_WeakSizeSetterProxy
});
var sx_properties_displaylist_ArrayDisplayList = function(widget) {
	this.widget = widget;
	this.children = [];
};
sx_properties_displaylist_ArrayDisplayList.__name__ = ["sx","properties","displaylist","ArrayDisplayList"];
sx_properties_displaylist_ArrayDisplayList.prototype = {
	widget: null
	,parent: null
	,children: null
	,addChild: function(child) {
		if(child.parent != null) child.parent.removeChild(child);
		this.children.push(child);
		child.parent = this;
		return child;
	}
	,addChildAt: function(child,index) {
		if(child.parent != null) child.parent.removeChild(child);
		this.children.splice(index,0,child);
		child.parent = this;
		return child;
	}
	,removeChild: function(child) {
		if(child.parent == this) {
			HxOverrides.remove(this.children,child);
			child.parent = null;
			return child;
		} else return null;
	}
	,removeChildAt: function(index) {
		if(index < 0) index = this.children.length + index;
		if(index < 0 || index >= this.children.length) return null; else {
			var removed = this.children.splice(index,1)[0];
			removed.parent = null;
			return removed;
		}
	}
	,removeChildren: function(beginIndex,endIndex) {
		if(endIndex == null) endIndex = -1;
		if(beginIndex == null) beginIndex = 0;
		if(beginIndex < 0) beginIndex = this.children.length + beginIndex;
		if(beginIndex < 0) beginIndex = 0;
		if(endIndex < 0) endIndex = this.children.length + endIndex;
		if(beginIndex >= this.children.length || endIndex < beginIndex) return 0;
		var removed = this.children.splice(beginIndex,endIndex - beginIndex + 1);
		var _g = 0;
		while(_g < removed.length) {
			var node = removed[_g];
			++_g;
			node.parent = null;
		}
		return removed.length;
	}
	,contains: function(child) {
		var found = false;
		while(child != null) {
			if(child == this) {
				found = true;
				break;
			}
			child = child.parent;
		}
		return found;
	}
	,getChildIndex: function(child) {
		var index = HxOverrides.indexOf(this.children,child,0);
		if(index < 0) throw new js__$Boot_HaxeError(new sx_exceptions_NotChildException(null,{ fileName : "ArrayDisplayList.hx", lineNumber : 166, className : "sx.properties.displaylist.ArrayDisplayList", methodName : "getChildIndex"}));
		return index;
	}
	,setChildIndex: function(child,index) {
		var currentIndex = HxOverrides.indexOf(this.children,child,0);
		if(currentIndex < 0) throw new js__$Boot_HaxeError(new sx_exceptions_NotChildException(null,{ fileName : "ArrayDisplayList.hx", lineNumber : 186, className : "sx.properties.displaylist.ArrayDisplayList", methodName : "setChildIndex"}));
		if(index < 0) index = this.children.length + index;
		if(index < 0) index = 0; else if(index >= this.children.length) index = this.children.length - 1;
		if(index != currentIndex) {
			HxOverrides.remove(this.children,child);
			this.children.splice(index,0,child);
			return index;
		} else return currentIndex;
	}
	,getChildAt: function(index) {
		if(index < 0) index = this.children.length + index;
		if(index < 0 || index >= this.children.length) return null; else return this.children[index];
	}
	,swapChildren: function(child1,child2) {
		var index1 = HxOverrides.indexOf(this.children,child1,0);
		var index2 = HxOverrides.indexOf(this.children,child2,0);
		if(index1 < 0 || index2 < 0) throw new js__$Boot_HaxeError(new sx_exceptions_NotChildException(null,{ fileName : "ArrayDisplayList.hx", lineNumber : 235, className : "sx.properties.displaylist.ArrayDisplayList", methodName : "swapChildren"}));
		this.children[index1] = child2;
		this.children[index2] = child1;
	}
	,swapChildrenAt: function(index1,index2) {
		if(index1 < 0) index1 = this.children.length + index1;
		if(index2 < 0) index2 = this.children.length + index2;
		if(index1 < 0 || index1 >= this.children.length || index2 < 0 || index2 > this.children.length) throw new js__$Boot_HaxeError(new sx_exceptions_OutOfBoundsException("Provided index does not exist in display list of this widget.",{ fileName : "ArrayDisplayList.hx", lineNumber : 255, className : "sx.properties.displaylist.ArrayDisplayList", methodName : "swapChildrenAt"}));
		var child = this.children[index1];
		this.children[index1] = this.children[index2];
		this.children[index2] = child;
	}
	,get_numChildren: function() {
		return this.children.length;
	}
	,__class__: sx_properties_displaylist_ArrayDisplayList
	,__properties__: {get_numChildren:"get_numChildren"}
};
var sx_properties_metric_Offset = function(widthProvider,heightProvider) {
	this.__silentChanges = false;
	this.__left = new sx_properties_metric_Coordinate("horizontal");
	this.__left.pctSource = widthProvider;
	this.__left.ownerSize = widthProvider;
	this.__left.onChange.add($bind(this,this.__changed));
	this.__right = new sx_properties_metric_Coordinate("horizontal");
	this.__right.pctSource = widthProvider;
	this.__right.ownerSize = widthProvider;
	this.__right.onChange.add($bind(this,this.__changed));
	this.__top = new sx_properties_metric_Coordinate("vertical");
	this.__top.pctSource = heightProvider;
	this.__top.ownerSize = heightProvider;
	this.__top.onChange.add($bind(this,this.__changed));
	this.__bottom = new sx_properties_metric_Coordinate("vertical");
	this.__bottom.pctSource = heightProvider;
	this.__bottom.ownerSize = heightProvider;
	this.__bottom.onChange.add($bind(this,this.__changed));
	this.__left.pair = $bind(this,this.get_right);
	this.__right.pair = $bind(this,this.get_left);
	this.__top.pair = $bind(this,this.get_bottom);
	this.__bottom.pair = $bind(this,this.get_top);
	this.__left.select();
	this.__top.select();
	this.onChange = new sx_signals_Signal();
};
sx_properties_metric_Offset.__name__ = ["sx","properties","metric","Offset"];
sx_properties_metric_Offset.prototype = {
	__left: null
	,__right: null
	,__top: null
	,__bottom: null
	,onChange: null
	,__silentChanges: null
	,set: function(x,y) {
		this.__silentChanges = true;
		if(-1 <= x && x <= 1) this.get_left().set_pct(x * 100); else this.get_left().set_dip(x);
		if(-1 <= y && y <= 1) this.get_top().set_pct(y * 100); else this.get_top().set_dip(y);
		this.__silentChanges = false;
		if(this.onChange != null && this.onChange.__listeners.length > 0) {
			if(this.onChange.__listenersInUse) {
				var _g = 0;
				var _g1 = this.onChange.__listeners;
				while(_g < _g1.length) {
					var listener = _g1[_g];
					++_g;
					listener();
				}
				false;
			} else {
				this.onChange.__listenersInUse = true;
				var _g2 = 0;
				var _g11 = this.onChange.__listeners;
				while(_g2 < _g11.length) {
					var listener1 = _g11[_g2];
					++_g2;
					listener1();
				}
				this.onChange.__listenersInUse = false;
			}
		}
	}
	,__changed: function(property,previousUnits,previousValue) {
		if(!this.__silentChanges) {
			if(this.onChange != null && this.onChange.__listeners.length > 0) {
				if(this.onChange.__listenersInUse) {
					var _g = 0;
					var _g1 = this.onChange.__listeners;
					while(_g < _g1.length) {
						var listener = _g1[_g];
						++_g;
						listener();
					}
					false;
				} else {
					this.onChange.__listenersInUse = true;
					var _g2 = 0;
					var _g11 = this.onChange.__listeners;
					while(_g2 < _g11.length) {
						var listener1 = _g11[_g2];
						++_g2;
						listener1();
					}
					this.onChange.__listenersInUse = false;
				}
			}
		}
	}
	,get_left: function() {
		return this.__left;
	}
	,get_right: function() {
		return this.__right;
	}
	,get_top: function() {
		return this.__top;
	}
	,get_bottom: function() {
		return this.__bottom;
	}
	,set_left: function(v) {
		this.__left.copyValueFrom(v);
		return this.__left;
	}
	,set_right: function(v) {
		this.__right.copyValueFrom(v);
		return this.__right;
	}
	,set_top: function(v) {
		this.__top.copyValueFrom(v);
		return this.__top;
	}
	,set_bottom: function(v) {
		this.__bottom.copyValueFrom(v);
		return this.__bottom;
	}
	,__class__: sx_properties_metric_Offset
	,__properties__: {set_bottom:"set_bottom",get_bottom:"get_bottom",set_top:"set_top",get_top:"get_top",set_right:"set_right",get_right:"get_right",set_left:"set_left",get_left:"get_left"}
};
var sx_signals_Signal = function() {
	this.__listenersInUse = false;
	this.__listeners = [];
};
sx_signals_Signal.__name__ = ["sx","signals","Signal"];
sx_signals_Signal.prototype = {
	__listeners: null
	,__listenersInUse: null
	,add: function(listener) {
		if(this.__listenersInUse) {
			this.__listeners = this.__listeners.slice();
			this.__listenersInUse = false;
		}
		this.__listeners.push(listener);
	}
	,unique: function(listener) {
		if(this.__indexOf(listener) >= 0) return false;
		if(this.__listenersInUse) {
			this.__listeners = this.__listeners.slice();
			this.__listenersInUse = false;
		}
		this.__listeners.push(listener);
		return true;
	}
	,remove: function(listener) {
		var index = this.__indexOf(listener);
		if(index < 0) return false;
		if(this.__listenersInUse) {
			this.__listeners = this.__listeners.slice();
			this.__listenersInUse = false;
		}
		this.__listeners.splice(index,1);
		return true;
	}
	,will: function(listener) {
		return this.__indexOf(listener) >= 0;
	}
	,__indexOf: function(listener) {
		var index = -1;
		var _g1 = 0;
		var _g = this.__listeners.length;
		while(_g1 < _g) {
			var i = _g1++;
			if(Reflect.compareMethods(this.__listeners[i],listener)) {
				index = i;
				break;
			}
		}
		return index;
	}
	,__cloneListenersInUse: function() {
		if(this.__listenersInUse) {
			this.__listeners = this.__listeners.slice();
			this.__listenersInUse = false;
		}
	}
	,get_listenersCount: function() {
		return this.__listeners.length;
	}
	,__class__: sx_signals_Signal
	,__properties__: {get_listenersCount:"get_listenersCount"}
};
var sx_properties_metric__$Size_Size_$Internal_$ZeroSize = function(orientation) {
	sx_properties_metric_Size.call(this,orientation);
};
sx_properties_metric__$Size_Size_$Internal_$ZeroSize.__name__ = ["sx","properties","metric","_Size","Size_Internal_ZeroSize"];
sx_properties_metric__$Size_Size_$Internal_$ZeroSize.__super__ = sx_properties_metric_Size;
sx_properties_metric__$Size_Size_$Internal_$ZeroSize.prototype = $extend(sx_properties_metric_Size.prototype,{
	get_px: function() {
		return 0;
	}
	,get_pct: function() {
		return 0;
	}
	,get_dip: function() {
		return 0;
	}
	,set_px: function(v) {
		return v;
	}
	,set_pct: function(v) {
		return v;
	}
	,set_dip: function(v) {
		return v;
	}
	,__class__: sx_properties_metric__$Size_Size_$Internal_$ZeroSize
});
var sx_skins__$ASkin_ASkin_$Impl_$ = {};
sx_skins__$ASkin_ASkin_$Impl_$.__name__ = ["sx","skins","_ASkin","ASkin_Impl_"];
sx_skins__$ASkin_ASkin_$Impl_$.__byName = function(name) {
	return sx_Sx.skin(name);
};
var sx_skins_base_SkinBase = function() {
};
sx_skins_base_SkinBase.__name__ = ["sx","skins","base","SkinBase"];
sx_skins_base_SkinBase.prototype = {
	__padding: null
	,__widget: null
	,refresh: function() {
	}
	,hasPadding: function() {
		return this.__padding != null;
	}
	,usedBy: function(widget) {
		if(this.__widget != null) this.__widget.set_skin(null);
		this.__widget = widget;
		this.__widget.get_onResize().add($bind(this,this.__widgetResized));
		if(this.__widget.initialized) this.refresh();
	}
	,removed: function() {
		if(this.__widget != null) {
			this.__widget.get_onResize().remove($bind(this,this.__widgetResized));
			this.__widget = null;
		}
	}
	,__widgetResized: function(widget,changed,previousUnits,previousValue) {
		if(this.__widget.initialized) this.refresh();
	}
	,__widgetWidthProvider: function() {
		if(this.__widget == null) return sx_properties_metric__$Size_Size_$Internal_$ZeroSize.instance; else return this.__widget.get_width();
	}
	,__widgetHeightProvider: function() {
		if(this.__widget == null) return sx_properties_metric__$Size_Size_$Internal_$ZeroSize.instance; else return this.__widget.get_width();
	}
	,get_padding: function() {
		if(this.__padding == null) {
			this.__padding = new sx_properties_metric_Padding();
			this.__padding.ownerWidth = $bind(this,this.__widgetWidthProvider);
			this.__padding.ownerWidth = $bind(this,this.__widgetHeightProvider);
		}
		return this.__padding;
	}
	,set_padding: function(v) {
		this.get_padding().copyValueFrom(v);
		return this.get_padding();
	}
	,__class__: sx_skins_base_SkinBase
	,__properties__: {set_padding:"set_padding",get_padding:"get_padding"}
};
var sx_themes_Theme = function() {
	this.__styles = new haxe_ds_StringMap();
	this.initialize();
};
sx_themes_Theme.__name__ = ["sx","themes","Theme"];
sx_themes_Theme.prototype = {
	__styles: null
	,initialize: function() {
	}
	,styles: function(cls) {
		var className = Type.getClassName(cls);
		var styles = this.__styles.get(className);
		if(styles == null) {
			styles = new haxe_ds_StringMap();
			this.__styles.set(className,styles);
		}
		return styles;
	}
	,apply: function(widget) {
		if(widget.style == null) return;
		var fn;
		var this1 = this.styles(widget == null?null:js_Boot.getClass(widget));
		fn = this1.get(widget.style);
		if(fn == null) return;
		fn(widget);
	}
	,__class__: sx_themes_Theme
};
var sx_tools_OrientationTools = function() { };
sx_tools_OrientationTools.__name__ = ["sx","tools","OrientationTools"];
sx_tools_OrientationTools.opposite = function(orientation) {
	switch(orientation) {
	case "vertical":
		return "horizontal";
	case "horizontal":
		return "vertical";
	}
};
var sx_tools_SizeTools = function() { };
sx_tools_SizeTools.__name__ = ["sx","tools","SizeTools"];
sx_tools_SizeTools.isZero = function(size) {
	return size.__value == 0;
};
sx_tools_SizeTools.notZero = function(size) {
	return size.__value != 0;
};
sx_tools_SizeTools.get = function(size,units) {
	switch(units) {
	case "dip":
		return size.get_dip();
	case "px":
		return size.get_px();
	case "pct":
		return size.get_pct();
	}
};
var sx_tools_PaddingTools = function() { };
sx_tools_PaddingTools.__name__ = ["sx","tools","PaddingTools"];
sx_tools_PaddingTools.sumDip = function(padding,orientation) {
	switch(orientation) {
	case "horizontal":
		return padding.get_left().get_dip() + padding.get_right().get_dip();
	case "vertical":
		return padding.get_top().get_dip() + padding.get_bottom().get_dip();
	}
};
sx_tools_PaddingTools.sumPx = function(padding,orientation) {
	switch(orientation) {
	case "horizontal":
		return padding.get_left().get_px() + padding.get_right().get_px();
	case "vertical":
		return padding.get_top().get_px() + padding.get_bottom().get_px();
	}
};
sx_tools_PaddingTools.side = function(padding,side) {
	switch(side) {
	case "left":
		return padding.get_left();
	case "right":
		return padding.get_right();
	case "top":
		return padding.get_top();
	case "bottom":
		return padding.get_bottom();
	}
};
sx_tools_PaddingTools.oppositeSide = function(padding,side) {
	switch(side) {
	case "left":
		return padding.get_right();
	case "right":
		return padding.get_left();
	case "top":
		return padding.get_bottom();
	case "bottom":
		return padding.get_top();
	}
};
sx_tools_PaddingTools.isZero = function(padding) {
	var leftZero = padding.get_left().__value == 0;
	var rightZero = padding.get_right().__value == 0;
	var topZero = padding.get_top().__value == 0;
	var bottomZero = padding.get_bottom().__value == 0;
	return leftZero && rightZero && topZero && bottomZero;
};
var sx_tools_WidgetTools = function() { };
sx_tools_WidgetTools.__name__ = ["sx","tools","WidgetTools"];
sx_tools_WidgetTools.sizeDependsOnParent = function(widget) {
	return widget.get_width().units == "pct" || widget.get_height().units == "pct";
};
sx_tools_WidgetTools.positionDependsOnParent = function(widget) {
	var left = widget.get_left();
	if(left.selected && left.units == "pct") return true;
	if(widget.get_right().selected) return true;
	var top = widget.get_top();
	if(top.selected && top.units == "pct") return true;
	if(widget.get_bottom().selected) return true;
	return false;
};
sx_tools_WidgetTools.positionDependsOnSize = function(widget) {
	return widget.get_bottom().selected || widget.get_right().selected;
};
sx_tools_WidgetTools.coordinate = function(widget,side) {
	switch(side) {
	case "left":
		return widget.get_left();
	case "right":
		return widget.get_right();
	case "top":
		return widget.get_top();
	case "bottom":
		return widget.get_bottom();
	}
};
sx_tools_WidgetTools.selectedCoordinate = function(widget,orientation) {
	switch(orientation) {
	case "horizontal":
		if(widget.get_left().selected) return widget.get_left(); else return widget.get_right();
		break;
	case "vertical":
		if(widget.get_top().selected) return widget.get_top(); else return widget.get_bottom();
		break;
	}
};
sx_tools_WidgetTools.selectedSide = function(widget,orientation) {
	switch(orientation) {
	case "horizontal":
		if(widget.get_left().selected) return "left"; else return "right";
		break;
	case "vertical":
		if(widget.get_top().selected) return "top"; else return "bottom";
		break;
	}
};
sx_tools_WidgetTools.size = function(widget,orientation) {
	switch(orientation) {
	case "horizontal":
		return widget.get_width();
	case "vertical":
		return widget.get_height();
	}
};
sx_tools_WidgetTools.findEnabled = function(widget) {
	var current = widget;
	var useNextEnabled = false;
	while(current != null) {
		if(useNextEnabled) {
			if(current.enabled) {
				widget = current;
				useNextEnabled = false;
				break;
			}
		} else if(!current.enabled) useNextEnabled = true;
		current = current.get_parent();
	}
	if(useNextEnabled) widget = null;
	return widget;
};
sx_tools_WidgetTools.hasOrigin = function(widget) {
	return widget.__origin != null;
};
sx_tools_WidgetTools.hasOffset = function(widget) {
	return widget.__offset != null;
};
sx_tools_WidgetTools.isArrangeable = function(widget) {
	return widget.arrangeable && widget.visible;
};
var sx_tween_Actuator = function(startTime,duration,setValuesFn,setEndValuesFn) {
	this.done = false;
	this.__duration = duration;
	this.startTime = startTime;
	this.__setValuesFn = setValuesFn;
	this.__setEndValuesFn = setEndValuesFn;
};
sx_tween_Actuator.__name__ = ["sx","tween","Actuator"];
sx_tween_Actuator.prototype = {
	startTime: null
	,done: null
	,__duration: null
	,__setValuesFn: null
	,__setEndValuesFn: null
	,__onUpdate: null
	,__onComplete: null
	,delay: function(offset) {
		this.startTime += offset;
		return this;
	}
	,ease: function(fn) {
		this.__ease = fn;
		return this;
	}
	,stop: function() {
		this.done = true;
	}
	,complete: function() {
		this.__setEndValuesFn();
		this.done = true;
		if(this.__onComplete != null) this.__onComplete();
	}
	,onUpdate: function(fn) {
		this.__onUpdate = fn;
		return this;
	}
	,onComplete: function(fn) {
		this.__onComplete = fn;
		return this;
	}
	,__update: function(currentTime) {
		if(this.done) return;
		var time = currentTime - this.startTime;
		if(time < 0) return;
		if(time >= this.__duration) {
			time = this.__duration;
			this.done = true;
			this.__setEndValuesFn();
		} else {
			var value = this.__ease(time / this.__duration);
			this.__setValuesFn(value);
		}
		if(this.__onUpdate != null) this.__onUpdate();
		if(this.done && this.__onComplete != null) this.__onComplete();
	}
	,__ease: function(t) {
		return t;
	}
	,__class__: sx_tween_Actuator
};
var sx_tween_Tweener = function() {
	this.active = false;
	this.__actuators = [];
};
sx_tween_Tweener.__name__ = ["sx","tween","Tweener"];
sx_tween_Tweener.__properties__ = {get_pausedAll:"get_pausedAll"}
sx_tween_Tweener.getTime = function() {
	return haxe_Timer.stamp();
};
sx_tween_Tweener.pauseAll = function() {
	if(sx_tween_Tweener.__pausedAll) return;
	sx_tween_Tweener.__pausedAll = true;
	sx_tween_Tweener.__time = sx_tween_Tweener.getTime() - sx_tween_Tweener.__totalPausedTime;
	sx_tween_Tweener.__pausedAllTime = sx_tween_Tweener.__time;
};
sx_tween_Tweener.resumeAll = function() {
	if(!sx_tween_Tweener.__pausedAll) return;
	sx_tween_Tweener.__pausedAll = false;
	sx_tween_Tweener.__time = sx_tween_Tweener.getTime() - sx_tween_Tweener.__totalPausedTime;
	sx_tween_Tweener.__totalPausedTime += sx_tween_Tweener.__time - sx_tween_Tweener.__pausedAllTime;
	sx_tween_Tweener.__time = sx_tween_Tweener.getTime() - sx_tween_Tweener.__totalPausedTime;
};
sx_tween_Tweener.stopAll = function() {
	var _g = 0;
	var _g1 = sx_tween_Tweener.__tweeners;
	while(_g < _g1.length) {
		var tweener = _g1[_g];
		++_g;
		tweener.stop();
	}
};
sx_tween_Tweener.update = function() {
	if(sx_tween_Tweener.__pausedAll) return;
	sx_tween_Tweener.__time = sx_tween_Tweener.getTime() - sx_tween_Tweener.__totalPausedTime;
	if(sx_tween_Tweener.__tweeners.length == 0) return;
	var needRemoval = false;
	var _g = 0;
	var _g1 = sx_tween_Tweener.__tweeners;
	while(_g < _g1.length) {
		var tweener = _g1[_g];
		++_g;
		tweener.__update(sx_tween_Tweener.__time);
		if(!tweener.active) needRemoval = true;
	}
	if(needRemoval) {
		var i = 0;
		while(i < sx_tween_Tweener.__tweeners.length) if(!sx_tween_Tweener.__tweeners[i].active) sx_tween_Tweener.__tweeners.splice(i,1); else i++;
	}
};
sx_tween_Tweener.initialize = function() {
	sx_tween_Tweener.__time = sx_tween_Tweener.getTime() - sx_tween_Tweener.__totalPausedTime;
};
sx_tween_Tweener.__updateTime = function() {
	sx_tween_Tweener.__time = sx_tween_Tweener.getTime() - sx_tween_Tweener.__totalPausedTime;
};
sx_tween_Tweener.get_pausedAll = function() {
	return sx_tween_Tweener.__pausedAll;
};
sx_tween_Tweener.prototype = {
	active: null
	,__actuators: null
	,stop: function() {
		this.active = false;
		var _g = 0;
		var _g1 = this.__actuators;
		while(_g < _g1.length) {
			var actuator = _g1[_g];
			++_g;
			actuator.stop();
		}
	}
	,__update: function(currentTime) {
		var needRemoval = false;
		var _g = 0;
		var _g1 = this.__actuators;
		while(_g < _g1.length) {
			var actuator = _g1[_g];
			++_g;
			if(actuator.startTime < currentTime) {
				actuator.__update(currentTime);
				if(actuator.done) needRemoval = true;
			}
		}
		if(needRemoval) {
			var i = 0;
			while(i < this.__actuators.length) if(this.__actuators[i].done) this.__actuators.splice(i,1); else i++;
			this.active = this.__actuators.length > 0;
		}
	}
	,__createActuator: function(duration,setValuesFn,setEndValuesFn) {
		var actuator = new sx_tween_Actuator(sx_tween_Tweener.__time,duration,setValuesFn,setEndValuesFn);
		this.__actuators.push(actuator);
		if(!this.active) {
			this.active = true;
			sx_tween_Tweener.__tweeners.push(this);
		}
		return actuator;
	}
	,__class__: sx_tween_Tweener
};
var sx_widgets_base_RendererHolder = function() {
	this.__adjustingSize = false;
	this.__rendererOnResizeIsSet = false;
	sx_widgets_Widget.call(this);
	this.__padding = new sx_properties_metric_Padding();
	this.__padding.ownerWidth = $bind(this,this.__widthProviderForPadding);
	this.__padding.ownerHeight = $bind(this,this.__heightProviderForPadding);
	this.__padding.onComponentsChange.add($bind(this,this.__paddingChanged));
	this.set_autoSize(new sx_properties_AutoSize(true));
	this.autoSize.onChange.add($bind(this,this.__autoSizeChanged));
	this.__createRenderer();
	this.get___renderer().onResize($bind(this,this.__rendererResized));
	this.__rendererOnResizeIsSet = true;
	var rendererWidth = this.get___renderer().getWidth();
	var rendererHeight = this.get___renderer().getHeight();
	if(rendererWidth != 0 || rendererHeight != 0 || !sx_tools_PaddingTools.isZero(this.get_padding())) {
		this.__adjustSize(this.get_width(),rendererWidth);
		this.__adjustSize(this.get_height(),rendererHeight);
	}
};
sx_widgets_base_RendererHolder.__name__ = ["sx","widgets","base","RendererHolder"];
sx_widgets_base_RendererHolder.__super__ = sx_widgets_Widget;
sx_widgets_base_RendererHolder.prototype = $extend(sx_widgets_Widget.prototype,{
	autoSize: null
	,__padding: null
	,__rendererOnResizeIsSet: null
	,__adjustingSize: null
	,__helperSize: null
	,dispose: function(disposeChildren) {
		if(disposeChildren == null) disposeChildren = true;
		sx_widgets_Widget.prototype.dispose.call(this,disposeChildren);
		this.get___renderer().onResize(null);
		this.__rendererOnResizeIsSet = false;
		this.get___renderer().dispose();
	}
	,__createRenderer: function() {
	}
	,__autoSizeChanged: function(widthChanged,heightChanged) {
		if(this.__rendererOnResizeIsSet) {
			if(this.autoSize.neither()) {
				this.get___renderer().onResize(null);
				this.__rendererOnResizeIsSet = false;
			}
		} else if(this.autoSize.either()) {
			this.get___renderer().onResize($bind(this,this.__rendererResized));
			this.__rendererOnResizeIsSet = true;
		}
		if(widthChanged) {
			if(this.autoSize.get_width()) this.__adjustSize(this.get_width(),this.get___renderer().getWidth()); else this.get___renderer().setAvailableAreaWidth(this.get_width().get_px() - sx_tools_PaddingTools.sumPx(this.get_padding(),"horizontal"));
		}
		if(heightChanged) {
			if(this.autoSize.get_height()) this.__adjustSize(this.get_height(),this.get___renderer().getHeight()); else this.get___renderer().setAvailableAreaHeight(this.get_height().get_px() - sx_tools_PaddingTools.sumPx(this.get_padding(),"vertical"));
		}
	}
	,__disableRendererResizeListener: function() {
		this.get___renderer().onResize(null);
		this.__rendererOnResizeIsSet = false;
	}
	,__enableRendererResizeListener: function() {
		this.get___renderer().onResize($bind(this,this.__rendererResized));
		this.__rendererOnResizeIsSet = true;
	}
	,__rendererResized: function(widthPx,heightPx) {
		if(this.autoSize.get_width()) this.__adjustSize(this.get_width(),widthPx);
		if(this.autoSize.get_height()) this.__adjustSize(this.get_height(),heightPx);
	}
	,__propertyResized: function(changed,previousUnits,previousValue) {
		if(!this.__adjustingSize) {
			if(changed.orientation == "horizontal") {
				if(this.autoSize.get_width()) this.autoSize.set_width(false); else this.get___renderer().setAvailableAreaWidth(changed.get_px() - sx_tools_PaddingTools.sumPx(this.get_padding(),"horizontal"));
			} else if(this.autoSize.get_height()) this.autoSize.set_height(false); else this.get___renderer().setAvailableAreaHeight(changed.get_px() - sx_tools_PaddingTools.sumPx(this.get_padding(),"vertical"));
		}
		sx_widgets_Widget.prototype.__propertyResized.call(this,changed,previousUnits,previousValue);
	}
	,__adjustSize: function(size,rendererSizePx) {
		this.__adjustingSize = true;
		size.set_px(rendererSizePx + sx_tools_PaddingTools.sumPx(this.get_padding(),size.orientation));
		this.__adjustingSize = false;
	}
	,__paddingChanged: function(horizontal,vertical) {
		if(horizontal) {
			if(this.autoSize.get_width()) this.__adjustSize(this.get_width(),this.get___renderer().getWidth()); else this.get___renderer().setAvailableAreaWidth(this.get_width().get_px() - sx_tools_PaddingTools.sumPx(this.get_padding(),"horizontal"));
		}
		if(vertical) {
			if(this.autoSize.get_height()) this.__adjustSize(this.get_height(),this.get___renderer().getHeight()); else this.get___renderer().setAvailableAreaHeight(this.get_height().get_px() - sx_tools_PaddingTools.sumPx(this.get_padding(),"vertical"));
		}
	}
	,__widthProviderForPadding: function() {
		if(this.autoSize.get_width()) {
			var helperSize = this.__getPaddedRendererSize(this.get_padding().get_left(),this.get_padding().get_right(),this.get___renderer().getWidth());
			return helperSize;
		} else return this.get_width();
	}
	,__heightProviderForPadding: function() {
		if(this.autoSize.get_width()) {
			var helperSize = this.__getPaddedRendererSize(this.get_padding().get_top(),this.get_padding().get_bottom(),this.get___renderer().getHeight());
			return helperSize;
		} else return this.get_width();
	}
	,__getPaddedRendererSize: function(paddingSide1,paddingSide2,rendererSizePx) {
		var paddingSide1Px = this.__getPaddingPixels(paddingSide1,paddingSide2);
		var paddingSide2Px = this.__getPaddingPixels(paddingSide2,paddingSide1);
		var helperSize;
		if(this.__helperSize == null) this.__helperSize = new sx_properties_metric_Size();
		helperSize = this.__helperSize;
		helperSize.set_px(rendererSizePx + paddingSide1Px + paddingSide2Px);
		return this.__helperSize;
	}
	,__getPaddingPixels: function(paddingSide,oppositeSide) {
		var _g = paddingSide.units;
		switch(_g) {
		case "pct":
			var rendererSize;
			if(paddingSide.orientation == "horizontal") rendererSize = this.get___renderer().getWidth(); else rendererSize = this.get___renderer().getHeight();
			var holderSize;
			var _g1 = oppositeSide.units;
			switch(_g1) {
			case "pct":
				holderSize = rendererSize / (0.01 * (100 - paddingSide.get_pct() - oppositeSide.get_pct()));
				break;
			default:
				holderSize = (rendererSize + oppositeSide.get_px()) / (0.01 * (100 - paddingSide.get_pct()));
			}
			return paddingSide.get_pct() * 0.01 * holderSize;
		default:
			return paddingSide.get_px();
		}
	}
	,__getHelperSize: function() {
		if(this.__helperSize == null) this.__helperSize = new sx_properties_metric_Size();
		return this.__helperSize;
	}
	,get___renderer: function() {
		return null;
	}
	,set_autoSize: function(value) {
		if(this.autoSize == null) this.autoSize = value; else this.autoSize.copyValueFrom(value);
		return this.autoSize;
	}
	,get_padding: function() {
		return this.__padding;
	}
	,set_padding: function(v) {
		this.__padding.copyValueFrom(v);
		return this.__padding;
	}
	,__class__: sx_widgets_base_RendererHolder
	,__properties__: $extend(sx_widgets_Widget.prototype.__properties__,{get___renderer:"get___renderer",set_padding:"set_padding",get_padding:"get_padding",set_autoSize:"set_autoSize"})
});
var sx_widgets_Bmp = function() {
	this.__dontUpdateBitmapScaling = false;
	this.smooth = false;
	this.keepAspect = true;
	sx_widgets_base_RendererHolder.call(this);
};
sx_widgets_Bmp.__name__ = ["sx","widgets","Bmp"];
sx_widgets_Bmp.__super__ = sx_widgets_base_RendererHolder;
sx_widgets_Bmp.prototype = $extend(sx_widgets_base_RendererHolder.prototype,{
	bitmapData: null
	,renderer: null
	,keepAspect: null
	,smooth: null
	,__dontUpdateBitmapScaling: null
	,__createRenderer: function() {
		this.renderer = sx_Sx.get_backendManager().bitmapRenderer(this);
	}
	,__propertyResized: function(changed,previousUnits,previousValue) {
		if(this.__dontUpdateBitmapScaling) sx_widgets_base_RendererHolder.prototype.__propertyResized.call(this,changed,previousUnits,previousValue); else {
			this.__dontUpdateBitmapScaling = true;
			sx_widgets_base_RendererHolder.prototype.__propertyResized.call(this,changed,previousUnits,previousValue);
			if(this.autoSize.both()) this.renderer.setBitmapScale(1,1); else if(this.autoSize.get_width()) this.__scaleBitmapHeight(); else if(this.autoSize.get_height()) this.__scaleBitmapWidth(); else this.__scaleBitmapBoth();
			this.__dontUpdateBitmapScaling = false;
		}
	}
	,__paddingChanged: function(horizontal,vertical) {
		if(this.__dontUpdateBitmapScaling) sx_widgets_base_RendererHolder.prototype.__paddingChanged.call(this,horizontal,vertical); else {
			this.__dontUpdateBitmapScaling = true;
			if(this.autoSize.both()) this.renderer.setBitmapScale(1,1); else if(this.autoSize.get_width()) this.__scaleBitmapHeight(); else if(this.autoSize.get_height()) this.__scaleBitmapWidth(); else this.__scaleBitmapBoth();
			sx_widgets_base_RendererHolder.prototype.__paddingChanged.call(this,horizontal,vertical);
			this.__dontUpdateBitmapScaling = false;
		}
	}
	,__autoSizeChanged: function(widthChanged,heightChanged) {
		if(this.__dontUpdateBitmapScaling) sx_widgets_base_RendererHolder.prototype.__paddingChanged.call(this,widthChanged,heightChanged); else {
			this.__dontUpdateBitmapScaling = true;
			if(this.autoSize.both()) this.renderer.setBitmapScale(1,1); else if(this.autoSize.get_width()) this.__scaleBitmapHeight(); else if(this.autoSize.get_height()) this.__scaleBitmapWidth(); else this.__scaleBitmapBoth();
			sx_widgets_base_RendererHolder.prototype.__paddingChanged.call(this,widthChanged,heightChanged);
			this.__dontUpdateBitmapScaling = false;
		}
	}
	,__updateBitmapScaling: function() {
		if(this.autoSize.both()) this.renderer.setBitmapScale(1,1); else if(this.autoSize.get_width()) this.__scaleBitmapHeight(); else if(this.autoSize.get_height()) this.__scaleBitmapWidth(); else this.__scaleBitmapBoth();
	}
	,__scaleBitmapHeight: function() {
		var bitmapHeight = this.renderer.getBitmapDataHeight();
		if(bitmapHeight <= 0) this.renderer.setBitmapScale(0,0); else if(this.keepAspect) this.renderer.setBitmapScale(1,1); else {
			var renderHeight = this.get_height().get_px() - sx_tools_PaddingTools.sumPx(this.get_padding(),"vertical");
			if(renderHeight <= 0) this.renderer.setBitmapScale(0,0); else {
				var scaleY = renderHeight / bitmapHeight;
				this.renderer.setBitmapScale(1,scaleY);
			}
		}
	}
	,__scaleBitmapWidth: function() {
		var bitmapWidth = this.renderer.getBitmapDataWidth();
		if(bitmapWidth <= 0) this.renderer.setBitmapScale(0,0); else if(this.keepAspect) this.renderer.setBitmapScale(1,1); else {
			var renderWidth = this.get_width().get_px() - sx_tools_PaddingTools.sumPx(this.get_padding(),"horizontal");
			if(renderWidth <= 0) this.renderer.setBitmapScale(0,0); else {
				var scaleX = renderWidth / bitmapWidth;
				this.renderer.setBitmapScale(scaleX,1);
			}
		}
	}
	,__scaleBitmapBoth: function() {
		var bitmapWidth = this.renderer.getBitmapDataWidth();
		var bitmapHeight = this.renderer.getBitmapDataHeight();
		if(bitmapWidth <= 0 || bitmapHeight <= 0) this.renderer.setBitmapScale(0,0); else {
			var renderWidth = this.get_width().get_px() - this.get_padding().get_left().get_px() - this.get_padding().get_right().get_px();
			var renderHeight = this.get_height().get_px() - this.get_padding().get_top().get_px() - this.get_padding().get_bottom().get_px();
			if(renderWidth <= 0 || renderHeight <= 0) this.renderer.setBitmapScale(0,0); else {
				var scaleX = renderWidth / bitmapWidth;
				var scaleY = renderHeight / bitmapHeight;
				if(this.keepAspect) {
					if(scaleX < scaleY) this.renderer.setBitmapScale(scaleX,scaleX); else this.renderer.setBitmapScale(scaleY,scaleY);
				} else this.renderer.setBitmapScale(scaleX,scaleY);
			}
		}
	}
	,set_bitmapData: function(value) {
		this.bitmapData = value;
		this.renderer.setBitmapData(this.bitmapData);
		return value;
	}
	,set_keepAspect: function(value) {
		if(this.keepAspect != value) {
			this.keepAspect = value;
			if(this.autoSize.both()) this.renderer.setBitmapScale(1,1); else if(this.autoSize.get_width()) this.__scaleBitmapHeight(); else if(this.autoSize.get_height()) this.__scaleBitmapWidth(); else this.__scaleBitmapBoth();
		}
		return value;
	}
	,set_smooth: function(value) {
		if(this.smooth != value) {
			this.smooth = value;
			this.renderer.setBitmapSmoothing(this.smooth);
		}
		return value;
	}
	,get___renderer: function() {
		return this.renderer;
	}
	,__class__: sx_widgets_Bmp
	,__properties__: $extend(sx_widgets_base_RendererHolder.prototype.__properties__,{set_smooth:"set_smooth",set_keepAspect:"set_keepAspect",set_bitmapData:"set_bitmapData"})
});
var sx_widgets_Text = function() {
	this.__text = "";
	sx_widgets_base_RendererHolder.call(this);
};
sx_widgets_Text.__name__ = ["sx","widgets","Text"];
sx_widgets_Text.__super__ = sx_widgets_base_RendererHolder;
sx_widgets_Text.prototype = $extend(sx_widgets_base_RendererHolder.prototype,{
	__text: null
	,renderer: null
	,getTextFormat: function() {
		return this.renderer.getFormat();
	}
	,setTextFormat: function(format) {
		this.renderer.setFormat(format);
		return;
	}
	,__createRenderer: function() {
		this.renderer = sx_Sx.get_backendManager().textRenderer(this);
	}
	,set_text: function(value) {
		this.__text = value;
		this.renderer.setText(this.__text);
		return value;
	}
	,get_text: function() {
		return this.__text;
	}
	,get___renderer: function() {
		return this.renderer;
	}
	,__class__: sx_widgets_Text
	,__properties__: $extend(sx_widgets_base_RendererHolder.prototype.__properties__,{set_text:"set_text",get_text:"get_text"})
});
var sx_widgets_TextInput = function() {
	this.__hasCursor = false;
	this.__invitation = "";
	this.__text = "";
	sx_widgets_base_RendererHolder.call(this);
	this.get_width().set_dip(100);
	this.renderer.onTextChange($bind(this,this.__rendererTextChanged));
	this.renderer.onReceiveCursor($bind(this,this.__rendererReceiveCursor));
	this.renderer.onLoseCursor($bind(this,this.__rendererLoseCursor));
};
sx_widgets_TextInput.__name__ = ["sx","widgets","TextInput"];
sx_widgets_TextInput.__super__ = sx_widgets_base_RendererHolder;
sx_widgets_TextInput.prototype = $extend(sx_widgets_base_RendererHolder.prototype,{
	__text: null
	,__invitation: null
	,renderer: null
	,__onChange: null
	,__hasCursor: null
	,getTextFormat: function() {
		return this.renderer.getFormat();
	}
	,setTextFormat: function(format) {
		this.renderer.setFormat(format);
		return;
	}
	,__createRenderer: function() {
		this.renderer = sx_Sx.get_backendManager().textInputRenderer(this);
	}
	,set_text: function(value) {
		this.__text = value;
		if(this.__hasCursor || this.get_text().length > 0) this.renderer.setText(this.get_text()); else this.renderer.setText(this.get_invitation());
		if(this.__onChange != null && this.__onChange.__listeners.length > 0) {
			if(this.__onChange.__listenersInUse) {
				var _g = 0;
				var _g1 = this.__onChange.__listeners;
				while(_g < _g1.length) {
					var listener = _g1[_g];
					++_g;
					listener(this);
				}
				false;
			} else {
				this.__onChange.__listenersInUse = true;
				var _g2 = 0;
				var _g11 = this.__onChange.__listeners;
				while(_g2 < _g11.length) {
					var listener1 = _g11[_g2];
					++_g2;
					listener1(this);
				}
				this.__onChange.__listenersInUse = false;
			}
		}
		return value;
	}
	,__rendererTextChanged: function(newText) {
		this.__text = newText;
		if(this.__onChange != null && this.__onChange.__listeners.length > 0) {
			if(this.__onChange.__listenersInUse) {
				var _g = 0;
				var _g1 = this.__onChange.__listeners;
				while(_g < _g1.length) {
					var listener = _g1[_g];
					++_g;
					listener(this);
				}
				false;
			} else {
				this.__onChange.__listenersInUse = true;
				var _g2 = 0;
				var _g11 = this.__onChange.__listeners;
				while(_g2 < _g11.length) {
					var listener1 = _g11[_g2];
					++_g2;
					listener1(this);
				}
				this.__onChange.__listenersInUse = false;
			}
		}
	}
	,__rendererReceiveCursor: function() {
		this.__hasCursor = true;
		if(this.__hasCursor || this.get_text().length > 0) this.renderer.setText(this.get_text()); else this.renderer.setText(this.get_invitation());
	}
	,__rendererLoseCursor: function() {
		this.__hasCursor = false;
		if(this.__hasCursor || this.get_text().length > 0) this.renderer.setText(this.get_text()); else this.renderer.setText(this.get_invitation());
	}
	,__updateRendererContent: function() {
		if(this.__hasCursor || this.get_text().length > 0) this.renderer.setText(this.get_text()); else this.renderer.setText(this.get_invitation());
	}
	,set_invitation: function(value) {
		this.__invitation = value;
		if(this.__hasCursor || this.get_text().length > 0) this.renderer.setText(this.get_text()); else this.renderer.setText(this.get_invitation());
		return value;
	}
	,get_invitation: function() {
		return this.__invitation;
	}
	,get_text: function() {
		return this.__text;
	}
	,get___renderer: function() {
		return this.renderer;
	}
	,get_onChange: function() {
		if(this.__onChange == null) return this.__onChange = new sx_signals_Signal(); else return this.__onChange;
	}
	,__class__: sx_widgets_TextInput
	,__properties__: $extend(sx_widgets_base_RendererHolder.prototype.__properties__,{get_onChange:"get_onChange",set_invitation:"set_invitation",get_invitation:"get_invitation",set_text:"set_text",get_text:"get_text"})
});
var $_, $fid = 0;
function $bind(o,m) { if( m == null ) return null; if( m.__id__ == null ) m.__id__ = $fid++; var f; if( o.hx__closures__ == null ) o.hx__closures__ = {}; else f = o.hx__closures__[m.__id__]; if( f == null ) { f = function(){ return f.method.apply(f.scope, arguments); }; f.scope = o; f.method = m; o.hx__closures__[m.__id__] = f; } return f; }
if(Array.prototype.indexOf) HxOverrides.indexOf = function(a,o,i) {
	return Array.prototype.indexOf.call(a,o,i);
};
String.prototype.__class__ = String;
String.__name__ = ["String"];
Array.__name__ = ["Array"];
Date.prototype.__class__ = Date;
Date.__name__ = ["Date"];
var Int = { __name__ : ["Int"]};
var Dynamic = { __name__ : ["Dynamic"]};
var Float = Number;
Float.__name__ = ["Float"];
var Bool = Boolean;
Bool.__ename__ = ["Bool"];
var Class = { __name__ : ["Class"]};
var Enum = { };
if(Array.prototype.map == null) Array.prototype.map = function(f) {
	var a = [];
	var _g1 = 0;
	var _g = this.length;
	while(_g1 < _g) {
		var i = _g1++;
		a[i] = f(this[i]);
	}
	return a;
};
if(Array.prototype.filter == null) Array.prototype.filter = function(f1) {
	var a1 = [];
	var _g11 = 0;
	var _g2 = this.length;
	while(_g11 < _g2) {
		var i1 = _g11++;
		var e = this[i1];
		if(f1(e)) a1.push(e);
	}
	return a1;
};
var __map_reserved = {}
sx_widgets_Widget.MAX_RESIZE_DEPTH = 5;
hunit_TestCase.__rtti = "<class path=\"hunit.TestCase\" params=\"\">\n\t<getMockData public=\"1\" set=\"method\" line=\"54\" static=\"1\">\n\t\t<f a=\"mock\">\n\t\t\t<c path=\"hunit.mock.IMock\"/>\n\t\t\t<c path=\"hunit.mock.MockData\"/>\n\t\t</f>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</getMockData>\n\t<match public=\"1\" set=\"accessor\"><c path=\"hunit.match.MatchFactory\"/></match>\n\t<assert public=\"1\" set=\"accessor\"><c path=\"hunit.assert.AssertFactory\"/></assert>\n\t<__hu_state public=\"1\">\n\t\t<t path=\"Null\"><c path=\"hunit.TestState\"/></t>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</__hu_state>\n\t<setupTestCase public=\"1\" set=\"method\" line=\"75\"><f a=\"\"><x path=\"Void\"/></f></setupTestCase>\n\t<setup public=\"1\" set=\"method\" line=\"84\"><f a=\"\"><x path=\"Void\"/></f></setup>\n\t<tearDown public=\"1\" set=\"method\" line=\"94\"><f a=\"\"><x path=\"Void\"/></f></tearDown>\n\t<tearDownTestCase public=\"1\" set=\"method\" line=\"104\"><f a=\"\"><x path=\"Void\"/></f></tearDownTestCase>\n\t<expectException public=\"1\" params=\"T\" set=\"method\" line=\"173\">\n\t\t<f a=\"?match:?pos\" v=\"null:\">\n\t\t\t<x path=\"hunit.Match\"><c path=\"expectException.T\"/></x>\n\t\t\t<t path=\"haxe.PosInfos\"/>\n\t\t\t<x path=\"Void\"/>\n\t\t</f>\n\t\t<meta><m n=\":value\"><e>{match:null}</e></m></meta>\n\t</expectException>\n\t<notice public=\"1\" set=\"method\" line=\"187\"><f a=\"msg:?pos\">\n\t<c path=\"String\"/>\n\t<t path=\"haxe.PosInfos\"/>\n\t<x path=\"Void\"/>\n</f></notice>\n\t<set_match set=\"method\" line=\"198\">\n\t\t<f a=\"match\">\n\t\t\t<c path=\"hunit.match.MatchFactory\"/>\n\t\t\t<c path=\"hunit.match.MatchFactory\"/>\n\t\t</f>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</set_match>\n\t<set_assert set=\"method\" line=\"213\">\n\t\t<f a=\"assert\">\n\t\t\t<c path=\"hunit.assert.AssertFactory\"/>\n\t\t\t<c path=\"hunit.assert.AssertFactory\"/>\n\t\t</f>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</set_assert>\n\t<new public=\"1\" set=\"method\" line=\"64\"><f a=\"\"><x path=\"Void\"/></f></new>\n\t<meta>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t\t<m n=\":access\"><e>hunit.mock.IMock</e></m>\n\t\t<m n=\":rtti\"/>\n\t\t<m n=\":keepSub\"/>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t</meta>\n</class>";
ChildWidgetNodeTest.__meta__ = { fields : { childWidgetNode : { test : null}}};
ChildWidgetNodeTest.__rtti = "<class path=\"ChildWidgetNodeTest\" params=\"\">\n\t<extends path=\"hunit.TestCase\"/>\n\t<childWidgetNode public=\"1\" set=\"method\" line=\"16\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</childWidgetNode>\n\t<new public=\"1\" set=\"method\" line=\"12\"><f a=\"\"><x path=\"Void\"/></f></new>\n\t<meta>\n\t\t<m n=\":directlyUsed\"/>\n\t\t<m n=\":build\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t</meta>\n</class>";
MetricValueTest.__meta__ = { fields : { dip : { test : null}, pixel : { test : null}, pct : { test : null}}};
MetricValueTest.__rtti = "<class path=\"MetricValueTest\" params=\"\">\n\t<extends path=\"hunit.TestCase\"/>\n\t<dip public=\"1\" set=\"method\" line=\"15\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</dip>\n\t<pixel public=\"1\" set=\"method\" line=\"24\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</pixel>\n\t<pct public=\"1\" set=\"method\" line=\"33\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</pct>\n\t<new public=\"1\" set=\"method\" line=\"11\"><f a=\"\"><x path=\"Void\"/></f></new>\n\t<meta>\n\t\t<m n=\":directlyUsed\"/>\n\t\t<m n=\":build\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t</meta>\n</class>";
SignalValueTest.__meta__ = { fields : { simple : { test : null}, closureWithBlockBody : { test : null}, closureWithSingleExprBody : { test : null}}};
SignalValueTest.__rtti = "<class path=\"SignalValueTest\" params=\"\">\n\t<extends path=\"hunit.TestCase\"/>\n\t<simple public=\"1\" set=\"method\" line=\"15\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</simple>\n\t<closureWithBlockBody public=\"1\" set=\"method\" line=\"26\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</closureWithBlockBody>\n\t<closureWithSingleExprBody public=\"1\" set=\"method\" line=\"37\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</closureWithSingleExprBody>\n\t<new public=\"1\" set=\"method\" line=\"11\"><f a=\"\"><x path=\"Void\"/></f></new>\n\t<meta>\n\t\t<m n=\":directlyUsed\"/>\n\t\t<m n=\":build\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t</meta>\n</class>";
Xml.Element = 0;
Xml.PCData = 1;
Xml.CData = 2;
Xml.Comment = 3;
Xml.DocType = 4;
Xml.ProcessingInstruction = 5;
Xml.Document = 6;
haxe_xml_Parser.escapes = (function($this) {
	var $r;
	var h = new haxe_ds_StringMap();
	if(__map_reserved.lt != null) h.setReserved("lt","<"); else h.h["lt"] = "<";
	if(__map_reserved.gt != null) h.setReserved("gt",">"); else h.h["gt"] = ">";
	if(__map_reserved.amp != null) h.setReserved("amp","&"); else h.h["amp"] = "&";
	if(__map_reserved.quot != null) h.setReserved("quot","\""); else h.h["quot"] = "\"";
	if(__map_reserved.apos != null) h.setReserved("apos","'"); else h.h["apos"] = "'";
	$r = h;
	return $r;
}(this));
hunit_Utils.META_TEST = "test";
hunit_Utils.buffer = "";
hunit_utils_CTypeClassFieldsUtils.TEST_INDICATOR = "test";
js_Boot.__toStr = {}.toString;
sx_Sx.dipFactor = 1;
sx_Sx.pixelSnapping = false;
sx_Sx.__skins = new haxe_ds_StringMap();
sx_Sx.__initTasks = [];
sx_properties__$Align_HorizontalAlign_$Impl_$.Left = "left";
sx_properties__$Align_HorizontalAlign_$Impl_$.Center = "center";
sx_properties__$Align_HorizontalAlign_$Impl_$.Right = "right";
sx_properties__$Align_HorizontalAlign_$Impl_$.HNone = "none";
sx_properties__$Align_VerticalAlign_$Impl_$.Top = "top";
sx_properties__$Align_VerticalAlign_$Impl_$.Middle = "middle";
sx_properties__$Align_VerticalAlign_$Impl_$.Bottom = "bottom";
sx_properties__$Align_VerticalAlign_$Impl_$.VNone = "none";
sx_properties__$Align_NoneAlign_$Impl_$.None = "none";
sx_properties_abstracts__$AAlign_AAlign_$Impl_$.__pool = new sx_ds_ObjectPool();
sx_properties_abstracts__$AAutoSize_AAutoSize_$Impl_$.__pool = new sx_ds_ObjectPool();
sx_properties_abstracts__$ACoordinate_ACoordinate_$Impl_$.__pool = new sx_ds_ObjectPool();
sx_properties_abstracts__$APadding_APadding_$Impl_$.__pool = new sx_ds_ObjectPool();
sx_properties_abstracts__$ASize_ASize_$Impl_$.__pool = new sx_ds_ObjectPool();
sx_properties_abstracts__$ASizeSetterProxy_ASizeSetterProxy_$Impl_$.__pool = new sx_ds_ObjectPool();
sx_properties_metric__$Size_Size_$Internal_$ZeroSize.instance = new sx_properties_metric__$Size_Size_$Internal_$ZeroSize();
sx_themes_Theme.DEFAULT_STYLE = "__DEFAULT__";
sx_tween_Tweener.__time = 0;
sx_tween_Tweener.__tweeners = [];
sx_tween_Tweener.__pausedAll = false;
sx_tween_Tweener.__pausedAllTime = 0;
sx_tween_Tweener.__totalPausedTime = 0;
HUnit.main();
})(typeof console != "undefined" ? console : {log:function(){}});

//# sourceMappingURL=HUnit.js.map