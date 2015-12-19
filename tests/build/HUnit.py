import math as python_lib_Math
import math as Math
import functools as python_lib_Functools
import inspect as python_lib_Inspect
import re as python_lib_Re
import sys as python_lib_Sys
import time as python_lib_Time
import traceback as python_lib_Traceback
from io import StringIO as python_lib_io_StringIO


class _hx_AnonObject:
	def __init__(self, fields):
		self.__dict__ = fields


class Enum:
	_hx_class_name = "Enum"
	_hx_fields = ["tag", "index", "params"]
	_hx_methods = ["__str__"]

	def __init__(self,tag,index,params):
		# /usr/lib/haxe/std/python/internal/EnumImpl.hx:28
		self.tag = None
		# /usr/lib/haxe/std/python/internal/EnumImpl.hx:31
		self.index = None
		# /usr/lib/haxe/std/python/internal/EnumImpl.hx:34
		self.params = None
		# /usr/lib/haxe/std/python/internal/EnumImpl.hx:38
		self.tag = tag
		# /usr/lib/haxe/std/python/internal/EnumImpl.hx:39
		self.index = index
		# /usr/lib/haxe/std/python/internal/EnumImpl.hx:40
		self.params = params

	def __str__(self):
		# /usr/lib/haxe/std/python/internal/EnumImpl.hx:45
		if (self.params is None):
			return self.tag
		else:
			return (((HxOverrides.stringOrNull(self.tag) + "(") + HxOverrides.stringOrNull(",".join([python_Boot.toString1(x1,'') for x1 in self.params]))) + ")")

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.tag = None
		_hx_o.index = None
		_hx_o.params = None
Enum._hx_class = Enum


class sx_widgets_Widget:
	_hx_class_name = "sx.widgets.Widget"
	_hx_fields = ["name", "__parent", "numChildren", "__left", "__right", "__top", "__bottom", "__origin", "__offset", "__width", "__height", "scaleX", "scaleY", "rotation", "alpha", "visible", "overflow", "__skin", "__layout", "arrangeable", "enabled", "style", "backend", "initialized", "disposed", "__tween", "__onResize", "__onMove", "__onChildAdded", "__onChildRemoved", "__onParentChanged", "__onEnable", "__onDisable", "__onPointerPress", "__onPointerRelease", "__onPointerTap", "__onPointerMove", "__onPointerOver", "__onPointerOut", "__onInitialize", "__onDispose", "__listeningParentResize", "__resizeCounter"]
	_hx_methods = ["initialize", "addChild", "addChildAt", "removeChild", "removeChildAt", "removeChildren", "contains", "getChildIndex", "setChildIndex", "getChildAt", "swapChildren", "swapChildrenAt", "getChild", "getChildAs", "getDirectChild", "getParent", "getParentAs", "isEnabled", "globalToLocal", "localToGlobal", "dispose", "applyStyle", "__createBackend", "__propertyResized", "__resized", "__propertyMoved", "__moved", "__originChanged", "__offsetChanged", "__parentWidthProvider", "__parentHeightProvider", "__parentResized", "__reactParentResize", "__affectParentResizeListener", "__updateParentResizeListener", "__initializeSelf", "__initializeChildren", "set_rotation", "set_scaleX", "set_scaleY", "set_alpha", "set_visible", "set_skin", "set_layout", "set_style", "get_origin", "get_offset", "set___parent", "set_enabled", "get_tween", "set_overflow", "set_arrangeable", "get_parent", "get_width", "get_height", "get_left", "get_right", "get_top", "get_bottom", "get_skin", "get_layout", "set_left", "set_right", "set_top", "set_bottom", "set_width", "set_height", "get_onResize", "get_onMove", "get_onInitialize", "get_onDispose", "get_onChildAdded", "get_onChildRemoved", "get_onEnable", "get_onDisable", "get_onParentChanged", "get_onPointerPress", "get_onPointerRelease", "get_onPointerTap", "get_onClick", "get_onPointerMove", "get_onPointerOver", "get_onPointerOut"]
	_hx_statics = ["MAX_RESIZE_DEPTH"]

	def __init__(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:45
		self.name = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:48
		self._hx___parent = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:50
		self.numChildren = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:54
		self._hx___left = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:57
		self._hx___right = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:60
		self._hx___top = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:63
		self._hx___bottom = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:70
		self._hx___origin = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:76
		self._hx___offset = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:80
		self._hx___width = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:83
		self._hx___height = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:86
		self.scaleX = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:88
		self.scaleY = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:91
		self.rotation = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:98
		self.alpha = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:100
		self.visible = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:102
		self.overflow = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:110
		self._hx___skin = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:118
		self._hx___layout = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:124
		self.arrangeable = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:130
		self.enabled = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:144
		self.style = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:147
		self.backend = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:158
		self.initialized = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:161
		self.disposed = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:165
		self._hx___tween = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:169
		self._hx___onResize = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:172
		self._hx___onMove = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:175
		self._hx___onChildAdded = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:178
		self._hx___onChildRemoved = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:181
		self._hx___onParentChanged = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:184
		self._hx___onEnable = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:187
		self._hx___onDisable = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:190
		self._hx___onPointerPress = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:193
		self._hx___onPointerRelease = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:196
		self._hx___onPointerTap = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:201
		self._hx___onPointerMove = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:204
		self._hx___onPointerOver = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:207
		self._hx___onPointerOut = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:210
		self._hx___onInitialize = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:213
		self._hx___onDispose = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:216
		self._hx___listeningParentResize = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:221
		self._hx___resizeCounter = None
		self._hx___resizeCounter = 0
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:216
		self._hx___listeningParentResize = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:161
		self.disposed = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:158
		self.initialized = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:144
		self.style = "__DEFAULT__"
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:130
		self.enabled = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:124
		self.arrangeable = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:102
		self.overflow = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:100
		self.visible = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:98
		self.alpha = 1
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:91
		self.rotation = 0
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:88
		self.scaleY = 1
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:86
		self.scaleX = 1
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:50
		self.numChildren = 0
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:229
		self._hx___createBackend()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:231
		self._hx___width = sx_properties_metric_Size("horizontal")
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:232
		self._hx___width.pctSource = self._hx___parentWidthProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:233
		self._hx___width.onChange.add(self._hx___propertyResized)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:235
		self._hx___height = sx_properties_metric_Size("vertical")
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:236
		self._hx___height.pctSource = self._hx___parentHeightProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:237
		self._hx___height.onChange.add(self._hx___propertyResized)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:239
		self._hx___left = sx_properties_metric_Coordinate("horizontal")
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:240
		self._hx___left.pctSource = self._hx___parentWidthProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:241
		self._hx___left.onChange.add(self._hx___propertyMoved)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:243
		self._hx___right = sx_properties_metric_Coordinate("horizontal")
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:244
		self._hx___right.pctSource = self._hx___parentWidthProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:245
		self._hx___right.onChange.add(self._hx___propertyMoved)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:247
		self._hx___top = sx_properties_metric_Coordinate("vertical")
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:248
		self._hx___top.pctSource = self._hx___parentHeightProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:249
		self._hx___top.onChange.add(self._hx___propertyMoved)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:251
		self._hx___bottom = sx_properties_metric_Coordinate("vertical")
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:252
		self._hx___bottom.pctSource = self._hx___parentHeightProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:253
		self._hx___bottom.onChange.add(self._hx___propertyMoved)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:255
		self._hx___left.pair = self.get_right
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:256
		self._hx___right.pair = self.get_left
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:257
		self._hx___top.pair = self.get_bottom
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:258
		self._hx___bottom.pair = self.get_top
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:259
		def _hx_local_0():
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:259
			self._hx___right.ownerSize = self.get_width
			return self._hx___right.ownerSize
		self._hx___left.ownerSize = _hx_local_0()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:260
		def _hx_local_1():
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:260
			self._hx___bottom.ownerSize = self.get_height
			return self._hx___bottom.ownerSize
		self._hx___top.ownerSize = _hx_local_1()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:262
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:262
		_this = self._hx___left
		if (not _this.selected):
			_this.selected = True
			_this.pair().selected = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:263
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:263
		_this1 = self._hx___top
		if (not _this1.selected):
			_this1.selected = True
			_this1.pair().selected = False

	def initialize(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:272
		if self.initialized:
			return
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:274
		if (self.style == "__DEFAULT__"):
			if ((self.style is not None) and ((sx_Sx.theme is not None))):
				sx_Sx.theme.apply(self)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:278
		self.initialized = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:280
		self._hx___initializeSelf()
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
		if ((self._hx___onInitialize is not None) and ((len(self._hx___onInitialize._hx___listeners) > 0))):
			if self._hx___onInitialize._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				_g = 0
				_g1 = self._hx___onInitialize._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(self)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
				False
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
				self._hx___onInitialize._hx___listenersInUse = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				_g2 = 0
				_g11 = self._hx___onInitialize._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(self)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
				self._hx___onInitialize._hx___listenersInUse = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:282
		self._hx___initializeChildren()

	def addChild(self,child):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:293
		if (child.get_parent() is not None):
			child.get_parent().removeChild(child)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:295
		self.backend.addWidget(child)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:296
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:296
		_hx_local_0 = self
		_hx_local_1 = _hx_local_0.numChildren
		_hx_local_0.numChildren = (_hx_local_1 + 1)
		_hx_local_1
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:297
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:297
		if (child._hx___listeningParentResize and ((child.get_parent() is not None))):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:297
			child._hx___listeningParentResize = False
			child.get_parent().get_onResize().remove(child._hx___parentResized)
		child._hx___parent = self
		if (child._hx___parent is not None):
			child._hx___updateParentResizeListener()
			if (child._hx___parent.initialized and (not child.initialized)):
				child.initialize()
		self
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
		if ((self._hx___onChildAdded is not None) and ((len(self._hx___onChildAdded._hx___listeners) > 0))):
			if self._hx___onChildAdded._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				_g = 0
				_g1 = self._hx___onChildAdded._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(self,child)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
				False
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
				self._hx___onChildAdded._hx___listenersInUse = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				_g2 = 0
				_g11 = self._hx___onChildAdded._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(self,child)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
				self._hx___onChildAdded._hx___listenersInUse = False
		if ((child._hx___onParentChanged is not None) and ((len(child._hx___onParentChanged._hx___listeners) > 0))):
			if child._hx___onParentChanged._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				_g3 = 0
				_g12 = child._hx___onParentChanged._hx___listeners
				while (_g3 < len(_g12)):
					listener2 = (_g12[_g3] if _g3 >= 0 and _g3 < len(_g12) else None)
					_g3 = (_g3 + 1)
					listener2(self,child)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
				False
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
				child._hx___onParentChanged._hx___listenersInUse = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				_g4 = 0
				_g13 = child._hx___onParentChanged._hx___listeners
				while (_g4 < len(_g13)):
					listener3 = (_g13[_g4] if _g4 >= 0 and _g4 < len(_g13) else None)
					_g4 = (_g4 + 1)
					listener3(self,child)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
				child._hx___onParentChanged._hx___listenersInUse = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:302
		return child

	def addChildAt(self,child,index):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:317
		if (child.get_parent() is not None):
			child.get_parent().removeChild(child)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:319
		self.backend.addWidgetAt(child,index)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:320
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:320
		_hx_local_0 = self
		_hx_local_1 = _hx_local_0.numChildren
		_hx_local_0.numChildren = (_hx_local_1 + 1)
		_hx_local_1
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:321
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:321
		if (child._hx___listeningParentResize and ((child.get_parent() is not None))):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:321
			child._hx___listeningParentResize = False
			child.get_parent().get_onResize().remove(child._hx___parentResized)
		child._hx___parent = self
		if (child._hx___parent is not None):
			child._hx___updateParentResizeListener()
			if (child._hx___parent.initialized and (not child.initialized)):
				child.initialize()
		self
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:323
		if ((self._hx___onChildAdded is not None) or ((child._hx___onParentChanged is not None))):
			# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
			if ((self._hx___onChildAdded is not None) and ((len(self._hx___onChildAdded._hx___listeners) > 0))):
				if self._hx___onChildAdded._hx___listenersInUse:
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
					_g = 0
					_g1 = self._hx___onChildAdded._hx___listeners
					while (_g < len(_g1)):
						listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
						_g = (_g + 1)
						listener(self,child)
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
					False
				else:
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
					self._hx___onChildAdded._hx___listenersInUse = True
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
					_g2 = 0
					_g11 = self._hx___onChildAdded._hx___listeners
					while (_g2 < len(_g11)):
						listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
						_g2 = (_g2 + 1)
						listener1(self,child)
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
					self._hx___onChildAdded._hx___listenersInUse = False
			if ((child._hx___onParentChanged is not None) and ((len(child._hx___onParentChanged._hx___listeners) > 0))):
				if child._hx___onParentChanged._hx___listenersInUse:
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
					_g3 = 0
					_g12 = child._hx___onParentChanged._hx___listeners
					while (_g3 < len(_g12)):
						listener2 = (_g12[_g3] if _g3 >= 0 and _g3 < len(_g12) else None)
						_g3 = (_g3 + 1)
						listener2(self,child)
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
					False
				else:
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
					child._hx___onParentChanged._hx___listenersInUse = True
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
					_g4 = 0
					_g13 = child._hx___onParentChanged._hx___listeners
					while (_g4 < len(_g13)):
						listener3 = (_g13[_g4] if _g4 >= 0 and _g4 < len(_g13) else None)
						_g4 = (_g4 + 1)
						listener3(self,child)
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
					child._hx___onParentChanged._hx___listenersInUse = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:328
		return child

	def removeChild(self,child):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:340
		if (child.get_parent() == self):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:341
			self.backend.removeWidget(child)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:342
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:342
			_hx_local_0 = self
			_hx_local_1 = _hx_local_0.numChildren
			_hx_local_0.numChildren = (_hx_local_1 - 1)
			_hx_local_1
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:343
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:343
			if (child._hx___listeningParentResize and ((child.get_parent() is not None))):
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:343
				child._hx___listeningParentResize = False
				child.get_parent().get_onResize().remove(child._hx___parentResized)
			child._hx___parent = None
			if (child._hx___parent is not None):
				child._hx___updateParentResizeListener()
				if (child._hx___parent.initialized and (not child.initialized)):
					child.initialize()
			None
			# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
			if ((self._hx___onChildRemoved is not None) and ((len(self._hx___onChildRemoved._hx___listeners) > 0))):
				if self._hx___onChildRemoved._hx___listenersInUse:
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
					_g = 0
					_g1 = self._hx___onChildRemoved._hx___listeners
					while (_g < len(_g1)):
						listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
						_g = (_g + 1)
						listener(self,child)
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
					False
				else:
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
					self._hx___onChildRemoved._hx___listenersInUse = True
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
					_g2 = 0
					_g11 = self._hx___onChildRemoved._hx___listeners
					while (_g2 < len(_g11)):
						listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
						_g2 = (_g2 + 1)
						listener1(self,child)
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
					self._hx___onChildRemoved._hx___listenersInUse = False
			if ((child._hx___onParentChanged is not None) and ((len(child._hx___onParentChanged._hx___listeners) > 0))):
				if child._hx___onParentChanged._hx___listenersInUse:
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
					_g3 = 0
					_g12 = child._hx___onParentChanged._hx___listeners
					while (_g3 < len(_g12)):
						listener2 = (_g12[_g3] if _g3 >= 0 and _g3 < len(_g12) else None)
						_g3 = (_g3 + 1)
						listener2(None,child)
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
					False
				else:
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
					child._hx___onParentChanged._hx___listenersInUse = True
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
					_g4 = 0
					_g13 = child._hx___onParentChanged._hx___listeners
					while (_g4 < len(_g13)):
						listener3 = (_g13[_g4] if _g4 >= 0 and _g4 < len(_g13) else None)
						_g4 = (_g4 + 1)
						listener3(None,child)
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
					child._hx___onParentChanged._hx___listenersInUse = False
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:348
			return child
		else:
			return None

	def removeChildAt(self,index):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:364
		removed = self.backend.removeWidgetAt(index)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:365
		if (removed is not None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:366
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:366
			_hx_local_0 = self
			_hx_local_1 = _hx_local_0.numChildren
			_hx_local_0.numChildren = (_hx_local_1 - 1)
			_hx_local_1
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:367
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:367
			if (removed._hx___listeningParentResize and ((removed.get_parent() is not None))):
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:367
				removed._hx___listeningParentResize = False
				removed.get_parent().get_onResize().remove(removed._hx___parentResized)
			removed._hx___parent = None
			if (removed._hx___parent is not None):
				removed._hx___updateParentResizeListener()
				if (removed._hx___parent.initialized and (not removed.initialized)):
					removed.initialize()
			None
			# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
			if ((self._hx___onChildRemoved is not None) and ((len(self._hx___onChildRemoved._hx___listeners) > 0))):
				if self._hx___onChildRemoved._hx___listenersInUse:
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
					_g = 0
					_g1 = self._hx___onChildRemoved._hx___listeners
					while (_g < len(_g1)):
						listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
						_g = (_g + 1)
						listener(self,removed)
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
					False
				else:
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
					self._hx___onChildRemoved._hx___listenersInUse = True
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
					_g2 = 0
					_g11 = self._hx___onChildRemoved._hx___listeners
					while (_g2 < len(_g11)):
						listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
						_g2 = (_g2 + 1)
						listener1(self,removed)
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
					self._hx___onChildRemoved._hx___listenersInUse = False
			if ((removed._hx___onParentChanged is not None) and ((len(removed._hx___onParentChanged._hx___listeners) > 0))):
				if removed._hx___onParentChanged._hx___listenersInUse:
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
					_g3 = 0
					_g12 = removed._hx___onParentChanged._hx___listeners
					while (_g3 < len(_g12)):
						listener2 = (_g12[_g3] if _g3 >= 0 and _g3 < len(_g12) else None)
						_g3 = (_g3 + 1)
						listener2(None,removed)
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
					False
				else:
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
					removed._hx___onParentChanged._hx___listenersInUse = True
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
					_g4 = 0
					_g13 = removed._hx___onParentChanged._hx___listeners
					while (_g4 < len(_g13)):
						listener3 = (_g13[_g4] if _g4 >= 0 and _g4 < len(_g13) else None)
						_g4 = (_g4 + 1)
						listener3(None,removed)
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
					removed._hx___onParentChanged._hx___listenersInUse = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:373
		return removed

	def removeChildren(self,beginIndex = 0,endIndex = -1):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:385
		if (beginIndex is None):
			beginIndex = 0
		if (endIndex is None):
			endIndex = -1
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:386
		if (beginIndex < 0):
			beginIndex = (self.numChildren + beginIndex)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:387
		if (beginIndex < 0):
			beginIndex = 0
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:388
		if (endIndex < 0):
			endIndex = (self.numChildren + endIndex)
		elif (endIndex >= self.numChildren):
			endIndex = (self.numChildren - 1)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:394
		if ((beginIndex >= self.numChildren) or ((endIndex < beginIndex))):
			return 0
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:396
		removed = ((endIndex - beginIndex) + 1)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:397
		while (beginIndex <= endIndex):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:398
			self.removeChildAt(beginIndex)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:399
			endIndex = (endIndex - 1)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:402
		return removed

	def contains(self,child):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:411
		while (child is not None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:412
			if (child == self):
				return True
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:413
			child = child.get_parent()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:416
		return False

	def getChildIndex(self,child):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:427
		if (child.get_parent() != self):
			raise sx_exceptions_NotChildException(None, _hx_AnonObject({'fileName': "Widget.hx", 'lineNumber': 427, 'className': "sx.widgets.Widget", 'methodName': "getChildIndex"}))
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:429
		return self.backend.getWidgetIndex(child)

	def setChildIndex(self,child,index):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:446
		if (child.get_parent() != self):
			raise sx_exceptions_NotChildException(None, _hx_AnonObject({'fileName': "Widget.hx", 'lineNumber': 446, 'className': "sx.widgets.Widget", 'methodName': "setChildIndex"}))
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:448
		return self.backend.setWidgetIndex(child,index)

	def getChildAt(self,index):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:461
		return self.backend.getWidgetAt(index)

	def swapChildren(self,child1,child2):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:472
		if ((child1.get_parent() != self) or ((child2.get_parent() != self))):
			raise sx_exceptions_NotChildException(None, _hx_AnonObject({'fileName': "Widget.hx", 'lineNumber': 472, 'className': "sx.widgets.Widget", 'methodName': "swapChildren"}))
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:473
		self.backend.swapWidgets(child1,child2)

	def swapChildrenAt(self,index1,index2):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:486
		if (index1 < 0):
			index1 = (index1 + self.numChildren)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:487
		if (index2 < 0):
			index2 = (index2 + self.numChildren)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:489
		if ((((index1 < 0) or ((index1 >= self.numChildren))) or ((index2 < 0))) or ((index2 > self.numChildren))):
			raise sx_exceptions_OutOfBoundsException("Provided index does not exist in display list of this widget.", _hx_AnonObject({'fileName': "Widget.hx", 'lineNumber': 490, 'className': "sx.widgets.Widget", 'methodName': "swapChildrenAt"}))
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:493
		self.backend.swapWidgetsAt(index1,index2)

	def getChild(self,name):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:502
		child = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:503
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:503
		_g1 = 0
		_g = self.numChildren
		while (_g1 < _g):
			i = _g1
			_g1 = (_g1 + 1)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:504
			child = self.getChildAt(i)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:505
			if (child.name == name):
				return child
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:509
			child = child.getChild(name)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:510
			if (child is not None):
				return child
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:515
		return None

	def getChildAs(self,name,cls):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:526
		child = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:527
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:527
		_g1 = 0
		_g = self.numChildren
		while (_g1 < _g):
			i = _g1
			_g1 = (_g1 + 1)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:528
			child = self.getChildAt(i)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:529
			if ((child.name == name) and Std._hx_is(child,cls)):
				return child
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:533
			child = child.getChildAs(name,cls)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:534
			if (child is not None):
				return child
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:539
		return None

	def getDirectChild(self,name):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:548
		child = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:549
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:549
		_g1 = 0
		_g = self.numChildren
		while (_g1 < _g):
			i = _g1
			_g1 = (_g1 + 1)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:550
			child = self.getChildAt(i)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:551
			if (child.name == name):
				return child
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:556
		return None

	def getParent(self,name):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:565
		parent = self.get_parent()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:566
		while ((parent is not None) and ((parent.name != name))):
			parent = parent.get_parent()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:570
		return parent

	def getParentAs(self,name,cls):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:579
		parent = self.get_parent()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:580
		while ((parent is not None) and (((parent.name != name) or (not Std._hx_is(parent,cls))))):
			parent = parent.get_parent()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:584
		if (parent is None):
			return None
		else:
			return parent

	def isEnabled(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:593
		current = self
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:594
		while True:
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:595
			if (not current.enabled):
				return False
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:596
			current = current.get_parent()
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:597
			if (not ((current is not None))):
				break
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:599
		return True

	def globalToLocal(self,point):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:609
		return self.backend.widgetGlobalToLocal(point)

	def localToGlobal(self,point):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:619
		return self.backend.widgetLocalToGlobal(point)

	def dispose(self,disposeChildren = True):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:627
		if (disposeChildren is None):
			disposeChildren = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
		if ((self._hx___onDispose is not None) and ((len(self._hx___onDispose._hx___listeners) > 0))):
			if self._hx___onDispose._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				_g = 0
				_g1 = self._hx___onDispose._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(self)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
				False
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
				self._hx___onDispose._hx___listenersInUse = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				_g2 = 0
				_g11 = self._hx___onDispose._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(self)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
				self._hx___onDispose._hx___listenersInUse = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:629
		self.disposed = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:631
		if (self.get_parent() is not None):
			self.get_parent().removeChild(self)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:635
		if (self.get_skin() is not None):
			self.set_skin(None)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:636
		if (self.get_layout() is not None):
			self.set_layout(None)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:638
		if disposeChildren:
			while (self.numChildren > 0):
				self.getChildAt(0).dispose(True)
		else:
			self.removeChildren()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:644
		if (self._hx___tween is not None):
			self._hx___tween.stop()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:646
		self.backend.widgetDisposed()

	def applyStyle(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:655
		if ((self.style is not None) and ((sx_Sx.theme is not None))):
			sx_Sx.theme.apply(self)

	def _hx___createBackend(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:666
		self.backend = sx_Sx.get_backendManager().widgetBackend(self)

	def _hx___propertyResized(self,changed,previousUnits,previousValue):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:675
		if (self.get_parent() is not None):
			if self._hx___listeningParentResize:
				if ((changed != self._hx___right) and ((changed != self._hx___top))):
					if ((previousUnits == "pct") and ((previousUnits != changed.units))):
						self._hx___updateParentResizeListener()
			elif (((changed.units == "pct") or ((changed == self._hx___right))) or ((changed == self._hx___bottom))):
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:675
				self._hx___listeningParentResize = True
				self.get_parent().get_onResize().add(self._hx___parentResized)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:676
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:676
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:676
		_hx_local_0 = self
		_hx_local_1 = _hx_local_0._hx___resizeCounter
		_hx_local_0._hx___resizeCounter = (_hx_local_1 + 1)
		_hx_local_1
		if (self._hx___resizeCounter > 5):
			raise sx_exceptions_LoopedResizeException(None, _hx_AnonObject({'fileName': "Widget.hx", 'lineNumber': 686, 'className': "sx.widgets.Widget", 'methodName': "__resized"}))
		if self.initialized:
			self.backend.widgetResized()
		if ((self._hx___onResize is not None) and ((len(self._hx___onResize._hx___listeners) > 0))):
			if self._hx___onResize._hx___listenersInUse:
				_g = 0
				_g1 = self._hx___onResize._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(self,changed,previousUnits,previousValue)
				False
			else:
				self._hx___onResize._hx___listenersInUse = True
				_g2 = 0
				_g11 = self._hx___onResize._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(self,changed,previousUnits,previousValue)
				self._hx___onResize._hx___listenersInUse = False
		if ((changed.orientation == "horizontal") and self.get_right().selected):
			if self.initialized:
				self.backend.widgetMoved()
		if ((changed.orientation == "vertical") and self.get_bottom().selected):
			if self.initialized:
				self.backend.widgetMoved()
		_hx_local_4 = self
		_hx_local_5 = _hx_local_4._hx___resizeCounter
		_hx_local_4._hx___resizeCounter = (_hx_local_5 - 1)
		_hx_local_5

	def _hx___resized(self,changed,previousUnits,previousValue):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:685
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:685
		_hx_local_0 = self
		_hx_local_1 = _hx_local_0._hx___resizeCounter
		_hx_local_0._hx___resizeCounter = (_hx_local_1 + 1)
		_hx_local_1
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:686
		if (self._hx___resizeCounter > 5):
			raise sx_exceptions_LoopedResizeException(None, _hx_AnonObject({'fileName': "Widget.hx", 'lineNumber': 686, 'className': "sx.widgets.Widget", 'methodName': "__resized"}))
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:688
		if self.initialized:
			self.backend.widgetResized()
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
		if ((self._hx___onResize is not None) and ((len(self._hx___onResize._hx___listeners) > 0))):
			if self._hx___onResize._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				_g = 0
				_g1 = self._hx___onResize._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(self,changed,previousUnits,previousValue)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
				False
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
				self._hx___onResize._hx___listenersInUse = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				_g2 = 0
				_g11 = self._hx___onResize._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(self,changed,previousUnits,previousValue)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
				self._hx___onResize._hx___listenersInUse = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:693
		if ((changed.orientation == "horizontal") and self.get_right().selected):
			if self.initialized:
				self.backend.widgetMoved()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:694
		if ((changed.orientation == "vertical") and self.get_bottom().selected):
			if self.initialized:
				self.backend.widgetMoved()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:696
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:696
		_hx_local_4 = self
		_hx_local_5 = _hx_local_4._hx___resizeCounter
		_hx_local_4._hx___resizeCounter = (_hx_local_5 - 1)
		_hx_local_5

	def _hx___propertyMoved(self,changed,previousUnits,previousValue):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:705
		if (self.get_parent() is not None):
			if self._hx___listeningParentResize:
				if ((changed != self._hx___right) and ((changed != self._hx___top))):
					if ((previousUnits == "pct") and ((previousUnits != changed.units))):
						self._hx___updateParentResizeListener()
			elif (((changed.units == "pct") or ((changed == self._hx___right))) or ((changed == self._hx___bottom))):
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:705
				self._hx___listeningParentResize = True
				self.get_parent().get_onResize().add(self._hx___parentResized)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:706
		if self.initialized:
			self.backend.widgetMoved()
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
		if ((self._hx___onMove is not None) and ((len(self._hx___onMove._hx___listeners) > 0))):
			if self._hx___onMove._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				_g = 0
				_g1 = self._hx___onMove._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(self,changed,previousUnits,previousValue)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
				False
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
				self._hx___onMove._hx___listenersInUse = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				_g2 = 0
				_g11 = self._hx___onMove._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(self,changed,previousUnits,previousValue)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
				self._hx___onMove._hx___listenersInUse = False

	def _hx___moved(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:716
		if self.initialized:
			self.backend.widgetMoved()

	def _hx___originChanged(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:725
		if self.initialized:
			self.backend.widgetOriginChanged()

	def _hx___offsetChanged(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:734
		if self.initialized:
			self.backend.widgetOffsetChanged()

	def _hx___parentWidthProvider(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:743
		if (self.get_parent() is None):
			return sx_properties_metric__Size_Size_Internal_ZeroSize.instance
		else:
			return self.get_parent().get_width()

	def _hx___parentHeightProvider(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:752
		if (self.get_parent() is None):
			return sx_properties_metric__Size_Size_Internal_ZeroSize.instance
		else:
			return self.get_parent().get_height()

	def _hx___parentResized(self,parent,changed,previousUnits,previousValue):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:762
		if (changed.orientation == "horizontal"):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:763
			position = self.get_left()
			size = self.get_width()
			if (size.units == "pct"):
				previousUnits1 = "pct"
				previousValue1 = size.get_pct()
				_hx_local_0 = self
				_hx_local_1 = _hx_local_0._hx___resizeCounter
				_hx_local_0._hx___resizeCounter = (_hx_local_1 + 1)
				_hx_local_1
				if (self._hx___resizeCounter > 5):
					raise sx_exceptions_LoopedResizeException(None, _hx_AnonObject({'fileName': "Widget.hx", 'lineNumber': 686, 'className': "sx.widgets.Widget", 'methodName': "__resized"}))
				if self.initialized:
					self.backend.widgetResized()
				if ((self._hx___onResize is not None) and ((len(self._hx___onResize._hx___listeners) > 0))):
					if self._hx___onResize._hx___listenersInUse:
						_g = 0
						_g1 = self._hx___onResize._hx___listeners
						while (_g < len(_g1)):
							listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
							_g = (_g + 1)
							listener(self,size,previousUnits1,previousValue1)
						False
					else:
						self._hx___onResize._hx___listenersInUse = True
						_g2 = 0
						_g11 = self._hx___onResize._hx___listeners
						while (_g2 < len(_g11)):
							listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
							_g2 = (_g2 + 1)
							listener1(self,size,previousUnits1,previousValue1)
						self._hx___onResize._hx___listenersInUse = False
				if ((size.orientation == "horizontal") and self.get_right().selected):
					if self.initialized:
						self.backend.widgetMoved()
				if ((size.orientation == "vertical") and self.get_bottom().selected):
					if self.initialized:
						self.backend.widgetMoved()
				_hx_local_4 = self
				_hx_local_5 = _hx_local_4._hx___resizeCounter
				_hx_local_4._hx___resizeCounter = (_hx_local_5 - 1)
				_hx_local_5
			if position.selected:
				if (position.units == "pct"):
					if self.initialized:
						self.backend.widgetMoved()
			elif self.initialized:
				self.backend.widgetMoved()
		else:
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:767
			position1 = self.get_top()
			size1 = self.get_height()
			if (size1.units == "pct"):
				previousUnits2 = "pct"
				previousValue2 = size1.get_pct()
				_hx_local_6 = self
				_hx_local_7 = _hx_local_6._hx___resizeCounter
				_hx_local_6._hx___resizeCounter = (_hx_local_7 + 1)
				_hx_local_7
				if (self._hx___resizeCounter > 5):
					raise sx_exceptions_LoopedResizeException(None, _hx_AnonObject({'fileName': "Widget.hx", 'lineNumber': 686, 'className': "sx.widgets.Widget", 'methodName': "__resized"}))
				if self.initialized:
					self.backend.widgetResized()
				if ((self._hx___onResize is not None) and ((len(self._hx___onResize._hx___listeners) > 0))):
					if self._hx___onResize._hx___listenersInUse:
						_g3 = 0
						_g12 = self._hx___onResize._hx___listeners
						while (_g3 < len(_g12)):
							listener2 = (_g12[_g3] if _g3 >= 0 and _g3 < len(_g12) else None)
							_g3 = (_g3 + 1)
							listener2(self,size1,previousUnits2,previousValue2)
						False
					else:
						self._hx___onResize._hx___listenersInUse = True
						_g4 = 0
						_g13 = self._hx___onResize._hx___listeners
						while (_g4 < len(_g13)):
							listener3 = (_g13[_g4] if _g4 >= 0 and _g4 < len(_g13) else None)
							_g4 = (_g4 + 1)
							listener3(self,size1,previousUnits2,previousValue2)
						self._hx___onResize._hx___listenersInUse = False
				if ((size1.orientation == "horizontal") and self.get_right().selected):
					if self.initialized:
						self.backend.widgetMoved()
				if ((size1.orientation == "vertical") and self.get_bottom().selected):
					if self.initialized:
						self.backend.widgetMoved()
				_hx_local_10 = self
				_hx_local_11 = _hx_local_10._hx___resizeCounter
				_hx_local_10._hx___resizeCounter = (_hx_local_11 - 1)
				_hx_local_11
			if position1.selected:
				if (position1.units == "pct"):
					if self.initialized:
						self.backend.widgetMoved()
			elif self.initialized:
				self.backend.widgetMoved()

	def _hx___reactParentResize(self,position,size):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:781
		if (size.units == "pct"):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:782
			previousUnits = "pct"
			previousValue = size.get_pct()
			_hx_local_0 = self
			_hx_local_1 = _hx_local_0._hx___resizeCounter
			_hx_local_0._hx___resizeCounter = (_hx_local_1 + 1)
			_hx_local_1
			if (self._hx___resizeCounter > 5):
				raise sx_exceptions_LoopedResizeException(None, _hx_AnonObject({'fileName': "Widget.hx", 'lineNumber': 686, 'className': "sx.widgets.Widget", 'methodName': "__resized"}))
			if self.initialized:
				self.backend.widgetResized()
			if ((self._hx___onResize is not None) and ((len(self._hx___onResize._hx___listeners) > 0))):
				if self._hx___onResize._hx___listenersInUse:
					_g = 0
					_g1 = self._hx___onResize._hx___listeners
					while (_g < len(_g1)):
						listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
						_g = (_g + 1)
						listener(self,size,previousUnits,previousValue)
					False
				else:
					self._hx___onResize._hx___listenersInUse = True
					_g2 = 0
					_g11 = self._hx___onResize._hx___listeners
					while (_g2 < len(_g11)):
						listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
						_g2 = (_g2 + 1)
						listener1(self,size,previousUnits,previousValue)
					self._hx___onResize._hx___listenersInUse = False
			if ((size.orientation == "horizontal") and self.get_right().selected):
				if self.initialized:
					self.backend.widgetMoved()
			if ((size.orientation == "vertical") and self.get_bottom().selected):
				if self.initialized:
					self.backend.widgetMoved()
			_hx_local_4 = self
			_hx_local_5 = _hx_local_4._hx___resizeCounter
			_hx_local_4._hx___resizeCounter = (_hx_local_5 - 1)
			_hx_local_5
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:786
		if position.selected:
			if (position.units == "pct"):
				if self.initialized:
					self.backend.widgetMoved()
		elif self.initialized:
			self.backend.widgetMoved()

	def _hx___affectParentResizeListener(self,changed,previousUnits):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:800
		if (self.get_parent() is not None):
			if self._hx___listeningParentResize:
				if ((changed != self._hx___right) and ((changed != self._hx___top))):
					if ((previousUnits == "pct") and ((previousUnits != changed.units))):
						self._hx___updateParentResizeListener()
			elif (((changed.units == "pct") or ((changed == self._hx___right))) or ((changed == self._hx___bottom))):
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:811
				self._hx___listeningParentResize = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:812
				self.get_parent().get_onResize().add(self._hx___parentResized)

	def _hx___updateParentResizeListener(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:824
		size = ((self.get_width().units == "pct") or ((self.get_height().units == "pct")))
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:825
		position = sx_tools_WidgetTools.positionDependsOnParent(self)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:827
		if (size or position):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:828
			self._hx___listeningParentResize = True
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:829
			self.get_parent().get_onResize().add(self._hx___parentResized)
		elif ((not size) and (not position)):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:831
			self._hx___listeningParentResize = False
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:832
			self.get_parent().get_onResize().remove(self._hx___parentResized)

	def _hx___initializeSelf(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:842
		if (self._hx___offset is not None):
			self.backend.widgetOffsetChanged()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:843
		if (self._hx___origin is not None):
			self.backend.widgetOriginChanged()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:844
		if ((self._hx___width._hx___value != 0) or (not ((self._hx___height._hx___value != 0)))):
			self.backend.widgetResized()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:847
		if ((((self._hx___left._hx___value != 0) or self._hx___right.selected) or ((self._hx___top._hx___value != 0))) or self._hx___bottom.selected):
			self.backend.widgetMoved()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:850
		if (self.rotation != 0):
			self.backend.widgetRotated()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:851
		if (self.scaleX != 1):
			self.backend.widgetScaledX()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:852
		if (self.scaleY != 1):
			self.backend.widgetScaledY()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:853
		if (self.alpha != 1):
			self.backend.widgetAlphaChanged()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:854
		if (not self.visible):
			self.backend.widgetVisibilityChanged()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:855
		if (not self.overflow):
			self.backend.widgetOverflowChanged()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:856
		if (self._hx___skin is not None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:857
			self.get_skin().refresh()
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:858
			self.backend.widgetSkinChanged()

	def _hx___initializeChildren(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:869
		_g1 = 0
		_g = self.numChildren
		while (_g1 < _g):
			i = _g1
			_g1 = (_g1 + 1)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:870
			self.getChildAt(i).initialize()

	def set_rotation(self,rotation):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:880
		self.rotation = rotation
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:881
		if self.initialized:
			self.backend.widgetRotated()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:883
		return rotation

	def set_scaleX(self,scaleX):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:892
		self.scaleX = scaleX
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:893
		if self.initialized:
			self.backend.widgetScaledX()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:895
		return scaleX

	def set_scaleY(self,scaleY):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:904
		self.scaleY = scaleY
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:905
		if self.initialized:
			self.backend.widgetScaledY()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:907
		return scaleY

	def set_alpha(self,alpha):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:916
		self.alpha = alpha
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:917
		if self.initialized:
			self.backend.widgetAlphaChanged()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:919
		return alpha

	def set_visible(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:928
		if (self.visible != value):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:929
			self.visible = value
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:930
			if self.initialized:
				self.backend.widgetVisibilityChanged()
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:932
			if ((self.get_parent() is not None) and self.get_parent().initialized):
				if ((self.get_parent().get_layout() is not None) and self.get_parent().get_layout().autoArrange):
					self.get_parent().get_layout().arrangeChildren()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:939
		return value

	def set_skin(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:948
		if (self._hx___skin == value):
			return value
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:950
		if (self._hx___skin is not None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:951
			self._hx___skin.removed()
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:952
			if self.initialized:
				self.backend.widgetSkinChanged()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:955
		self._hx___skin = value
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:956
		if (self._hx___skin is not None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:957
			self._hx___skin.usedBy(self)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:958
			if self.initialized:
				self.backend.widgetSkinChanged()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:961
		return value

	def set_layout(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:970
		if (self._hx___layout is not None):
			self._hx___layout.removed()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:971
		self._hx___layout = value
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:972
		if (self._hx___layout is not None):
			self._hx___layout.usedBy(self)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:974
		return value

	def set_style(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:983
		self.style = value
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:984
		if ((self.style is not None) and ((sx_Sx.theme is not None))):
			sx_Sx.theme.apply(self)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:986
		return value

	def get_origin(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:995
		if (self._hx___origin is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:996
			self._hx___origin = sx_properties_metric_Offset(self.get_width, self.get_height)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:997
			self._hx___origin.onChange.add(self._hx___originChanged)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1000
		return self._hx___origin

	def get_offset(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1009
		if (self._hx___offset is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1010
			self._hx___offset = sx_properties_metric_Offset(self.get_width, self.get_height)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1011
			self._hx___offset.onChange.add(self._hx___offsetChanged)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1014
		return self._hx___offset

	def set___parent(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1023
		if (self._hx___listeningParentResize and ((self.get_parent() is not None))):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1024
			self._hx___listeningParentResize = False
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1025
			self.get_parent().get_onResize().remove(self._hx___parentResized)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1028
		self._hx___parent = value
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1029
		if (self._hx___parent is not None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1030
			self._hx___updateParentResizeListener()
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1031
			if (self._hx___parent.initialized and (not self.initialized)):
				self.initialize()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1036
		return value

	def set_enabled(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1045
		if (self.enabled != value):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1046
			self.enabled = value
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1047
			if self.enabled:
				if ((self._hx___onEnable is not None) and ((len(self._hx___onEnable._hx___listeners) > 0))):
					if self._hx___onEnable._hx___listenersInUse:
						# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
						# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
						_g = 0
						_g1 = self._hx___onEnable._hx___listeners
						while (_g < len(_g1)):
							listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
							_g = (_g + 1)
							listener(self)
						# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
						False
					else:
						# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
						self._hx___onEnable._hx___listenersInUse = True
						# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
						# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
						_g2 = 0
						_g11 = self._hx___onEnable._hx___listeners
						while (_g2 < len(_g11)):
							listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
							_g2 = (_g2 + 1)
							listener1(self)
						# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
						self._hx___onEnable._hx___listenersInUse = False
			elif ((self._hx___onDisable is not None) and ((len(self._hx___onDisable._hx___listeners) > 0))):
				if self._hx___onDisable._hx___listenersInUse:
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
					_g3 = 0
					_g12 = self._hx___onDisable._hx___listeners
					while (_g3 < len(_g12)):
						listener2 = (_g12[_g3] if _g3 >= 0 and _g3 < len(_g12) else None)
						_g3 = (_g3 + 1)
						listener2(self)
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
					False
				else:
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
					self._hx___onDisable._hx___listenersInUse = True
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
					_g4 = 0
					_g13 = self._hx___onDisable._hx___listeners
					while (_g4 < len(_g13)):
						listener3 = (_g13[_g4] if _g4 >= 0 and _g4 < len(_g13) else None)
						_g4 = (_g4 + 1)
						listener3(self)
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
					self._hx___onDisable._hx___listenersInUse = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1054
		return value

	def get_tween(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1063
		if (self._hx___tween is None):
			self._hx___tween = sx_tween_Tweener()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1067
		return self._hx___tween

	def set_overflow(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1076
		if (self.overflow != value):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1077
			self.overflow = value
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1078
			if self.initialized:
				self.backend.widgetOverflowChanged()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1081
		return value

	def set_arrangeable(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1090
		if (self.arrangeable != value):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1091
			self.arrangeable = value
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1092
			if ((self.get_parent() is not None) and self.get_parent().initialized):
				if ((self.get_parent().get_layout() is not None) and self.get_parent().get_layout().autoArrange):
					self.get_parent().get_layout().arrangeChildren()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1099
		return value

	def get_parent(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1104
		return self._hx___parent

	def get_width(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1105
		return self._hx___width

	def get_height(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1106
		return self._hx___height

	def get_left(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1107
		return self._hx___left

	def get_right(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1108
		return self._hx___right

	def get_top(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1109
		return self._hx___top

	def get_bottom(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1110
		return self._hx___bottom

	def get_skin(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1111
		return self._hx___skin

	def get_layout(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1112
		return self._hx___layout

	def set_left(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1115
		self._hx___left.copyValueFrom(v)
		return self._hx___left

	def set_right(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1116
		self._hx___right.copyValueFrom(v)
		return self._hx___right

	def set_top(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1117
		self._hx___top.copyValueFrom(v)
		return self._hx___top

	def set_bottom(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1118
		self._hx___bottom.copyValueFrom(v)
		return self._hx___bottom

	def set_width(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1119
		return self._hx___width.copyValueFrom(v)

	def set_height(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1120
		return self._hx___height.copyValueFrom(v)

	def get_onResize(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1123
		if (self._hx___onResize is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1123
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1123
				def _hx_local_0():
					# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1123
					self._hx___onResize = sx_signals_Signal()
					return self._hx___onResize
				return _hx_local_0()
			return _hx_local_1()
		else:
			return self._hx___onResize

	def get_onMove(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1124
		if (self._hx___onMove is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1124
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1124
				def _hx_local_0():
					# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1124
					self._hx___onMove = sx_signals_Signal()
					return self._hx___onMove
				return _hx_local_0()
			return _hx_local_1()
		else:
			return self._hx___onMove

	def get_onInitialize(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1125
		if (self._hx___onInitialize is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1125
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1125
				def _hx_local_0():
					# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1125
					self._hx___onInitialize = sx_signals_Signal()
					return self._hx___onInitialize
				return _hx_local_0()
			return _hx_local_1()
		else:
			return self._hx___onInitialize

	def get_onDispose(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1126
		if (self._hx___onDispose is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1126
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1126
				def _hx_local_0():
					# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1126
					self._hx___onDispose = sx_signals_Signal()
					return self._hx___onDispose
				return _hx_local_0()
			return _hx_local_1()
		else:
			return self._hx___onDispose

	def get_onChildAdded(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1127
		if (self._hx___onChildAdded is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1127
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1127
				def _hx_local_0():
					# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1127
					self._hx___onChildAdded = sx_signals_Signal()
					return self._hx___onChildAdded
				return _hx_local_0()
			return _hx_local_1()
		else:
			return self._hx___onChildAdded

	def get_onChildRemoved(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1128
		if (self._hx___onChildRemoved is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1128
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1128
				def _hx_local_0():
					# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1128
					self._hx___onChildRemoved = sx_signals_Signal()
					return self._hx___onChildRemoved
				return _hx_local_0()
			return _hx_local_1()
		else:
			return self._hx___onChildRemoved

	def get_onEnable(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1129
		if (self._hx___onEnable is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1129
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1129
				def _hx_local_0():
					# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1129
					self._hx___onEnable = sx_signals_Signal()
					return self._hx___onEnable
				return _hx_local_0()
			return _hx_local_1()
		else:
			return self._hx___onEnable

	def get_onDisable(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1130
		if (self._hx___onDisable is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1130
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1130
				def _hx_local_0():
					# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1130
					self._hx___onDisable = sx_signals_Signal()
					return self._hx___onDisable
				return _hx_local_0()
			return _hx_local_1()
		else:
			return self._hx___onDisable

	def get_onParentChanged(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1131
		if (self._hx___onParentChanged is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1131
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1131
				def _hx_local_0():
					# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1131
					self._hx___onParentChanged = sx_signals_Signal()
					return self._hx___onParentChanged
				return _hx_local_0()
			return _hx_local_1()
		else:
			return self._hx___onParentChanged

	def get_onPointerPress(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1132
		if (self._hx___onPointerPress is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1132
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1132
				def _hx_local_0():
					# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1132
					self._hx___onPointerPress = sx_signals_Signal()
					return self._hx___onPointerPress
				return _hx_local_0()
			return _hx_local_1()
		else:
			return self._hx___onPointerPress

	def get_onPointerRelease(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1133
		if (self._hx___onPointerRelease is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1133
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1133
				def _hx_local_0():
					# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1133
					self._hx___onPointerRelease = sx_signals_Signal()
					return self._hx___onPointerRelease
				return _hx_local_0()
			return _hx_local_1()
		else:
			return self._hx___onPointerRelease

	def get_onPointerTap(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1134
		if (self._hx___onPointerTap is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1134
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1134
				def _hx_local_0():
					# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1134
					self._hx___onPointerTap = sx_signals_Signal()
					return self._hx___onPointerTap
				return _hx_local_0()
			return _hx_local_1()
		else:
			return self._hx___onPointerTap

	def get_onClick(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1135
		if (self._hx___onPointerTap is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1135
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1135
				def _hx_local_0():
					# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1135
					self._hx___onPointerTap = sx_signals_Signal()
					return self._hx___onPointerTap
				return _hx_local_0()
			return _hx_local_1()
		else:
			return self._hx___onPointerTap

	def get_onPointerMove(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1136
		if (self._hx___onPointerMove is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1136
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1136
				def _hx_local_0():
					# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1136
					self._hx___onPointerMove = sx_signals_Signal()
					return self._hx___onPointerMove
				return _hx_local_0()
			return _hx_local_1()
		else:
			return self._hx___onPointerMove

	def get_onPointerOver(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1137
		if (self._hx___onPointerOver is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1137
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1137
				def _hx_local_0():
					# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1137
					self._hx___onPointerOver = sx_signals_Signal()
					return self._hx___onPointerOver
				return _hx_local_0()
			return _hx_local_1()
		else:
			return self._hx___onPointerOver

	def get_onPointerOut(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1138
		if (self._hx___onPointerOut is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1138
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1138
				def _hx_local_0():
					# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx:1138
					self._hx___onPointerOut = sx_signals_Signal()
					return self._hx___onPointerOut
				return _hx_local_0()
			return _hx_local_1()
		else:
			return self._hx___onPointerOut

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.name = None
		_hx_o._hx___parent = None
		_hx_o.numChildren = None
		_hx_o._hx___left = None
		_hx_o._hx___right = None
		_hx_o._hx___top = None
		_hx_o._hx___bottom = None
		_hx_o._hx___origin = None
		_hx_o._hx___offset = None
		_hx_o._hx___width = None
		_hx_o._hx___height = None
		_hx_o.scaleX = None
		_hx_o.scaleY = None
		_hx_o.rotation = None
		_hx_o.alpha = None
		_hx_o.visible = None
		_hx_o.overflow = None
		_hx_o._hx___skin = None
		_hx_o._hx___layout = None
		_hx_o.arrangeable = None
		_hx_o.enabled = None
		_hx_o.style = None
		_hx_o.backend = None
		_hx_o.initialized = None
		_hx_o.disposed = None
		_hx_o._hx___tween = None
		_hx_o._hx___onResize = None
		_hx_o._hx___onMove = None
		_hx_o._hx___onChildAdded = None
		_hx_o._hx___onChildRemoved = None
		_hx_o._hx___onParentChanged = None
		_hx_o._hx___onEnable = None
		_hx_o._hx___onDisable = None
		_hx_o._hx___onPointerPress = None
		_hx_o._hx___onPointerRelease = None
		_hx_o._hx___onPointerTap = None
		_hx_o._hx___onPointerMove = None
		_hx_o._hx___onPointerOver = None
		_hx_o._hx___onPointerOut = None
		_hx_o._hx___onInitialize = None
		_hx_o._hx___onDispose = None
		_hx_o._hx___listeningParentResize = None
		_hx_o._hx___resizeCounter = None
sx_widgets_Widget._hx_class = sx_widgets_Widget


class Child(sx_widgets_Widget):
	_hx_class_name = "Child"
	_hx_fields = ["level1_initialized", "level1", "level2_initialized", "level2"]
	_hx_methods = ["destroyHml", "set_level1", "set_level2", "get_level2", "get_level1"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_widgets_Widget


	def __init__(self):
		# hml/gen/Child.hx:11
		self.level1_initialized = None
		# hml/gen/Child.hx:13
		self.level1 = None
		# hml/gen/Child.hx:15
		self.level2_initialized = None
		# hml/gen/Child.hx:17
		self.level2 = None
		# hml/gen/Child.hx:15
		self.level2_initialized = False
		# hml/gen/Child.hx:11
		self.level1_initialized = False
		# hml/gen/Child.hx:55
		super().__init__()
		# hml/gen/Child.hx:56
		self.addChild(self.get_level1())

	def destroyHml(self):
		pass

	def set_level1(self,value):
		# hml/gen/Child.hx:25
		self.level1_initialized = True
		# hml/gen/Child.hx:26
		def _hx_local_1():
			# hml/gen/Child.hx:26
			def _hx_local_0():
				# hml/gen/Child.hx:26
				self.level1 = value
				return self.level1
			return _hx_local_0()
		return _hx_local_1()

	def set_level2(self,value):
		# hml/gen/Child.hx:30
		self.level2_initialized = True
		# hml/gen/Child.hx:31
		def _hx_local_1():
			# hml/gen/Child.hx:31
			def _hx_local_0():
				# hml/gen/Child.hx:31
				self.level2 = value
				return self.level2
			return _hx_local_0()
		return _hx_local_1()

	def get_level2(self):
		# hml/gen/Child.hx:36
		if self.level2_initialized:
			return self.level2
		# hml/gen/Child.hx:37
		self.level2_initialized = True
		# hml/gen/Child.hx:38
		self.set_level2(sx_widgets_Widget())
		# hml/gen/Child.hx:39
		res = self.level2
		# hml/gen/Child.hx:40
		return res

	def get_level1(self):
		# hml/gen/Child.hx:45
		if self.level1_initialized:
			return self.level1
		# hml/gen/Child.hx:46
		self.level1_initialized = True
		# hml/gen/Child.hx:47
		self.set_level1(sx_widgets_Widget())
		# hml/gen/Child.hx:48
		res = self.level1
		# hml/gen/Child.hx:49
		res.addChild(self.get_level2())
		# hml/gen/Child.hx:50
		return res

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.level1_initialized = None
		_hx_o.level2_initialized = None
Child._hx_class = Child


class hunit_TestCase:
	_hx_class_name = "hunit.TestCase"
	_hx_fields = ["match", "assert", "__hu_state"]
	_hx_methods = ["setupTestCase", "setup", "tearDown", "tearDownTestCase", "expectException", "notice", "set_match", "set_assert"]
	_hx_statics = ["__rtti", "getMockData"]

	def __init__(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx:39
		self.match = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx:42
		self._hx_assert = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx:46
		self._hx___hu_state = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx:66
		self.set_match(hunit_match_MatchFactory())
		# /home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx:67
		self.set_assert(hunit_assert_AssertFactory(self))

	def setupTestCase(self):
		pass

	def setup(self):
		pass

	def tearDown(self):
		pass

	def tearDownTestCase(self):
		pass

	def expectException(self,match = None,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx:175
		if (match is None):
			match = hunit_match_AnyMatch()
		# /home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx:179
		self._hx___hu_state.set_expectedException(hunit_exceptions_ExpectedExceptionData(match, pos))

	def notice(self,msg,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx:189
		self._hx___hu_state.notice(msg,pos)

	def set_match(self,match):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx:200
		if (self.match is not None):
			raise hunit_exceptions_InvalidTestException("Matcher factory already set", _hx_AnonObject({'fileName': "TestCase.hx", 'lineNumber': 201, 'className': "hunit.TestCase", 'methodName': "set_match"}))
		# /home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx:204
		def _hx_local_1():
			# /home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx:204
			def _hx_local_0():
				# /home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx:204
				self.match = match
				return self.match
			return _hx_local_0()
		return _hx_local_1()

	def set_assert(self,_hx_assert):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx:215
		if (self._hx_assert is not None):
			raise hunit_exceptions_InvalidTestException("Assertion factory already set", _hx_AnonObject({'fileName': "TestCase.hx", 'lineNumber': 216, 'className': "hunit.TestCase", 'methodName': "set_assert"}))
		# /home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx:219
		def _hx_local_1():
			# /home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx:219
			def _hx_local_0():
				# /home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx:219
				self._hx_assert = _hx_assert
				return self._hx_assert
			return _hx_local_0()
		return _hx_local_1()

	@staticmethod
	def getMockData(mock):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestCase.hx:56
		return mock.__hu_mock__

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.match = None
		_hx_o._hx_assert = None
		_hx_o._hx___hu_state = None
hunit_TestCase._hx_class = hunit_TestCase


class ChildWidgetNodeTest(hunit_TestCase):
	_hx_class_name = "ChildWidgetNodeTest"
	_hx_fields = []
	_hx_methods = ["childWidgetNode"]
	_hx_statics = ["__meta__", "__rtti"]
	_hx_interfaces = []
	_hx_super = hunit_TestCase


	def __init__(self):
		# src/ChildWidgetNodeTest.hx:12
		super().__init__()

	def childWidgetNode(self):
		# src/ChildWidgetNodeTest.hx:18
		root = Child()
		# src/ChildWidgetNodeTest.hx:19
		level1 = root.get_level1()
		# src/ChildWidgetNodeTest.hx:20
		level2 = root.get_level2()
		# src/ChildWidgetNodeTest.hx:22
		self._hx_assert.equal(level1,level2.get_parent(),None,_hx_AnonObject({'fileName': "ChildWidgetNodeTest.hx", 'lineNumber': 22, 'className': "ChildWidgetNodeTest", 'methodName': "childWidgetNode"}))
		# src/ChildWidgetNodeTest.hx:23
		self._hx_assert.equal(root,level1.get_parent(),None,_hx_AnonObject({'fileName': "ChildWidgetNodeTest.hx", 'lineNumber': 23, 'className': "ChildWidgetNodeTest", 'methodName': "childWidgetNode"}))

	@staticmethod
	def _hx_empty_init(_hx_o):		pass
ChildWidgetNodeTest._hx_class = ChildWidgetNodeTest


class Class:
	_hx_class_name = "Class"
Class._hx_class = Class


class EReg:
	_hx_class_name = "EReg"
	_hx_fields = ["pattern", "matchObj", "global"]
	_hx_methods = ["replace"]

	def __init__(self,r,opt):
		# /usr/lib/haxe/std/python/_std/EReg.hx:38
		self.pattern = None
		# /usr/lib/haxe/std/python/_std/EReg.hx:39
		self.matchObj = None
		# /usr/lib/haxe/std/python/_std/EReg.hx:40
		self._hx_global = None
		# /usr/lib/haxe/std/python/_std/EReg.hx:43
		self._hx_global = False
		# /usr/lib/haxe/std/python/_std/EReg.hx:44
		options = 0
		# /usr/lib/haxe/std/python/_std/EReg.hx:45
		# /usr/lib/haxe/std/python/_std/EReg.hx:45
		_g1 = 0
		_g = len(opt)
		while (_g1 < _g):
			i = _g1
			_g1 = (_g1 + 1)
			# /usr/lib/haxe/std/python/_std/EReg.hx:46
			c = None
			if (i >= len(opt)):
				c = -1
			else:
				c = ord(opt[i])
			# /usr/lib/haxe/std/python/_std/EReg.hx:47
			if (c == 109):
				options = (options | python_lib_Re.M)
			# /usr/lib/haxe/std/python/_std/EReg.hx:48
			if (c == 105):
				options = (options | python_lib_Re.I)
			# /usr/lib/haxe/std/python/_std/EReg.hx:49
			if (c == 115):
				options = (options | python_lib_Re.S)
			# /usr/lib/haxe/std/python/_std/EReg.hx:50
			if (c == 117):
				options = (options | python_lib_Re.U)
			# /usr/lib/haxe/std/python/_std/EReg.hx:51
			if (c == 103):
				self._hx_global = True
		# /usr/lib/haxe/std/python/_std/EReg.hx:53
		self.pattern = python_lib_Re.compile(r,options)

	def replace(self,s,by):
		# /usr/lib/haxe/std/python/_std/EReg.hx:207
		by1 = None
		_this = by.split("$$")
		by1 = "_hx_#repl#__".join([python_Boot.toString1(x1,'') for x1 in _this])
		# /usr/lib/haxe/std/python/_std/EReg.hx:208
		def _hx_local_0(x):
			# /usr/lib/haxe/std/python/_std/EReg.hx:209
			res = by1
			# /usr/lib/haxe/std/python/_std/EReg.hx:210
			g = x.groups()
			# /usr/lib/haxe/std/python/_std/EReg.hx:211
			# /usr/lib/haxe/std/python/_std/EReg.hx:211
			_g1 = 0
			_g = len(g)
			while (_g1 < _g):
				i = _g1
				_g1 = (_g1 + 1)
				# /usr/lib/haxe/std/python/_std/EReg.hx:213
				# /usr/lib/haxe/std/python/_std/EReg.hx:213
				_this1 = None
				delimiter = ("$" + HxOverrides.stringOrNull(str((i + 1))))
				if (delimiter == ""):
					_this1 = list(res)
				else:
					_this1 = res.split(delimiter)
				res = g[i].join([python_Boot.toString1(x1,'') for x1 in _this1])
			# /usr/lib/haxe/std/python/_std/EReg.hx:215
			# /usr/lib/haxe/std/python/_std/EReg.hx:215
			_this2 = res.split("_hx_#repl#__")
			res = "$".join([python_Boot.toString1(x1,'') for x1 in _this2])
			# /usr/lib/haxe/std/python/_std/EReg.hx:216
			return res
		replace = _hx_local_0
		# /usr/lib/haxe/std/python/_std/EReg.hx:218
		return python_lib_Re.sub(self.pattern,replace,s,(0 if (self._hx_global) else 1))

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.pattern = None
		_hx_o.matchObj = None
		_hx_o._hx_global = None
EReg._hx_class = EReg


class EnumValue:
	_hx_class_name = "EnumValue"
EnumValue._hx_class = EnumValue


class _Exception_HException(Exception):
	_hx_class_name = "_Exception.HException"
	_hx_fields = ["message", "pos", "stack"]
	_hx_methods = ["truncateStack", "stringStack", "toString", "buildStack"]
	_hx_statics = ["wrap", "processCallStackOnCreation"]
	_hx_interfaces = []
	_hx_super = Exception


	def __init__(self,message,pos = None):
		# /home/alex/Work/HaXe/exception/src/Exception.hx:26
		self.message = None
		# /home/alex/Work/HaXe/exception/src/Exception.hx:28
		self.pos = None
		# /home/alex/Work/HaXe/exception/src/Exception.hx:30
		self.stack = None
		# /home/alex/Work/HaXe/exception/src/Exception.hx:71
		super().__init__()
		# /home/alex/Work/HaXe/exception/src/Exception.hx:73
		self.message = message
		# /home/alex/Work/HaXe/exception/src/Exception.hx:74
		self.pos = pos
		# /home/alex/Work/HaXe/exception/src/Exception.hx:77
		self.stack = self.buildStack(haxe_CallStack.callStack())

	def truncateStack(self,pos = None,count = 0):
		# /home/alex/Work/HaXe/exception/src/Exception.hx:89
		if (count is None):
			count = 0
		# /home/alex/Work/HaXe/exception/src/Exception.hx:94
		if (pos is not None):
			self.stack = exception_StackTools.truncate(self.stack,pos)
		# /home/alex/Work/HaXe/exception/src/Exception.hx:98
		if (count > 0):
			self.stack = self.stack[count:None]

	def stringStack(self):
		# /home/alex/Work/HaXe/exception/src/Exception.hx:111
		return haxe_CallStack.toString(self.stack)

	def toString(self):
		# /home/alex/Work/HaXe/exception/src/Exception.hx:121
		className = Type.getClassName(Type.getClass(self))
		# /home/alex/Work/HaXe/exception/src/Exception.hx:122
		position = None
		if (self.pos is None):
			position = "unknown position"
		else:
			position = ((HxOverrides.stringOrNull(self.pos.fileName) + ":") + Std.string(self.pos.lineNumber))
		# /home/alex/Work/HaXe/exception/src/Exception.hx:124
		msg = ((((("" + ("null" if className is None else className)) + ": ") + HxOverrides.stringOrNull(self.message)) + "\n\tCreated at ") + ("null" if position is None else position))
		# /home/alex/Work/HaXe/exception/src/Exception.hx:125
		msg = (("null" if msg is None else msg) + HxOverrides.stringOrNull(StringTools.replace(haxe_CallStack.toString(self.stack),"\n","\n\t")))
		# /home/alex/Work/HaXe/exception/src/Exception.hx:127
		return msg

	def buildStack(self,stack):
		# /home/alex/Work/HaXe/exception/src/Exception.hx:137
		stack1 = exception_StackTools.truncate(stack,self.pos)
		# /home/alex/Work/HaXe/exception/src/Exception.hx:139
		return _Exception_HException.processCallStackOnCreation(stack1)

	@staticmethod
	def wrap(e,pos = None):
		# /home/alex/Work/HaXe/exception/src/Exception.hx:40
		if Std._hx_is(e,_Exception_HException):
			return e
		# /home/alex/Work/HaXe/exception/src/Exception.hx:42
		exceptionStack = haxe_CallStack.exceptionStack()
		# /home/alex/Work/HaXe/exception/src/Exception.hx:43
		exception = _Exception_HException(Std.string(e), pos)
		# /home/alex/Work/HaXe/exception/src/Exception.hx:46
		if (len(exceptionStack) > 0):
			exception.stack = exceptionStack
		# /home/alex/Work/HaXe/exception/src/Exception.hx:50
		return exception

	@staticmethod
	def processCallStackOnCreation(stack):
		# /home/alex/Work/HaXe/exception/src/Exception.hx:60
		return stack

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.message = None
		_hx_o.pos = None
		_hx_o.stack = None
_Exception_HException._hx_class = _Exception_HException


class HUnit:
	_hx_class_name = "HUnit"
	_hx_statics = ["main", "processExceptionStack"]

	@staticmethod
	def main():
		# /home/alex/Work/HaXe/hunit/src/HUnit.hx:25
		_Exception_HException.processCallStackOnCreation = HUnit.processExceptionStack
		# /home/alex/Work/HaXe/hunit/src/HUnit.hx:27
		suite = hunit_TestSuite()
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestMacroUtils.hx:64
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestMacroUtils.hx:61
		suite.add(SignalValueTest())
		suite.add(MetricValueTest())
		suite.add(ChildWidgetNodeTest())
		# /home/alex/Work/HaXe/hunit/src/HUnit.hx:29
		suite.run()

	@staticmethod
	def processExceptionStack(stack):
		# /home/alex/Work/HaXe/hunit/src/HUnit.hx:60
		count = 1
		# /home/alex/Work/HaXe/hunit/src/HUnit.hx:63
		return stack[0:-count]
HUnit._hx_class = HUnit


class List:
	_hx_class_name = "List"
	_hx_fields = ["h", "q", "length"]
	_hx_methods = ["add", "last", "remove", "iterator"]

	def __init__(self):
		# /usr/lib/haxe/std/List.hx:29
		self.h = None
		# /usr/lib/haxe/std/List.hx:30
		self.q = None
		# /usr/lib/haxe/std/List.hx:35
		self.length = None
		# /usr/lib/haxe/std/List.hx:41
		self.length = 0

	def add(self,item):
		# /usr/lib/haxe/std/List.hx:50
		x = [item]
		# /usr/lib/haxe/std/List.hx:51
		if (self.h is None):
			self.h = x
		else:
			python_internal_ArrayImpl._set(self.q, 1, x)
		# /usr/lib/haxe/std/List.hx:55
		self.q = x
		# /usr/lib/haxe/std/List.hx:56
		# /usr/lib/haxe/std/List.hx:56
		_hx_local_0 = self
		_hx_local_1 = _hx_local_0.length
		_hx_local_0.length = (_hx_local_1 + 1)
		_hx_local_1

	def last(self):
		# /usr/lib/haxe/std/List.hx:91
		if (self.q is None):
			return None
		else:
			return (self.q[0] if 0 < len(self.q) else None)

	def remove(self,v):
		# /usr/lib/haxe/std/List.hx:139
		prev = None
		# /usr/lib/haxe/std/List.hx:140
		l = self.h
		# /usr/lib/haxe/std/List.hx:141
		while (l is not None):
			# /usr/lib/haxe/std/List.hx:142
			if ((l[0] if 0 < len(l) else None) == v):
				# /usr/lib/haxe/std/List.hx:143
				if (prev is None):
					self.h = (l[1] if 1 < len(l) else None)
				else:
					python_internal_ArrayImpl._set(prev, 1, (l[1] if 1 < len(l) else None))
				# /usr/lib/haxe/std/List.hx:147
				if (self.q is l):
					self.q = prev
				# /usr/lib/haxe/std/List.hx:149
				# /usr/lib/haxe/std/List.hx:149
				_hx_local_0 = self
				_hx_local_1 = _hx_local_0.length
				_hx_local_0.length = (_hx_local_1 - 1)
				_hx_local_1
				# /usr/lib/haxe/std/List.hx:150
				return True
			# /usr/lib/haxe/std/List.hx:152
			prev = l
			# /usr/lib/haxe/std/List.hx:153
			l = (l[1] if 1 < len(l) else None)
		# /usr/lib/haxe/std/List.hx:155
		return False

	def iterator(self):
		# /usr/lib/haxe/std/List.hx:162
		return _List_ListIterator(self.h)

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.h = None
		_hx_o.q = None
		_hx_o.length = None
List._hx_class = List


class _List_ListIterator:
	_hx_class_name = "_List.ListIterator"
	_hx_fields = ["head", "val"]
	_hx_methods = ["hasNext", "next"]

	def __init__(self,head):
		# /usr/lib/haxe/std/List.hx:241
		self.head = None
		# /usr/lib/haxe/std/List.hx:242
		self.val = None
		# /usr/lib/haxe/std/List.hx:245
		self.head = head
		# /usr/lib/haxe/std/List.hx:246
		self.val = None

	def hasNext(self):
		# /usr/lib/haxe/std/List.hx:250
		return (self.head is not None)

	def next(self):
		# /usr/lib/haxe/std/List.hx:254
		self.val = (self.head[0] if 0 < len(self.head) else None)
		# /usr/lib/haxe/std/List.hx:255
		self.head = (self.head[1] if 1 < len(self.head) else None)
		# /usr/lib/haxe/std/List.hx:256
		return self.val

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.head = None
		_hx_o.val = None
_List_ListIterator._hx_class = _List_ListIterator


class Metric(sx_widgets_Widget):
	_hx_class_name = "Metric"
	_hx_fields = ["dips_initialized", "dips", "pixels_initialized", "pixels", "percents_initialized", "percents"]
	_hx_methods = ["destroyHml", "set_dips", "get_dips", "set_pixels", "get_pixels", "set_percents", "get_percents"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_widgets_Widget


	def __init__(self):
		# hml/gen/Metric.hx:11
		self.dips_initialized = None
		# hml/gen/Metric.hx:13
		self.dips = None
		# hml/gen/Metric.hx:15
		self.pixels_initialized = None
		# hml/gen/Metric.hx:17
		self.pixels = None
		# hml/gen/Metric.hx:19
		self.percents_initialized = None
		# hml/gen/Metric.hx:21
		self.percents = None
		# hml/gen/Metric.hx:19
		self.percents_initialized = False
		# hml/gen/Metric.hx:15
		self.pixels_initialized = False
		# hml/gen/Metric.hx:11
		self.dips_initialized = False
		# hml/gen/Metric.hx:78
		super().__init__()
		# hml/gen/Metric.hx:79
		self.addChild(self.get_dips())
		# hml/gen/Metric.hx:80
		self.addChild(self.get_pixels())
		# hml/gen/Metric.hx:81
		self.addChild(self.get_percents())

	def destroyHml(self):
		pass

	def set_dips(self,value):
		# hml/gen/Metric.hx:29
		self.dips_initialized = True
		# hml/gen/Metric.hx:30
		def _hx_local_1():
			# hml/gen/Metric.hx:30
			def _hx_local_0():
				# hml/gen/Metric.hx:30
				self.dips = value
				return self.dips
			return _hx_local_0()
		return _hx_local_1()

	def get_dips(self):
		# hml/gen/Metric.hx:35
		if self.dips_initialized:
			return self.dips
		# hml/gen/Metric.hx:36
		self.dips_initialized = True
		# hml/gen/Metric.hx:37
		self.set_dips(sx_widgets_Widget())
		# hml/gen/Metric.hx:38
		res = self.dips
		# hml/gen/Metric.hx:40
		res.get_left().set_dip(10)
		# hml/gen/Metric.hx:41
		return res

	def set_pixels(self,value):
		# hml/gen/Metric.hx:45
		self.pixels_initialized = True
		# hml/gen/Metric.hx:46
		def _hx_local_1():
			# hml/gen/Metric.hx:46
			def _hx_local_0():
				# hml/gen/Metric.hx:46
				self.pixels = value
				return self.pixels
			return _hx_local_0()
		return _hx_local_1()

	def get_pixels(self):
		# hml/gen/Metric.hx:51
		if self.pixels_initialized:
			return self.pixels
		# hml/gen/Metric.hx:52
		self.pixels_initialized = True
		# hml/gen/Metric.hx:53
		self.set_pixels(sx_widgets_Widget())
		# hml/gen/Metric.hx:54
		res = self.pixels
		# hml/gen/Metric.hx:56
		res.get_left().set_px(10)
		# hml/gen/Metric.hx:57
		return res

	def set_percents(self,value):
		# hml/gen/Metric.hx:61
		self.percents_initialized = True
		# hml/gen/Metric.hx:62
		def _hx_local_1():
			# hml/gen/Metric.hx:62
			def _hx_local_0():
				# hml/gen/Metric.hx:62
				self.percents = value
				return self.percents
			return _hx_local_0()
		return _hx_local_1()

	def get_percents(self):
		# hml/gen/Metric.hx:67
		if self.percents_initialized:
			return self.percents
		# hml/gen/Metric.hx:68
		self.percents_initialized = True
		# hml/gen/Metric.hx:69
		self.set_percents(sx_widgets_Widget())
		# hml/gen/Metric.hx:70
		res = self.percents
		# hml/gen/Metric.hx:72
		res.get_left().set_pct(10)
		# hml/gen/Metric.hx:73
		return res

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.dips_initialized = None
		_hx_o.pixels_initialized = None
		_hx_o.percents_initialized = None
Metric._hx_class = Metric


class MetricValueTest(hunit_TestCase):
	_hx_class_name = "MetricValueTest"
	_hx_fields = []
	_hx_methods = ["dip", "pixel", "pct"]
	_hx_statics = ["__meta__", "__rtti"]
	_hx_interfaces = []
	_hx_super = hunit_TestCase


	def __init__(self):
		# src/MetricValueTest.hx:11
		super().__init__()

	def dip(self):
		# src/MetricValueTest.hx:17
		ui = Metric()
		# src/MetricValueTest.hx:19
		self._hx_assert.equal("dip",ui.get_dips().get_left().units,None,_hx_AnonObject({'fileName': "MetricValueTest.hx", 'lineNumber': 19, 'className': "MetricValueTest", 'methodName': "dip"}))

	def pixel(self):
		# src/MetricValueTest.hx:26
		ui = Metric()
		# src/MetricValueTest.hx:28
		self._hx_assert.equal("px",ui.get_pixels().get_left().units,None,_hx_AnonObject({'fileName': "MetricValueTest.hx", 'lineNumber': 28, 'className': "MetricValueTest", 'methodName': "pixel"}))

	def pct(self):
		# src/MetricValueTest.hx:35
		ui = Metric()
		# src/MetricValueTest.hx:37
		self._hx_assert.equal("pct",ui.get_percents().get_left().units,None,_hx_AnonObject({'fileName': "MetricValueTest.hx", 'lineNumber': 37, 'className': "MetricValueTest", 'methodName': "pct"}))

	@staticmethod
	def _hx_empty_init(_hx_o):		pass
MetricValueTest._hx_class = MetricValueTest


class Reflect:
	_hx_class_name = "Reflect"
	_hx_statics = ["field", "setField", "getProperty", "setProperty", "callMethod", "isFunction", "compareMethods"]

	@staticmethod
	def field(o,field):
		# /usr/lib/haxe/std/python/_std/Reflect.hx:44
		return python_Boot.field(o,field)

	@staticmethod
	def setField(o,field,value):
		# /usr/lib/haxe/std/python/_std/Reflect.hx:49
		setattr(o,(("_hx_" + field) if (field in python_Boot.keywords) else (("_hx_" + field) if (((((len(field) > 2) and ((ord(field[0]) == 95))) and ((ord(field[1]) == 95))) and ((ord(field[(len(field) - 1)]) != 95)))) else field)),value)

	@staticmethod
	def getProperty(o,field):
		# /usr/lib/haxe/std/python/_std/Reflect.hx:54
		if (o is None):
			return None
		# /usr/lib/haxe/std/python/_std/Reflect.hx:57
		if field in python_Boot.keywords:
			field = ("_hx_" + field)
		elif ((((len(field) > 2) and ((ord(field[0]) == 95))) and ((ord(field[1]) == 95))) and ((ord(field[(len(field) - 1)]) != 95))):
			field = ("_hx_" + field)
		else:
			field = field
		# /usr/lib/haxe/std/python/_std/Reflect.hx:58
		tmp = Reflect.field(o,("get_" + ("null" if field is None else field)))
		# /usr/lib/haxe/std/python/_std/Reflect.hx:59
		if ((tmp is not None) and callable(tmp)):
			return tmp()
		else:
			return Reflect.field(o,field)

	@staticmethod
	def setProperty(o,field,value):
		# /usr/lib/haxe/std/python/_std/Reflect.hx:67
		field1 = None
		if field in python_Boot.keywords:
			field1 = ("_hx_" + field)
		elif ((((len(field) > 2) and ((ord(field[0]) == 95))) and ((ord(field[1]) == 95))) and ((ord(field[(len(field) - 1)]) != 95))):
			field1 = ("_hx_" + field)
		else:
			field1 = field
		# /usr/lib/haxe/std/python/_std/Reflect.hx:68
		if hasattr(o,("set_" + ("null" if field1 is None else field1))):
			getattr(o,("set_" + ("null" if field1 is None else field1)))(value)
		else:
			setattr(o,field1,value)

	@staticmethod
	def callMethod(o,func,args):
		# /usr/lib/haxe/std/python/_std/Reflect.hx:76
		if callable(func):
			return func(*args)
		else:
			return None

	@staticmethod
	def isFunction(f):
		# /usr/lib/haxe/std/python/_std/Reflect.hx:86
		return ((python_lib_Inspect.isfunction(f) or python_lib_Inspect.ismethod(f)) or hasattr(f,"func_code"))

	@staticmethod
	def compareMethods(f1,f2):
		# /usr/lib/haxe/std/python/_std/Reflect.hx:97
		if HxOverrides.eq(f1,f2):
			return True
		# /usr/lib/haxe/std/python/_std/Reflect.hx:99
		if ((not Reflect.isFunction(f1)) or (not Reflect.isFunction(f2))):
			return False
		# /usr/lib/haxe/std/python/_std/Reflect.hx:102
		return False
Reflect._hx_class = Reflect


class Signal(sx_widgets_Widget):
	_hx_class_name = "Signal"
	_hx_fields = ["simpleClicked_initialized", "simpleClicked", "closureBlockClicked_initialized", "closureBlockClicked", "closureSingleExprClicked_initialized", "closureSingleExprClicked", "simple_initialized", "simple", "closureBlockBody_initialized", "closureBlockBody", "closureSingleExpr_initialized", "closureSingleExpr"]
	_hx_methods = ["destroyHml", "set_simpleClicked", "get_simpleClicked", "set_closureBlockClicked", "get_closureBlockClicked", "set_closureSingleExprClicked", "get_closureSingleExprClicked", "set_simple", "get_simple", "set_closureBlockBody", "get_closureBlockBody", "set_closureSingleExpr", "get_closureSingleExpr"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_widgets_Widget


	def __init__(self):
		# hml/gen/Signal.hx:11
		self.simpleClicked_initialized = None
		# hml/gen/Signal.hx:13
		self.simpleClicked = None
		# hml/gen/Signal.hx:15
		self.closureBlockClicked_initialized = None
		# hml/gen/Signal.hx:17
		self.closureBlockClicked = None
		# hml/gen/Signal.hx:19
		self.closureSingleExprClicked_initialized = None
		# hml/gen/Signal.hx:21
		self.closureSingleExprClicked = None
		# hml/gen/Signal.hx:23
		self.simple_initialized = None
		# hml/gen/Signal.hx:25
		self.simple = None
		# hml/gen/Signal.hx:27
		self.closureBlockBody_initialized = None
		# hml/gen/Signal.hx:29
		self.closureBlockBody = None
		# hml/gen/Signal.hx:31
		self.closureSingleExpr_initialized = None
		# hml/gen/Signal.hx:33
		self.closureSingleExpr = None
		# hml/gen/Signal.hx:31
		self.closureSingleExpr_initialized = False
		# hml/gen/Signal.hx:27
		self.closureBlockBody_initialized = False
		# hml/gen/Signal.hx:23
		self.simple_initialized = False
		# hml/gen/Signal.hx:19
		self.closureSingleExprClicked_initialized = False
		# hml/gen/Signal.hx:15
		self.closureBlockClicked_initialized = False
		# hml/gen/Signal.hx:11
		self.simpleClicked_initialized = False
		# hml/gen/Signal.hx:138
		super().__init__()
		# hml/gen/Signal.hx:139
		self.addChild(self.get_simple())
		# hml/gen/Signal.hx:140
		self.addChild(self.get_closureBlockBody())
		# hml/gen/Signal.hx:141
		self.addChild(self.get_closureSingleExpr())

	def destroyHml(self):
		pass

	def set_simpleClicked(self,value):
		# hml/gen/Signal.hx:41
		self.simpleClicked_initialized = True
		# hml/gen/Signal.hx:42
		def _hx_local_1():
			# hml/gen/Signal.hx:42
			def _hx_local_0():
				# hml/gen/Signal.hx:42
				self.simpleClicked = value
				return self.simpleClicked
			return _hx_local_0()
		return _hx_local_1()

	def get_simpleClicked(self):
		# hml/gen/Signal.hx:47
		if self.simpleClicked_initialized:
			return self.simpleClicked
		# hml/gen/Signal.hx:48
		self.simpleClicked_initialized = True
		# hml/gen/Signal.hx:49
		self.set_simpleClicked(False)
		# hml/gen/Signal.hx:50
		res = self.simpleClicked
		# hml/gen/Signal.hx:51
		return res

	def set_closureBlockClicked(self,value):
		# hml/gen/Signal.hx:55
		self.closureBlockClicked_initialized = True
		# hml/gen/Signal.hx:56
		def _hx_local_1():
			# hml/gen/Signal.hx:56
			def _hx_local_0():
				# hml/gen/Signal.hx:56
				self.closureBlockClicked = value
				return self.closureBlockClicked
			return _hx_local_0()
		return _hx_local_1()

	def get_closureBlockClicked(self):
		# hml/gen/Signal.hx:61
		if self.closureBlockClicked_initialized:
			return self.closureBlockClicked
		# hml/gen/Signal.hx:62
		self.closureBlockClicked_initialized = True
		# hml/gen/Signal.hx:63
		self.set_closureBlockClicked(False)
		# hml/gen/Signal.hx:64
		res = self.closureBlockClicked
		# hml/gen/Signal.hx:65
		return res

	def set_closureSingleExprClicked(self,value):
		# hml/gen/Signal.hx:69
		self.closureSingleExprClicked_initialized = True
		# hml/gen/Signal.hx:70
		def _hx_local_1():
			# hml/gen/Signal.hx:70
			def _hx_local_0():
				# hml/gen/Signal.hx:70
				self.closureSingleExprClicked = value
				return self.closureSingleExprClicked
			return _hx_local_0()
		return _hx_local_1()

	def get_closureSingleExprClicked(self):
		# hml/gen/Signal.hx:75
		if self.closureSingleExprClicked_initialized:
			return self.closureSingleExprClicked
		# hml/gen/Signal.hx:76
		self.closureSingleExprClicked_initialized = True
		# hml/gen/Signal.hx:77
		self.set_closureSingleExprClicked(False)
		# hml/gen/Signal.hx:78
		res = self.closureSingleExprClicked
		# hml/gen/Signal.hx:79
		return res

	def set_simple(self,value):
		# hml/gen/Signal.hx:83
		self.simple_initialized = True
		# hml/gen/Signal.hx:84
		def _hx_local_1():
			# hml/gen/Signal.hx:84
			def _hx_local_0():
				# hml/gen/Signal.hx:84
				self.simple = value
				return self.simple
			return _hx_local_0()
		return _hx_local_1()

	def get_simple(self):
		# hml/gen/Signal.hx:87
		_g = self
		# hml/gen/Signal.hx:89
		if self.simple_initialized:
			return self.simple
		# hml/gen/Signal.hx:90
		self.simple_initialized = True
		# hml/gen/Signal.hx:91
		self.set_simple(sx_widgets_Widget())
		# hml/gen/Signal.hx:92
		res = self.simple
		# hml/gen/Signal.hx:95
		def _hx_local_0(_hx___0,_hx___1,_hx___2):
			# hml/gen/Signal.hx:95
			_g.set_simpleClicked(True)
		# hml/gen/Signal.hx:94
		res.get_onClick().add(_hx_local_0)
		# hml/gen/Signal.hx:97
		return res

	def set_closureBlockBody(self,value):
		# hml/gen/Signal.hx:101
		self.closureBlockBody_initialized = True
		# hml/gen/Signal.hx:102
		def _hx_local_1():
			# hml/gen/Signal.hx:102
			def _hx_local_0():
				# hml/gen/Signal.hx:102
				self.closureBlockBody = value
				return self.closureBlockBody
			return _hx_local_0()
		return _hx_local_1()

	def get_closureBlockBody(self):
		# hml/gen/Signal.hx:105
		_g = self
		# hml/gen/Signal.hx:107
		if self.closureBlockBody_initialized:
			return self.closureBlockBody
		# hml/gen/Signal.hx:108
		self.closureBlockBody_initialized = True
		# hml/gen/Signal.hx:109
		self.set_closureBlockBody(sx_widgets_Widget())
		# hml/gen/Signal.hx:110
		res = self.closureBlockBody
		# hml/gen/Signal.hx:113
		def _hx_local_0(processor,dispatcher,touchId):
			# hml/gen/Signal.hx:113
			_g.set_closureBlockClicked(True)
		# hml/gen/Signal.hx:112
		res.get_onClick().add(_hx_local_0)
		# hml/gen/Signal.hx:115
		return res

	def set_closureSingleExpr(self,value):
		# hml/gen/Signal.hx:119
		self.closureSingleExpr_initialized = True
		# hml/gen/Signal.hx:120
		def _hx_local_1():
			# hml/gen/Signal.hx:120
			def _hx_local_0():
				# hml/gen/Signal.hx:120
				self.closureSingleExpr = value
				return self.closureSingleExpr
			return _hx_local_0()
		return _hx_local_1()

	def get_closureSingleExpr(self):
		# hml/gen/Signal.hx:123
		_g = self
		# hml/gen/Signal.hx:125
		if self.closureSingleExpr_initialized:
			return self.closureSingleExpr
		# hml/gen/Signal.hx:126
		self.closureSingleExpr_initialized = True
		# hml/gen/Signal.hx:127
		self.set_closureSingleExpr(sx_widgets_Widget())
		# hml/gen/Signal.hx:128
		res = self.closureSingleExpr
		# hml/gen/Signal.hx:131
		def _hx_local_0(processor,dispatcher,touchId):
			# hml/gen/Signal.hx:131
			_g.set_closureSingleExprClicked(True)
		# hml/gen/Signal.hx:130
		res.get_onClick().add(_hx_local_0)
		# hml/gen/Signal.hx:133
		return res

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.simpleClicked_initialized = None
		_hx_o.closureBlockClicked_initialized = None
		_hx_o.closureSingleExprClicked_initialized = None
		_hx_o.simple_initialized = None
		_hx_o.closureBlockBody_initialized = None
		_hx_o.closureSingleExpr_initialized = None
Signal._hx_class = Signal


class SignalValueTest(hunit_TestCase):
	_hx_class_name = "SignalValueTest"
	_hx_fields = []
	_hx_methods = ["simple", "closureWithBlockBody", "closureWithSingleExprBody"]
	_hx_statics = ["__meta__", "__rtti"]
	_hx_interfaces = []
	_hx_super = hunit_TestCase


	def __init__(self):
		# src/SignalValueTest.hx:11
		super().__init__()

	def simple(self):
		# src/SignalValueTest.hx:17
		ui = Signal()
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
		if ((ui.get_simple().get_onClick() is not None) and ((len(ui.get_simple().get_onClick()._hx___listeners) > 0))):
			if ui.get_simple().get_onClick()._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				_g = 0
				_g1 = ui.get_simple().get_onClick()._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(ui.get_simple(),ui.get_simple(),-1)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
				False
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
				ui.get_simple().get_onClick()._hx___listenersInUse = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				_g2 = 0
				_g11 = ui.get_simple().get_onClick()._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(ui.get_simple(),ui.get_simple(),-1)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
				ui.get_simple().get_onClick()._hx___listenersInUse = False
		# src/SignalValueTest.hx:21
		self._hx_assert.isTrue(ui.get_simpleClicked(),None,_hx_AnonObject({'fileName': "SignalValueTest.hx", 'lineNumber': 21, 'className': "SignalValueTest", 'methodName': "simple"}))

	def closureWithBlockBody(self):
		# src/SignalValueTest.hx:28
		ui = Signal()
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
		if ((ui.get_closureBlockBody().get_onClick() is not None) and ((len(ui.get_closureBlockBody().get_onClick()._hx___listeners) > 0))):
			if ui.get_closureBlockBody().get_onClick()._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				_g = 0
				_g1 = ui.get_closureBlockBody().get_onClick()._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(ui.get_closureBlockBody(),ui.get_closureBlockBody(),-1)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
				False
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
				ui.get_closureBlockBody().get_onClick()._hx___listenersInUse = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				_g2 = 0
				_g11 = ui.get_closureBlockBody().get_onClick()._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(ui.get_closureBlockBody(),ui.get_closureBlockBody(),-1)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
				ui.get_closureBlockBody().get_onClick()._hx___listenersInUse = False
		# src/SignalValueTest.hx:32
		self._hx_assert.isTrue(ui.get_closureBlockClicked(),None,_hx_AnonObject({'fileName': "SignalValueTest.hx", 'lineNumber': 32, 'className': "SignalValueTest", 'methodName': "closureWithBlockBody"}))

	def closureWithSingleExprBody(self):
		# src/SignalValueTest.hx:39
		ui = Signal()
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
		if ((ui.get_closureSingleExpr().get_onClick() is not None) and ((len(ui.get_closureSingleExpr().get_onClick()._hx___listeners) > 0))):
			if ui.get_closureSingleExpr().get_onClick()._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				_g = 0
				_g1 = ui.get_closureSingleExpr().get_onClick()._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(ui.get_closureSingleExpr(),ui.get_closureSingleExpr(),-1)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
				False
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
				ui.get_closureSingleExpr().get_onClick()._hx___listenersInUse = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				_g2 = 0
				_g11 = ui.get_closureSingleExpr().get_onClick()._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(ui.get_closureSingleExpr(),ui.get_closureSingleExpr(),-1)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
				ui.get_closureSingleExpr().get_onClick()._hx___listenersInUse = False
		# src/SignalValueTest.hx:43
		self._hx_assert.isTrue(ui.get_closureSingleExprClicked(),None,_hx_AnonObject({'fileName': "SignalValueTest.hx", 'lineNumber': 43, 'className': "SignalValueTest", 'methodName': "closureWithSingleExprBody"}))

	@staticmethod
	def _hx_empty_init(_hx_o):		pass
SignalValueTest._hx_class = SignalValueTest


class Std:
	_hx_class_name = "Std"
	_hx_statics = ["is", "string", "parseInt", "shortenPossibleNumber", "parseFloat"]

	@staticmethod
	def _hx_is(v,t):
		# /usr/lib/haxe/std/python/_std/Std.hx:50
		if ((v is None) and ((t is None))):
			return False
		# /usr/lib/haxe/std/python/_std/Std.hx:53
		if (t is None):
			return False
		# /usr/lib/haxe/std/python/_std/Std.hx:57
		if (t == Dynamic):
			return True
		# /usr/lib/haxe/std/python/_std/Std.hx:60
		isBool = isinstance(v,bool)
		# /usr/lib/haxe/std/python/_std/Std.hx:62
		if ((t == Bool) and isBool):
			return True
		# /usr/lib/haxe/std/python/_std/Std.hx:65
		if ((((not isBool) and (not (t == Bool))) and (t == Int)) and isinstance(v,int)):
			return True
		# /usr/lib/haxe/std/python/_std/Std.hx:68
		vIsFloat = isinstance(v,float)
		# /usr/lib/haxe/std/python/_std/Std.hx:70
		def _hx_local_0():
			# /usr/lib/haxe/std/python/_std/Std.hx:70
			f = v
			return (((f != Math.POSITIVE_INFINITY) and ((f != Math.NEGATIVE_INFINITY))) and (not python_lib_Math.isnan(f)))
		def _hx_local_1():
			x = v
			def _hx_local_4():
				def _hx_local_3():
					_hx_local_2 = None
					try:
						_hx_local_2 = int(x)
					except Exception as _hx_e:
						_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
						e = _hx_e1
						_hx_local_2 = None
					return _hx_local_2
				return _hx_local_3()
			return _hx_local_4()
		if (((((((not isBool) and vIsFloat) and (t == Int)) and _hx_local_0()) and ((v == _hx_local_1()))) and ((v <= 2147483647))) and ((v >= -2147483648))):
			return True
		# /usr/lib/haxe/std/python/_std/Std.hx:75
		if (((not isBool) and (t == Float)) and isinstance(v,(float, int))):
			return True
		# /usr/lib/haxe/std/python/_std/Std.hx:79
		if (t == str):
			return isinstance(v,str)
		# /usr/lib/haxe/std/python/_std/Std.hx:82
		isEnumType = (t == Enum)
		# /usr/lib/haxe/std/python/_std/Std.hx:83
		if ((isEnumType and python_lib_Inspect.isclass(v)) and hasattr(v,"_hx_constructs")):
			return True
		# /usr/lib/haxe/std/python/_std/Std.hx:85
		if isEnumType:
			return False
		# /usr/lib/haxe/std/python/_std/Std.hx:87
		isClassType = (t == Class)
		# /usr/lib/haxe/std/python/_std/Std.hx:88
		if ((((isClassType and (not isinstance(v,Enum))) and python_lib_Inspect.isclass(v)) and hasattr(v,"_hx_class_name")) and (not hasattr(v,"_hx_constructs"))):
			return True
		# /usr/lib/haxe/std/python/_std/Std.hx:90
		if isClassType:
			return False
		# /usr/lib/haxe/std/python/_std/Std.hx:92
		def _hx_local_6():
			# /usr/lib/haxe/std/python/_std/Std.hx:92
			_hx_local_5 = None
			try:
				_hx_local_5 = isinstance(v,t)
			except Exception as _hx_e:
				_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
				e1 = _hx_e1
				_hx_local_5 = False
			return _hx_local_5
		if _hx_local_6():
			return True
		# /usr/lib/haxe/std/python/_std/Std.hx:96
		if python_lib_Inspect.isclass(t):
			# /usr/lib/haxe/std/python/_std/Std.hx:98
			loop = None
			loop1 = None
			# /usr/lib/haxe/std/python/_std/Std.hx:99
			def _hx_local_8(intf):
				# /usr/lib/haxe/std/python/_std/Std.hx:100
				f1 = None
				if hasattr(intf,"_hx_interfaces"):
					f1 = intf._hx_interfaces
				else:
					f1 = []
				# /usr/lib/haxe/std/python/_std/Std.hx:101
				if (f1 is not None):
					# /usr/lib/haxe/std/python/_std/Std.hx:102
					# /usr/lib/haxe/std/python/_std/Std.hx:102
					_g = 0
					while (_g < len(f1)):
						i = (f1[_g] if _g >= 0 and _g < len(f1) else None)
						_g = (_g + 1)
						# /usr/lib/haxe/std/python/_std/Std.hx:103
						if HxOverrides.eq(i,t):
							return True
						else:
							# /usr/lib/haxe/std/python/_std/Std.hx:106
							l = loop1(i)
							# /usr/lib/haxe/std/python/_std/Std.hx:107
							if l:
								return True
					# /usr/lib/haxe/std/python/_std/Std.hx:112
					return False
				else:
					return False
			# /usr/lib/haxe/std/python/_std/Std.hx:98
			loop1 = _hx_local_8
			loop = loop1
			# /usr/lib/haxe/std/python/_std/Std.hx:117
			currentClass = v.__class__
			# /usr/lib/haxe/std/python/_std/Std.hx:118
			while (currentClass is not None):
				# /usr/lib/haxe/std/python/_std/Std.hx:119
				if loop(currentClass):
					return True
				# /usr/lib/haxe/std/python/_std/Std.hx:122
				currentClass = python_Boot.getSuperClass(currentClass)
			# /usr/lib/haxe/std/python/_std/Std.hx:124
			return False
		else:
			return False

	@staticmethod
	def string(s):
		# /usr/lib/haxe/std/python/_std/Std.hx:133
		return python_Boot.toString1(s,"")

	@staticmethod
	def parseInt(x):
		# /usr/lib/haxe/std/python/_std/Std.hx:146
		if (x is None):
			return None
		# /usr/lib/haxe/std/python/_std/Std.hx:147
		try:
			return int(x)
		except Exception as _hx_e:
			_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
			e = _hx_e1
			try:
				# /usr/lib/haxe/std/python/_std/Std.hx:151
				prefix = None
				_this = HxString.substr(x,0,2)
				prefix = _this.lower()
				# /usr/lib/haxe/std/python/_std/Std.hx:153
				if (prefix == "0x"):
					return int(x,16)
				# /usr/lib/haxe/std/python/_std/Std.hx:156
				raise _HxException("fail")
			except Exception as _hx_e:
				_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
				e1 = _hx_e1
				# /usr/lib/haxe/std/python/_std/Std.hx:159
				r = None
				x1 = Std.parseFloat(x)
				try:
					r = int(x1)
				except Exception as _hx_e:
					_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
					e2 = _hx_e1
					r = None
				# /usr/lib/haxe/std/python/_std/Std.hx:161
				if (r is None):
					# /usr/lib/haxe/std/python/_std/Std.hx:162
					r1 = Std.shortenPossibleNumber(x)
					# /usr/lib/haxe/std/python/_std/Std.hx:163
					if (r1 != x):
						return Std.parseInt(r1)
					else:
						return None
				# /usr/lib/haxe/std/python/_std/Std.hx:169
				return r

	@staticmethod
	def shortenPossibleNumber(x):
		# /usr/lib/haxe/std/python/_std/Std.hx:176
		r = ""
		# /usr/lib/haxe/std/python/_std/Std.hx:177
		# /usr/lib/haxe/std/python/_std/Std.hx:177
		_g1 = 0
		_g = len(x)
		while (_g1 < _g):
			i = _g1
			_g1 = (_g1 + 1)
			# /usr/lib/haxe/std/python/_std/Std.hx:178
			c = None
			if ((i < 0) or ((i >= len(x)))):
				c = ""
			else:
				c = x[i]
			# /usr/lib/haxe/std/python/_std/Std.hx:179
			# /usr/lib/haxe/std/python/_std/Std.hx:179
			_g2 = HxString.charCodeAt(c,0)
			if (_g2 is not None):
				if (((((((((((_g2 == 46) or ((_g2 == 57))) or ((_g2 == 56))) or ((_g2 == 55))) or ((_g2 == 54))) or ((_g2 == 53))) or ((_g2 == 52))) or ((_g2 == 51))) or ((_g2 == 50))) or ((_g2 == 49))) or ((_g2 == 48))):
					r = (("null" if r is None else r) + ("null" if c is None else c))
				else:
					break
			else:
				break
		# /usr/lib/haxe/std/python/_std/Std.hx:194
		return r

	@staticmethod
	def parseFloat(x):
		# /usr/lib/haxe/std/python/_std/Std.hx:199
		try:
			return float(x)
		except Exception as _hx_e:
			_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
			e = _hx_e1
			# /usr/lib/haxe/std/python/_std/Std.hx:203
			if (x is not None):
				# /usr/lib/haxe/std/python/_std/Std.hx:204
				r1 = Std.shortenPossibleNumber(x)
				# /usr/lib/haxe/std/python/_std/Std.hx:205
				if (r1 != x):
					return Std.parseFloat(r1)
			# /usr/lib/haxe/std/python/_std/Std.hx:209
			return Math.NaN
Std._hx_class = Std


class Float:
	_hx_class_name = "Float"
Float._hx_class = Float


class Int:
	_hx_class_name = "Int"
Int._hx_class = Int


class Bool:
	_hx_class_name = "Bool"
Bool._hx_class = Bool


class Dynamic:
	_hx_class_name = "Dynamic"
Dynamic._hx_class = Dynamic


class StringBuf:
	_hx_class_name = "StringBuf"
	_hx_fields = ["b"]

	def __init__(self):
		# /usr/lib/haxe/std/python/_std/StringBuf.hx:48
		self.b = None
		# /usr/lib/haxe/std/python/_std/StringBuf.hx:51
		self.b = python_lib_io_StringIO()

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.b = None
		_hx_o.length = None
StringBuf._hx_class = StringBuf


class StringTools:
	_hx_class_name = "StringTools"
	_hx_statics = ["htmlEscape", "isSpace", "ltrim", "rtrim", "trim", "replace"]

	@staticmethod
	def htmlEscape(s,quotes = None):
		# /usr/lib/haxe/std/StringTools.hx:98
		# /usr/lib/haxe/std/StringTools.hx:98
		_this = None
		_this1 = None
		_this2 = None
		_this3 = None
		_this4 = s.split("&")
		_this3 = "&amp;".join([python_Boot.toString1(x1,'') for x1 in _this4])
		_this2 = _this3.split("<")
		_this1 = "&lt;".join([python_Boot.toString1(x1,'') for x1 in _this2])
		_this = _this1.split(">")
		s = "&gt;".join([python_Boot.toString1(x1,'') for x1 in _this])
		# /usr/lib/haxe/std/StringTools.hx:99
		if quotes:
			# /usr/lib/haxe/std/StringTools.hx:99
			_this5 = None
			_this6 = None
			_this7 = s.split("\"")
			_this6 = "&quot;".join([python_Boot.toString1(x1,'') for x1 in _this7])
			_this5 = _this6.split("'")
			return "&#039;".join([python_Boot.toString1(x1,'') for x1 in _this5])
		else:
			return s

	@staticmethod
	def isSpace(s,pos):
		# /usr/lib/haxe/std/StringTools.hx:185
		if (((len(s) == 0) or ((pos < 0))) or ((pos >= len(s)))):
			return False
		# /usr/lib/haxe/std/StringTools.hx:187
		c = HxString.charCodeAt(s,pos)
		# /usr/lib/haxe/std/StringTools.hx:188
		return (((c > 8) and ((c < 14))) or ((c == 32)))

	@staticmethod
	def ltrim(s):
		# /usr/lib/haxe/std/StringTools.hx:204
		l = len(s)
		# /usr/lib/haxe/std/StringTools.hx:205
		r = 0
		# /usr/lib/haxe/std/StringTools.hx:206
		while ((r < l) and StringTools.isSpace(s,r)):
			r = (r + 1)
		# /usr/lib/haxe/std/StringTools.hx:209
		if (r > 0):
			return HxString.substr(s,r,(l - r))
		else:
			return s

	@staticmethod
	def rtrim(s):
		# /usr/lib/haxe/std/StringTools.hx:229
		l = len(s)
		# /usr/lib/haxe/std/StringTools.hx:230
		r = 0
		# /usr/lib/haxe/std/StringTools.hx:231
		while ((r < l) and StringTools.isSpace(s,((l - r) - 1))):
			r = (r + 1)
		# /usr/lib/haxe/std/StringTools.hx:234
		if (r > 0):
			return HxString.substr(s,0,(l - r))
		else:
			return s

	@staticmethod
	def trim(s):
		# /usr/lib/haxe/std/StringTools.hx:253
		return StringTools.ltrim(StringTools.rtrim(s))

	@staticmethod
	def replace(s,sub,by):
		# /usr/lib/haxe/std/StringTools.hx:324
		_this = None
		if (sub == ""):
			_this = list(s)
		else:
			_this = s.split(sub)
		return by.join([python_Boot.toString1(x1,'') for x1 in _this])
StringTools._hx_class = StringTools


class haxe_IMap:
	_hx_class_name = "haxe.IMap"
	_hx_methods = ["get", "keys"]
haxe_IMap._hx_class = haxe_IMap


class haxe_ds_StringMap:
	_hx_class_name = "haxe.ds.StringMap"
	_hx_fields = ["h"]
	_hx_methods = ["get", "keys"]
	_hx_interfaces = [haxe_IMap]

	def __init__(self):
		# /usr/lib/haxe/std/python/_std/haxe/ds/StringMap.hx:29
		self.h = None
		# /usr/lib/haxe/std/python/_std/haxe/ds/StringMap.hx:32
		self.h = dict()

	def get(self,key):
		# /usr/lib/haxe/std/python/_std/haxe/ds/StringMap.hx:40
		return self.h.get(key,None)

	def keys(self):
		# /usr/lib/haxe/std/python/_std/haxe/ds/StringMap.hx:54
		# /usr/lib/haxe/std/python/_std/haxe/ds/StringMap.hx:54
		this1 = None
		_this = self.h.keys()
		this1 = iter(_this)
		return python_HaxeIterator(this1)

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.h = None
haxe_ds_StringMap._hx_class = haxe_ds_StringMap


class python_HaxeIterator:
	_hx_class_name = "python.HaxeIterator"
	_hx_fields = ["it", "x", "has", "checked"]
	_hx_methods = ["next", "hasNext"]

	def __init__(self,it):
		# /usr/lib/haxe/std/python/HaxeIterator.hx:28
		self.it = None
		# /usr/lib/haxe/std/python/HaxeIterator.hx:29
		self.x = None
		# /usr/lib/haxe/std/python/HaxeIterator.hx:30
		self.has = None
		# /usr/lib/haxe/std/python/HaxeIterator.hx:31
		self.checked = None
		self.checked = False
		# /usr/lib/haxe/std/python/HaxeIterator.hx:30
		self.has = False
		# /usr/lib/haxe/std/python/HaxeIterator.hx:29
		self.x = None
		# /usr/lib/haxe/std/python/HaxeIterator.hx:34
		self.it = it

	def next(self):
		# /usr/lib/haxe/std/python/HaxeIterator.hx:38
		if (not self.checked):
			self.hasNext()
		# /usr/lib/haxe/std/python/HaxeIterator.hx:39
		self.checked = False
		# /usr/lib/haxe/std/python/HaxeIterator.hx:40
		return self.x

	def hasNext(self):
		# /usr/lib/haxe/std/python/HaxeIterator.hx:44
		if (not self.checked):
			# /usr/lib/haxe/std/python/HaxeIterator.hx:45
			try:
				# /usr/lib/haxe/std/python/HaxeIterator.hx:46
				self.x = self.it.__next__()
				# /usr/lib/haxe/std/python/HaxeIterator.hx:47
				self.has = True
			except Exception as _hx_e:
				_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
				if isinstance(_hx_e1, StopIteration):
					s = _hx_e1
					# /usr/lib/haxe/std/python/HaxeIterator.hx:49
					self.has = False
					# /usr/lib/haxe/std/python/HaxeIterator.hx:50
					self.x = None
				else:
					raise _hx_e
			# /usr/lib/haxe/std/python/HaxeIterator.hx:52
			self.checked = True
		# /usr/lib/haxe/std/python/HaxeIterator.hx:54
		return self.has

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.it = None
		_hx_o.x = None
		_hx_o.has = None
		_hx_o.checked = None
python_HaxeIterator._hx_class = python_HaxeIterator


class Sys:
	_hx_class_name = "Sys"
	_hx_statics = ["time"]

	@staticmethod
	def time():
		# /usr/lib/haxe/std/python/_std/Sys.hx:42
		return python_lib_Time.time()
Sys._hx_class = Sys

class ValueType(Enum):
	_hx_class_name = "ValueType"
	_hx_constructs = ["TNull", "TInt", "TFloat", "TBool", "TObject", "TFunction", "TClass", "TEnum", "TUnknown"]

	@staticmethod
	def TClass(c):
		return ValueType("TClass", 6, [c])

	@staticmethod
	def TEnum(e):
		return ValueType("TEnum", 7, [e])
ValueType.TNull = ValueType("TNull", 0, list())
ValueType.TInt = ValueType("TInt", 1, list())
ValueType.TFloat = ValueType("TFloat", 2, list())
ValueType.TBool = ValueType("TBool", 3, list())
ValueType.TObject = ValueType("TObject", 4, list())
ValueType.TFunction = ValueType("TFunction", 5, list())
ValueType.TUnknown = ValueType("TUnknown", 8, list())
ValueType._hx_class = ValueType


class Type:
	_hx_class_name = "Type"
	_hx_statics = ["getClass", "getSuperClass", "getClassName", "getEnumName", "createEmptyInstance", "typeof", "enumEq"]

	@staticmethod
	def getClass(o):
		# /usr/lib/haxe/std/python/_std/Type.hx:46
		if (o is None):
			return None
		# /usr/lib/haxe/std/python/_std/Type.hx:49
		if ((o is not None) and (((o == str) or python_lib_Inspect.isclass(o)))):
			return None
		# /usr/lib/haxe/std/python/_std/Type.hx:51
		if isinstance(o,_hx_AnonObject):
			return None
		# /usr/lib/haxe/std/python/_std/Type.hx:53
		if hasattr(o,"_hx_class"):
			return o._hx_class
		# /usr/lib/haxe/std/python/_std/Type.hx:56
		if hasattr(o,"__class__"):
			return o.__class__
		else:
			return None

	@staticmethod
	def getSuperClass(c):
		# /usr/lib/haxe/std/python/_std/Type.hx:70
		return python_Boot.getSuperClass(c)

	@staticmethod
	def getClassName(c):
		# /usr/lib/haxe/std/python/_std/Type.hx:75
		if hasattr(c,"_hx_class_name"):
			return c._hx_class_name
		else:
			# /usr/lib/haxe/std/python/_std/Type.hx:79
			if (c == list):
				return "Array"
			# /usr/lib/haxe/std/python/_std/Type.hx:80
			if (c == Math):
				return "Math"
			# /usr/lib/haxe/std/python/_std/Type.hx:81
			if (c == str):
				return "String"
			# /usr/lib/haxe/std/python/_std/Type.hx:83
			try:
				s = c.__name__
			except Exception as _hx_e:
				_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
				pass
		# /usr/lib/haxe/std/python/_std/Type.hx:87
		res = None
		# /usr/lib/haxe/std/python/_std/Type.hx:89
		return res

	@staticmethod
	def getEnumName(e):
		# /usr/lib/haxe/std/python/_std/Type.hx:93
		return e._hx_class_name

	@staticmethod
	def createEmptyInstance(cl):
		# /usr/lib/haxe/std/python/_std/Type.hx:145
		i = cl.__new__(cl)
		# /usr/lib/haxe/std/python/_std/Type.hx:147
		callInit = None
		callInit1 = None
		def _hx_local_0(cl1):
			# /usr/lib/haxe/std/python/_std/Type.hx:148
			sc = Type.getSuperClass(cl1)
			# /usr/lib/haxe/std/python/_std/Type.hx:149
			if (sc is not None):
				callInit1(sc)
			# /usr/lib/haxe/std/python/_std/Type.hx:152
			if hasattr(cl1,"_hx_empty_init"):
				cl1._hx_empty_init(i)
		callInit1 = _hx_local_0
		callInit = callInit1
		# /usr/lib/haxe/std/python/_std/Type.hx:156
		callInit(cl)
		# /usr/lib/haxe/std/python/_std/Type.hx:158
		return i

	@staticmethod
	def typeof(v):
		# /usr/lib/haxe/std/python/_std/Type.hx:202
		if (v is None):
			return ValueType.TNull
		elif isinstance(v,bool):
			return ValueType.TBool
		elif isinstance(v,int):
			return ValueType.TInt
		elif isinstance(v,float):
			return ValueType.TFloat
		elif isinstance(v,str):
			return ValueType.TClass(str)
		elif isinstance(v,list):
			return ValueType.TClass(list)
		elif (isinstance(v,_hx_AnonObject) or python_lib_Inspect.isclass(v)):
			return ValueType.TObject
		elif isinstance(v,Enum):
			return ValueType.TEnum(v.__class__)
		elif (isinstance(v,type) or hasattr(v,"_hx_class")):
			return ValueType.TClass(v.__class__)
		elif callable(v):
			return ValueType.TFunction
		else:
			return ValueType.TUnknown

	@staticmethod
	def enumEq(a,b):
		# /usr/lib/haxe/std/python/_std/Type.hx:234
		if (a == b):
			return True
		# /usr/lib/haxe/std/python/_std/Type.hx:236
		try:
			# /usr/lib/haxe/std/python/_std/Type.hx:237
			if ((b is None) and ((a != b))):
				return False
			# /usr/lib/haxe/std/python/_std/Type.hx:238
			if (a.tag != b.tag):
				return False
			# /usr/lib/haxe/std/python/_std/Type.hx:240
			p1 = a.params
			# /usr/lib/haxe/std/python/_std/Type.hx:241
			p2 = b.params
			# /usr/lib/haxe/std/python/_std/Type.hx:242
			if (len(p1) != len(p2)):
				return False
			# /usr/lib/haxe/std/python/_std/Type.hx:244
			# /usr/lib/haxe/std/python/_std/Type.hx:244
			_g1 = 0
			_g = len(p1)
			while (_g1 < _g):
				i = _g1
				_g1 = (_g1 + 1)
				# /usr/lib/haxe/std/python/_std/Type.hx:245
				if (not Type.enumEq((p1[i] if i >= 0 and i < len(p1) else None),(p2[i] if i >= 0 and i < len(p2) else None))):
					return False
			# /usr/lib/haxe/std/python/_std/Type.hx:248
			if (a._hx_class != b._hx_class):
				return False
		except Exception as _hx_e:
			_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
			e = _hx_e1
			return False
		# /usr/lib/haxe/std/python/_std/Type.hx:253
		return True
Type._hx_class = Type


class Xml:
	_hx_class_name = "Xml"
	_hx_fields = ["nodeType", "nodeName", "nodeValue", "parent", "children", "attributeMap"]
	_hx_methods = ["get", "set", "exists", "attributes", "elements", "elementsNamed", "firstElement", "addChild", "removeChild"]
	_hx_statics = ["Element", "PCData", "CData", "Comment", "DocType", "ProcessingInstruction", "Document", "parse", "createElement", "createPCData", "createCData", "createComment", "createDocType", "createProcessingInstruction", "createDocument"]

	def __init__(self,nodeType):
		# /usr/lib/haxe/std/Xml.hx:52
		self.nodeType = None
		# /usr/lib/haxe/std/Xml.hx:57
		self.nodeName = None
		# /usr/lib/haxe/std/Xml.hx:62
		self.nodeValue = None
		# /usr/lib/haxe/std/Xml.hx:68
		self.parent = None
		# /usr/lib/haxe/std/Xml.hx:70
		self.children = None
		# /usr/lib/haxe/std/Xml.hx:71
		self.attributeMap = None
		# /usr/lib/haxe/std/Xml.hx:317
		self.nodeType = nodeType
		# /usr/lib/haxe/std/Xml.hx:318
		self.children = []
		# /usr/lib/haxe/std/Xml.hx:319
		self.attributeMap = haxe_ds_StringMap()

	def get(self,att):
		# /usr/lib/haxe/std/Xml.hx:167
		if (self.nodeType != Xml.Element):
			raise _HxException(("Bad node type, expected Element but found " + Std.string(self.nodeType)))
		# /usr/lib/haxe/std/Xml.hx:170
		return self.attributeMap.h.get(att,None)

	def set(self,att,value):
		# /usr/lib/haxe/std/Xml.hx:178
		if (self.nodeType != Xml.Element):
			raise _HxException(("Bad node type, expected Element but found " + Std.string(self.nodeType)))
		# /usr/lib/haxe/std/Xml.hx:181
		self.attributeMap.h[att] = value

	def exists(self,att):
		# /usr/lib/haxe/std/Xml.hx:200
		if (self.nodeType != Xml.Element):
			raise _HxException(("Bad node type, expected Element but found " + Std.string(self.nodeType)))
		# /usr/lib/haxe/std/Xml.hx:203
		return att in self.attributeMap.h

	def attributes(self):
		# /usr/lib/haxe/std/Xml.hx:210
		if (self.nodeType != Xml.Element):
			raise _HxException(("Bad node type, expected Element but found " + Std.string(self.nodeType)))
		# /usr/lib/haxe/std/Xml.hx:213
		return self.attributeMap.keys()

	def elements(self):
		# /usr/lib/haxe/std/Xml.hx:230
		if ((self.nodeType != Xml.Document) and ((self.nodeType != Xml.Element))):
			raise _HxException(("Bad node type, expected Element or Document but found " + Std.string(self.nodeType)))
		# /usr/lib/haxe/std/Xml.hx:231
		ret = None
		_g = []
		_g1 = 0
		_g2 = self.children
		while (_g1 < len(_g2)):
			child = (_g2[_g1] if _g1 >= 0 and _g1 < len(_g2) else None)
			_g1 = (_g1 + 1)
			if (child.nodeType == Xml.Element):
				_g.append(child)
		ret = _g
		# /usr/lib/haxe/std/Xml.hx:232
		return python_HaxeIterator(ret.__iter__())

	def elementsNamed(self,name):
		# /usr/lib/haxe/std/Xml.hx:240
		if ((self.nodeType != Xml.Document) and ((self.nodeType != Xml.Element))):
			raise _HxException(("Bad node type, expected Element or Document but found " + Std.string(self.nodeType)))
		# /usr/lib/haxe/std/Xml.hx:241
		ret = None
		_g = []
		_g1 = 0
		_g2 = self.children
		while (_g1 < len(_g2)):
			child = (_g2[_g1] if _g1 >= 0 and _g1 < len(_g2) else None)
			_g1 = (_g1 + 1)
			def _hx_local_1():
				if (child.nodeType != Xml.Element):
					raise _HxException(("Bad node type, expected Element but found " + Std.string(child.nodeType)))
				return child.nodeName
			if ((child.nodeType == Xml.Element) and ((_hx_local_1() == name))):
				_g.append(child)
		ret = _g
		# /usr/lib/haxe/std/Xml.hx:242
		return python_HaxeIterator(ret.__iter__())

	def firstElement(self):
		# /usr/lib/haxe/std/Xml.hx:257
		if ((self.nodeType != Xml.Document) and ((self.nodeType != Xml.Element))):
			raise _HxException(("Bad node type, expected Element or Document but found " + Std.string(self.nodeType)))
		# /usr/lib/haxe/std/Xml.hx:258
		# /usr/lib/haxe/std/Xml.hx:258
		_g = 0
		_g1 = self.children
		while (_g < len(_g1)):
			child = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
			_g = (_g + 1)
			# /usr/lib/haxe/std/Xml.hx:259
			if (child.nodeType == Xml.Element):
				return child
		# /usr/lib/haxe/std/Xml.hx:263
		return None

	def addChild(self,x):
		# /usr/lib/haxe/std/Xml.hx:273
		if ((self.nodeType != Xml.Document) and ((self.nodeType != Xml.Element))):
			raise _HxException(("Bad node type, expected Element or Document but found " + Std.string(self.nodeType)))
		# /usr/lib/haxe/std/Xml.hx:274
		if (x.parent is not None):
			x.parent.removeChild(x)
		# /usr/lib/haxe/std/Xml.hx:277
		# /usr/lib/haxe/std/Xml.hx:277
		_this = self.children
		_this.append(x)
		# /usr/lib/haxe/std/Xml.hx:278
		x.parent = self

	def removeChild(self,x):
		# /usr/lib/haxe/std/Xml.hx:286
		if ((self.nodeType != Xml.Document) and ((self.nodeType != Xml.Element))):
			raise _HxException(("Bad node type, expected Element or Document but found " + Std.string(self.nodeType)))
		# /usr/lib/haxe/std/Xml.hx:287
		if python_internal_ArrayImpl.remove(self.children,x):
			# /usr/lib/haxe/std/Xml.hx:288
			x.parent = None
			# /usr/lib/haxe/std/Xml.hx:289
			return True
		# /usr/lib/haxe/std/Xml.hx:291
		return False

	@staticmethod
	def parse(_hx_str):
		# /usr/lib/haxe/std/Xml.hx:44
		return haxe_xml_Parser.parse(_hx_str)

	@staticmethod
	def createElement(name):
		# /usr/lib/haxe/std/Xml.hx:105
		xml = Xml(Xml.Element)
		# /usr/lib/haxe/std/Xml.hx:106
		# /usr/lib/haxe/std/Xml.hx:106
		if (xml.nodeType != Xml.Element):
			raise _HxException(("Bad node type, expected Element but found " + Std.string(xml.nodeType)))
		xml.nodeName = name
		# /usr/lib/haxe/std/Xml.hx:107
		return xml

	@staticmethod
	def createPCData(data):
		# /usr/lib/haxe/std/Xml.hx:114
		xml = Xml(Xml.PCData)
		# /usr/lib/haxe/std/Xml.hx:115
		# /usr/lib/haxe/std/Xml.hx:115
		if ((xml.nodeType == Xml.Document) or ((xml.nodeType == Xml.Element))):
			raise _HxException(("Bad node type, unexpected " + Std.string(xml.nodeType)))
		xml.nodeValue = data
		# /usr/lib/haxe/std/Xml.hx:116
		return xml

	@staticmethod
	def createCData(data):
		# /usr/lib/haxe/std/Xml.hx:123
		xml = Xml(Xml.CData)
		# /usr/lib/haxe/std/Xml.hx:124
		# /usr/lib/haxe/std/Xml.hx:124
		if ((xml.nodeType == Xml.Document) or ((xml.nodeType == Xml.Element))):
			raise _HxException(("Bad node type, unexpected " + Std.string(xml.nodeType)))
		xml.nodeValue = data
		# /usr/lib/haxe/std/Xml.hx:125
		return xml

	@staticmethod
	def createComment(data):
		# /usr/lib/haxe/std/Xml.hx:132
		xml = Xml(Xml.Comment)
		# /usr/lib/haxe/std/Xml.hx:133
		# /usr/lib/haxe/std/Xml.hx:133
		if ((xml.nodeType == Xml.Document) or ((xml.nodeType == Xml.Element))):
			raise _HxException(("Bad node type, unexpected " + Std.string(xml.nodeType)))
		xml.nodeValue = data
		# /usr/lib/haxe/std/Xml.hx:134
		return xml

	@staticmethod
	def createDocType(data):
		# /usr/lib/haxe/std/Xml.hx:141
		xml = Xml(Xml.DocType)
		# /usr/lib/haxe/std/Xml.hx:142
		# /usr/lib/haxe/std/Xml.hx:142
		if ((xml.nodeType == Xml.Document) or ((xml.nodeType == Xml.Element))):
			raise _HxException(("Bad node type, unexpected " + Std.string(xml.nodeType)))
		xml.nodeValue = data
		# /usr/lib/haxe/std/Xml.hx:143
		return xml

	@staticmethod
	def createProcessingInstruction(data):
		# /usr/lib/haxe/std/Xml.hx:150
		xml = Xml(Xml.ProcessingInstruction)
		# /usr/lib/haxe/std/Xml.hx:151
		# /usr/lib/haxe/std/Xml.hx:151
		if ((xml.nodeType == Xml.Document) or ((xml.nodeType == Xml.Element))):
			raise _HxException(("Bad node type, unexpected " + Std.string(xml.nodeType)))
		xml.nodeValue = data
		# /usr/lib/haxe/std/Xml.hx:152
		return xml

	@staticmethod
	def createDocument():
		# /usr/lib/haxe/std/Xml.hx:159
		return Xml(Xml.Document)

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.nodeType = None
		_hx_o.nodeName = None
		_hx_o.nodeValue = None
		_hx_o.parent = None
		_hx_o.children = None
		_hx_o.attributeMap = None
Xml._hx_class = Xml


class exception_StackTools:
	_hx_class_name = "exception.StackTools"
	_hx_statics = ["truncate"]

	@staticmethod
	def truncate(stack,pos,fromTop = False):
		# /home/alex/Work/HaXe/exception/src/exception/StackTools.hx:36
		if (fromTop is None):
			fromTop = False
		return stack
exception_StackTools._hx_class = exception_StackTools


class exception__StackTools_IntIterator:
	_hx_class_name = "exception._StackTools.IntIterator"
	_hx_fields = ["current", "till"]
	_hx_methods = ["hasNext", "next"]

	def __init__(self,_hx_from,till):
		# /home/alex/Work/HaXe/exception/src/exception/StackTools.hx:233
		self.current = None
		# /home/alex/Work/HaXe/exception/src/exception/StackTools.hx:234
		self.till = None
		self.till = 0
		# /home/alex/Work/HaXe/exception/src/exception/StackTools.hx:233
		self.current = 0
		# /home/alex/Work/HaXe/exception/src/exception/StackTools.hx:238
		self.current = _hx_from
		# /home/alex/Work/HaXe/exception/src/exception/StackTools.hx:239
		self.till = till

	def hasNext(self):
		# /home/alex/Work/HaXe/exception/src/exception/StackTools.hx:244
		return (self.current != self.till)

	def next(self):
		# /home/alex/Work/HaXe/exception/src/exception/StackTools.hx:249
		if (self.current < self.till):
			# /home/alex/Work/HaXe/exception/src/exception/StackTools.hx:249
			def _hx_local_3():
				# /home/alex/Work/HaXe/exception/src/exception/StackTools.hx:249
				def _hx_local_2():
					# /home/alex/Work/HaXe/exception/src/exception/StackTools.hx:249
					_hx_local_0 = self
					_hx_local_1 = _hx_local_0.current
					_hx_local_0.current = (_hx_local_1 + 1)
					return _hx_local_1
				return _hx_local_2()
			return _hx_local_3()
		else:
			def _hx_local_7():
				def _hx_local_6():
					_hx_local_4 = self
					_hx_local_5 = _hx_local_4.current
					_hx_local_4.current = (_hx_local_5 - 1)
					return _hx_local_5
				return _hx_local_6()
			return _hx_local_7()

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.current = None
		_hx_o.till = None
exception__StackTools_IntIterator._hx_class = exception__StackTools_IntIterator

class haxe_StackItem(Enum):
	_hx_class_name = "haxe.StackItem"
	_hx_constructs = ["CFunction", "Module", "FilePos", "Method", "LocalFunction"]

	@staticmethod
	def Module(m):
		return haxe_StackItem("Module", 1, [m])

	@staticmethod
	def FilePos(s,file,line):
		return haxe_StackItem("FilePos", 2, [s,file,line])

	@staticmethod
	def Method(classname,method):
		return haxe_StackItem("Method", 3, [classname,method])

	@staticmethod
	def LocalFunction(v = None):
		return haxe_StackItem("LocalFunction", 4, [v])
haxe_StackItem.CFunction = haxe_StackItem("CFunction", 0, list())
haxe_StackItem._hx_class = haxe_StackItem


class haxe_CallStack:
	_hx_class_name = "haxe.CallStack"
	_hx_statics = ["callStack", "exceptionStack", "toString", "itemToString"]

	@staticmethod
	def callStack():
		# /usr/lib/haxe/std/haxe/CallStack.hx:122
		stack = []
		# /usr/lib/haxe/std/haxe/CallStack.hx:123
		infos = python_lib_Traceback.extract_stack()
		# /usr/lib/haxe/std/haxe/CallStack.hx:124
		if (len(infos) == 0):
			None
		else:
			infos.pop()
		# /usr/lib/haxe/std/haxe/CallStack.hx:125
		infos.reverse()
		# /usr/lib/haxe/std/haxe/CallStack.hx:126
		# /usr/lib/haxe/std/haxe/CallStack.hx:126
		_g = 0
		while (_g < len(infos)):
			elem = (infos[_g] if _g >= 0 and _g < len(infos) else None)
			_g = (_g + 1)
			# /usr/lib/haxe/std/haxe/CallStack.hx:127
			x = haxe_StackItem.FilePos(None,elem[0],elem[1])
			stack.append(x)
		# /usr/lib/haxe/std/haxe/CallStack.hx:128
		return stack

	@staticmethod
	def exceptionStack():
		# /usr/lib/haxe/std/haxe/CallStack.hx:186
		stack = []
		# /usr/lib/haxe/std/haxe/CallStack.hx:187
		exc = python_lib_Sys.exc_info()
		# /usr/lib/haxe/std/haxe/CallStack.hx:188
		if (exc[2] is not None):
			# /usr/lib/haxe/std/haxe/CallStack.hx:190
			infos = python_lib_Traceback.extract_tb(exc[2])
			# /usr/lib/haxe/std/haxe/CallStack.hx:191
			infos.reverse()
			# /usr/lib/haxe/std/haxe/CallStack.hx:192
			# /usr/lib/haxe/std/haxe/CallStack.hx:192
			_g = 0
			while (_g < len(infos)):
				elem = (infos[_g] if _g >= 0 and _g < len(infos) else None)
				_g = (_g + 1)
				# /usr/lib/haxe/std/haxe/CallStack.hx:193
				x = haxe_StackItem.FilePos(None,elem[0],elem[1])
				stack.append(x)
		# /usr/lib/haxe/std/haxe/CallStack.hx:195
		return stack

	@staticmethod
	def toString(stack):
		# /usr/lib/haxe/std/haxe/CallStack.hx:207
		b = StringBuf()
		# /usr/lib/haxe/std/haxe/CallStack.hx:208
		# /usr/lib/haxe/std/haxe/CallStack.hx:208
		_g = 0
		while (_g < len(stack)):
			s = (stack[_g] if _g >= 0 and _g < len(stack) else None)
			_g = (_g + 1)
			# /usr/lib/haxe/std/haxe/CallStack.hx:209
			b.b.write("\nCalled from ")
			# /usr/lib/haxe/std/haxe/CallStack.hx:210
			haxe_CallStack.itemToString(b,s)
		# /usr/lib/haxe/std/haxe/CallStack.hx:212
		return b.b.getvalue()

	@staticmethod
	def itemToString(b,s):
		# /usr/lib/haxe/std/haxe/CallStack.hx:216
		if ((s.index) == 0):
			b.b.write("a C function")
		elif ((s.index) == 1):
			# /usr/lib/haxe/std/haxe/CallStack.hx:216
			m = s.params[0]
			# /usr/lib/haxe/std/haxe/CallStack.hx:219
			# /usr/lib/haxe/std/haxe/CallStack.hx:220
			b.b.write("module ")
			# /usr/lib/haxe/std/haxe/CallStack.hx:221
			b.b.write(Std.string(m))
		elif ((s.index) == 2):
			# /usr/lib/haxe/std/haxe/CallStack.hx:216
			line = s.params[2]
			file = s.params[1]
			s1 = s.params[0]
			# /usr/lib/haxe/std/haxe/CallStack.hx:222
			# /usr/lib/haxe/std/haxe/CallStack.hx:223
			if (s1 is not None):
				# /usr/lib/haxe/std/haxe/CallStack.hx:224
				haxe_CallStack.itemToString(b,s1)
				# /usr/lib/haxe/std/haxe/CallStack.hx:225
				b.b.write(" (")
			# /usr/lib/haxe/std/haxe/CallStack.hx:227
			b.b.write(Std.string(file))
			# /usr/lib/haxe/std/haxe/CallStack.hx:228
			b.b.write(" line ")
			# /usr/lib/haxe/std/haxe/CallStack.hx:229
			b.b.write(Std.string(line))
			# /usr/lib/haxe/std/haxe/CallStack.hx:230
			if (s1 is not None):
				b.b.write(")")
		elif ((s.index) == 3):
			# /usr/lib/haxe/std/haxe/CallStack.hx:216
			meth = s.params[1]
			cname = s.params[0]
			# /usr/lib/haxe/std/haxe/CallStack.hx:231
			# /usr/lib/haxe/std/haxe/CallStack.hx:232
			b.b.write(Std.string(cname))
			# /usr/lib/haxe/std/haxe/CallStack.hx:233
			b.b.write(".")
			# /usr/lib/haxe/std/haxe/CallStack.hx:234
			b.b.write(Std.string(meth))
		elif ((s.index) == 4):
			# /usr/lib/haxe/std/haxe/CallStack.hx:216
			n = s.params[0]
			# /usr/lib/haxe/std/haxe/CallStack.hx:235
			# /usr/lib/haxe/std/haxe/CallStack.hx:236
			b.b.write("local function #")
			# /usr/lib/haxe/std/haxe/CallStack.hx:237
			b.b.write(Std.string(n))
		else:
			pass
haxe_CallStack._hx_class = haxe_CallStack


class haxe_Log:
	_hx_class_name = "haxe.Log"
	_hx_statics = ["trace"]

	@staticmethod
	def trace(v,infos = None):
		# /usr/lib/haxe/std/haxe/Log.hx:98
		_hx_str = None
		# /usr/lib/haxe/std/haxe/Log.hx:99
		if (infos is not None):
			# /usr/lib/haxe/std/haxe/Log.hx:100
			_hx_str = ((((HxOverrides.stringOrNull(infos.fileName) + ":") + Std.string(infos.lineNumber)) + ": ") + Std.string(v))
			# /usr/lib/haxe/std/haxe/Log.hx:101
			if (Reflect.field(infos,"customParams") is not None):
				_hx_str = (("null" if _hx_str is None else _hx_str) + HxOverrides.stringOrNull((("," + HxOverrides.stringOrNull(",".join([python_Boot.toString1(x1,'') for x1 in Reflect.field(infos,"customParams")]))))))
		else:
			_hx_str = v
		# /usr/lib/haxe/std/haxe/Log.hx:107
		python_Lib.println(_hx_str)
haxe_Log._hx_class = haxe_Log


class haxe_Timer:
	_hx_class_name = "haxe.Timer"
	_hx_statics = ["stamp"]

	@staticmethod
	def stamp():
		# /usr/lib/haxe/std/haxe/Timer.hx:166
		return Sys.time()
haxe_Timer._hx_class = haxe_Timer


class haxe_io_Eof:
	_hx_class_name = "haxe.io.Eof"
	_hx_methods = ["toString"]

	def toString(self):
		# /usr/lib/haxe/std/haxe/io/Eof.hx:31
		return "Eof"

	@staticmethod
	def _hx_empty_init(_hx_o):		pass
haxe_io_Eof._hx_class = haxe_io_Eof

class haxe_rtti_CType(Enum):
	_hx_class_name = "haxe.rtti.CType"
	_hx_constructs = ["CUnknown", "CEnum", "CClass", "CTypedef", "CFunction", "CAnonymous", "CDynamic", "CAbstract"]

	@staticmethod
	def CEnum(name,params):
		return haxe_rtti_CType("CEnum", 1, [name,params])

	@staticmethod
	def CClass(name,params):
		return haxe_rtti_CType("CClass", 2, [name,params])

	@staticmethod
	def CTypedef(name,params):
		return haxe_rtti_CType("CTypedef", 3, [name,params])

	@staticmethod
	def CFunction(args,ret):
		return haxe_rtti_CType("CFunction", 4, [args,ret])

	@staticmethod
	def CAnonymous(fields):
		return haxe_rtti_CType("CAnonymous", 5, [fields])

	@staticmethod
	def CDynamic(t = None):
		return haxe_rtti_CType("CDynamic", 6, [t])

	@staticmethod
	def CAbstract(name,params):
		return haxe_rtti_CType("CAbstract", 7, [name,params])
haxe_rtti_CType.CUnknown = haxe_rtti_CType("CUnknown", 0, list())
haxe_rtti_CType._hx_class = haxe_rtti_CType

class haxe_rtti_Rights(Enum):
	_hx_class_name = "haxe.rtti.Rights"
	_hx_constructs = ["RNormal", "RNo", "RCall", "RMethod", "RDynamic", "RInline"]

	@staticmethod
	def RCall(m):
		return haxe_rtti_Rights("RCall", 2, [m])
haxe_rtti_Rights.RNormal = haxe_rtti_Rights("RNormal", 0, list())
haxe_rtti_Rights.RNo = haxe_rtti_Rights("RNo", 1, list())
haxe_rtti_Rights.RMethod = haxe_rtti_Rights("RMethod", 3, list())
haxe_rtti_Rights.RDynamic = haxe_rtti_Rights("RDynamic", 4, list())
haxe_rtti_Rights.RInline = haxe_rtti_Rights("RInline", 5, list())
haxe_rtti_Rights._hx_class = haxe_rtti_Rights

class haxe_rtti_TypeTree(Enum):
	_hx_class_name = "haxe.rtti.TypeTree"
	_hx_constructs = ["TPackage", "TClassdecl", "TEnumdecl", "TTypedecl", "TAbstractdecl"]

	@staticmethod
	def TPackage(name,full,subs):
		return haxe_rtti_TypeTree("TPackage", 0, [name,full,subs])

	@staticmethod
	def TClassdecl(c):
		return haxe_rtti_TypeTree("TClassdecl", 1, [c])

	@staticmethod
	def TEnumdecl(e):
		return haxe_rtti_TypeTree("TEnumdecl", 2, [e])

	@staticmethod
	def TTypedecl(t):
		return haxe_rtti_TypeTree("TTypedecl", 3, [t])

	@staticmethod
	def TAbstractdecl(a):
		return haxe_rtti_TypeTree("TAbstractdecl", 4, [a])
haxe_rtti_TypeTree._hx_class = haxe_rtti_TypeTree


class haxe_rtti_Rtti:
	_hx_class_name = "haxe.rtti.Rtti"
	_hx_statics = ["getRtti"]

	@staticmethod
	def getRtti(c):
		# /usr/lib/haxe/std/haxe/rtti/Rtti.hx:40
		rtti = Reflect.field(c,"__rtti")
		# /usr/lib/haxe/std/haxe/rtti/Rtti.hx:41
		if (rtti is None):
			raise _HxException((("Class " + HxOverrides.stringOrNull(Type.getClassName(c))) + " has no RTTI information, consider adding @:rtti"))
		# /usr/lib/haxe/std/haxe/rtti/Rtti.hx:44
		x = Xml.parse(rtti).firstElement()
		# /usr/lib/haxe/std/haxe/rtti/Rtti.hx:45
		infos = haxe_rtti_XmlParser().processElement(x)
		# /usr/lib/haxe/std/haxe/rtti/Rtti.hx:46
		# /usr/lib/haxe/std/haxe/rtti/Rtti.hx:46
		t = infos
		# /usr/lib/haxe/std/haxe/rtti/Rtti.hx:47
		if ((infos.index) == 1):
			c1 = infos.params[0]
			# /usr/lib/haxe/std/haxe/rtti/Rtti.hx:47
			return c1
		else:
			raise _HxException(("Enum mismatch: expected TClassDecl but found " + Std.string(t)))
haxe_rtti_Rtti._hx_class = haxe_rtti_Rtti


class haxe_rtti_XmlParser:
	_hx_class_name = "haxe.rtti.XmlParser"
	_hx_fields = ["root", "curplatform"]
	_hx_methods = ["mkPath", "mkTypeParams", "mkRights", "xerror", "processElement", "xmeta", "xoverloads", "xpath", "xclass", "xclassfield", "xenum", "xenumfield", "xabstract", "xtypedef", "xtype", "xtypeparams", "defplat"]

	def __init__(self):
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:28
		self.root = None
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:29
		self.curplatform = None
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:32
		self.root = list()

	def mkPath(self,p):
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:285
		return p

	def mkTypeParams(self,p):
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:289
		pl = p.split(":")
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:290
		if ((pl[0] if 0 < len(pl) else None) == ""):
			return list()
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:292
		return pl

	def mkRights(self,r):
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:296
		_hx_local_0 = len(r)
		if (_hx_local_0 == 4):
			if (r == "null"):
				return haxe_rtti_Rights.RNo
			else:
				return haxe_rtti_Rights.RCall(r)
		elif (_hx_local_0 == 7):
			if (r == "dynamic"):
				return haxe_rtti_Rights.RDynamic
			else:
				return haxe_rtti_Rights.RCall(r)
		elif (_hx_local_0 == 6):
			if (r == "method"):
				return haxe_rtti_Rights.RMethod
			elif (r == "inline"):
				return haxe_rtti_Rights.RInline
			else:
				return haxe_rtti_Rights.RCall(r)
		else:
			return haxe_rtti_Rights.RCall(r)

	def xerror(self,c):
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:306
		raise _HxException(("Invalid " + HxOverrides.stringOrNull(c.get_name())))

	def processElement(self,x):
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:316
		c = haxe_xml_Fast(x)
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:317
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:317
		_g = c.get_name()
		_hx_local_0 = len(_g)
		if (_hx_local_0 == 5):
			if (_g == "class"):
				return haxe_rtti_TypeTree.TClassdecl(self.xclass(c))
			else:
				return self.xerror(c)
		elif (_hx_local_0 == 4):
			if (_g == "enum"):
				return haxe_rtti_TypeTree.TEnumdecl(self.xenum(c))
			else:
				return self.xerror(c)
		elif (_hx_local_0 == 7):
			if (_g == "typedef"):
				return haxe_rtti_TypeTree.TTypedecl(self.xtypedef(c))
			else:
				return self.xerror(c)
		elif (_hx_local_0 == 8):
			if (_g == "abstract"):
				return haxe_rtti_TypeTree.TAbstractdecl(self.xabstract(c))
			else:
				return self.xerror(c)
		else:
			return self.xerror(c)

	def xmeta(self,x):
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:327
		ml = []
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:328
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:328
		_this = x.nodes.resolve("m")
		_g_head = _this.h
		_g_val = None
		while (_g_head is not None):
			m = None
			def _hx_local_0():
				nonlocal _g_head
				nonlocal _g_val
				_g_val = (_g_head[0] if 0 < len(_g_head) else None)
				_g_head = (_g_head[1] if 1 < len(_g_head) else None)
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:326
				return _g_val
			m = _hx_local_0()
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:329
			pl = []
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:330
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:330
			_this1 = m.nodes.resolve("e")
			_g_head1 = _this1.h
			_g_val1 = None
			while (_g_head1 is not None):
				p = None
				def _hx_local_1():
					nonlocal _g_val1
					nonlocal _g_head1
					_g_val1 = (_g_head1[0] if 0 < len(_g_head1) else None)
					_g_head1 = (_g_head1[1] if 1 < len(_g_head1) else None)
					# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:326
					return _g_val1
				p = _hx_local_1()
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:331
				x1 = p.get_innerHTML()
				pl.append(x1)
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:332
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:332
			x2 = _hx_AnonObject({'name': m.att.resolve("n"), 'params': pl})
			ml.append(x2)
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:334
		return ml

	def xoverloads(self,x):
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:338
		l = List()
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:339
		_hx_local_0 = x.get_elements()
		while _hx_local_0.hasNext():
			m = _hx_local_0.next()
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:340
			l.add(self.xclassfield(m))
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:342
		return l

	def xpath(self,x):
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:346
		path = self.mkPath(x.att.resolve("path"))
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:347
		params = List()
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:348
		_hx_local_0 = x.get_elements()
		while _hx_local_0.hasNext():
			c = _hx_local_0.next()
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:349
			params.add(self.xtype(c))
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:350
		return _hx_AnonObject({'path': path, 'params': params})

	def xclass(self,x):
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:357
		csuper = None
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:358
		doc = None
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:359
		tdynamic = None
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:360
		interfaces = List()
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:361
		fields = List()
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:362
		statics = List()
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:363
		meta = []
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:364
		_hx_local_1 = x.get_elements()
		while _hx_local_1.hasNext():
			c = _hx_local_1.next()
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:365
			_g = c.get_name()
			_hx_local_0 = len(_g)
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:368
			if (_hx_local_0 == 10):
				if (_g == "implements"):
					interfaces.add(self.xpath(c))
				elif c.x.exists("static"):
					statics.add(self.xclassfield(c))
				else:
					fields.add(self.xclassfield(c))
			elif (_hx_local_0 == 12):
				if (_g == "haxe_dynamic"):
					tdynamic = self.xtype(haxe_xml_Fast(c.x.firstElement()))
				elif c.x.exists("static"):
					statics.add(self.xclassfield(c))
				else:
					fields.add(self.xclassfield(c))
			elif (_hx_local_0 == 4):
				if (_g == "meta"):
					meta = self.xmeta(c)
				elif c.x.exists("static"):
					statics.add(self.xclassfield(c))
				else:
					fields.add(self.xclassfield(c))
			elif (_hx_local_0 == 7):
				if (_g == "extends"):
					csuper = self.xpath(c)
				elif c.x.exists("static"):
					statics.add(self.xclassfield(c))
				else:
					fields.add(self.xclassfield(c))
			elif (_hx_local_0 == 8):
				if (_g == "haxe_doc"):
					doc = c.get_innerData()
				elif c.x.exists("static"):
					statics.add(self.xclassfield(c))
				else:
					fields.add(self.xclassfield(c))
			elif c.x.exists("static"):
				statics.add(self.xclassfield(c))
			else:
				fields.add(self.xclassfield(c))
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:377
		return _hx_AnonObject({'file': (x.att.resolve("file") if (x.has.resolve("file")) else None), 'path': self.mkPath(x.att.resolve("path")), 'module': (self.mkPath(x.att.resolve("module")) if (x.has.resolve("module")) else None), 'doc': doc, 'isPrivate': x.x.exists("private"), 'isExtern': x.x.exists("extern"), 'isInterface': x.x.exists("interface"), 'params': self.mkTypeParams(x.att.resolve("params")), 'superClass': csuper, 'interfaces': interfaces, 'fields': fields, 'statics': statics, 'tdynamic': tdynamic, 'platforms': self.defplat(), 'meta': meta})

	def xclassfield(self,x,defPublic = False):
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:396
		if (defPublic is None):
			defPublic = False
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:397
		e = x.get_elements()
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:398
		t = self.xtype(e.next())
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:399
		doc = None
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:400
		meta = []
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:401
		overloads = None
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:402
		_hx_local_1 = e
		while _hx_local_1.hasNext():
			c = _hx_local_1.next()
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:403
			_g = c.get_name()
			_hx_local_0 = len(_g)
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:406
			if (_hx_local_0 == 9):
				if (_g == "overloads"):
					overloads = self.xoverloads(c)
				else:
					self.xerror(c)
			elif (_hx_local_0 == 4):
				if (_g == "meta"):
					meta = self.xmeta(c)
				else:
					self.xerror(c)
			elif (_hx_local_0 == 8):
				if (_g == "haxe_doc"):
					doc = c.get_innerData()
				else:
					self.xerror(c)
			else:
				self.xerror(c)
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:409
		return _hx_AnonObject({'name': x.get_name(), 'type': t, 'isPublic': (x.x.exists("public") or defPublic), 'isOverride': x.x.exists("override"), 'line': (Std.parseInt(x.att.resolve("line")) if (x.has.resolve("line")) else None), 'doc': doc, 'get': (self.mkRights(x.att.resolve("get")) if (x.has.resolve("get")) else haxe_rtti_Rights.RNormal), 'set': (self.mkRights(x.att.resolve("set")) if (x.has.resolve("set")) else haxe_rtti_Rights.RNormal), 'params': (self.mkTypeParams(x.att.resolve("params")) if (x.has.resolve("params")) else []), 'platforms': self.defplat(), 'meta': meta, 'overloads': overloads, 'expr': (x.att.resolve("expr") if (x.has.resolve("expr")) else None)})

	def xenum(self,x):
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:427
		cl = List()
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:428
		doc = None
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:429
		meta = []
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:430
		_hx_local_0 = x.get_elements()
		while _hx_local_0.hasNext():
			c = _hx_local_0.next()
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:431
			if (c.get_name() == "haxe_doc"):
				doc = c.get_innerData()
			elif (c.get_name() == "meta"):
				meta = self.xmeta(c)
			else:
				cl.add(self.xenumfield(c))
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:437
		return _hx_AnonObject({'file': (x.att.resolve("file") if (x.has.resolve("file")) else None), 'path': self.mkPath(x.att.resolve("path")), 'module': (self.mkPath(x.att.resolve("module")) if (x.has.resolve("module")) else None), 'doc': doc, 'isPrivate': x.x.exists("private"), 'isExtern': x.x.exists("extern"), 'params': self.mkTypeParams(x.att.resolve("params")), 'constructors': cl, 'platforms': self.defplat(), 'meta': meta})

	def xenumfield(self,x):
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:452
		args = None
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:453
		xdoc = x.x.elementsNamed("haxe_doc").next()
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:454
		meta = None
		if x.hasNode.resolve("meta"):
			meta = self.xmeta(x.node.resolve("meta"))
		else:
			meta = []
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:455
		if x.has.resolve("a"):
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:456
			names = None
			_this = x.att.resolve("a")
			names = _this.split(":")
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:457
			elts = x.get_elements()
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:458
			args = List()
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:459
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:459
			_g = 0
			while (_g < len(names)):
				c = (names[_g] if _g >= 0 and _g < len(names) else None)
				_g = (_g + 1)
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:460
				opt = False
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:461
				if ((("" if ((0 >= len(c))) else c[0])) == "?"):
					# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:462
					opt = True
					# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:463
					c = HxString.substr(c,1,None)
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:465
				args.add(_hx_AnonObject({'name': c, 'opt': opt, 't': self.xtype(elts.next())}))
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:472
		return _hx_AnonObject({'name': x.get_name(), 'args': args, 'doc': (None if ((xdoc is None)) else haxe_xml_Fast(xdoc).get_innerData()), 'meta': meta, 'platforms': self.defplat()})

	def xabstract(self,x):
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:482
		doc = None
		impl = None
		athis = None
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:483
		meta = []
		to = []
		_hx_from = []
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:484
		_hx_local_3 = x.get_elements()
		while _hx_local_3.hasNext():
			c = _hx_local_3.next()
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:485
			_g = c.get_name()
			_hx_local_0 = len(_g)
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:489
			if (_hx_local_0 == 4):
				if (_g == "meta"):
					meta = self.xmeta(c)
				elif (_g == "from"):
					# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:494
					_hx_local_1 = c.get_elements()
					while _hx_local_1.hasNext():
						t1 = _hx_local_1.next()
						# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:495
						x2 = _hx_AnonObject({'t': self.xtype(haxe_xml_Fast(t1.x.firstElement())), 'field': (t1.att.resolve("field") if (t1.has.resolve("field")) else None)})
						_hx_from.append(x2)
				elif (_g == "impl"):
					impl = self.xclass(c.node.resolve("class"))
				elif (_g == "this"):
					athis = self.xtype(haxe_xml_Fast(c.x.firstElement()))
				else:
					self.xerror(c)
			elif (_hx_local_0 == 8):
				if (_g == "haxe_doc"):
					doc = c.get_innerData()
				else:
					self.xerror(c)
			elif (_hx_local_0 == 2):
				if (_g == "to"):
					# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:491
					_hx_local_2 = c.get_elements()
					while _hx_local_2.hasNext():
						t = _hx_local_2.next()
						# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:492
						x1 = _hx_AnonObject({'t': self.xtype(haxe_xml_Fast(t.x.firstElement())), 'field': (t.att.resolve("field") if (t.has.resolve("field")) else None)})
						to.append(x1)
				else:
					self.xerror(c)
			else:
				self.xerror(c)
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:503
		return _hx_AnonObject({'file': (x.att.resolve("file") if (x.has.resolve("file")) else None), 'path': self.mkPath(x.att.resolve("path")), 'module': (self.mkPath(x.att.resolve("module")) if (x.has.resolve("module")) else None), 'doc': doc, 'isPrivate': x.x.exists("private"), 'params': self.mkTypeParams(x.att.resolve("params")), 'platforms': self.defplat(), 'meta': meta, 'athis': athis, 'to': to, '_hx_from': _hx_from, 'impl': impl})

	def xtypedef(self,x):
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:521
		doc = None
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:522
		t = None
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:523
		meta = []
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:524
		_hx_local_0 = x.get_elements()
		while _hx_local_0.hasNext():
			c = _hx_local_0.next()
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:525
			if (c.get_name() == "haxe_doc"):
				doc = c.get_innerData()
			elif (c.get_name() == "meta"):
				meta = self.xmeta(c)
			else:
				t = self.xtype(c)
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:531
		types = haxe_ds_StringMap()
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:532
		if (self.curplatform is not None):
			types.h[self.curplatform] = t
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:534
		return _hx_AnonObject({'file': (x.att.resolve("file") if (x.has.resolve("file")) else None), 'path': self.mkPath(x.att.resolve("path")), 'module': (self.mkPath(x.att.resolve("module")) if (x.has.resolve("module")) else None), 'doc': doc, 'isPrivate': x.x.exists("private"), 'params': self.mkTypeParams(x.att.resolve("params")), 'type': t, 'types': types, 'platforms': self.defplat(), 'meta': meta})

	def xtype(self,x):
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:549
		_g = x.get_name()
		_hx_local_0 = len(_g)
		if (_hx_local_0 == 1):
			if (_g == "e"):
				return haxe_rtti_CType.CEnum(self.mkPath(x.att.resolve("path")),self.xtypeparams(x))
			elif (_g == "c"):
				return haxe_rtti_CType.CClass(self.mkPath(x.att.resolve("path")),self.xtypeparams(x))
			elif (_g == "t"):
				return haxe_rtti_CType.CTypedef(self.mkPath(x.att.resolve("path")),self.xtypeparams(x))
			elif (_g == "x"):
				return haxe_rtti_CType.CAbstract(self.mkPath(x.att.resolve("path")),self.xtypeparams(x))
			elif (_g == "f"):
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:561
				args = List()
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:562
				aname = None
				_this = x.att.resolve("a")
				aname = _this.split(":")
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:563
				eargs = python_HaxeIterator(aname.__iter__())
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:564
				evalues = None
				if x.has.resolve("v"):
					_this1 = None
					_this2 = x.att.resolve("v")
					_this1 = _this2.split(":")
					evalues = python_HaxeIterator(_this1.__iter__())
				else:
					evalues = None
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:565
				_hx_local_1 = x.get_elements()
				while _hx_local_1.hasNext():
					e = _hx_local_1.next()
					# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:566
					opt = False
					# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:567
					a = eargs.next()
					# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:568
					if (a is None):
						a = ""
					# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:570
					if ((("" if ((0 >= len(a))) else a[0])) == "?"):
						# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:571
						opt = True
						# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:572
						a = HxString.substr(a,1,None)
					# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:574
					v = None
					if (evalues is None):
						v = None
					else:
						v = evalues.next()
					# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:575
					args.add(_hx_AnonObject({'name': a, 'opt': opt, 't': self.xtype(e), 'value': (None if ((v == "")) else v)}))
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:582
				ret = args.last()
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:583
				args.remove(ret)
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:549
				return haxe_rtti_CType.CFunction(args,ret.t)
			elif (_g == "a"):
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:586
				fields = List()
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:587
				_hx_local_2 = x.get_elements()
				while _hx_local_2.hasNext():
					f = _hx_local_2.next()
					# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:588
					f1 = self.xclassfield(f,True)
					# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:589
					f1.platforms = List()
					# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:590
					fields.add(f1)
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:549
				return haxe_rtti_CType.CAnonymous(fields)
			elif (_g == "d"):
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:594
				t = None
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:595
				tx = x.x.firstElement()
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:596
				if (tx is not None):
					t = self.xtype(haxe_xml_Fast(tx))
				# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:549
				return haxe_rtti_CType.CDynamic(t)
			else:
				return self.xerror(x)
		elif (_hx_local_0 == 7):
			if (_g == "unknown"):
				return haxe_rtti_CType.CUnknown
			else:
				return self.xerror(x)
		else:
			return self.xerror(x)

	def xtypeparams(self,x):
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:605
		p = List()
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:606
		_hx_local_0 = x.get_elements()
		while _hx_local_0.hasNext():
			c = _hx_local_0.next()
			# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:607
			p.add(self.xtype(c))
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:608
		return p

	def defplat(self):
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:612
		l = List()
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:613
		if (self.curplatform is not None):
			l.add(self.curplatform)
		# /usr/lib/haxe/std/haxe/rtti/XmlParser.hx:615
		return l

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.root = None
		_hx_o.curplatform = None
haxe_rtti_XmlParser._hx_class = haxe_rtti_XmlParser


class haxe_unit_TestCase:
	_hx_class_name = "haxe.unit.TestCase"
	_hx_fields = ["currentTest"]
	_hx_methods = ["setup", "tearDown", "print", "assertTrue", "assertFalse", "assertEquals"]

	def __init__(self):
		# /usr/lib/haxe/std/haxe/unit/TestCase.hx:28
		self.currentTest = None

	def setup(self):
		pass

	def tearDown(self):
		pass

	def print(self,v):
		# /usr/lib/haxe/std/haxe/unit/TestCase.hx:40
		haxe_unit_TestRunner.print(v)

	def assertTrue(self,b,c = None):
		# /usr/lib/haxe/std/haxe/unit/TestCase.hx:44
		self.currentTest.done = True
		# /usr/lib/haxe/std/haxe/unit/TestCase.hx:45
		if (b != True):
			# /usr/lib/haxe/std/haxe/unit/TestCase.hx:46
			self.currentTest.success = False
			# /usr/lib/haxe/std/haxe/unit/TestCase.hx:47
			self.currentTest.error = "expected true but was false"
			# /usr/lib/haxe/std/haxe/unit/TestCase.hx:48
			self.currentTest.posInfos = c
			# /usr/lib/haxe/std/haxe/unit/TestCase.hx:49
			raise _HxException(self.currentTest)

	def assertFalse(self,b,c = None):
		# /usr/lib/haxe/std/haxe/unit/TestCase.hx:54
		self.currentTest.done = True
		# /usr/lib/haxe/std/haxe/unit/TestCase.hx:55
		if (b == True):
			# /usr/lib/haxe/std/haxe/unit/TestCase.hx:56
			self.currentTest.success = False
			# /usr/lib/haxe/std/haxe/unit/TestCase.hx:57
			self.currentTest.error = "expected false but was true"
			# /usr/lib/haxe/std/haxe/unit/TestCase.hx:58
			self.currentTest.posInfos = c
			# /usr/lib/haxe/std/haxe/unit/TestCase.hx:59
			raise _HxException(self.currentTest)

	def assertEquals(self,expected,actual,c = None):
		# /usr/lib/haxe/std/haxe/unit/TestCase.hx:64
		self.currentTest.done = True
		# /usr/lib/haxe/std/haxe/unit/TestCase.hx:65
		if (actual != expected):
			# /usr/lib/haxe/std/haxe/unit/TestCase.hx:66
			self.currentTest.success = False
			# /usr/lib/haxe/std/haxe/unit/TestCase.hx:67
			self.currentTest.error = (((("expected '" + Std.string(expected)) + "' but was '") + Std.string(actual)) + "'")
			# /usr/lib/haxe/std/haxe/unit/TestCase.hx:68
			self.currentTest.posInfos = c
			# /usr/lib/haxe/std/haxe/unit/TestCase.hx:69
			raise _HxException(self.currentTest)

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.currentTest = None
haxe_unit_TestCase._hx_class = haxe_unit_TestCase


class haxe_unit_TestRunner:
	_hx_class_name = "haxe.unit.TestRunner"
	_hx_statics = ["print"]

	@staticmethod
	def print(v):
		# /usr/lib/haxe/std/haxe/unit/TestRunner.hx:71
		python_Lib.print(v)
haxe_unit_TestRunner._hx_class = haxe_unit_TestRunner


class haxe_unit_TestStatus:
	_hx_class_name = "haxe.unit.TestStatus"
	_hx_fields = ["done", "success", "error", "posInfos"]

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.done = None
		_hx_o.success = None
		_hx_o.error = None
		_hx_o.posInfos = None
haxe_unit_TestStatus._hx_class = haxe_unit_TestStatus


class haxe_xml__Fast_NodeAccess:
	_hx_class_name = "haxe.xml._Fast.NodeAccess"
	_hx_fields = ["__x"]
	_hx_methods = ["resolve"]

	def __init__(self,x):
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:26
		self._hx___x = None
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:29
		self._hx___x = x

	def resolve(self,name):
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:33
		x = self._hx___x.elementsNamed(name).next()
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:34
		if (x is None):
			# /usr/lib/haxe/std/haxe/xml/Fast.hx:35
			xname = None
			if (self._hx___x.nodeType == Xml.Document):
				xname = "Document"
			else:
				_this = self._hx___x
				if (_this.nodeType != Xml.Element):
					raise _HxException(("Bad node type, expected Element but found " + Std.string(_this.nodeType)))
				xname = _this.nodeName
			# /usr/lib/haxe/std/haxe/xml/Fast.hx:36
			raise _HxException(((("null" if xname is None else xname) + " is missing element ") + ("null" if name is None else name)))
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:38
		return haxe_xml_Fast(x)

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___x = None
haxe_xml__Fast_NodeAccess._hx_class = haxe_xml__Fast_NodeAccess


class haxe_xml__Fast_AttribAccess:
	_hx_class_name = "haxe.xml._Fast.AttribAccess"
	_hx_fields = ["__x"]
	_hx_methods = ["resolve"]

	def __init__(self,x):
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:45
		self._hx___x = None
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:48
		self._hx___x = x

	def resolve(self,name):
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:52
		if (self._hx___x.nodeType == Xml.Document):
			raise _HxException(("Cannot access document attribute " + ("null" if name is None else name)))
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:54
		v = self._hx___x.get(name)
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:55
		if (v is None):
			# /usr/lib/haxe/std/haxe/xml/Fast.hx:56
			def _hx_local_0():
				# /usr/lib/haxe/std/haxe/xml/Fast.hx:56
				_this = self._hx___x
				if (_this.nodeType != Xml.Element):
					raise _HxException(("Bad node type, expected Element but found " + Std.string(_this.nodeType)))
				return _this.nodeName
			raise _HxException(((HxOverrides.stringOrNull(_hx_local_0()) + " is missing attribute ") + ("null" if name is None else name)))
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:57
		return v

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___x = None
haxe_xml__Fast_AttribAccess._hx_class = haxe_xml__Fast_AttribAccess


class haxe_xml__Fast_HasAttribAccess:
	_hx_class_name = "haxe.xml._Fast.HasAttribAccess"
	_hx_fields = ["__x"]
	_hx_methods = ["resolve"]

	def __init__(self,x):
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:64
		self._hx___x = None
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:67
		self._hx___x = x

	def resolve(self,name):
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:71
		if (self._hx___x.nodeType == Xml.Document):
			raise _HxException(("Cannot access document attribute " + ("null" if name is None else name)))
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:73
		return self._hx___x.exists(name)

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___x = None
haxe_xml__Fast_HasAttribAccess._hx_class = haxe_xml__Fast_HasAttribAccess


class haxe_xml__Fast_HasNodeAccess:
	_hx_class_name = "haxe.xml._Fast.HasNodeAccess"
	_hx_fields = ["__x"]
	_hx_methods = ["resolve"]

	def __init__(self,x):
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:80
		self._hx___x = None
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:83
		self._hx___x = x

	def resolve(self,name):
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:87
		return self._hx___x.elementsNamed(name).hasNext()

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___x = None
haxe_xml__Fast_HasNodeAccess._hx_class = haxe_xml__Fast_HasNodeAccess


class haxe_xml__Fast_NodeListAccess:
	_hx_class_name = "haxe.xml._Fast.NodeListAccess"
	_hx_fields = ["__x"]
	_hx_methods = ["resolve"]

	def __init__(self,x):
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:94
		self._hx___x = None
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:97
		self._hx___x = x

	def resolve(self,name):
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:101
		l = List()
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:102
		_hx_local_0 = self._hx___x.elementsNamed(name)
		while _hx_local_0.hasNext():
			x = _hx_local_0.next()
			# /usr/lib/haxe/std/haxe/xml/Fast.hx:103
			l.add(haxe_xml_Fast(x))
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:104
		return l

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___x = None
haxe_xml__Fast_NodeListAccess._hx_class = haxe_xml__Fast_NodeListAccess


class haxe_xml_Fast:
	_hx_class_name = "haxe.xml.Fast"
	_hx_fields = ["x", "node", "nodes", "att", "has", "hasNode"]
	_hx_methods = ["get_name", "get_innerData", "get_innerHTML", "get_elements"]

	def __init__(self,x):
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:111
		self.x = None
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:115
		self.node = None
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:116
		self.nodes = None
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:117
		self.att = None
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:118
		self.has = None
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:119
		self.hasNode = None
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:123
		if ((x.nodeType != Xml.Document) and ((x.nodeType != Xml.Element))):
			raise _HxException(("Invalid nodeType " + Std.string(x.nodeType)))
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:125
		self.x = x
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:126
		self.node = haxe_xml__Fast_NodeAccess(x)
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:127
		self.nodes = haxe_xml__Fast_NodeListAccess(x)
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:128
		self.att = haxe_xml__Fast_AttribAccess(x)
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:129
		self.has = haxe_xml__Fast_HasAttribAccess(x)
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:130
		self.hasNode = haxe_xml__Fast_HasNodeAccess(x)

	def get_name(self):
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:134
		if (self.x.nodeType == Xml.Document):
			return "Document"
		else:
			# /usr/lib/haxe/std/haxe/xml/Fast.hx:134
			_this = self.x
			if (_this.nodeType != Xml.Element):
				raise _HxException(("Bad node type, expected Element but found " + Std.string(_this.nodeType)))
			return _this.nodeName

	def get_innerData(self):
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:138
		it = None
		_this = self.x
		if ((_this.nodeType != Xml.Document) and ((_this.nodeType != Xml.Element))):
			raise _HxException(("Bad node type, expected Element or Document but found " + Std.string(_this.nodeType)))
		it = python_HaxeIterator(_this.children.__iter__())
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:139
		if (not it.hasNext()):
			raise _HxException((HxOverrides.stringOrNull(self.get_name()) + " does not have data"))
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:141
		v = it.next()
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:142
		n = it.next()
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:143
		if (n is not None):
			# /usr/lib/haxe/std/haxe/xml/Fast.hx:145
			def _hx_local_0():
				# /usr/lib/haxe/std/haxe/xml/Fast.hx:145
				if ((v.nodeType == Xml.Document) or ((v.nodeType == Xml.Element))):
					raise _HxException(("Bad node type, unexpected " + Std.string(v.nodeType)))
				return v.nodeValue
			if (((v.nodeType == Xml.PCData) and ((n.nodeType == Xml.CData))) and ((StringTools.trim(_hx_local_0()) == ""))):
				# /usr/lib/haxe/std/haxe/xml/Fast.hx:146
				n2 = it.next()
				# /usr/lib/haxe/std/haxe/xml/Fast.hx:147
				def _hx_local_1():
					# /usr/lib/haxe/std/haxe/xml/Fast.hx:147
					if ((n2.nodeType == Xml.Document) or ((n2.nodeType == Xml.Element))):
						raise _HxException(("Bad node type, unexpected " + Std.string(n2.nodeType)))
					return n2.nodeValue
				if ((n2 is None) or ((((n2.nodeType == Xml.PCData) and ((StringTools.trim(_hx_local_1()) == ""))) and ((it.next() is None))))):
					# /usr/lib/haxe/std/haxe/xml/Fast.hx:148
					if ((n.nodeType == Xml.Document) or ((n.nodeType == Xml.Element))):
						raise _HxException(("Bad node type, unexpected " + Std.string(n.nodeType)))
					return n.nodeValue
			# /usr/lib/haxe/std/haxe/xml/Fast.hx:150
			raise _HxException((HxOverrides.stringOrNull(self.get_name()) + " does not only have data"))
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:152
		if ((v.nodeType != Xml.PCData) and ((v.nodeType != Xml.CData))):
			raise _HxException((HxOverrides.stringOrNull(self.get_name()) + " does not have data"))
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:154
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:154
		if ((v.nodeType == Xml.Document) or ((v.nodeType == Xml.Element))):
			raise _HxException(("Bad node type, unexpected " + Std.string(v.nodeType)))
		return v.nodeValue

	def get_innerHTML(self):
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:158
		s_b = python_lib_io_StringIO()
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:159
		def _hx_local_0():
			# /usr/lib/haxe/std/haxe/xml/Fast.hx:159
			_this = self.x
			if ((_this.nodeType != Xml.Document) and ((_this.nodeType != Xml.Element))):
				raise _HxException(("Bad node type, expected Element or Document but found " + Std.string(_this.nodeType)))
			return python_HaxeIterator(_this.children.__iter__())
		_hx_local_1 = _hx_local_0()
		while _hx_local_1.hasNext():
			x = _hx_local_1.next()
			# /usr/lib/haxe/std/haxe/xml/Fast.hx:160
			x1 = haxe_xml_Printer.print(x)
			s_b.write(Std.string(x1))
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:161
		return s_b.getvalue()

	def get_elements(self):
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:165
		it = self.x.elements()
		# /usr/lib/haxe/std/haxe/xml/Fast.hx:166
		def _hx_local_1():
			# /usr/lib/haxe/std/haxe/xml/Fast.hx:168
			def _hx_local_0():
				# /usr/lib/haxe/std/haxe/xml/Fast.hx:169
				x = it.next()
				# /usr/lib/haxe/std/haxe/xml/Fast.hx:170
				if (x is None):
					return None
				# /usr/lib/haxe/std/haxe/xml/Fast.hx:172
				return haxe_xml_Fast(x)
			# /usr/lib/haxe/std/haxe/xml/Fast.hx:166
			return _hx_AnonObject({'hasNext': it.hasNext, 'next': _hx_local_0})
		return _hx_local_1()

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.x = None
		_hx_o.node = None
		_hx_o.nodes = None
		_hx_o.att = None
		_hx_o.has = None
		_hx_o.hasNode = None
haxe_xml_Fast._hx_class = haxe_xml_Fast


class haxe_xml_Parser:
	_hx_class_name = "haxe.xml.Parser"
	_hx_statics = ["escapes", "parse", "doParse"]

	@staticmethod
	def parse(_hx_str,strict = False):
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:65
		if (strict is None):
			strict = False
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:66
		doc = Xml.createDocument()
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:67
		haxe_xml_Parser.doParse(_hx_str,strict,0,doc)
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:68
		return doc

	@staticmethod
	def doParse(_hx_str,strict,p = 0,parent = None):
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:72
		if (p is None):
			p = 0
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:73
		xml = None
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:74
		state = 1
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:75
		next = 1
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:76
		aname = None
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:77
		start = 0
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:78
		nsubs = 0
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:79
		nbrackets = 0
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:80
		c = None
		if (p >= len(_hx_str)):
			c = -1
		else:
			c = ord(_hx_str[p])
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:81
		buf = StringBuf()
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:83
		escapeNext = 1
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:84
		attrValQuote = -1
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:89
		while (not ((c == -1))):
			# /usr/lib/haxe/std/haxe/xml/Parser.hx:94
			if (state == 0):
				if ((((c == 32) or ((c == 9))) or ((c == 13))) or ((c == 10))):
					pass
				else:
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:102
					state = next
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:103
					continue
			elif (state == 1):
				if (c == 60):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:109
					state = 0
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:110
					next = 2
				else:
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:112
					start = p
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:113
					state = 13
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:114
					continue
			elif (state == 13):
				if (c == 60):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:119
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:119
					_hx_len = (p - start)
					s = None
					if (_hx_len is None):
						s = HxString.substr(_hx_str,start,None)
					else:
						s = HxString.substr(_hx_str,start,_hx_len)
					buf.b.write(s)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:120
					child = Xml.createPCData(buf.b.getvalue())
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:121
					buf = StringBuf()
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:122
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:122
					parent.addChild(child)
					nsubs = (nsubs + 1)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:123
					state = 0
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:124
					next = 2
				elif (c == 38):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:126
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:126
					len1 = (p - start)
					s1 = None
					if (len1 is None):
						s1 = HxString.substr(_hx_str,start,None)
					else:
						s1 = HxString.substr(_hx_str,start,len1)
					buf.b.write(s1)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:127
					state = 18
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:128
					escapeNext = 13
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:129
					start = (p + 1)
			elif (state == 17):
				# /usr/lib/haxe/std/haxe/xml/Parser.hx:132
				def _hx_local_1():
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:132
					index = (p + 1)
					return (-1 if ((index >= len(_hx_str))) else ord(_hx_str[index]))
				def _hx_local_2():
					index1 = (p + 2)
					return (-1 if ((index1 >= len(_hx_str))) else ord(_hx_str[index1]))
				if (((c == 93) and ((_hx_local_1() == 93))) and ((_hx_local_2() == 62))):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:134
					child1 = Xml.createCData(HxString.substr(_hx_str,start,(p - start)))
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:135
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:135
					parent.addChild(child1)
					nsubs = (nsubs + 1)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:136
					p = (p + 2)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:137
					state = 1
			elif (state == 2):
				if (c == 33):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:143
					def _hx_local_5():
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:143
						index2 = (p + 1)
						return (-1 if ((index2 >= len(_hx_str))) else ord(_hx_str[index2]))
					if (_hx_local_5() == 91):
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:145
						p = (p + 2)
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:146
						def _hx_local_7():
							# /usr/lib/haxe/std/haxe/xml/Parser.hx:146
							_this = HxString.substr(_hx_str,p,6)
							return _this.upper()
						if (_hx_local_7() != "CDATA["):
							raise _HxException("Expected <![CDATA[")
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:148
						p = (p + 5)
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:149
						state = 17
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:150
						start = (p + 1)
					else:
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:152
						def _hx_local_9():
							# /usr/lib/haxe/std/haxe/xml/Parser.hx:152
							index3 = (p + 1)
							return (-1 if ((index3 >= len(_hx_str))) else ord(_hx_str[index3]))
						def _hx_local_10():
							index4 = (p + 1)
							return (-1 if ((index4 >= len(_hx_str))) else ord(_hx_str[index4]))
						if ((_hx_local_9() == 68) or ((_hx_local_10() == 100))):
							# /usr/lib/haxe/std/haxe/xml/Parser.hx:154
							def _hx_local_11():
								# /usr/lib/haxe/std/haxe/xml/Parser.hx:154
								_this1 = HxString.substr(_hx_str,(p + 2),6)
								return _this1.upper()
							if (_hx_local_11() != "OCTYPE"):
								raise _HxException("Expected <!DOCTYPE")
							# /usr/lib/haxe/std/haxe/xml/Parser.hx:156
							p = (p + 8)
							# /usr/lib/haxe/std/haxe/xml/Parser.hx:157
							state = 16
							# /usr/lib/haxe/std/haxe/xml/Parser.hx:158
							start = (p + 1)
						else:
							# /usr/lib/haxe/std/haxe/xml/Parser.hx:160
							def _hx_local_13():
								# /usr/lib/haxe/std/haxe/xml/Parser.hx:160
								index5 = (p + 1)
								return (-1 if ((index5 >= len(_hx_str))) else ord(_hx_str[index5]))
							def _hx_local_14():
								index6 = (p + 2)
								return (-1 if ((index6 >= len(_hx_str))) else ord(_hx_str[index6]))
							if ((_hx_local_13() != 45) or ((_hx_local_14() != 45))):
								raise _HxException("Expected <!--")
							else:
								# /usr/lib/haxe/std/haxe/xml/Parser.hx:164
								p = (p + 2)
								# /usr/lib/haxe/std/haxe/xml/Parser.hx:165
								state = 15
								# /usr/lib/haxe/std/haxe/xml/Parser.hx:166
								start = (p + 1)
				elif (c == 63):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:169
					state = 14
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:170
					start = p
				elif (c == 47):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:172
					if (parent is None):
						raise _HxException("Expected node name")
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:174
					start = (p + 1)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:175
					state = 0
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:176
					next = 10
				else:
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:178
					state = 3
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:179
					start = p
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:180
					continue
			elif (state == 3):
				if (not (((((((((c >= 97) and ((c <= 122))) or (((c >= 65) and ((c <= 90))))) or (((c >= 48) and ((c <= 57))))) or ((c == 58))) or ((c == 46))) or ((c == 95))) or ((c == 45))))):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:185
					if (p == start):
						raise _HxException("Expected node name")
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:187
					xml = Xml.createElement(HxString.substr(_hx_str,start,(p - start)))
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:188
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:188
					parent.addChild(xml)
					nsubs = (nsubs + 1)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:189
					state = 0
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:190
					next = 4
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:191
					continue
			elif (state == 4):
				if (c == 47):
					state = 11
				elif (c == 62):
					state = 9
				else:
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:201
					state = 5
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:202
					start = p
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:203
					continue
			elif (state == 5):
				if (not (((((((((c >= 97) and ((c <= 122))) or (((c >= 65) and ((c <= 90))))) or (((c >= 48) and ((c <= 57))))) or ((c == 58))) or ((c == 46))) or ((c == 95))) or ((c == 45))))):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:208
					tmp = None
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:209
					if (start == p):
						raise _HxException("Expected attribute name")
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:211
					tmp = HxString.substr(_hx_str,start,(p - start))
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:212
					aname = tmp
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:213
					if xml.exists(aname):
						raise _HxException("Duplicate attribute")
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:215
					state = 0
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:216
					next = 6
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:217
					continue
			elif (state == 6):
				if (c == 61):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:223
					state = 0
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:224
					next = 7
				else:
					raise _HxException("Expected =")
			elif (state == 7):
				if ((c == 39) or ((c == 34))):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:232
					buf = StringBuf()
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:233
					state = 8
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:234
					start = (p + 1)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:235
					attrValQuote = c
				else:
					raise _HxException("Expected \"")
			elif (state == 8):
				if (c == 38):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:242
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:242
					len2 = (p - start)
					s2 = None
					if (len2 is None):
						s2 = HxString.substr(_hx_str,start,None)
					else:
						s2 = HxString.substr(_hx_str,start,len2)
					buf.b.write(s2)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:243
					state = 18
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:244
					escapeNext = 8
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:245
					start = (p + 1)
				elif (c == 62):
					if strict:
						raise _HxException((("Invalid unescaped " + HxOverrides.stringOrNull("".join(map(chr,[c])))) + " in attribute value"))
					elif (c == attrValQuote):
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:250
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:250
						len3 = (p - start)
						s3 = None
						if (len3 is None):
							s3 = HxString.substr(_hx_str,start,None)
						else:
							s3 = HxString.substr(_hx_str,start,len3)
						buf.b.write(s3)
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:251
						val = buf.b.getvalue()
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:252
						buf = StringBuf()
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:253
						xml.set(aname,val)
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:254
						state = 0
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:255
						next = 4
				elif (c == 60):
					if strict:
						raise _HxException((("Invalid unescaped " + HxOverrides.stringOrNull("".join(map(chr,[c])))) + " in attribute value"))
					elif (c == attrValQuote):
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:250
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:250
						len4 = (p - start)
						s4 = None
						if (len4 is None):
							s4 = HxString.substr(_hx_str,start,None)
						else:
							s4 = HxString.substr(_hx_str,start,len4)
						buf.b.write(s4)
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:251
						val1 = buf.b.getvalue()
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:252
						buf = StringBuf()
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:253
						xml.set(aname,val1)
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:254
						state = 0
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:255
						next = 4
				elif (c == attrValQuote):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:250
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:250
					len5 = (p - start)
					s5 = None
					if (len5 is None):
						s5 = HxString.substr(_hx_str,start,None)
					else:
						s5 = HxString.substr(_hx_str,start,len5)
					buf.b.write(s5)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:251
					val2 = buf.b.getvalue()
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:252
					buf = StringBuf()
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:253
					xml.set(aname,val2)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:254
					state = 0
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:255
					next = 4
			elif (state == 9):
				# /usr/lib/haxe/std/haxe/xml/Parser.hx:258
				p = haxe_xml_Parser.doParse(_hx_str,strict,p,xml)
				# /usr/lib/haxe/std/haxe/xml/Parser.hx:259
				start = p
				# /usr/lib/haxe/std/haxe/xml/Parser.hx:260
				state = 1
			elif (state == 11):
				if (c == 62):
					state = 1
				else:
					raise _HxException("Expected >")
			elif (state == 12):
				if (c == 62):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:273
					if (nsubs == 0):
						parent.addChild(Xml.createPCData(""))
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:275
					return p
				else:
					raise _HxException("Expected >")
			elif (state == 10):
				if (not (((((((((c >= 97) and ((c <= 122))) or (((c >= 65) and ((c <= 90))))) or (((c >= 48) and ((c <= 57))))) or ((c == 58))) or ((c == 46))) or ((c == 95))) or ((c == 45))))):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:282
					if (start == p):
						raise _HxException("Expected node name")
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:285
					v = HxString.substr(_hx_str,start,(p - start))
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:286
					def _hx_local_17():
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:286
						if (parent.nodeType != Xml.Element):
							raise _HxException(("Bad node type, expected Element but found " + Std.string(parent.nodeType)))
						return parent.nodeName
					if (v != _hx_local_17()):
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:287
						def _hx_local_18():
							# /usr/lib/haxe/std/haxe/xml/Parser.hx:287
							if (parent.nodeType != Xml.Element):
								raise _HxException(("Bad node type, expected Element but found " + Std.string(parent.nodeType)))
							return parent.nodeName
						raise _HxException((("Expected </" + HxOverrides.stringOrNull(_hx_local_18())) + ">"))
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:289
					state = 0
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:290
					next = 12
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:291
					continue
			elif (state == 15):
				# /usr/lib/haxe/std/haxe/xml/Parser.hx:294
				def _hx_local_19():
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:294
					index7 = (p + 1)
					return (-1 if ((index7 >= len(_hx_str))) else ord(_hx_str[index7]))
				def _hx_local_20():
					index8 = (p + 2)
					return (-1 if ((index8 >= len(_hx_str))) else ord(_hx_str[index8]))
				if (((c == 45) and ((_hx_local_19() == 45))) and ((_hx_local_20() == 62))):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:296
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:296
					xml1 = Xml.createComment(HxString.substr(_hx_str,start,(p - start)))
					parent.addChild(xml1)
					nsubs = (nsubs + 1)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:297
					p = (p + 2)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:298
					state = 1
			elif (state == 16):
				if (c == 91):
					nbrackets = (nbrackets + 1)
				elif (c == 93):
					nbrackets = (nbrackets - 1)
				elif ((c == 62) and ((nbrackets == 0))):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:307
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:307
					xml2 = Xml.createDocType(HxString.substr(_hx_str,start,(p - start)))
					parent.addChild(xml2)
					nsubs = (nsubs + 1)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:308
					state = 1
			elif (state == 14):
				# /usr/lib/haxe/std/haxe/xml/Parser.hx:311
				def _hx_local_26():
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:311
					index9 = (p + 1)
					return (-1 if ((index9 >= len(_hx_str))) else ord(_hx_str[index9]))
				if ((c == 63) and ((_hx_local_26() == 62))):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:313
					p = (p + 1)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:314
					str1 = HxString.substr(_hx_str,(start + 1),((p - start) - 2))
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:315
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:315
					xml3 = Xml.createProcessingInstruction(str1)
					parent.addChild(xml3)
					nsubs = (nsubs + 1)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:316
					state = 1
			elif (state == 18):
				if (c == 59):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:321
					s6 = HxString.substr(_hx_str,start,(p - start))
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:322
					if (((-1 if ((0 >= len(s6))) else ord(s6[0]))) == 35):
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:323
						c1 = None
						if (((-1 if ((1 >= len(s6))) else ord(s6[1]))) == 120):
							c1 = Std.parseInt(("0" + HxOverrides.stringOrNull(HxString.substr(s6,1,(len(s6) - 1)))))
						else:
							c1 = Std.parseInt(HxString.substr(s6,1,(len(s6) - 1)))
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:345
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:345
						s7 = "".join(map(chr,[c1]))
						buf.b.write(s7)
					elif (not s6 in haxe_xml_Parser.escapes.h):
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:347
						if strict:
							raise _HxException(("Undefined entity: " + ("null" if s6 is None else s6)))
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:349
						buf.b.write(Std.string((("&" + ("null" if s6 is None else s6)) + ";")))
					else:
						# /usr/lib/haxe/std/haxe/xml/Parser.hx:351
						x = haxe_xml_Parser.escapes.h.get(s6,None)
						buf.b.write(Std.string(x))
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:353
					start = (p + 1)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:354
					state = escapeNext
				elif ((not (((((((((c >= 97) and ((c <= 122))) or (((c >= 65) and ((c <= 90))))) or (((c >= 48) and ((c <= 57))))) or ((c == 58))) or ((c == 46))) or ((c == 95))) or ((c == 45))))) and ((c != 35))):
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:356
					if strict:
						raise _HxException(("Invalid character in entity: " + HxOverrides.stringOrNull("".join(map(chr,[c])))))
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:358
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:358
					s8 = "".join(map(chr,[38]))
					buf.b.write(s8)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:359
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:359
					len6 = (p - start)
					s9 = None
					if (len6 is None):
						s9 = HxString.substr(_hx_str,start,None)
					else:
						s9 = HxString.substr(_hx_str,start,len6)
					buf.b.write(s9)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:360
					p = (p - 1)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:361
					start = (p + 1)
					# /usr/lib/haxe/std/haxe/xml/Parser.hx:362
					state = escapeNext
			else:
				pass
			# /usr/lib/haxe/std/haxe/xml/Parser.hx:365
			# /usr/lib/haxe/std/haxe/xml/Parser.hx:365
			p = (p + 1)
			index10 = p
			if (index10 >= len(_hx_str)):
				c = -1
			else:
				c = ord(_hx_str[index10])
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:368
		if (state == 1):
			# /usr/lib/haxe/std/haxe/xml/Parser.hx:370
			start = p
			# /usr/lib/haxe/std/haxe/xml/Parser.hx:371
			state = 13
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:374
		if (state == 13):
			# /usr/lib/haxe/std/haxe/xml/Parser.hx:376
			if ((p != start) or ((nsubs == 0))):
				# /usr/lib/haxe/std/haxe/xml/Parser.hx:377
				# /usr/lib/haxe/std/haxe/xml/Parser.hx:377
				len7 = (p - start)
				s10 = None
				if (len7 is None):
					s10 = HxString.substr(_hx_str,start,None)
				else:
					s10 = HxString.substr(_hx_str,start,len7)
				buf.b.write(s10)
				# /usr/lib/haxe/std/haxe/xml/Parser.hx:378
				# /usr/lib/haxe/std/haxe/xml/Parser.hx:378
				xml4 = Xml.createPCData(buf.b.getvalue())
				parent.addChild(xml4)
				nsubs = (nsubs + 1)
			# /usr/lib/haxe/std/haxe/xml/Parser.hx:380
			return p
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:383
		if (((not strict) and ((state == 18))) and ((escapeNext == 13))):
			# /usr/lib/haxe/std/haxe/xml/Parser.hx:384
			# /usr/lib/haxe/std/haxe/xml/Parser.hx:384
			s11 = "".join(map(chr,[38]))
			buf.b.write(s11)
			# /usr/lib/haxe/std/haxe/xml/Parser.hx:385
			# /usr/lib/haxe/std/haxe/xml/Parser.hx:385
			len8 = (p - start)
			s12 = None
			if (len8 is None):
				s12 = HxString.substr(_hx_str,start,None)
			else:
				s12 = HxString.substr(_hx_str,start,len8)
			buf.b.write(s12)
			# /usr/lib/haxe/std/haxe/xml/Parser.hx:386
			# /usr/lib/haxe/std/haxe/xml/Parser.hx:386
			xml5 = Xml.createPCData(buf.b.getvalue())
			parent.addChild(xml5)
			nsubs = (nsubs + 1)
			# /usr/lib/haxe/std/haxe/xml/Parser.hx:387
			return p
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:390
		raise _HxException("Unexpected end")
haxe_xml_Parser._hx_class = haxe_xml_Parser


class haxe_xml_Printer:
	_hx_class_name = "haxe.xml.Printer"
	_hx_fields = ["output", "pretty"]
	_hx_methods = ["writeNode", "hasChildren"]
	_hx_statics = ["print"]

	def __init__(self,pretty):
		# /usr/lib/haxe/std/haxe/xml/Printer.hx:39
		self.output = None
		# /usr/lib/haxe/std/haxe/xml/Printer.hx:40
		self.pretty = None
		# /usr/lib/haxe/std/haxe/xml/Printer.hx:43
		self.output = StringBuf()
		# /usr/lib/haxe/std/haxe/xml/Printer.hx:44
		self.pretty = pretty

	def writeNode(self,value,tabs):
		# /usr/lib/haxe/std/haxe/xml/Printer.hx:48
		_g = value.nodeType
		# /usr/lib/haxe/std/haxe/xml/Printer.hx:49
		if ((_g) == 2):
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:50
			self.output.b.write(Std.string((("null" if tabs is None else tabs) + "<![CDATA[")))
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:51
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:51
			def _hx_local_0():
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:51
				if ((value.nodeType == Xml.Document) or ((value.nodeType == Xml.Element))):
					raise _HxException(("Bad node type, unexpected " + Std.string(value.nodeType)))
				return value.nodeValue
			input = StringTools.trim(_hx_local_0())
			self.output.b.write(Std.string(input))
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:52
			self.output.b.write("]]>")
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:53
			if self.pretty:
				self.output.b.write("")
		elif ((_g) == 3):
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:55
			commentContent = None
			if ((value.nodeType == Xml.Document) or ((value.nodeType == Xml.Element))):
				raise _HxException(("Bad node type, unexpected " + Std.string(value.nodeType)))
			commentContent = value.nodeValue
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:56
			commentContent = EReg("[\n\r\t]+", "g").replace(commentContent,"")
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:57
			commentContent = (("<!--" + ("null" if commentContent is None else commentContent)) + "-->")
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:58
			self.output.b.write(Std.string(tabs))
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:59
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:59
			input1 = StringTools.trim(commentContent)
			self.output.b.write(Std.string(input1))
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:60
			if self.pretty:
				self.output.b.write("")
		elif ((_g) == 6):
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:62
			def _hx_local_1():
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:62
				if ((value.nodeType != Xml.Document) and ((value.nodeType != Xml.Element))):
					raise _HxException(("Bad node type, expected Element or Document but found " + Std.string(value.nodeType)))
				return python_HaxeIterator(value.children.__iter__())
			_hx_local_2 = _hx_local_1()
			while _hx_local_2.hasNext():
				child = _hx_local_2.next()
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:63
				self.writeNode(child,tabs)
		elif ((_g) == 0):
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:66
			self.output.b.write(Std.string((("null" if tabs is None else tabs) + "<")))
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:67
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:67
			input2 = None
			if (value.nodeType != Xml.Element):
				raise _HxException(("Bad node type, expected Element but found " + Std.string(value.nodeType)))
			input2 = value.nodeName
			self.output.b.write(Std.string(input2))
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:68
			_hx_local_3 = value.attributes()
			while _hx_local_3.hasNext():
				attribute = _hx_local_3.next()
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:69
				self.output.b.write(Std.string(((" " + ("null" if attribute is None else attribute)) + "=\"")))
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:70
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:70
				input3 = StringTools.htmlEscape(value.get(attribute),True)
				self.output.b.write(Std.string(input3))
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:71
				self.output.b.write("\"")
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:73
			if self.hasChildren(value):
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:74
				self.output.b.write(">")
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:75
				if self.pretty:
					self.output.b.write("")
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:76
				def _hx_local_4():
					# /usr/lib/haxe/std/haxe/xml/Printer.hx:76
					if ((value.nodeType != Xml.Document) and ((value.nodeType != Xml.Element))):
						raise _HxException(("Bad node type, expected Element or Document but found " + Std.string(value.nodeType)))
					return python_HaxeIterator(value.children.__iter__())
				_hx_local_5 = _hx_local_4()
				while _hx_local_5.hasNext():
					child1 = _hx_local_5.next()
					# /usr/lib/haxe/std/haxe/xml/Printer.hx:77
					self.writeNode(child1,((("null" if tabs is None else tabs) + "\t") if (self.pretty) else tabs))
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:79
				self.output.b.write(Std.string((("null" if tabs is None else tabs) + "</")))
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:80
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:80
				input4 = None
				if (value.nodeType != Xml.Element):
					raise _HxException(("Bad node type, expected Element but found " + Std.string(value.nodeType)))
				input4 = value.nodeName
				self.output.b.write(Std.string(input4))
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:81
				self.output.b.write(">")
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:82
				if self.pretty:
					self.output.b.write("")
			else:
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:84
				self.output.b.write("/>")
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:85
				if self.pretty:
					self.output.b.write("")
		elif ((_g) == 1):
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:88
			nodeValue = None
			if ((value.nodeType == Xml.Document) or ((value.nodeType == Xml.Element))):
				raise _HxException(("Bad node type, unexpected " + Std.string(value.nodeType)))
			nodeValue = value.nodeValue
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:89
			if (len(nodeValue) != 0):
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:90
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:90
				input5 = (("null" if tabs is None else tabs) + HxOverrides.stringOrNull(StringTools.htmlEscape(nodeValue)))
				self.output.b.write(Std.string(input5))
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:91
				if self.pretty:
					self.output.b.write("")
		elif ((_g) == 5):
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:94
			input6 = None
			def _hx_local_6():
				if ((value.nodeType == Xml.Document) or ((value.nodeType == Xml.Element))):
					raise _HxException(("Bad node type, unexpected " + Std.string(value.nodeType)))
				return value.nodeValue
			input6 = (("<?" + HxOverrides.stringOrNull(_hx_local_6())) + "?>")
			self.output.b.write(Std.string(input6))
		elif ((_g) == 4):
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:96
			input7 = None
			def _hx_local_7():
				if ((value.nodeType == Xml.Document) or ((value.nodeType == Xml.Element))):
					raise _HxException(("Bad node type, unexpected " + Std.string(value.nodeType)))
				return value.nodeValue
			input7 = (("<!DOCTYPE " + HxOverrides.stringOrNull(_hx_local_7())) + ">")
			self.output.b.write(Std.string(input7))
		else:
			pass

	def hasChildren(self,value):
		# /usr/lib/haxe/std/haxe/xml/Printer.hx:111
		def _hx_local_0():
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:111
			if ((value.nodeType != Xml.Document) and ((value.nodeType != Xml.Element))):
				raise _HxException(("Bad node type, expected Element or Document but found " + Std.string(value.nodeType)))
			return python_HaxeIterator(value.children.__iter__())
		_hx_local_2 = _hx_local_0()
		while _hx_local_2.hasNext():
			child = _hx_local_2.next()
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:112
			_g = child.nodeType
			# /usr/lib/haxe/std/haxe/xml/Printer.hx:114
			if (((_g) == 1) or (((_g) == 0))):
				return True
			elif (((_g) == 3) or (((_g) == 2))):
				# /usr/lib/haxe/std/haxe/xml/Printer.hx:116
				def _hx_local_1():
					# /usr/lib/haxe/std/haxe/xml/Printer.hx:116
					if ((child.nodeType == Xml.Document) or ((child.nodeType == Xml.Element))):
						raise _HxException(("Bad node type, unexpected " + Std.string(child.nodeType)))
					return child.nodeValue
				if (len(StringTools.ltrim(_hx_local_1())) != 0):
					return True
			else:
				pass
		# /usr/lib/haxe/std/haxe/xml/Printer.hx:122
		return False

	@staticmethod
	def print(xml,pretty = False):
		# /usr/lib/haxe/std/haxe/xml/Printer.hx:33
		if (pretty is None):
			pretty = False
		# /usr/lib/haxe/std/haxe/xml/Printer.hx:34
		printer = haxe_xml_Printer(pretty)
		# /usr/lib/haxe/std/haxe/xml/Printer.hx:35
		printer.writeNode(xml,"")
		# /usr/lib/haxe/std/haxe/xml/Printer.hx:36
		return printer.output.b.getvalue()

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.output = None
		_hx_o.pretty = None
haxe_xml_Printer._hx_class = haxe_xml_Printer


class hunit__Match_Match_Impl_:
	_hx_class_name = "hunit._Match.Match_Impl_"
	_hx_statics = ["fromValue", "_new"]

	@staticmethod
	def fromValue(value):
		# /home/alex/Work/HaXe/hunit/src/hunit/Match.hx:24
		if (value is None):
			return hunit__Match_Match_Impl_._new(hunit_match_AnyMatch())
		else:
			return hunit__Match_Match_Impl_._new(value)

	@staticmethod
	def _new(value):
		# /home/alex/Work/HaXe/hunit/src/hunit/Match.hx:36
		this1 = None
		# /home/alex/Work/HaXe/hunit/src/hunit/Match.hx:37
		if Std._hx_is(value,hunit_match_Match):
			this1 = value
		else:
			this1 = hunit_match_EqualMatch(value)
		# /home/alex/Work/HaXe/hunit/src/hunit/Match.hx:36
		return this1
hunit__Match_Match_Impl_._hx_class = hunit__Match_Match_Impl_


class hunit_TestState:
	_hx_class_name = "hunit.TestState"
	_hx_fields = ["testCase", "testName", "report", "expectedException", "print", "warned", "expectedCalls", "asserted", "pendingExceptions", "callExceptions"]
	_hx_methods = ["expectingException", "validateException", "success", "warn", "fail", "notice", "pendingFail", "cacheCallException", "getOriginalExceptionStack", "madeAssertions", "finalize", "set_expectedException"]

	def __init__(self,testCase,testName,report,_hx_print):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:25
		self.testCase = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:27
		self.testName = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:29
		self.report = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:31
		self.expectedException = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:33
		self.print = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:35
		self.warned = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:37
		self.expectedCalls = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:39
		self.asserted = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:41
		self.pendingExceptions = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:43
		self.callExceptions = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:35
		self.warned = False
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:53
		self.testCase = testCase
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:54
		self.testName = testName
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:55
		self.report = report
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:56
		self.print = _hx_print
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:58
		self.pendingExceptions = []
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:59
		self.callExceptions = []
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:60
		self.expectedCalls = List()
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:61
		self.asserted = List()

	def expectingException(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:71
		return (self.expectedException is not None)

	def validateException(self,e,catchExceptionStack,exceptionStack):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:82
		if (e is not None):
			if (self.expectedException is not None):
				self.expectedException.validate(e,self.getOriginalExceptionStack(e,catchExceptionStack,exceptionStack))
			else:
				raise hunit_exceptions_UnexpectedException(e, self.getOriginalExceptionStack(e,catchExceptionStack,exceptionStack), _hx_AnonObject({'fileName': "TestState.hx", 'lineNumber': 86, 'className': "hunit.TestState", 'methodName': "validateException"}))

	def success(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:98
		self.report.addSuccess(self.testCase,self.testName)

	def warn(self,warning):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:108
		self.warned = True
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:109
		self.report.addWarning(self.testCase,self.testName,warning)

	def fail(self,exception):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:120
		python_internal_ArrayImpl.remove(self.pendingExceptions,exception)
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:122
		self.report.addFail(self.testCase,self.testName,exception)

	def notice(self,msg,pos):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:132
		self.report.addNotice(self.testCase,self.testName,msg,pos)

	def pendingFail(self,exception):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:142
		_this = self.pendingExceptions
		_this.append(exception)

	def cacheCallException(self,call):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:152
		_this = self.callExceptions
		_this.append(call)

	def getOriginalExceptionStack(self,e,catchExceptionStack,exceptionStack):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:162
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:162
		_g = 0
		_g1 = self.callExceptions
		while (_g < len(_g1)):
			call = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
			_g = (_g + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:163
			if (hunit_utils_ValueTools.getValue(call.exceptionValue) == e):
				return call.exceptionStack
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:168
		return (exceptionStack + catchExceptionStack)

	def madeAssertions(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:178
		return (((self.expectedCalls.length > 0) or ((self.asserted.length > 0))) or self.expectingException())

	def finalize(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:188
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:188
		_hx_local_0 = self.report
		_hx_local_1 = _hx_local_0.assertionCount
		_hx_local_0.assertionCount = (_hx_local_1 + self.asserted.length)
		_hx_local_0.assertionCount
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:189
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:189
		_hx_local_2 = self.report
		_hx_local_3 = _hx_local_2.assertionCount
		_hx_local_2.assertionCount = (_hx_local_3 + self.expectedCalls.length)
		_hx_local_2.assertionCount
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:190
		if self.expectingException():
			# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:191
			_hx_local_4 = self.report
			_hx_local_5 = _hx_local_4.assertionCount
			_hx_local_4.assertionCount = (_hx_local_5 + 1)
			_hx_local_5

	def set_expectedException(self,expectedException):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:202
		if (self.expectedException is not None):
			raise hunit_exceptions_InvalidTestException("Expected exception is already set", _hx_AnonObject({'fileName': "TestState.hx", 'lineNumber': 203, 'className': "hunit.TestState", 'methodName': "set_expectedException"}))
		# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:206
		def _hx_local_1():
			# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:206
			def _hx_local_0():
				# /home/alex/Work/HaXe/hunit/src/hunit/TestState.hx:206
				self.expectedException = expectedException
				return self.expectedException
			return _hx_local_0()
		return _hx_local_1()

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.testCase = None
		_hx_o.testName = None
		_hx_o.report = None
		_hx_o.expectedException = None
		_hx_o.print = None
		_hx_o.warned = None
		_hx_o.expectedCalls = None
		_hx_o.asserted = None
		_hx_o.pendingExceptions = None
		_hx_o.callExceptions = None
hunit_TestState._hx_class = hunit_TestState


class hunit_TestSuite:
	_hx_class_name = "hunit.TestSuite"
	_hx_fields = ["shutDownStandaloneFlashPlayer", "report", "groups", "excludeGroups", "exclude", "state", "cases", "originalTrace", "printer", "executeTestCallStack", "reportWriter"]
	_hx_methods = ["add", "run", "createReport", "createTestState", "redirectTraces", "restoreOriginalTrace", "onCaseBegin", "onCaseEnd", "executeTest", "beforeTestStart", "afterTestDone", "validateTest", "skipDependent", "version", "printHeader", "printSummary", "another80Tests"]

	def __init__(self,reportWriter = None,printer = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:39
		self.shutDownStandaloneFlashPlayer = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:41
		self.report = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:43
		self.groups = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:45
		self.excludeGroups = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:47
		self.exclude = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:50
		self.state = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:52
		self.cases = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:54
		self.originalTrace = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:56
		self.printer = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:58
		self.executeTestCallStack = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:60
		self.reportWriter = None
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:39
		self.shutDownStandaloneFlashPlayer = False
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:71
		self.groups = []
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:72
		self.excludeGroups = []
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:74
		self.exclude = []
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:76
		if (printer is None):
			printer = hunit_Utils.print
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:80
		self.printer = printer
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:82
		if (reportWriter is None):
			reportWriter = hunit_report_DefaultWriter(printer)
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:85
		self.reportWriter = reportWriter
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:87
		self.cases = []
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:88
		self.report = self.createReport()

	def add(self,testCase):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:110
		_this = self.cases
		_this.append(testCase)

	def run(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:120
		if (len(self.cases) == 0):
			# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:121
			self.printer("\nNo test cases added to test suite.\n\n")
			# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:122
			return
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:125
		self.redirectTraces()
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:126
		self.report.startTime = haxe_Timer.stamp()
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:128
		self.printHeader()
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:130
		total = 1
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:131
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:131
		_g = 0
		_g1 = hunit_Utils.filterCases(self.cases,self.exclude)
		while (_g < len(_g1)):
			testCase = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
			_g = (_g + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:132
			try:
				# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:133
				data = hunit_utils_TestCaseData(testCase)
				# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:135
				self.onCaseBegin(testCase,data)
				# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:137
				if (data.get_totalTestCount() == 0):
					# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:138
					cls = Type.getClassName(Type.getClass(testCase))
					# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:139
					self.report.addWarning(testCase,"<none>",hunit_warnings_NoTestsWarning((("" + ("null" if cls is None else cls)) + " does not contain any tests.")))
				else:
					# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:142
					runQueue = data.getTests(self.groups,self.excludeGroups)
					# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:144
					while (len(runQueue) > 0):
						# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:145
						test = None
						test = (None if ((len(runQueue) == 0)) else runQueue.pop(0))
						# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:147
						if (HxOverrides.mod(total, 80) == 0):
							self.another80Tests()
						# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:149
						passed = self.executeTest(testCase,test)
						# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:150
						if (not passed):
							runQueue = self.skipDependent(testCase,test,runQueue)
						# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:154
						total = (total + 1)
				# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:158
				self.onCaseEnd(testCase)
			except Exception as _hx_e:
				_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
				e = _hx_e1
				# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:160
				self.printer("E")
				# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:161
				self.report.addFail(testCase,"<none>",_Exception_HException.wrap(e,_hx_AnonObject({'fileName': "TestSuite.hx", 'lineNumber': 161, 'className': "hunit.TestSuite", 'methodName': "run"})))
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:164
		self.report.set_endTime(haxe_Timer.stamp())
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:166
		self.printer("\n\n")
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:168
		self.report.output()
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:169
		self.printSummary()
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:171
		self.restoreOriginalTrace()

	def createReport(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:187
		return hunit_report_TestReport(self.reportWriter)

	def createTestState(self,testCase,testName):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:197
		return hunit_TestState(testCase, testName, self.report, self.printer)

	def redirectTraces(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:207
		self.originalTrace = haxe_Log.trace
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:208
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:208
		a1 = self.printer
		def _hx_local_0(a2,a3 = None):
			hunit_Utils.printTrace(a1,a2,a3)
		haxe_Log.trace = _hx_local_0

	def restoreOriginalTrace(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:218
		haxe_Log.trace = self.originalTrace

	def onCaseBegin(self,testCase,data):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:228
		self.report.cases.add(testCase)
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:229
		testCase.setupTestCase()

	def onCaseEnd(self,testCase):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:239
		testCase.tearDownTestCase()

	def executeTest(self,testCase,test):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:249
		self.executeTestCallStack = haxe_CallStack.callStack()
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:251
		self.beforeTestStart(testCase,test.name)
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:252
		testCase.setup()
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:254
		passed = False
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:256
		try:
			# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:258
			if test.isIncomplete:
				self.state.warn(hunit_warnings_IncompleteTestWarning(test.incompleteMsg))
			else:
				try:
					# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:262
					Reflect.callMethod(testCase,test.callback,[])
					# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:263
					self.validateTest(test)
				except Exception as _hx_e:
					_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
					if isinstance(_hx_e1, hunit_exceptions_TestFailException):
						e = _hx_e1
						raise e
					else:
						e1 = _hx_e1
						self.validateTest(test,e1,haxe_CallStack.exceptionStack())
			# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:271
			if (not self.state.warned):
				# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:272
				self.state.success()
				# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:273
				passed = True
				# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:274
				self.printer(".")
			else:
				self.printer("W")
			# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:278
			self.state.finalize()
		except Exception as _hx_e:
			_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
			if isinstance(_hx_e1, _Exception_HException):
				e2 = _hx_e1
				# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:281
				self.state.fail(e2)
				# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:282
				self.printer(("E" if (Std._hx_is(e2,hunit_exceptions_InvalidTestException)) else "F"))
			else:
				raise _hx_e
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:285
		testCase.tearDown()
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:286
		self.afterTestDone(testCase)
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:288
		return passed

	def beforeTestStart(self,testCase,test):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:298
		self.state = self.createTestState(testCase,test)
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:299
		testCase._hx___hu_state = self.state

	def afterTestDone(self,testCase):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:309
		self.state = None

	def validateTest(self,test,exception = None,exceptionStack = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:324
		if (len(self.state.pendingExceptions) > 0):
			raise python_internal_ArrayImpl._get(self.state.pendingExceptions, 0)
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:328
		if (exception is not None):
			self.state.validateException(exception,self.executeTestCallStack,exceptionStack)
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:332
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:332
		_g_head = self.state.expectedCalls.h
		_g_val = None
		while (_g_head is not None):
			expect = None
			def _hx_local_0():
				nonlocal _g_head
				nonlocal _g_val
				_g_val = (_g_head[0] if 0 < len(_g_head) else None)
				_g_head = (_g_head[1] if 1 < len(_g_head) else None)
				# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:321
				return _g_val
			expect = _hx_local_0()
			# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:333
			expect.validate()
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:336
		if (self.state.expectingException() and (not self.state.expectedException.satisfied)):
			raise hunit_exceptions_NoExpectedException(self.state.expectedException.match, self.state.expectedException.pos)
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:340
		if ((not test.isIncomplete) and (not self.state.madeAssertions())):
			self.state.warn(hunit_warnings_NoAssertionsWarning("This test did not perform any assertions"))

	def skipDependent(self,testCase,failed,runQueue):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:352
		dependent = hunit_utils_TestCaseData.getDependent(failed,runQueue)
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:354
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:354
		_g = 0
		while (_g < len(dependent)):
			test = (dependent[_g] if _g >= 0 and _g < len(dependent) else None)
			_g = (_g + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:355
			self.printer("S")
			# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:356
			python_internal_ArrayImpl.remove(runQueue,test)
			# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:357
			self.report.addSkip(testCase,test.name,test.depends)
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:360
		return runQueue

	def version(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:370
		return "0.1.32"

	def printHeader(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:380
		self.printer((("HUnit " + HxOverrides.stringOrNull(self.version())) + "\n\n"))

	def printSummary(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:390
		self.printer((HxOverrides.stringOrNull(self.report.getSummary()) + "\n"))
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:391
		self.printer("\n")

	def another80Tests(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/TestSuite.hx:402
		self.printer("\n")

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.shutDownStandaloneFlashPlayer = None
		_hx_o.report = None
		_hx_o.groups = None
		_hx_o.excludeGroups = None
		_hx_o.exclude = None
		_hx_o.state = None
		_hx_o.cases = None
		_hx_o.originalTrace = None
		_hx_o.printer = None
		_hx_o.executeTestCallStack = None
		_hx_o.reportWriter = None
hunit_TestSuite._hx_class = hunit_TestSuite


class hunit_Utils:
	_hx_class_name = "hunit.Utils"
	_hx_statics = ["META_TEST", "isObject", "shortenString", "hasToString", "safeToString", "shortenQuote", "printTrace", "print", "buffer", "bufferedPrint", "filterCases"]

	@staticmethod
	def isObject(value):
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:67
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:67
		_g = Type.typeof(value)
		if ((_g.index) == 6):
			if ((_g.params[0]) == str):
				return False
			else:
				return True
		elif ((_g.index) == 4):
			return True
		else:
			return False

	@staticmethod
	def shortenString(_hx_str):
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:82
		if (len(_hx_str) > 70):
			return (HxOverrides.stringOrNull(HxString.substr(_hx_str,0,65)) + "<...>")
		else:
			return _hx_str

	@staticmethod
	def hasToString(value):
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:92
		if Std._hx_is(value,str):
			return True
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:94
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:94
		_g = Type.typeof(value)
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:95
		if ((_g.index) == 6):
			cls = _g.params[0]
			# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:96
			def _hx_local_1():
				# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:96
				def _hx_local_0():
					# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:96
					_this = python_Boot.getInstanceFields(cls)
					return python_internal_ArrayImpl.indexOf(_this,"toString",None)
				return (_hx_local_0() >= 0)
			return _hx_local_1()
		else:
			return False

	@staticmethod
	def safeToString(value):
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:110
		return Std.string(value)

	@staticmethod
	def shortenQuote(value):
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:131
		_hx_str = hunit_Utils.shortenString(hunit_Utils.safeToString(value))
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:133
		if hunit_Utils.hasToString(value):
			return (("\"" + ("null" if _hx_str is None else _hx_str)) + "\"")
		else:
			return _hx_str

	@staticmethod
	def printTrace(printer,value,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:143
		file = pos.fileName
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:144
		line = pos.lineNumber
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:145
		msg = hunit_Utils.safeToString(value)
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:147
		printer((((((("HUnit: " + ("null" if file is None else file)) + ":") + Std.string(line)) + ": ") + ("null" if msg is None else msg)) + "\n"))

	@staticmethod
	def print(value):
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:172
		python_Lib.print(value)

	@staticmethod
	def bufferedPrint(value,printer):
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:208
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:208
		_hx_local_0 = hunit_Utils
		_hx_local_1 = _hx_local_0.buffer
		_hx_local_0.buffer = (("null" if _hx_local_1 is None else _hx_local_1) + ("null" if value is None else value))
		_hx_local_0.buffer
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:209
		def _hx_local_2():
			# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:209
			_this = hunit_Utils.buffer
			return _this.find("\n")
		if (_hx_local_2() >= 0):
			# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:210
			lines = None
			_this1 = hunit_Utils.buffer
			lines = _this1.split("\n")
			# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:211
			# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:211
			_g1 = 0
			_g = (len(lines) - 1)
			while (_g1 < _g):
				i = _g1
				_g1 = (_g1 + 1)
				# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:212
				printer((lines[i] if i >= 0 and i < len(lines) else None))
			# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:214
			hunit_Utils.buffer = python_internal_ArrayImpl._get(lines, (len(lines) - 1))

	@staticmethod
	def filterCases(cases,excludes):
		# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:225
		def _hx_local_2():
			# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:225
			def _hx_local_1(c):
				# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:226
				className = Type.getClassName(Type.getClass(c))
				# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:228
				# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:228
				_g = 0
				while (_g < len(excludes)):
					e = (excludes[_g] if _g >= 0 and _g < len(excludes) else None)
					_g = (_g + 1)
					# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:229
					if (className.find(e) == 0):
						return False
				# /home/alex/Work/HaXe/hunit/src/hunit/Utils.hx:232
				return True
			return list(filter(_hx_local_1,cases))
		return _hx_local_2()
hunit_Utils._hx_class = hunit_Utils


class hunit_assert_AssertFactory:
	_hx_class_name = "hunit.assert.AssertFactory"
	_hx_fields = ["testCase"]
	_hx_methods = ["match", "equal", "notEqual", "type", "isNull", "notNull", "isTrue", "isFalse", "regexp", "similar", "fail", "warn", "success"]

	def __init__(self,testCase):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:20
		self.testCase = None
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:29
		self.testCase = testCase

	def match(self,match,value,message = None,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:39
		_hx_assert = hunit_assert_MatchAssert(match, value, message, pos)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:40
		self.testCase._hx___hu_state.asserted.add(_hx_assert)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:42
		_hx_assert.validate()

	def equal(self,expected,actual,message = None,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:52
		_hx_assert = hunit_assert_MatchAssert(self.testCase.match.equal(expected), actual, message, pos)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:53
		self.testCase._hx___hu_state.asserted.add(_hx_assert)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:55
		_hx_assert.validate()

	def notEqual(self,expected,actual,message = None,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:65
		_hx_assert = hunit_assert_MatchAssert(self.testCase.match.notEqual(expected), actual, message, pos)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:66
		self.testCase._hx___hu_state.asserted.add(_hx_assert)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:68
		_hx_assert.validate()

	def type(self,expectedType,value,message = None,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:78
		_hx_assert = hunit_assert_MatchAssert(self.testCase.match.type(expectedType), value, message, pos)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:79
		self.testCase._hx___hu_state.asserted.add(_hx_assert)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:81
		_hx_assert.validate()

	def isNull(self,value,message = None,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:91
		_hx_assert = hunit_assert_MatchAssert(self.testCase.match.equal(None), value, message, pos)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:92
		self.testCase._hx___hu_state.asserted.add(_hx_assert)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:94
		_hx_assert.validate()

	def notNull(self,value,message = None,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:104
		_hx_assert = hunit_assert_MatchAssert(self.testCase.match.notEqual(None), value, message, pos)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:105
		self.testCase._hx___hu_state.asserted.add(_hx_assert)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:107
		_hx_assert.validate()

	def isTrue(self,value,message = None,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:117
		_hx_assert = hunit_assert_MatchAssert(self.testCase.match.equal(True), value, message, pos)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:118
		self.testCase._hx___hu_state.asserted.add(_hx_assert)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:120
		_hx_assert.validate()

	def isFalse(self,value,message = None,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:130
		_hx_assert = hunit_assert_MatchAssert(self.testCase.match.equal(False), value, message, pos)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:131
		self.testCase._hx___hu_state.asserted.add(_hx_assert)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:133
		_hx_assert.validate()

	def regexp(self,pattern,value,message = None,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:143
		_hx_assert = hunit_assert_MatchAssert(self.testCase.match.regexp(pattern), value, message, pos)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:144
		self.testCase._hx___hu_state.asserted.add(_hx_assert)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:146
		_hx_assert.validate()

	def similar(self,expected,actual,message = None,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:169
		_hx_assert = hunit_assert_MatchAssert(self.testCase.match.similar(expected), actual, message, pos)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:170
		self.testCase._hx___hu_state.asserted.add(_hx_assert)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:172
		_hx_assert.validate()

	def fail(self,message = None,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:182
		raise hunit_exceptions_AssertException(("Forced test failure." if ((message is None)) else message), pos)

	def warn(self,message = None,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:192
		self.testCase._hx___hu_state.warn(hunit_warnings_ForcedWarning(("Forced warning" if ((message is None)) else message)))
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:193
		self.testCase._hx___hu_state.asserted.add(hunit_assert_BaseAssert(pos))

	def success(self,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/AssertFactory.hx:203
		self.testCase._hx___hu_state.asserted.add(hunit_assert_BaseAssert(pos))

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.testCase = None
hunit_assert_AssertFactory._hx_class = hunit_assert_AssertFactory


class hunit_assert_BaseAssert:
	_hx_class_name = "hunit.assert.BaseAssert"
	_hx_fields = ["pos"]
	_hx_methods = ["validate", "failed"]

	def __init__(self,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx:17
		self.pos = None
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx:26
		self.pos = pos

	def validate(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx:36
		raise _HxException("To be overriden")

	def failed(self,message):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/BaseAssert.hx:46
		raise hunit_exceptions_AssertException(message, self.pos)

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.pos = None
hunit_assert_BaseAssert._hx_class = hunit_assert_BaseAssert


class hunit_assert_MatchAssert(hunit_assert_BaseAssert):
	_hx_class_name = "hunit.assert.MatchAssert"
	_hx_fields = ["expected", "actual", "message"]
	_hx_methods = ["validate", "buildMessage", "actualType"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = hunit_assert_BaseAssert


	def __init__(self,expected,actual,message = None,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:18
		self.expected = None
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:20
		self.actual = None
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:22
		self.message = None
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:31
		super().__init__(pos)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:33
		self.expected = expected
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:34
		self.actual = actual
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:35
		self.message = message

	def validate(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:45
		if self.expected.match(self.actual):
			return
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:47
		self.failed((self.buildMessage() if ((self.message is None)) else self.message))

	def buildMessage(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:57
		a = hunit_Utils.shortenQuote(self.actual)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:59
		if self.expected.isChained():
			return (((("Failed asserting that " + ("null" if a is None else a)) + " matches ") + Std.string(self.expected)) + ".")
		else:
			# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:62
			cls = Type.getClass(self.expected)
			# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:64
			if (cls == hunit_match_TypeMatch):
				# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:64
				def _hx_local_1():
					# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:65
					def _hx_local_0():
						# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:65
						_hx_local_0 = self.expected
						if Std._hx_is(_hx_local_0,hunit_match_TypeMatch):
							_hx_local_0
						else:
							raise _HxException("Class cast error")
						return _hx_local_0
					return ((("Failed asserting that " + HxOverrides.stringOrNull(self.actualType())) + " is ") + HxOverrides.stringOrNull(Type.getClassName((_hx_local_0()).type)))
				return _hx_local_1()
			elif (cls == hunit_match_NotEqualMatch):
				def _hx_local_3():
					# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:66
					def _hx_local_0():
						# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:66
						_hx_local_2 = self.expected
						if Std._hx_is(_hx_local_2,hunit_match_NotEqualMatch):
							_hx_local_2
						else:
							raise _HxException("Class cast error")
						return _hx_local_2
					return ((("Failed asserting that " + ("null" if a is None else a)) + " does not equal ") + HxOverrides.stringOrNull(hunit_Utils.shortenQuote((_hx_local_0()).value)))
				return _hx_local_3()
			elif (cls == hunit_match_EqualMatch):
				def _hx_local_5():
					# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:67
					def _hx_local_0():
						# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:67
						_hx_local_4 = self.expected
						if Std._hx_is(_hx_local_4,hunit_match_EqualMatch):
							_hx_local_4
						else:
							raise _HxException("Class cast error")
						return _hx_local_4
					return ((("Failed asserting that " + ("null" if a is None else a)) + " equals ") + HxOverrides.stringOrNull(hunit_Utils.shortenQuote((_hx_local_0()).value)))
				return _hx_local_5()
			else:
				return (((("Failed asserting that " + ("null" if a is None else a)) + " matches ") + Std.string(self.expected)) + ".")

	def actualType(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:80
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:80
		_g = Type.typeof(self.actual)
		# /home/alex/Work/HaXe/hunit/src/hunit/assert/MatchAssert.hx:81
		if ((_g.index) == 6):
			c = _g.params[0]
			return Type.getClassName(c)
		elif ((_g.index) == 7):
			e = _g.params[0]
			return Type.getEnumName(e)
		elif ((_g.index) == 0):
			return "Null"
		elif ((_g.index) == 1):
			return "Int"
		elif ((_g.index) == 2):
			return "Float"
		elif ((_g.index) == 3):
			return "Bool"
		elif ((_g.index) == 4):
			return "Object"
		elif ((_g.index) == 5):
			return "Function"
		elif ((_g.index) == 8):
			return "Unknown Type"
		else:
			pass

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.expected = None
		_hx_o.actual = None
		_hx_o.message = None
hunit_assert_MatchAssert._hx_class = hunit_assert_MatchAssert


class hunit_call_Call:
	_hx_class_name = "hunit.call.Call"
	_hx_fields = ["id", "mockData", "method", "arguments", "result", "stack", "exceptionValue", "exceptionStack", "isStub", "stub", "pos"]
	_hx_methods = ["toString", "set_exceptionValue"]

	def __init__(self,id,mockData,method,arguments,stack,pos,isStub,stub = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:18
		self.id = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:20
		self.mockData = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:22
		self.method = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:24
		self.arguments = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:26
		self.result = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:28
		self.stack = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:30
		self.exceptionValue = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:32
		self.exceptionStack = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:34
		self.isStub = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:36
		self.stub = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:38
		self.pos = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:34
		self.isStub = False
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:47
		self.id = id
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:48
		self.mockData = mockData
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:49
		self.method = method
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:50
		self.arguments = arguments
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:51
		self.isStub = isStub
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:52
		self.stub = stub
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:53
		self.pos = pos
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:54
		self.stack = stack
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:56
		self.result = hunit_utils_Value.Nothing
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:57
		self.set_exceptionValue(hunit_utils_Value.Nothing)

	def toString(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:67
		_hx_str = ""
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:68
		if hunit_utils_ValueTools.hasValue(self.result):
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:69
			value = hunit_utils_ValueTools.getValue(self.result)
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:70
			_hx_str = (("returned " + HxOverrides.stringOrNull(hunit_Utils.shortenQuote(value))) + "")
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:73
		if hunit_utils_ValueTools.hasValue(self.exceptionValue):
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:74
			e = hunit_utils_ValueTools.getValue(self.exceptionValue)
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:75
			exceptionMsg = None
			if Std._hx_is(e,_Exception_HException):
				# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:77
				def _hx_local_0():
					# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:77
					_hx_local_0 = e
					if Std._hx_is(_hx_local_0,_Exception_HException):
						_hx_local_0
					else:
						raise _HxException("Class cast error")
					return _hx_local_0
				exceptionMsg = hunit_Utils.shortenString((_hx_local_0()).message)
			else:
				exceptionMsg = hunit_Utils.shortenQuote(e)
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:81
			_hx_str = ("threw " + ("null" if exceptionMsg is None else exceptionMsg))
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:84
		className = self.mockData.mockClassName()
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:85
		args = None
		def _hx_local_1(a):
			return hunit_Utils.shortenQuote(a)
		_this = list(map(_hx_local_1,self.arguments))
		args = ", ".join([python_Boot.toString1(x1,'') for x1 in _this])
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:86
		msg = ((((((("" + ("null" if className is None else className)) + ".") + HxOverrides.stringOrNull(self.method)) + "(") + ("null" if args is None else args)) + ") ") + ("null" if _hx_str is None else _hx_str))
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:88
		return msg

	def set_exceptionValue(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:98
		if hunit_utils_ValueTools.hasValue(value):
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:99
			_this = haxe_CallStack.exceptionStack()
			self.exceptionStack = (_this + self.stack)
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:102
		def _hx_local_1():
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:102
			def _hx_local_0():
				# /home/alex/Work/HaXe/hunit/src/hunit/call/Call.hx:102
				self.exceptionValue = value
				return self.exceptionValue
			return _hx_local_0()
		return _hx_local_1()

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.id = None
		_hx_o.mockData = None
		_hx_o.method = None
		_hx_o.arguments = None
		_hx_o.result = None
		_hx_o.stack = None
		_hx_o.exceptionValue = None
		_hx_o.exceptionStack = None
		_hx_o.isStub = None
		_hx_o.stub = None
		_hx_o.pos = None
hunit_call_Call._hx_class = hunit_call_Call

class hunit_call_CallCount(Enum):
	_hx_class_name = "hunit.call.CallCount"
	_hx_constructs = ["Never", "Any", "Once", "AtLeast", "Exactly"]

	@staticmethod
	def AtLeast(amount):
		return hunit_call_CallCount("AtLeast", 3, [amount])

	@staticmethod
	def Exactly(amount):
		return hunit_call_CallCount("Exactly", 4, [amount])
hunit_call_CallCount.Never = hunit_call_CallCount("Never", 0, list())
hunit_call_CallCount.Any = hunit_call_CallCount("Any", 1, list())
hunit_call_CallCount.Once = hunit_call_CallCount("Once", 2, list())
hunit_call_CallCount._hx_class = hunit_call_CallCount


class hunit_call_IExpect:
	_hx_class_name = "hunit.call.IExpect"
	_hx_methods = ["validate"]
hunit_call_IExpect._hx_class = hunit_call_IExpect


class hunit_call_Expect:
	_hx_class_name = "hunit.call.Expect"
	_hx_fields = ["mockData", "method", "arguments", "returns", "throws", "count", "pos", "timesMatched", "fromCallId"]
	_hx_methods = ["sameObjectMethod", "match", "validate", "tooManyCalls", "toString"]
	_hx_interfaces = [hunit_call_IExpect]

	def __init__(self,mockData,method,arguments,returns,throws,count,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:20
		self.mockData = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:22
		self.method = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:24
		self.arguments = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:26
		self.returns = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:28
		self.throws = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:30
		self.count = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:32
		self.pos = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:34
		self.timesMatched = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:36
		self.fromCallId = None
		self.fromCallId = 0
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:34
		self.timesMatched = 0
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:45
		self.mockData = mockData
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:46
		self.method = method
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:47
		self.arguments = arguments
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:48
		self.returns = returns
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:49
		self.throws = throws
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:50
		self.count = count
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:51
		self.pos = pos

	def sameObjectMethod(self,call):
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:61
		return ((self.mockData == call.mockData) and ((self.method == call.method)))

	def match(self,call):
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:71
		if (self.mockData != call.mockData):
			return False
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:73
		if (self.method != call.method):
			return False
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:75
		if (len(self.arguments) != len(call.arguments)):
			raise _HxException("Arguments count does not match")
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:79
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:79
		_g1 = 0
		_g = len(self.arguments)
		while (_g1 < _g):
			i = _g1
			_g1 = (_g1 + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:80
			if (not (self.arguments[i] if i >= 0 and i < len(self.arguments) else None).match((call.arguments[i] if i >= 0 and i < len(call.arguments) else None))):
				return False
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:83
		if hunit_utils_ValueTools.hasValue(self.returns):
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:84
			if (not hunit_utils_ValueTools.hasValue(call.result)):
				return False
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:86
			expected = hunit_utils_ValueTools.getValue(self.returns)
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:87
			actual = hunit_utils_ValueTools.getValue(call.result)
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:88
			if (not expected.match(actual)):
				return False
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:91
		if hunit_utils_ValueTools.hasValue(self.throws):
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:92
			if (not hunit_utils_ValueTools.hasValue(call.exceptionValue)):
				return False
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:96
			e = hunit_utils_ValueTools.getValue(call.exceptionValue)
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:97
			if (not hunit_utils_ValueTools.getValue(self.throws).match(e)):
				return False
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:102
		return True

	def validate(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:112
		self.mockData.validateExpectation(self)

	def tooManyCalls(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:122
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:122
		_g = self.count
		if ((_g.index) == 0):
			return (self.timesMatched > 0)
		elif ((_g.index) == 1):
			return False
		elif ((_g.index) == 2):
			return (self.timesMatched > 1)
		elif ((_g.index) == 3):
			amount = _g.params[0]
			return False
		elif ((_g.index) == 4):
			amount1 = _g.params[0]
			return (self.timesMatched > amount1)
		else:
			pass

	def toString(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:138
		cls = self.mockData.mockClassName()
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:139
		args = None
		def _hx_local_0(a):
			return ("" + HxOverrides.stringOrNull(a.toString()))
		_this = list(map(_hx_local_0,self.arguments))
		args = ", ".join([python_Boot.toString1(x1,'') for x1 in _this])
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:141
		results = []
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:142
		if hunit_utils_ValueTools.hasValue(self.returns):
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:143
			x = ("to return " + Std.string(hunit_utils_ValueTools.getValue(self.returns)))
			results.append(x)
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:145
		if hunit_utils_ValueTools.hasValue(self.throws):
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:146
			x1 = ("to throw " + Std.string(hunit_utils_ValueTools.getValue(self.throws)))
			results.append(x1)
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:149
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:149
		_g = self.count
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:150
		if ((_g.index) == 1):
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:150
			results.append("to be called zero or more times")
		elif ((_g.index) == 0):
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:151
			results.append("to be never called")
		elif ((_g.index) == 2):
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:152
			results.append("to be called once")
		elif ((_g.index) == 3):
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:149
			amount = _g.params[0]
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:153
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:153
			results.append(((("to be called at least " + Std.string(amount)) + " time") + HxOverrides.stringOrNull((("" if ((amount == 1)) else "s")))))
		elif ((_g.index) == 4):
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:149
			amount1 = _g.params[0]
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:154
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:154
			results.append(((("to be called exactly " + Std.string(amount1)) + " time") + HxOverrides.stringOrNull((("" if ((amount1 == 1)) else "s")))))
		else:
			pass
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:157
		last = None
		last = (None if ((len(results) == 0)) else results.pop())
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:158
		toDo = None
		if (len(results) == 0):
			toDo = last
		else:
			toDo = (HxOverrides.stringOrNull(", ".join([python_Boot.toString1(x1,'') for x1 in results])) + HxOverrides.stringOrNull(((" and " + ("null" if last is None else last)))))
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:159
		msg = ((((((("" + ("null" if cls is None else cls)) + ".") + HxOverrides.stringOrNull(self.method)) + "(") + ("null" if args is None else args)) + ") is expected ") + ("null" if toDo is None else toDo))
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Expect.hx:161
		return msg

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.mockData = None
		_hx_o.method = None
		_hx_o.arguments = None
		_hx_o.returns = None
		_hx_o.throws = None
		_hx_o.count = None
		_hx_o.pos = None
		_hx_o.timesMatched = None
		_hx_o.fromCallId = None
hunit_call_Expect._hx_class = hunit_call_Expect


class hunit_call_Stub:
	_hx_class_name = "hunit.call.Stub"
	_hx_fields = ["mockData", "method", "arguments", "returns", "throws", "implementation", "pos"]
	_hx_methods = ["expect", "match"]

	def __init__(self,mockData,method,arguments,returns,throws,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:23
		self.mockData = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:25
		self.method = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:27
		self.arguments = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:29
		self.returns = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:31
		self.throws = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:33
		self.implementation = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:35
		self.pos = None
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:44
		self.mockData = mockData
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:45
		self.method = method
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:46
		self.arguments = arguments
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:47
		self.returns = returns
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:48
		self.throws = throws
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:49
		self.pos = pos

	def expect(self,count):
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:59
		expect = hunit_call_Expect(self.mockData, self.method, self.arguments, hunit_utils_Value.Nothing, hunit_utils_Value.Nothing, count, self.pos)
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:68
		self.mockData.expect(expect)
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:70
		return expect

	def match(self,method,arguments):
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:80
		if (self.method != method):
			return False
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:82
		if (len(arguments) != len(self.arguments)):
			raise _HxException("Arguments count does not match")
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:86
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:86
		_g1 = 0
		_g = len(self.arguments)
		while (_g1 < _g):
			i = _g1
			_g1 = (_g1 + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:87
			if (not (self.arguments[i] if i >= 0 and i < len(self.arguments) else None).match((arguments[i] if i >= 0 and i < len(arguments) else None))):
				return False
		# /home/alex/Work/HaXe/hunit/src/hunit/call/Stub.hx:90
		return True

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.mockData = None
		_hx_o.method = None
		_hx_o.arguments = None
		_hx_o.returns = None
		_hx_o.throws = None
		_hx_o.implementation = None
		_hx_o.pos = None
hunit_call_Stub._hx_class = hunit_call_Stub


class hunit_exceptions_TestFailException(_Exception_HException):
	_hx_class_name = "hunit.exceptions.TestFailException"
	_hx_fields = []
	_hx_methods = []
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = _Exception_HException


	def __init__(self,message,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/TestFailException.hx:9
		super().__init__(message,pos)
hunit_exceptions_TestFailException._hx_class = hunit_exceptions_TestFailException


class hunit_exceptions_AssertException(hunit_exceptions_TestFailException):
	_hx_class_name = "hunit.exceptions.AssertException"
	_hx_fields = []
	_hx_methods = []
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = hunit_exceptions_TestFailException


	def __init__(self,message,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/AssertException.hx:9
		super().__init__(message,pos)
hunit_exceptions_AssertException._hx_class = hunit_exceptions_AssertException


class hunit_exceptions_InvalidTestException(_Exception_HException):
	_hx_class_name = "hunit.exceptions.InvalidTestException"
	_hx_fields = []
	_hx_methods = []
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = _Exception_HException


	def __init__(self,message,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/InvalidTestException.hx:9
		super().__init__(message,pos)
hunit_exceptions_InvalidTestException._hx_class = hunit_exceptions_InvalidTestException


class hunit_exceptions_CircularTestDependencyException(hunit_exceptions_InvalidTestException):
	_hx_class_name = "hunit.exceptions.CircularTestDependencyException"
	_hx_fields = []
	_hx_methods = []
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = hunit_exceptions_InvalidTestException


	def __init__(self,message,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/CircularTestDependencyException.hx:9
		super().__init__(message,pos)
hunit_exceptions_CircularTestDependencyException._hx_class = hunit_exceptions_CircularTestDependencyException


class hunit_exceptions_ExpectedExceptionData:
	_hx_class_name = "hunit.exceptions.ExpectedExceptionData"
	_hx_fields = ["match", "satisfied", "pos"]
	_hx_methods = ["validate"]

	def __init__(self,match,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx:17
		self.match = None
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx:19
		self.satisfied = None
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx:21
		self.pos = None
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx:19
		self.satisfied = False
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx:30
		self.match = match
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx:31
		self.pos = pos

	def validate(self,e,exceptionStack):
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx:42
		self.satisfied = self.match.match(e)
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/ExpectedExceptionData.hx:44
		if (not self.satisfied):
			raise hunit_exceptions_UnexpectedException(e, exceptionStack, _hx_AnonObject({'fileName': "ExpectedExceptionData.hx", 'lineNumber': 45, 'className': "hunit.exceptions.ExpectedExceptionData", 'methodName': "validate"}))

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.match = None
		_hx_o.satisfied = None
		_hx_o.pos = None
hunit_exceptions_ExpectedExceptionData._hx_class = hunit_exceptions_ExpectedExceptionData


class hunit_exceptions_NoExpectedException(hunit_exceptions_TestFailException):
	_hx_class_name = "hunit.exceptions.NoExpectedException"
	_hx_fields = []
	_hx_methods = []
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = hunit_exceptions_TestFailException


	def __init__(self,exceptionMatch,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/NoExpectedException.hx:21
		super().__init__(("Expected exception was not thrown: " + HxOverrides.stringOrNull(exceptionMatch.toString())),pos)
hunit_exceptions_NoExpectedException._hx_class = hunit_exceptions_NoExpectedException


class hunit_exceptions_UnexpectedCallException(hunit_exceptions_TestFailException):
	_hx_class_name = "hunit.exceptions.UnexpectedCallException"
	_hx_fields = []
	_hx_methods = []
	_hx_statics = ["generateMessage"]
	_hx_interfaces = []
	_hx_super = hunit_exceptions_TestFailException


	def __init__(self,call,expect = None,reason = None,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx:50
		msg = None
		if (reason is not None):
			msg = reason
		else:
			msg = hunit_exceptions_UnexpectedCallException.generateMessage(call,expect)
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx:52
		super().__init__(msg,pos)
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx:54
		self.stack = _Exception_HException.processCallStackOnCreation(call.stack)

	@staticmethod
	def generateMessage(call,expect = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx:28
		expectMsg = ""
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx:29
		if (expect is not None):
			# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx:30
			s = None
			if (expect.timesMatched == 1):
				s = ""
			else:
				s = "s"
			# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx:31
			expectMsg = ((((((" " + Std.string(expect)) + ", but called ") + Std.string(expect.timesMatched)) + " time") + ("null" if s is None else s)) + " and last one was")
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx:34
		msg = ((("Unexpected call:" + ("null" if expectMsg is None else expectMsg)) + " ") + Std.string(call))
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedCallException.hx:36
		return msg
hunit_exceptions_UnexpectedCallException._hx_class = hunit_exceptions_UnexpectedCallException


class hunit_exceptions_UnexpectedException(_Exception_HException):
	_hx_class_name = "hunit.exceptions.UnexpectedException"
	_hx_fields = ["original", "originalExceptionStack"]
	_hx_methods = ["toString", "buildStack"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = _Exception_HException


	def __init__(self,e,exceptionStack,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:15
		self.original = None
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:17
		self.originalExceptionStack = None
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:26
		self.originalExceptionStack = exceptionStack
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:27
		self.original = e
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:29
		super().__init__(Std.string(e),pos)

	def toString(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:39
		if Std._hx_is(self.original,_Exception_HException):
			# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:40
			className = Type.getClassName(Type.getClass(self))
			# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:41
			def _hx_local_1():
				# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:41
				def _hx_local_0():
					# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:41
					_hx_local_0 = self.original
					if Std._hx_is(_hx_local_0,_Exception_HException):
						_hx_local_0
					else:
						raise _HxException("Class cast error")
					return _hx_local_0
				return ((("" + ("null" if className is None else className)) + ": ") + HxOverrides.stringOrNull((_hx_local_0()).toString()))
			return _hx_local_1()
		else:
			return super().toString()

	def buildStack(self,stack):
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:54
		exceptionStack = self.originalExceptionStack
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:57
		if Std._hx_is(self.original,_Exception_HException):
			# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:58
			def _hx_local_0():
				# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:58
				_hx_local_0 = self.original
				if Std._hx_is(_hx_local_0,_Exception_HException):
					_hx_local_0
				else:
					raise _HxException("Class cast error")
				return _hx_local_0
			self.pos = (_hx_local_0()).pos
			# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:59
			# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:59
			_this = None
			def _hx_local_0():
				_hx_local_1 = self.original
				if Std._hx_is(_hx_local_1,_Exception_HException):
					_hx_local_1
				else:
					raise _HxException("Class cast error")
				return _hx_local_1
			_this = (_hx_local_0()).stack
			exceptionStack = list(_this)
		elif (len(exceptionStack) == 0):
			exceptionStack = stack
		else:
			# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:69
			_g = (exceptionStack[0] if 0 < len(exceptionStack) else None)
			if ((_g.index) == 2):
				if (_g.params[0] is None):
					line = _g.params[2]
					file = _g.params[1]
					# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:70
					# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:71
					self.pos.fileName = file
					# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:72
					self.pos.lineNumber = line
				elif ((_g.params[0].index) == 3):
					# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:69
					line1 = _g.params[2]
					file1 = _g.params[1]
					methodName = _g.params[0].params[1]
					className = _g.params[0].params[0]
					# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:73
					# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:74
					self.pos.className = className
					# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:75
					self.pos.methodName = methodName
					# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:76
					self.pos.fileName = file1
					# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:77
					self.pos.lineNumber = line1
				else:
					pass
			elif ((_g.index) == 3):
				# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:69
				methodName1 = _g.params[1]
				className1 = _g.params[0]
				# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:78
				# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:79
				self.pos.methodName = methodName1
				# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:80
				self.pos.className = className1
			else:
				pass
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnexpectedException.hx:86
		return super().buildStack(exceptionStack)

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.original = None
		_hx_o.originalExceptionStack = None
hunit_exceptions_UnexpectedException._hx_class = hunit_exceptions_UnexpectedException


class hunit_exceptions_UnmetExpectationException(hunit_exceptions_TestFailException):
	_hx_class_name = "hunit.exceptions.UnmetExpectationException"
	_hx_fields = []
	_hx_methods = []
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = hunit_exceptions_TestFailException


	def __init__(self,expect,reason = "",pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx:20
		if (reason is None):
			reason = ""
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx:22
		file = expect.pos.fileName
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx:23
		line = expect.pos.lineNumber
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx:24
		msg = None
		msg = (("" + Std.string(expect)) + HxOverrides.stringOrNull(((("" + ("null" if reason is None else reason)) if ((len(reason) != 0)) else ""))))
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/UnmetExpectationException.hx:26
		super().__init__(msg,pos)
hunit_exceptions_UnmetExpectationException._hx_class = hunit_exceptions_UnmetExpectationException


class hunit_exceptions_WarningException(_Exception_HException):
	_hx_class_name = "hunit.exceptions.WarningException"
	_hx_fields = []
	_hx_methods = []
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = _Exception_HException


	def __init__(self,message,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/exceptions/WarningException.hx:9
		super().__init__(message,pos)
hunit_exceptions_WarningException._hx_class = hunit_exceptions_WarningException


class hunit_match_Match:
	_hx_class_name = "hunit.match.Match"
	_hx_fields = ["previous", "chainLogic", "_and", "_or"]
	_hx_methods = ["match", "isChained", "toString", "shortCode", "checkMatch", "get_and", "get_or"]

	def __init__(self,previous = None,chainLogic = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:25
		self.previous = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:27
		self.chainLogic = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:31
		self._and = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:34
		self._or = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:47
		self.previous = previous
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:48
		self.chainLogic = chainLogic

	def match(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:59
		result = self.checkMatch(value)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:61
		current = self
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:62
		while (current.chainLogic is not None):
			# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:63
			# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:63
			_g = current.chainLogic
			if (_g is not None):
				if ((_g.index) == 0):
					result = (result and current.previous.checkMatch(value))
				elif ((_g.index) == 1):
					result = (result or current.previous.checkMatch(value))
				else:
					pass
			# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:68
			current = current.previous
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:71
		return result

	def isChained(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:92
		return (self.previous is not None)

	def toString(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:103
		code = self.shortCode()
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:105
		if (self.previous is None):
			return (("[" + ("null" if code is None else code)) + "]")
		else:
			# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:108
			result = ("" + ("null" if code is None else code))
			# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:109
			current = self
			# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:110
			while (current.chainLogic is not None):
				# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:111
				# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:111
				_g = current.chainLogic
				if (_g is not None):
					if ((_g.index) == 0):
						result = (HxOverrides.stringOrNull(current.previous.shortCode()) + HxOverrides.stringOrNull(((" && " + ("null" if result is None else result)))))
					elif ((_g.index) == 1):
						result = (HxOverrides.stringOrNull(current.previous.shortCode()) + HxOverrides.stringOrNull(((" || " + ("null" if result is None else result)))))
					else:
						pass
				# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:115
				current = current.previous
			# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:118
			return (("[" + ("null" if result is None else result)) + "]")

	def shortCode(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:129
		raise _HxException("To be overriden")

	def checkMatch(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:139
		raise _HxException("To be overriden")

	def get_and(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:149
		if (self._and is None):
			self._and = hunit_match_GenericMatchFactory(self, hunit_match_MatchChainLogic.And)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:153
		return self._and

	def get_or(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:163
		if (self._or is None):
			self._or = hunit_match_GenericMatchFactory(self, hunit_match_MatchChainLogic.Or)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/Match.hx:167
		return self._or

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.previous = None
		_hx_o.chainLogic = None
		_hx_o._and = None
		_hx_o._or = None
hunit_match_Match._hx_class = hunit_match_Match


class hunit_match_AnyMatch(hunit_match_Match):
	_hx_class_name = "hunit.match.AnyMatch"
	_hx_fields = []
	_hx_methods = ["checkMatch", "shortCode"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = hunit_match_Match


	def __init__(self,previous = None,chainLogic = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx:9
		super().__init__(previous,chainLogic)

	def checkMatch(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx:18
		return True

	def shortCode(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/AnyMatch.hx:28
		return "ANY"

	@staticmethod
	def _hx_empty_init(_hx_o):		pass
hunit_match_AnyMatch._hx_class = hunit_match_AnyMatch


class hunit_match_CallbackMatch(hunit_match_Match):
	_hx_class_name = "hunit.match.CallbackMatch"
	_hx_fields = ["verify"]
	_hx_methods = ["checkMatch", "shortCode"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = hunit_match_Match


	def __init__(self,verify,previous = None,chainLogic = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx:14
		self.verify = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx:23
		super().__init__(previous,chainLogic)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx:25
		self.verify = verify

	def checkMatch(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx:34
		return self.verify(value)

	def shortCode(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/CallbackMatch.hx:44
		return "CALLBACK"

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.verify = None
hunit_match_CallbackMatch._hx_class = hunit_match_CallbackMatch


class hunit_match_ERegMatch(hunit_match_Match):
	_hx_class_name = "hunit.match.ERegMatch"
	_hx_fields = ["regexp"]
	_hx_methods = ["checkMatch", "shortCode", "extractPattern", "getRegexpOptions"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = hunit_match_Match


	def __init__(self,regexp,previous = None,chainLogic = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx:18
		self.regexp = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx:27
		super().__init__(previous,chainLogic)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx:28
		self.regexp = regexp

	def checkMatch(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx:38
		_this = self.regexp
		_this.matchObj = python_lib_Re.search(_this.pattern,Std.string(value))
		return (_this.matchObj is not None)

	def shortCode(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx:48
		return self.extractPattern()

	def extractPattern(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx:64
		pattern = ((("~/" + Std.string(Reflect.field(Reflect.getProperty(self.regexp,"pattern"),"pattern"))) + "/") + HxOverrides.stringOrNull(self.getRegexpOptions()))
		# /home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx:68
		return pattern

	def getRegexpOptions(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx:75
		flags = Reflect.field(Reflect.getProperty(self.regexp,"pattern"),"flags")
		# /home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx:76
		options = ""
		# /home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx:78
		if (((flags & python_lib_Re.I)) != 0):
			options = (("null" if options is None else options) + "i")
		# /home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx:79
		if (((flags & python_lib_Re.M)) != 0):
			options = (("null" if options is None else options) + "m")
		# /home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx:80
		if (((flags & python_lib_Re.S)) != 0):
			options = (("null" if options is None else options) + "s")
		# /home/alex/Work/HaXe/hunit/src/hunit/match/ERegMatch.hx:82
		return options

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.regexp = None
hunit_match_ERegMatch._hx_class = hunit_match_ERegMatch


class hunit_match_EqualMatch(hunit_match_Match):
	_hx_class_name = "hunit.match.EqualMatch"
	_hx_fields = ["value"]
	_hx_methods = ["checkMatch", "shortCode"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = hunit_match_Match


	def __init__(self,value,previous = None,chainLogic = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx:21
		self.value = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx:30
		super().__init__(previous,chainLogic)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx:31
		self.value = value

	def checkMatch(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx:41
		try:
			# /home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx:42
			_g = Type.typeof(self.value)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx:43
			if ((_g.index) == 5):
				return Reflect.compareMethods(self.value,value)
			elif ((_g.index) == 7):
				return Type.enumEq(self.value,value)
			else:
				return (self.value == value)
		except Exception as _hx_e:
			_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
			e = _hx_e1
			return False

	def shortCode(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx:60
		code = hunit_Utils.shortenString(hunit_Utils.safeToString(self.value))
		# /home/alex/Work/HaXe/hunit/src/hunit/match/EqualMatch.hx:62
		if hunit_Utils.hasToString(self.value):
			return (("=\"" + ("null" if code is None else code)) + "\"")
		else:
			return ("=" + ("null" if code is None else code))

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.value = None
hunit_match_EqualMatch._hx_class = hunit_match_EqualMatch


class hunit_match_GenericMatchFactory:
	_hx_class_name = "hunit.match.GenericMatchFactory"
	_hx_fields = ["previous", "chainLogic"]
	_hx_methods = ["any", "type", "regexp", "similar", "equal", "notEqual", "callback"]

	def __init__(self,previous,chainLogic):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx:17
		self.previous = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx:19
		self.chainLogic = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx:28
		self.previous = previous
		# /home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx:29
		self.chainLogic = chainLogic

	def any(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx:39
		return hunit_match_AnyMatch(self.previous, self.chainLogic)

	def type(self,_hx_type):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx:49
		return hunit_match_TypeMatch(_hx_type, self.previous, self.chainLogic)

	def regexp(self,pattern):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx:59
		return hunit_match_ERegMatch(pattern)

	def similar(self,pattern):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx:71
		return hunit_match_SimilarMatch(pattern)

	def equal(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx:81
		return hunit_match_EqualMatch(value, self.previous, self.chainLogic)

	def notEqual(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx:91
		return hunit_match_NotEqualMatch(value, self.previous, self.chainLogic)

	def callback(self,verify):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/GenericMatchFactory.hx:101
		return hunit_match_CallbackMatch(verify)

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.previous = None
		_hx_o.chainLogic = None
hunit_match_GenericMatchFactory._hx_class = hunit_match_GenericMatchFactory

class hunit_match_MatchChainLogic(Enum):
	_hx_class_name = "hunit.match.MatchChainLogic"
	_hx_constructs = ["And", "Or"]
hunit_match_MatchChainLogic.And = hunit_match_MatchChainLogic("And", 0, list())
hunit_match_MatchChainLogic.Or = hunit_match_MatchChainLogic("Or", 1, list())
hunit_match_MatchChainLogic._hx_class = hunit_match_MatchChainLogic


class hunit_match_MatchFactory:
	_hx_class_name = "hunit.match.MatchFactory"
	_hx_methods = ["any", "type", "regexp", "similar", "equal", "notEqual", "callback"]

	def __init__(self):
		pass

	def any(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx:34
		return hunit_match_AnyMatch()

	def type(self,_hx_type):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx:44
		return hunit_match_TypeMatch(_hx_type)

	def regexp(self,pattern):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx:54
		return hunit_match_ERegMatch(pattern)

	def similar(self,pattern):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx:66
		return hunit_match_SimilarMatch(pattern)

	def equal(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx:76
		return hunit_match_EqualMatch(value)

	def notEqual(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx:86
		return hunit_match_NotEqualMatch(value)

	def callback(self,verify):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/MatchFactory.hx:96
		return hunit_match_CallbackMatch(verify)

	@staticmethod
	def _hx_empty_init(_hx_o):		pass
hunit_match_MatchFactory._hx_class = hunit_match_MatchFactory


class hunit_match_MatchFailDescription:
	_hx_class_name = "hunit.match.MatchFailDescription"
	_hx_fields = ["expected", "actual"]

	def __init__(self,expected = None,actual = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx:13
		self.expected = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx:15
		self.actual = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx:23
		self.expected = expected
		# /home/alex/Work/HaXe/hunit/src/hunit/match/MatchFailDescription.hx:24
		self.actual = actual

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.expected = None
		_hx_o.actual = None
hunit_match_MatchFailDescription._hx_class = hunit_match_MatchFailDescription


class hunit_match_NotEqualMatch(hunit_match_EqualMatch):
	_hx_class_name = "hunit.match.NotEqualMatch"
	_hx_fields = []
	_hx_methods = ["checkMatch", "shortCode"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = hunit_match_EqualMatch


	def __init__(self,value,previous = None,chainLogic = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx:13
		super().__init__(value,previous,chainLogic)

	def checkMatch(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx:22
		try:
			# /home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx:23
			_g = Type.typeof(self.value)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx:24
			if ((_g.index) == 5):
				return (not Reflect.compareMethods(self.value,value))
			elif ((_g.index) == 7):
				return (not Type.enumEq(self.value,value))
			else:
				return (self.value != value)
		except Exception as _hx_e:
			_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
			e = _hx_e1
			return False

	def shortCode(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx:40
		code = hunit_Utils.shortenString(Std.string(self.value))
		# /home/alex/Work/HaXe/hunit/src/hunit/match/NotEqualMatch.hx:42
		if hunit_Utils.hasToString(self.value):
			return (("!=\"" + ("null" if code is None else code)) + "\"")
		else:
			return ("!=" + ("null" if code is None else code))

	@staticmethod
	def _hx_empty_init(_hx_o):		pass
hunit_match_NotEqualMatch._hx_class = hunit_match_NotEqualMatch


class hunit_match_SimilarMatch(hunit_match_Match):
	_hx_class_name = "hunit.match.SimilarMatch"
	_hx_fields = ["root", "matcher", "checkedObjects"]
	_hx_methods = ["buildMatcher", "isRoot", "checkMatch", "shortCode", "createMatcherForValue"]
	_hx_statics = ["getAType"]
	_hx_interfaces = []
	_hx_super = hunit_match_Match


	def __init__(self,expected,previous = None,chainLogic = None,root = None,processedObjects = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:38
		self.root = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:40
		self.matcher = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:42
		self.checkedObjects = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:69
		super().__init__(previous,chainLogic)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:70
		self.root = root
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:72
		if (processedObjects is None):
			processedObjects = hunit_match_ObjectCache()
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:75
		processedObjects.set(expected,self)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:77
		if self.isRoot():
			self.buildMatcher(self,expected,processedObjects)
		else:
			self.buildMatcher(root,expected,processedObjects)

	def buildMatcher(self,root,expected,processedObjects):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:91
		_g = hunit_match_SimilarMatch.getAType(expected)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:92
		if ((_g) == "object"):
			self.matcher = hunit_match_similar_SimilarObjectMatch(root, processedObjects, expected)
		elif ((_g) == "array"):
			self.matcher = hunit_match_similar_SimilarArrayMatch(root, processedObjects, expected)
		elif ((_g) == "map"):
			self.matcher = hunit_match_similar_SimilarMapMatch(root, processedObjects, expected)
		else:
			raise hunit_exceptions_InvalidTestException("Provided value can not be used with `similar` matcher", _hx_AnonObject({'fileName': "SimilarMatch.hx", 'lineNumber': 95, 'className': "hunit.match.SimilarMatch", 'methodName': "buildMatcher"}))

	def isRoot(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:106
		return (self.root is None)

	def checkMatch(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:116
		if self.isRoot():
			# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:117
			self.checkedObjects = []
			# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:118
			# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:118
			_this = self.checkedObjects
			x = value
			_this.append(x)
		else:
			# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:120
			_this1 = self.root.checkedObjects
			x1 = value
			_this1.append(x1)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:123
		result = self.matcher.checkMatch(value)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:125
		if self.isRoot():
			self.checkedObjects = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:129
		return result

	def shortCode(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:139
		return self.matcher.shortCode()

	def createMatcherForValue(self,value,processedObjects):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:149
		match = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:151
		if Std._hx_is(value,hunit_match_Match):
			match = value
		elif hunit_Utils.isObject(value):
			# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:157
			match = processedObjects.get(value)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:158
			if (match is None):
				match = hunit_match_SimilarMatch(value, None, None, self, processedObjects)
		else:
			match = hunit_match_EqualMatch(value)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:168
		return match

	@staticmethod
	def getAType(value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:51
		if Std._hx_is(value,haxe_IMap):
			return "map"
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:53
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:53
		_g = Type.typeof(value)
		if ((_g.index) == 6):
			if ((_g.params[0]) == str):
				raise hunit_exceptions_InvalidTestException("Invalid `expected` value similar matcher", _hx_AnonObject({'fileName': "SimilarMatch.hx", 'lineNumber': 54, 'className': "hunit.match.SimilarMatch", 'methodName': "getAType"}))
			elif ((_g.params[0]) == list):
				return "array"
			else:
				return "object"
		elif ((_g.index) == 4):
			return "object"
		else:
			raise hunit_exceptions_InvalidTestException("Invalid `expected` value similar matcher", _hx_AnonObject({'fileName': "SimilarMatch.hx", 'lineNumber': 58, 'className': "hunit.match.SimilarMatch", 'methodName': "getAType"}))

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.root = None
		_hx_o.matcher = None
		_hx_o.checkedObjects = None
hunit_match_SimilarMatch._hx_class = hunit_match_SimilarMatch


class hunit_match_ObjectCache:
	_hx_class_name = "hunit.match.ObjectCache"
	_hx_fields = ["keys", "values"]
	_hx_methods = ["get", "set"]

	def __init__(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:181
		self.keys = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:182
		self.values = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:185
		self.keys = []
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:186
		self.values = []

	def get(self,key):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:190
		if (python_internal_ArrayImpl.indexOf(self.keys,key,None) < 0):
			return None
		else:
			return python_internal_ArrayImpl._get(self.values, python_internal_ArrayImpl.indexOf(self.keys,key,None))

	def set(self,key,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:198
		if (python_internal_ArrayImpl.indexOf(self.keys,key,None) >= 0):
			python_internal_ArrayImpl._set(self.values, python_internal_ArrayImpl.indexOf(self.keys,key,None), value)
		else:
			# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:201
			# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:201
			_this = self.keys
			_this.append(key)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:202
			# /home/alex/Work/HaXe/hunit/src/hunit/match/SimilarMatch.hx:202
			_this1 = self.values
			_this1.append(value)

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.keys = None
		_hx_o.values = None
hunit_match_ObjectCache._hx_class = hunit_match_ObjectCache


class hunit_match_TypeMatch(hunit_match_Match):
	_hx_class_name = "hunit.match.TypeMatch"
	_hx_fields = ["type"]
	_hx_methods = ["checkMatch", "shortCode"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = hunit_match_Match


	def __init__(self,_hx_type,previous = None,chainLogic = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx:15
		self.type = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx:24
		super().__init__(previous,chainLogic)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx:25
		self.type = _hx_type

	def checkMatch(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx:34
		return ((value is not None) and Std._hx_is(value,self.type))

	def shortCode(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/TypeMatch.hx:44
		return (("Class<" + HxOverrides.stringOrNull(Type.getClassName(self.type))) + ">")

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.type = None
hunit_match_TypeMatch._hx_class = hunit_match_TypeMatch


class hunit_match_similar_SimilarArrayMatch(hunit_match_Match):
	_hx_class_name = "hunit.match.similar.SimilarArrayMatch"
	_hx_fields = ["expected", "root"]
	_hx_methods = ["checkMatch", "shortCode", "getArrayMatchMap"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = hunit_match_Match


	def __init__(self,root,processedObjects,expected,previous = None,chainLogic = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:22
		self.expected = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:24
		self.root = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:34
		if (not Std._hx_is(expected,list)):
			raise hunit_exceptions_InvalidTestException("`expected` value should be an array.", _hx_AnonObject({'fileName': "SimilarArrayMatch.hx", 'lineNumber': 35, 'className': "hunit.match.similar.SimilarArrayMatch", 'methodName': "new"}))
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:38
		super().__init__(previous,chainLogic)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:40
		self.root = root
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:41
		self.expected = self.getArrayMatchMap(expected,processedObjects)

	def checkMatch(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:51
		if (not Std._hx_is(value,list)):
			return False
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:53
		value1 = value
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:54
		if (len(self.expected) != len(value1)):
			return False
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:56
		actual = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:57
		match = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:58
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:58
		_g1 = 0
		_g = len(self.expected)
		while (_g1 < _g):
			i = _g1
			_g1 = (_g1 + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:59
			actual = (value1[i] if i >= 0 and i < len(value1) else None)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:60
			match = (self.expected[i] if i >= 0 and i < len(self.expected) else None)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:63
			if Std._hx_is(match,hunit_match_SimilarMatch):
				# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:64
				def _hx_local_0():
					# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:64
					x = actual
					return python_internal_ArrayImpl.indexOf(self.root.checkedObjects,x,None)
				if (_hx_local_0() >= 0):
					continue
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:69
			if (not match.match(actual)):
				return False
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:72
		return True

	def shortCode(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:82
		def _hx_local_0(m):
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:82
			return m.toString()
		parts = list(map(_hx_local_0,self.expected))
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:83
		_hx_str = (("[" + HxOverrides.stringOrNull(", ".join([python_Boot.toString1(x1,'') for x1 in parts]))) + "]")
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:85
		if (len(_hx_str) == len(hunit_Utils.shortenString(_hx_str))):
			return _hx_str
		else:
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:88
			_hx_str = hunit_Utils.shortenString(_hx_str)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:89
			return (HxOverrides.stringOrNull(HxString.substr(_hx_str,0,(len(_hx_str) - 6))) + "<...>]")

	def getArrayMatchMap(self,expected,processedObjects):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:100
		matchers = []
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:102
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:102
		_g1 = 0
		_g = len(expected)
		while (_g1 < _g):
			i = _g1
			_g1 = (_g1 + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:103
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:103
			x = self.root.createMatcherForValue((expected[i] if i >= 0 and i < len(expected) else None),processedObjects)
			matchers.append(x)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarArrayMatch.hx:106
		return matchers

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.expected = None
		_hx_o.root = None
hunit_match_similar_SimilarArrayMatch._hx_class = hunit_match_similar_SimilarArrayMatch


class hunit_match_similar_SimilarMapMatch(hunit_match_Match):
	_hx_class_name = "hunit.match.similar.SimilarMapMatch"
	_hx_fields = ["expected", "root"]
	_hx_methods = ["checkMatch", "shortCode", "getMatchMap"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = hunit_match_Match


	def __init__(self,root,processedObjects,expected,previous = None,chainLogic = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:23
		self.expected = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:25
		self.root = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:35
		if (not Std._hx_is(expected,haxe_IMap)):
			raise hunit_exceptions_InvalidTestException("`expected` value should be an `haxe.Constraints.IMap` instance.", _hx_AnonObject({'fileName': "SimilarMapMatch.hx", 'lineNumber': 36, 'className': "hunit.match.similar.SimilarMapMatch", 'methodName': "new"}))
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:39
		super().__init__(previous,chainLogic)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:41
		self.root = root
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:42
		self.expected = self.getMatchMap(expected,processedObjects)

	def checkMatch(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:52
		if (not Std._hx_is(value,haxe_IMap)):
			return False
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:54
		value1 = value
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:56
		cnt = 0
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:57
		_hx_local_1 = value1.keys()
		while _hx_local_1.hasNext():
			k = _hx_local_1.next()
			cnt = (cnt + 1)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:58
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:58
		_g = 0
		_g1 = self.expected.keys()
		while (_g < len(_g1)):
			k1 = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
			_g = (_g + 1)
			cnt = (cnt - 1)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:59
		if (cnt != 0):
			return False
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:61
		actual = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:62
		match = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:63
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:63
		_g2 = 0
		_g11 = self.expected.keys()
		while (_g2 < len(_g11)):
			key = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
			_g2 = (_g2 + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:64
			actual = value1.get(key)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:65
			match = self.expected.get(key)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:68
			if Std._hx_is(match,hunit_match_SimilarMatch):
				# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:69
				def _hx_local_5():
					# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:69
					x = actual
					return python_internal_ArrayImpl.indexOf(self.root.checkedObjects,x,None)
				if (_hx_local_5() >= 0):
					continue
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:74
			if (not match.match(actual)):
				return False
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:77
		return True

	def shortCode(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:87
		parts = []
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:88
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:88
		_g = 0
		_g1 = self.expected.keys()
		while (_g < len(_g1)):
			key = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
			_g = (_g + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:89
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:89
			x = ((Std.string(key) + "=>") + HxOverrides.stringOrNull(self.expected.get(key).toString()))
			parts.append(x)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:91
		_hx_str = (("[" + HxOverrides.stringOrNull(", ".join([python_Boot.toString1(x1,'') for x1 in parts]))) + "]")
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:93
		if (len(_hx_str) == len(hunit_Utils.shortenString(_hx_str))):
			return _hx_str
		else:
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:96
			_hx_str = hunit_Utils.shortenString(_hx_str)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:97
			return (HxOverrides.stringOrNull(HxString.substr(_hx_str,0,(len(_hx_str) - 6))) + "<...>]")

	def getMatchMap(self,expected,processedObjects):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:108
		_hx_map = hunit_match_similar__SimilarMapMatch_DynamicMatchMap()
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:110
		_hx_local_0 = expected.keys()
		while _hx_local_0.hasNext():
			key = _hx_local_0.next()
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:111
			_hx_map.set(key,self.root.createMatcherForValue(expected.get(key),processedObjects))
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:114
		return _hx_map

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.expected = None
		_hx_o.root = None
hunit_match_similar_SimilarMapMatch._hx_class = hunit_match_similar_SimilarMapMatch


class hunit_match_similar__SimilarMapMatch_DynamicMatchMap:
	_hx_class_name = "hunit.match.similar._SimilarMapMatch.DynamicMatchMap"
	_hx_fields = ["keyList", "valueList"]
	_hx_methods = ["keys", "exists", "get", "set"]

	def __init__(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:128
		self.keyList = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:129
		self.valueList = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:132
		self.keyList = []
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:133
		self.valueList = []

	def keys(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:136
		return self.keyList

	def exists(self,key):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:137
		return (python_internal_ArrayImpl.indexOf(self.keyList,key,None) >= 0)

	def get(self,key):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:138
		if (not self.exists(key)):
			return None
		else:
			return python_internal_ArrayImpl._get(self.valueList, python_internal_ArrayImpl.indexOf(self.keyList,key,None))

	def set(self,key,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:141
		if (python_internal_ArrayImpl.indexOf(self.keyList,key,None) >= 0):
			python_internal_ArrayImpl._set(self.valueList, python_internal_ArrayImpl.indexOf(self.keyList,key,None), value)
		else:
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:144
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:144
			_this = self.keyList
			_this.append(key)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:145
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarMapMatch.hx:145
			_this1 = self.valueList
			_this1.append(value)

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.keyList = None
		_hx_o.valueList = None
hunit_match_similar__SimilarMapMatch_DynamicMatchMap._hx_class = hunit_match_similar__SimilarMapMatch_DynamicMatchMap


class hunit_match_similar_SimilarObjectMatch(hunit_match_Match):
	_hx_class_name = "hunit.match.similar.SimilarObjectMatch"
	_hx_fields = ["expected", "root"]
	_hx_methods = ["checkMatch", "shortCode", "getFieldMatchMap"]
	_hx_statics = ["getFieldValueMap"]
	_hx_interfaces = []
	_hx_super = hunit_match_Match


	def __init__(self,root,processedObjects,expected,previous = None,chainLogic = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:22
		self.expected = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:24
		self.root = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:34
		if (not hunit_Utils.isObject(expected)):
			raise hunit_exceptions_InvalidTestException("`expected` value should be an object.", _hx_AnonObject({'fileName': "SimilarObjectMatch.hx", 'lineNumber': 35, 'className': "hunit.match.similar.SimilarObjectMatch", 'methodName': "new"}))
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:38
		super().__init__(previous,chainLogic)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:40
		self.root = root
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:41
		self.expected = self.getFieldMatchMap(expected,processedObjects)

	def checkMatch(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:51
		valueMap = hunit_match_similar_SimilarObjectMatch.getFieldValueMap(value)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:53
		actual = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:54
		match = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:55
		_hx_local_1 = self.expected.keys()
		while _hx_local_1.hasNext():
			field = _hx_local_1.next()
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:56
			if (not field in valueMap.h):
				return False
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:58
			actual = valueMap.h.get(field,None)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:59
			match = self.expected.h.get(field,None)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:62
			if Std._hx_is(match,hunit_match_SimilarMatch):
				# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:63
				def _hx_local_0():
					# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:63
					x = actual
					return python_internal_ArrayImpl.indexOf(self.root.checkedObjects,x,None)
				if (_hx_local_0() >= 0):
					continue
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:68
			if (not match.match(actual)):
				return False
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:71
		return True

	def shortCode(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:81
		parts = []
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:82
		_hx_local_0 = self.expected.keys()
		while _hx_local_0.hasNext():
			field = _hx_local_0.next()
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:83
			x = ((("null" if field is None else field) + ":") + HxOverrides.stringOrNull(self.expected.h.get(field,None).toString()))
			parts.insert(0, x)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:85
		_hx_str = (("{" + HxOverrides.stringOrNull(", ".join([python_Boot.toString1(x1,'') for x1 in parts]))) + "}")
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:87
		if (len(_hx_str) == len(hunit_Utils.shortenString(_hx_str))):
			return _hx_str
		else:
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:90
			_hx_str = hunit_Utils.shortenString(_hx_str)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:91
			return (HxOverrides.stringOrNull(HxString.substr(_hx_str,0,(len(_hx_str) - 6))) + "<...>}")

	def getFieldMatchMap(self,object,processedObjects):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:102
		fieldValue = hunit_match_similar_SimilarObjectMatch.getFieldValueMap(object)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:103
		fieldMatch = haxe_ds_StringMap()
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:105
		value = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:106
		_hx_local_0 = fieldValue.keys()
		while _hx_local_0.hasNext():
			field = _hx_local_0.next()
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:107
			value = fieldValue.h.get(field,None)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:109
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:109
			value1 = self.root.createMatcherForValue(value,processedObjects)
			fieldMatch.h[field] = value1
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:112
		return fieldMatch

	@staticmethod
	def getFieldValueMap(object):
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:122
		_hx_map = haxe_ds_StringMap()
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:124
		fields = None
		_g = Type.typeof(object)
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:125
		if ((_g.index) == 4):
			fields = python_Boot.fields(object)
		elif ((_g.index) == 6):
			cls = _g.params[0]
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:126
			if ((_g.params[0]) == str):
				fields = []
			else:
				fields = python_Boot.getInstanceFields(cls)
		else:
			fields = []
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:131
		property = None
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:132
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:132
		_g1 = 0
		while (_g1 < len(fields)):
			field = (fields[_g1] if _g1 >= 0 and _g1 < len(fields) else None)
			_g1 = (_g1 + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:137
			property = Reflect.getProperty(object,field)
			# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:138
			if (not Reflect.isFunction(property)):
				_hx_map.h[field] = property
		# /home/alex/Work/HaXe/hunit/src/hunit/match/similar/SimilarObjectMatch.hx:143
		return _hx_map

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.expected = None
		_hx_o.root = None
hunit_match_similar_SimilarObjectMatch._hx_class = hunit_match_similar_SimilarObjectMatch


class hunit_mock_IMock:
	_hx_class_name = "hunit.mock.IMock"
	_hx_fields = ["__hu_mock__"]
hunit_mock_IMock._hx_class = hunit_mock_IMock


class hunit_mock_MockBuilder:
	_hx_class_name = "hunit.mock.MockBuilder"
	_hx_fields = ["test", "mockClass", "targetClass", "fullStub", "strictMode"]
	_hx_methods = ["get", "assignMockData", "createMockData", "set_strictMode", "set_fullStub"]

	def __init__(self,test,mockClass,targetClass):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:15
		self.test = None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:17
		self.mockClass = None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:18
		self.targetClass = None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:20
		self.fullStub = None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:22
		self.strictMode = None
		self.strictMode = False
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:20
		self.fullStub = False
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:31
		self.test = test
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:32
		self.mockClass = mockClass
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:33
		self.targetClass = targetClass

	def get(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:43
		instance = Type.createEmptyInstance(self.mockClass)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:44
		self.assignMockData(instance)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:46
		return instance

	def assignMockData(self,instance):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:56
		mockData = self.createMockData()
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:57
		Reflect.setProperty(instance,"__hu_mock__",mockData)

	def createMockData(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:67
		return hunit_mock_MockData(self.test, self.targetClass, self.fullStub, self.strictMode)

	def set_strictMode(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:76
		if self.fullStub:
			raise hunit_exceptions_InvalidTestException("Cannot use `stubAll()` and `strict()` together.", _hx_AnonObject({'fileName': "MockBuilder.hx", 'lineNumber': 77, 'className': "hunit.mock.MockBuilder", 'methodName': "set_strictMode"}))
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:80
		def _hx_local_1():
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:80
			def _hx_local_0():
				# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:80
				self.strictMode = value
				return self.strictMode
			return _hx_local_0()
		return _hx_local_1()

	def set_fullStub(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:90
		if self.strictMode:
			raise hunit_exceptions_InvalidTestException("Cannot use `stubAll()` and `strict()` together.", _hx_AnonObject({'fileName': "MockBuilder.hx", 'lineNumber': 91, 'className': "hunit.mock.MockBuilder", 'methodName': "set_fullStub"}))
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:94
		def _hx_local_1():
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:94
			def _hx_local_0():
				# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockBuilder.hx:94
				self.fullStub = value
				return self.fullStub
			return _hx_local_0()
		return _hx_local_1()

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.test = None
		_hx_o.mockClass = None
		_hx_o.targetClass = None
		_hx_o.fullStub = None
		_hx_o.strictMode = None
hunit_mock_MockBuilder._hx_class = hunit_mock_MockBuilder


class hunit_mock_MockData:
	_hx_class_name = "hunit.mock.MockData"
	_hx_fields = ["mockClass", "testCase", "callCounter", "callLog", "stubs", "expectations", "fullStub", "strictMode", "unstubbedMethods", "unstubPositions"]
	_hx_methods = ["mockClassName", "stub", "unstub", "expect", "removeExpect", "methodInvoked", "isMethodMocked", "getMockedCallResult", "addCallResult", "addCallException", "validateExpectation", "validateStrictMode", "validateCall", "throwUnexpectedCallException"]

	def __init__(self,testCase,mockClass,fullStub = False,strictMode = False):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:26
		if (fullStub is None):
			fullStub = False
		if (strictMode is None):
			strictMode = False
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:29
		self.mockClass = None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:31
		self.testCase = None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:34
		self.callCounter = None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:36
		self.callLog = None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:38
		self.stubs = None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:40
		self.expectations = None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:42
		self.fullStub = None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:44
		self.strictMode = None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:46
		self.unstubbedMethods = None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:47
		self.unstubPositions = None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:44
		self.strictMode = False
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:42
		self.fullStub = False
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:34
		self.callCounter = 0
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:56
		self.mockClass = mockClass
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:57
		self.testCase = testCase
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:58
		self.fullStub = fullStub
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:59
		self.strictMode = strictMode
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:61
		self.unstubbedMethods = []
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:62
		self.unstubPositions = []
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:63
		self.callLog = []
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:64
		self.stubs = []
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:65
		self.expectations = []

	def mockClassName(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:75
		return Type.getClassName(self.mockClass)

	def stub(self,stub):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:86
		if (python_internal_ArrayImpl.indexOf(self.unstubbedMethods,stub.method,None) >= 0):
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:87
			pos = python_internal_ArrayImpl._get(self.unstubPositions, python_internal_ArrayImpl.indexOf(self.unstubbedMethods,stub.method,None))
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:88
			unstubPos = ((HxOverrides.stringOrNull(pos.fileName) + ":") + Std.string(pos.lineNumber))
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:90
			raise hunit_exceptions_InvalidTestException(("Cannot stub method which was unstubbed at " + ("null" if unstubPos is None else unstubPos)), stub.pos)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:93
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:93
		_this = self.stubs
		_this.append(stub)

	def unstub(self,method,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:104
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:104
		_g = 0
		_g1 = self.stubs
		while (_g < len(_g1)):
			stub = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
			_g = (_g + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:106
			if (stub.method == method):
				# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:107
				stubPos = ((HxOverrides.stringOrNull(stub.pos.fileName) + ":") + Std.string(stub.pos.lineNumber))
				# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:109
				raise hunit_exceptions_InvalidTestException(("Cannot unstub method which was stubbed directly at " + ("null" if stubPos is None else stubPos)), pos)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:114
		if (python_internal_ArrayImpl.indexOf(self.unstubbedMethods,method,None) < 0):
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:115
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:115
			_this = self.unstubbedMethods
			_this.append(method)
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:116
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:116
			_this1 = self.unstubPositions
			_this1.append(pos)

	def expect(self,expect):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:127
		expect.fromCallId = self.callCounter
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:128
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:128
		_this = self.expectations
		_this.append(expect)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:129
		self.testCase._hx___hu_state.expectedCalls.add(expect)

	def removeExpect(self,expect):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:139
		python_internal_ArrayImpl.remove(self.expectations,expect)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:140
		self.testCase._hx___hu_state.expectedCalls.remove(expect)

	def methodInvoked(self,name,args,pos = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:151
		isStub = (self.fullStub and ((python_internal_ArrayImpl.indexOf(self.unstubbedMethods,name,None) < 0)))
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:152
		stub = None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:153
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:153
		_g1 = 0
		_g = len(self.stubs)
		while (_g1 < _g):
			i = _g1
			_g1 = (_g1 + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:154
			stub = (self.stubs[i] if i >= 0 and i < len(self.stubs) else None)
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:156
			if (stub.method == name):
				# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:157
				isStub = True
				# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:159
				if stub.match(name,args):
					break
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:163
			stub = None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:166
		stack = haxe_CallStack.callStack()
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:168
		if (len(stack) == 0):
			None
		else:
			stack.pop(0)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:170
		def _hx_local_2():
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:170
			_hx_local_0 = self
			_hx_local_1 = _hx_local_0.callCounter
			_hx_local_0.callCounter = (_hx_local_1 + 1)
			return _hx_local_1
		call = hunit_call_Call(_hx_local_2(), self, name, args, stack, pos, isStub, stub)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:171
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:171
		_this = self.callLog
		_this.append(call)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:173
		return call.id

	def isMethodMocked(self,callId):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:183
		call = (self.callLog[callId] if callId >= 0 and callId < len(self.callLog) else None)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:185
		return call.isStub

	def getMockedCallResult(self,callId):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:195
		call = (self.callLog[callId] if callId >= 0 and callId < len(self.callLog) else None)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:197
		if (not call.isStub):
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:198
			cls = Type.getClassName(self.mockClass)
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:199
			raise _Exception_HException((((("Trying to get mocked result while `" + ("null" if cls is None else cls)) + ".") + HxOverrides.stringOrNull(call.method)) + "()` is not stubbed"), _hx_AnonObject({'fileName': "MockData.hx", 'lineNumber': 199, 'className': "hunit.mock.MockData", 'methodName': "getMockedCallResult"}))
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:202
		if (call.stub is None):
			return None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:206
		if hunit_utils_ValueTools.hasValue(call.stub.implementation):
			return Reflect.callMethod(None,hunit_utils_ValueTools.getValue(call.stub.implementation),call.arguments)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:210
		if hunit_utils_ValueTools.hasValue(call.stub.throws):
			raise _HxException(hunit_utils_ValueTools.getValue(call.stub.throws))
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:214
		if hunit_utils_ValueTools.hasValue(call.stub.returns):
			return hunit_utils_ValueTools.getValue(call.stub.returns)
		else:
			return None

	def addCallResult(self,callId,result):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:224
		(self.callLog[callId] if callId >= 0 and callId < len(self.callLog) else None).result = hunit_utils_Value.Thing(result)

	def addCallException(self,callId,exception):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:234
		(self.callLog[callId] if callId >= 0 and callId < len(self.callLog) else None).set_exceptionValue(hunit_utils_Value.Thing(exception))
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:235
		self.testCase._hx___hu_state.cacheCallException((self.callLog[callId] if callId >= 0 and callId < len(self.callLog) else None))

	def validateExpectation(self,expect):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:245
		failed = False
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:246
		reason = ""
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:248
		call = None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:249
		count = 0
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:250
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:250
		_g1 = 0
		_g = len(self.callLog)
		while (_g1 < _g):
			i = _g1
			_g1 = (_g1 + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:251
			call = (self.callLog[i] if i >= 0 and i < len(self.callLog) else None)
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:252
			if (call.id < expect.fromCallId):
				continue
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:254
			if expect.match(call):
				count = (count + 1)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:258
		s = None
		if (count == 1):
			s = ""
		else:
			s = "s"
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:260
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:260
		_g2 = expect.count
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:262
		if ((_g2.index) == 0):
			if (count > 0):
				# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:263
				failed = True
				# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:265
				reason = ((((", actually called " + Std.string(count)) + " time") + ("null" if s is None else s)) + ".")
		elif ((_g2.index) == 1):
			pass
		elif ((_g2.index) == 2):
			if (count != 1):
				# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:270
				failed = True
				# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:272
				reason = ((((", actually called " + Std.string(count)) + " time") + ("null" if s is None else s)) + ".")
		elif ((_g2.index) == 3):
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:260
			amount = _g2.params[0]
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:275
			if (count < amount):
				# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:276
				failed = True
				# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:278
				reason = ((((", actually called " + Std.string(count)) + " time") + ("null" if s is None else s)) + ".")
		elif ((_g2.index) == 4):
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:260
			amount1 = _g2.params[0]
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:281
			if (count != amount1):
				# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:282
				failed = True
				# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:284
				reason = ((((", actually called " + Std.string(count)) + " time") + ("null" if s is None else s)) + ".")
		else:
			pass
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:288
		if failed:
			raise hunit_exceptions_UnmetExpectationException(expect, reason, expect.pos)

	def validateStrictMode(self,callId):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:300
		if (not self.strictMode):
			return
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:302
		call = (self.callLog[callId] if callId >= 0 and callId < len(self.callLog) else None)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:304
		if (call.stub is not None):
			return
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:306
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:306
		_g1 = 0
		_g = len(self.expectations)
		while (_g1 < _g):
			i = _g1
			_g1 = (_g1 + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:307
			if (self.expectations[i] if i >= 0 and i < len(self.expectations) else None).sameObjectMethod(call):
				return
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:312
		msg = (("" + Std.string(call)) + " is not expected nor stubbed.")
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:313
		self.throwUnexpectedCallException(call,msg)

	def validateCall(self,callId):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:323
		isExpected = False
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:324
		satisfies = False
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:326
		call = (self.callLog[callId] if callId >= 0 and callId < len(self.callLog) else None)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:328
		expect = None
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:329
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:329
		_g1 = 0
		_g = len(self.expectations)
		while (_g1 < _g):
			i = _g1
			_g1 = (_g1 + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:330
			expect = (self.expectations[i] if i >= 0 and i < len(self.expectations) else None)
			# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:332
			if expect.sameObjectMethod(call):
				# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:333
				isExpected = True
				# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:335
				if expect.match(call):
					# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:336
					expect.timesMatched = (expect.timesMatched + 1)
					# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:337
					satisfies = True
					# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:338
					if expect.tooManyCalls():
						self.throwUnexpectedCallException(call,None,expect)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:345
		if (isExpected and (not satisfies)):
			self.throwUnexpectedCallException(call)

	def throwUnexpectedCallException(self,call,msg = None,expect = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:357
		e = hunit_exceptions_UnexpectedCallException(call, expect, msg, call.pos)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:358
		self.testCase._hx___hu_state.pendingFail(e)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:360
		e.truncateStack(_hx_AnonObject({'fileName': "MockData.hx", 'lineNumber': 360, 'className': "hunit.mock.MockData", 'methodName': "throwUnexpectedCallException"}),1)
		# /home/alex/Work/HaXe/hunit/src/hunit/mock/MockData.hx:361
		raise e

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.mockClass = None
		_hx_o.testCase = None
		_hx_o.callCounter = None
		_hx_o.callLog = None
		_hx_o.stubs = None
		_hx_o.expectations = None
		_hx_o.fullStub = None
		_hx_o.strictMode = None
		_hx_o.unstubbedMethods = None
		_hx_o.unstubPositions = None
hunit_mock_MockData._hx_class = hunit_mock_MockData


class hunit_report_IReportWriter:
	_hx_class_name = "hunit.report.IReportWriter"
	_hx_methods = ["write"]
hunit_report_IReportWriter._hx_class = hunit_report_IReportWriter


class hunit_report_DefaultWriter:
	_hx_class_name = "hunit.report.DefaultWriter"
	_hx_fields = ["itemsWriteCounter", "printer"]
	_hx_methods = ["write", "writeFail", "writeWarning", "writeNotice", "writeItem"]
	_hx_interfaces = [hunit_report_IReportWriter]

	def __init__(self,printer):
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:20
		self.itemsWriteCounter = None
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:22
		self.printer = None
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:20
		self.itemsWriteCounter = 0
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:31
		self.printer = printer

	def write(self,report):
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:41
		if (report.notices.length > 0):
			# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:42
			self.printer("NOTICES:\n\n")
			# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:44
			# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:44
			_g_head = report.notices.h
			_g_val = None
			while (_g_head is not None):
				notice = None
				def _hx_local_0():
					nonlocal _g_val
					nonlocal _g_head
					_g_val = (_g_head[0] if 0 < len(_g_head) else None)
					_g_head = (_g_head[1] if 1 < len(_g_head) else None)
					# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:39
					return _g_val
				notice = _hx_local_0()
				# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:45
				self.writeNotice(notice)
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:49
		self.itemsWriteCounter = 0
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:51
		if (report.fails.length > 0):
			# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:52
			self.printer("FAILURES:\n\n")
			# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:54
			# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:54
			_g_head1 = report.fails.h
			_g_val1 = None
			while (_g_head1 is not None):
				fail = None
				def _hx_local_1():
					nonlocal _g_head1
					nonlocal _g_val1
					_g_val1 = (_g_head1[0] if 0 < len(_g_head1) else None)
					_g_head1 = (_g_head1[1] if 1 < len(_g_head1) else None)
					# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:39
					return _g_val1
				fail = _hx_local_1()
				# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:55
				self.writeFail(fail)
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:59
		self.itemsWriteCounter = 0
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:61
		if (report.warnings.length > 0):
			# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:62
			self.printer("WARNINGS:\n\n")
			# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:64
			# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:64
			_g_head2 = report.warnings.h
			_g_val2 = None
			while (_g_head2 is not None):
				warning = None
				def _hx_local_2():
					nonlocal _g_val2
					nonlocal _g_head2
					_g_val2 = (_g_head2[0] if 0 < len(_g_head2) else None)
					_g_head2 = (_g_head2[1] if 1 < len(_g_head2) else None)
					# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:39
					return _g_val2
				warning = _hx_local_2()
				# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:65
				self.writeWarning(warning)

	def writeFail(self,item):
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:77
		pos = item.exception.pos
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:78
		message = item.exception.message
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:79
		e = item.exception
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:81
		if Std._hx_is(e,hunit_exceptions_TestFailException):
			if Std._hx_is(e,hunit_exceptions_UnexpectedCallException):
				# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:83
				pos = None
				# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:84
				def _hx_local_0():
					# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:84
					_hx_local_0 = e
					if Std._hx_is(_hx_local_0,_Exception_HException):
						_hx_local_0
					else:
						raise _HxException("Class cast error")
					return _hx_local_0
				message = (("null" if message is None else message) + HxOverrides.stringOrNull(StringTools.replace((_hx_local_0()).stringStack(),"\n","\n\t")))
		else:
			# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:88
			pos = None
			# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:90
			customMessage = False
			# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:91
			if Std._hx_is(e,hunit_exceptions_UnexpectedException):
				# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:92
				e1 = None
				def _hx_local_0():
					_hx_local_2 = e
					if Std._hx_is(_hx_local_2,hunit_exceptions_UnexpectedException):
						_hx_local_2
					else:
						raise _HxException("Class cast error")
					return _hx_local_2
				e1 = _hx_local_0()
				# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:93
				customMessage = True
				# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:95
				if Std._hx_is(e1.original,_Exception_HException):
					# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:96
					def _hx_local_0():
						# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:96
						_hx_local_3 = e1.original
						if Std._hx_is(_hx_local_3,_Exception_HException):
							_hx_local_3
						else:
							raise _HxException("Class cast error")
						return _hx_local_3
					message = ("ERROR: " + HxOverrides.stringOrNull((_hx_local_0()).toString()))
				else:
					message = ("ERROR: " + Std.string(e1))
			# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:102
			if (not customMessage):
				message = ((("ERROR: " + HxOverrides.stringOrNull(e.message)) + "\n\n") + HxOverrides.stringOrNull(e.toString()))
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:107
		self.writeItem(item.caseName,item.testName,message,pos)

	def writeWarning(self,item):
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:117
		self.writeItem(item.caseName,item.testName,item.warning.message,None)

	def writeNotice(self,item):
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:127
		self.writeItem(item.caseName,item.testName,item.message,item.pos,True)

	def writeItem(self,caseName,test,message,pos,addPosToTestName = False):
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:136
		if (addPosToTestName is None):
			addPosToTestName = False
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:137
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:137
		_hx_local_0 = self
		_hx_local_1 = _hx_local_0.itemsWriteCounter
		_hx_local_0.itemsWriteCounter = (_hx_local_1 + 1)
		_hx_local_1
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:139
		idx = self.itemsWriteCounter
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:141
		posStr = None
		if (pos is None):
			posStr = ""
		else:
			posStr = ((("" + HxOverrides.stringOrNull(pos.fileName)) + ":") + Std.string(pos.lineNumber))
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:143
		self.printer((((((((("" + Std.string(idx)) + ") ") + ("null" if caseName is None else caseName)) + "::") + ("null" if test is None else test)) + "()") + HxOverrides.stringOrNull((((" at " + ("null" if posStr is None else posStr)) if addPosToTestName else "")))) + "\n"))
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:144
		self.printer((("" + ("null" if message is None else message)) + "\n"))
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:145
		self.printer("\n")
		# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:147
		if ((pos is not None) and (not addPosToTestName)):
			# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:148
			self.printer((("\t" + ("null" if posStr is None else posStr)) + "\n"))
			# /home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx:149
			self.printer("\n")

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.itemsWriteCounter = None
		_hx_o.printer = None
hunit_report_DefaultWriter._hx_class = hunit_report_DefaultWriter


class hunit_report_TestReport:
	_hx_class_name = "hunit.report.TestReport"
	_hx_fields = ["startTime", "endTime", "spentTime", "writer", "cases", "fails", "warnings", "successful", "skipped", "notices", "assertionCount"]
	_hx_methods = ["addFail", "addSuccess", "addWarning", "addSkip", "addNotice", "output", "getSummary", "set_endTime", "get_testCount"]

	def __init__(self,writer):
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:22
		self.startTime = None
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:24
		self.endTime = None
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:26
		self.spentTime = None
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:29
		self.writer = None
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:31
		self.cases = None
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:33
		self.fails = None
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:35
		self.warnings = None
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:37
		self.successful = None
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:39
		self.skipped = None
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:41
		self.notices = None
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:45
		self.assertionCount = None
		self.assertionCount = 0
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:26
		self.spentTime = 0
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:24
		self.endTime = 0
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:22
		self.startTime = 0
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:54
		self.cases = List()
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:55
		self.fails = List()
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:56
		self.warnings = List()
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:57
		self.successful = List()
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:58
		self.skipped = List()
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:59
		self.notices = List()
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:61
		self.writer = writer

	def addFail(self,testCase,test,e):
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:71
		self.fails.add(_hx_AnonObject({'caseName': Type.getClassName(Type.getClass(testCase)), 'testName': test, 'exception': e}))

	def addSuccess(self,testCase,test):
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:85
		self.successful.add(_hx_AnonObject({'caseName': Type.getClassName(Type.getClass(testCase)), 'testName': test}))

	def addWarning(self,testCase,test,warning):
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:98
		self.warnings.add(_hx_AnonObject({'caseName': Type.getClassName(Type.getClass(testCase)), 'testName': test, 'warning': warning}))

	def addSkip(self,testCase,test,depends):
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:112
		self.skipped.add(_hx_AnonObject({'caseName': Type.getClassName(Type.getClass(testCase)), 'testName': test, 'depends': depends}))

	def addNotice(self,testCase,test,message,pos):
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:126
		self.notices.add(_hx_AnonObject({'caseName': Type.getClassName(Type.getClass(testCase)), 'testName': test, 'message': message, 'pos': pos}))

	def output(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:141
		self.writer.write(self)

	def getSummary(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:151
		failed = self.fails.length
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:152
		warned = self.warnings.length
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:153
		passed = (warned + self.successful.length)
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:154
		total = (failed + passed)
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:156
		failedMsg = None
		if (failed == 0):
			failedMsg = ""
		else:
			failedMsg = (((", " + Std.string(failed)) + " failure") + HxOverrides.stringOrNull((("" if ((failed == 1)) else "s"))))
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:157
		warnedMsg = None
		if (warned == 0):
			warnedMsg = ""
		else:
			warnedMsg = (((", " + Std.string(warned)) + " warning") + HxOverrides.stringOrNull((("" if ((warned == 1)) else "s"))))
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:158
		skippedMsg = None
		if (self.skipped.length == 0):
			skippedMsg = ""
		else:
			skippedMsg = ((", " + Std.string(self.skipped.length)) + " skipped")
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:160
		summary = (("Time: " + Std.string(self.spentTime)) + " seconds.\n\n")
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:161
		if (((self.fails.length == 0) and ((self.warnings.length == 0))) and ((self.skipped.length == 0))):
			summary = (("null" if summary is None else summary) + HxOverrides.stringOrNull(((((("OK (" + Std.string(total)) + " tests, ") + Std.string(self.assertionCount)) + " assertions)"))))
		elif (self.fails.length == 0):
			summary = (("null" if summary is None else summary) + HxOverrides.stringOrNull((((((((("OK, but with risky tests! (" + Std.string(total)) + " tests, ") + Std.string(self.assertionCount)) + " assertions") + ("null" if warnedMsg is None else warnedMsg)) + ("null" if skippedMsg is None else skippedMsg)) + ")"))))
		else:
			summary = (("null" if summary is None else summary) + HxOverrides.stringOrNull(((((((("FAILURES! (" + Std.string(total)) + " tests") + ("null" if failedMsg is None else failedMsg)) + ("null" if warnedMsg is None else warnedMsg)) + ("null" if skippedMsg is None else skippedMsg)) + ")"))))
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:169
		return summary

	def set_endTime(self,endTime):
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:179
		self.spentTime = (Math.floor(((((endTime - self.startTime)) * 1000) + 0.5)) / 1000)
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:181
		def _hx_local_1():
			# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:181
			def _hx_local_0():
				# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:181
				self.endTime = endTime
				return self.endTime
			return _hx_local_0()
		return _hx_local_1()

	def get_testCount(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx:191
		return (((self.successful.length + self.warnings.length) + self.fails.length) + self.skipped.length)

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.startTime = None
		_hx_o.endTime = None
		_hx_o.spentTime = None
		_hx_o.writer = None
		_hx_o.cases = None
		_hx_o.fails = None
		_hx_o.warnings = None
		_hx_o.successful = None
		_hx_o.skipped = None
		_hx_o.notices = None
		_hx_o.assertionCount = None
hunit_report_TestReport._hx_class = hunit_report_TestReport


class hunit_utils_CTypeClassFieldsUtils:
	_hx_class_name = "hunit.utils.CTypeClassFieldsUtils"
	_hx_statics = ["TEST_INDICATOR", "isTest", "mIsTest"]

	@staticmethod
	def isTest(field):
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx:23
		if (HxString.substr(field.name,0,len("test")) == "test"):
			return True
		else:
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx:27
			_g = 0
			_g1 = field.meta
			while (_g < len(_g1)):
				meta = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
				_g = (_g + 1)
				# /home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx:29
				if (meta.name == "test"):
					return True
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx:35
		return False

	@staticmethod
	def mIsTest(field):
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx:46
		if (HxString.substr(field.name,0,len("test")) == "test"):
			return True
		else:
			return field.meta.has("test")
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/CTypeClassFieldUtils.hx:53
		return False
hunit_utils_CTypeClassFieldsUtils._hx_class = hunit_utils_CTypeClassFieldsUtils


class hunit_utils_TestCaseData:
	_hx_class_name = "hunit.utils.TestCaseData"
	_hx_fields = ["testCase", "rtti", "tests", "defaultGroups"]
	_hx_methods = ["getTests", "processTestCaseRttiMeta", "gatherTestData", "getTestData", "testIsInGroups", "get_className", "get_file", "get_totalTestCount", "set_testCase"]
	_hx_statics = ["getDependent", "sortByDependencies"]

	def __init__(self,testCase):
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:39
		self.testCase = None
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:41
		self.rtti = None
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:43
		self.tests = None
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:45
		self.defaultGroups = None
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:116
		self.tests = []
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:117
		self.defaultGroups = []
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:118
		self.set_testCase(testCase)
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:120
		self.processTestCaseRttiMeta()
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:122
		self.gatherTestData()

	def getTests(self,groups = None,excludeGroups = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:131
		_g = self
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:133
		result = None
		if ((groups is None) or ((len(groups) == 0))):
			result = list(self.tests)
		else:
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:136
			def _hx_local_0(t):
				# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:136
				return _g.testIsInGroups(t,groups)
			result = list(filter(_hx_local_0,self.tests))
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:138
		if (excludeGroups is not None):
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:139
			def _hx_local_1(t1):
				# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:139
				return (not _g.testIsInGroups(t1,excludeGroups))
			result = list(filter(_hx_local_1,result))
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:142
		return hunit_utils_TestCaseData.sortByDependencies(result)

	def processTestCaseRttiMeta(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:151
		_g = 0
		_g1 = self.rtti.meta
		while (_g < len(_g1)):
			meta = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
			_g = (_g + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:152
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:152
			_g2 = meta.name
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:153
			if (_g2 == "group"):
				# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:154
				def _hx_local_1(s):
					# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:154
					return StringTools.replace(s,"\"","")
				mGroups = list(map(_hx_local_1,meta.params))
				# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:155
				self.defaultGroups = (self.defaultGroups + mGroups)
			else:
				pass

	def gatherTestData(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:168
		_g_head = self.rtti.fields.h
		_g_val = None
		while (_g_head is not None):
			field = None
			def _hx_local_0():
				nonlocal _g_head
				nonlocal _g_val
				_g_val = (_g_head[0] if 0 < len(_g_head) else None)
				_g_head = (_g_head[1] if 1 < len(_g_head) else None)
				# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:166
				return _g_val
			field = _hx_local_0()
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:169
			if (not hunit_utils_CTypeClassFieldsUtils.isTest(field)):
				continue
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:172
			if (not Reflect.isFunction(Reflect.field(self.testCase,field.name))):
				continue
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:174
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:174
			_this = self.tests
			x = self.getTestData(field)
			_this.append(x)

	def getTestData(self,field):
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:185
		callback = Reflect.field(self.testCase,field.name)
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:186
		isIncomplete = False
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:187
		groups = list(self.defaultGroups)
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:188
		incompleteMsg = None
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:189
		depends = []
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:191
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:191
		_g = 0
		_g1 = field.meta
		while (_g < len(_g1)):
			meta = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
			_g = (_g + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:192
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:192
			_g2 = meta.name
			_hx_local_1 = len(_g2)
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:196
			if (_hx_local_1 == 10):
				if (_g2 == "incomplete"):
					# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:197
					isIncomplete = True
					# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:198
					# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:198
					def _hx_local_2(s1):
						# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:198
						return StringTools.replace(s1,"\"","")
					_this = list(map(_hx_local_2,meta.params))
					incompleteMsg = "; ".join([python_Boot.toString1(x1,'') for x1 in _this])
				else:
					pass
			elif (_hx_local_1 == 5):
				if (_g2 == "group"):
					# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:194
					def _hx_local_3(s):
						# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:194
						return StringTools.replace(s,"\"","")
					mGroups = list(map(_hx_local_3,meta.params))
					# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:195
					groups = (groups + mGroups)
				else:
					pass
			elif (_hx_local_1 == 7):
				if (_g2 == "depends"):
					# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:200
					def _hx_local_4(s2):
						# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:200
						return StringTools.replace(s2,"\"","")
					depends = list(map(_hx_local_4,meta.params))
				else:
					pass
			else:
				pass
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:205
		return _hx_AnonObject({'name': field.name, 'callback': callback, 'isIncomplete': isIncomplete, 'incompleteMsg': incompleteMsg, 'groups': groups, 'depends': depends})

	def testIsInGroups(self,test,groups):
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:222
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:222
		_g = 0
		while (_g < len(groups)):
			group = (groups[_g] if _g >= 0 and _g < len(groups) else None)
			_g = (_g + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:223
			if (python_internal_ArrayImpl.indexOf(test.groups,group,None) >= 0):
				return True
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:228
		return False

	def get_className(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:236
		return Type.getClassName(Type.getClass(self.testCase))

	def get_file(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:237
		return self.rtti.file

	def get_totalTestCount(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:238
		return len(self.tests)

	def set_testCase(self,value):
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:247
		self.rtti = haxe_rtti_Rtti.getRtti(Type.getClass(value))
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:249
		def _hx_local_1():
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:249
			def _hx_local_0():
				# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:249
				self.testCase = value
				return self.testCase
			return _hx_local_0()
		return _hx_local_1()

	@staticmethod
	def getDependent(test,_hx_list,dependencyStack = None):
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:54
		dependent = []
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:56
		if (dependencyStack is not None):
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:57
			if (python_internal_ArrayImpl.indexOf(dependencyStack,test,None) >= 0):
				raise hunit_exceptions_CircularTestDependencyException("Tests with circular dependancies detected. Check @depends() metas.", _hx_AnonObject({'fileName': "TestCaseData.hx", 'lineNumber': 58, 'className': "hunit.utils.TestCaseData", 'methodName': "getDependent"}))
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:60
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:60
			dependencyStack.append(test)
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:63
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:63
		_g = 0
		while (_g < len(_hx_list)):
			t = (_hx_list[_g] if _g >= 0 and _g < len(_hx_list) else None)
			_g = (_g + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:64
			if (t == test):
				continue
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:66
			if (python_internal_ArrayImpl.indexOf(t.depends,test.name,None) >= 0):
				# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:67
				# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:67
				dependent.append(t)
				# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:68
				subStack = None
				if (dependencyStack is None):
					subStack = None
				else:
					subStack = list(dependencyStack)
				# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:69
				# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:69
				a = hunit_utils_TestCaseData.getDependent(t,_hx_list,subStack)
				dependent = (dependent + a)
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:73
		return dependent

	@staticmethod
	def sortByDependencies(_hx_list):
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:83
		if (len(_hx_list) == 0):
			return []
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:85
		result = list(_hx_list)
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:86
		def _hx_local_0(a,b):
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:86
			return (len(a.depends) - len(b.depends))
		result.sort(key= python_lib_Functools.cmp_to_key(_hx_local_0))
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:87
		if (len((result[0] if 0 < len(result) else None).depends) > 0):
			raise hunit_exceptions_CircularTestDependencyException("Can't find tests without dependencies.", _hx_AnonObject({'fileName': "TestCaseData.hx", 'lineNumber': 88, 'className': "hunit.utils.TestCaseData", 'methodName': "sortByDependencies"}))
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:91
		idx = 0
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:93
		dependent = None
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:94
		while (idx < len(_hx_list)):
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:95
			dependent = hunit_utils_TestCaseData.getDependent((result[idx] if idx >= 0 and idx < len(result) else None),result,[])
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:98
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:98
			_g = 0
			while (_g < len(dependent)):
				test = (dependent[_g] if _g >= 0 and _g < len(dependent) else None)
				_g = (_g + 1)
				# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:99
				python_internal_ArrayImpl.remove(result,test)
				# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:100
				# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:100
				result.append(test)
			# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:103
			idx = (idx + 1)
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/TestCaseData.hx:106
		return result

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.testCase = None
		_hx_o.rtti = None
		_hx_o.tests = None
		_hx_o.defaultGroups = None
hunit_utils_TestCaseData._hx_class = hunit_utils_TestCaseData

class hunit_utils_Value(Enum):
	_hx_class_name = "hunit.utils.Value"
	_hx_constructs = ["Nothing", "Thing"]

	@staticmethod
	def Thing(v):
		return hunit_utils_Value("Thing", 1, [v])
hunit_utils_Value.Nothing = hunit_utils_Value("Nothing", 0, list())
hunit_utils_Value._hx_class = hunit_utils_Value


class hunit_utils_ValueTools:
	_hx_class_name = "hunit.utils.ValueTools"
	_hx_statics = ["hasValue", "getValue"]

	@staticmethod
	def hasValue(holder):
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx:29
		if (holder is None):
			return False
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx:30
		if (holder is not None):
			if ((holder.index) == 0):
				return False
			elif ((holder.index) == 1):
				return True
			else:
				pass
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx:35
		return False

	@staticmethod
	def getValue(holder):
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx:45
		if (holder is None):
			raise _Exception_HException("No value here", _hx_AnonObject({'fileName': "Value.hx", 'lineNumber': 46, 'className': "hunit.utils.ValueTools", 'methodName': "getValue"}))
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx:49
		if (holder is not None):
			if ((holder.index) == 0):
				raise _Exception_HException("No value here", _hx_AnonObject({'fileName': "Value.hx", 'lineNumber': 50, 'className': "hunit.utils.ValueTools", 'methodName': "getValue"}))
			elif ((holder.index) == 1):
				# /home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx:49
				v = holder.params[0]
				# /home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx:51
				return v
			else:
				pass
		# /home/alex/Work/HaXe/hunit/src/hunit/utils/Value.hx:54
		raise _Exception_HException("No value here", _hx_AnonObject({'fileName': "Value.hx", 'lineNumber': 54, 'className': "hunit.utils.ValueTools", 'methodName': "getValue"}))
hunit_utils_ValueTools._hx_class = hunit_utils_ValueTools


class hunit_warnings_Warning:
	_hx_class_name = "hunit.warnings.Warning"
	_hx_fields = ["message"]
	_hx_methods = ["defaultMessage"]

	def __init__(self,message):
		# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:14
		self.message = None
		# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:23
		if ((message is None) or ((len(StringTools.trim(message)) == 0))):
			message = self.defaultMessage()
		# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:27
		self.message = message

	def defaultMessage(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:36
		className = None
		_this = None
		_this1 = Type.getClassName(Type.getClass(self))
		_this = _this1.split(".")
		className = (None if ((len(_this) == 0)) else _this.pop())
		# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:38
		words = []
		# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:39
		wordStart = -1
		# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:40
		# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:40
		_g1 = 0
		_g = len(className)
		while (_g1 < _g):
			i = _g1
			_g1 = (_g1 + 1)
			# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:41
			char = None
			if ((i < 0) or ((i >= len(className)))):
				char = ""
			else:
				char = className[i]
			# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:43
			if (char.upper() == char):
				# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:44
				if (wordStart >= 0):
					# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:45
					word = HxString.substring(className,wordStart,i)
					# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:46
					if (wordStart > 0):
						word = word.lower()
					# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:50
					# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:50
					words.append(word)
				# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:52
				wordStart = i
		# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:55
		if (wordStart >= 0):
			# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:56
			x = None
			_this2 = HxString.substr(className,wordStart,None)
			x = _this2.lower()
			words.append(x)
		# /home/alex/Work/HaXe/hunit/src/hunit/warnings/Warning.hx:59
		return " ".join([python_Boot.toString1(x1,'') for x1 in words])

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.message = None
hunit_warnings_Warning._hx_class = hunit_warnings_Warning


class hunit_warnings_ForcedWarning(hunit_warnings_Warning):
	_hx_class_name = "hunit.warnings.ForcedWarning"
	_hx_fields = []
	_hx_methods = []
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = hunit_warnings_Warning


	def __init__(self,message):
		# /home/alex/Work/HaXe/hunit/src/hunit/warnings/ForcedWarning.hx:11
		super().__init__(message)
hunit_warnings_ForcedWarning._hx_class = hunit_warnings_ForcedWarning


class hunit_warnings_IncompleteTestWarning(hunit_warnings_Warning):
	_hx_class_name = "hunit.warnings.IncompleteTestWarning"
	_hx_fields = []
	_hx_methods = ["defaultMessage"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = hunit_warnings_Warning


	def __init__(self,message):
		# /home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx:10
		super().__init__(message)

	def defaultMessage(self):
		# /home/alex/Work/HaXe/hunit/src/hunit/warnings/IncompleteTestWarning.hx:19
		return "Incomplete test."

	@staticmethod
	def _hx_empty_init(_hx_o):		pass
hunit_warnings_IncompleteTestWarning._hx_class = hunit_warnings_IncompleteTestWarning


class hunit_warnings_NoAssertionsWarning(hunit_warnings_Warning):
	_hx_class_name = "hunit.warnings.NoAssertionsWarning"
	_hx_fields = []
	_hx_methods = []
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = hunit_warnings_Warning


	def __init__(self,message):
		# /home/alex/Work/HaXe/hunit/src/hunit/warnings/NoAssertionsWarning.hx:11
		super().__init__(message)
hunit_warnings_NoAssertionsWarning._hx_class = hunit_warnings_NoAssertionsWarning


class hunit_warnings_NoTestsWarning(hunit_warnings_Warning):
	_hx_class_name = "hunit.warnings.NoTestsWarning"
	_hx_fields = []
	_hx_methods = []
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = hunit_warnings_Warning


	def __init__(self,message):
		# /home/alex/Work/HaXe/hunit/src/hunit/warnings/NoTestsWarning.hx:11
		super().__init__(message)
hunit_warnings_NoTestsWarning._hx_class = hunit_warnings_NoTestsWarning


class python_Boot:
	_hx_class_name = "python.Boot"
	_hx_statics = ["keywords", "toString1", "fields", "simpleField", "field", "getInstanceFields", "getSuperClass", "getClassFields", "prefixLength", "unhandleKeywords"]

	@staticmethod
	def toString1(o,s):
		# /usr/lib/haxe/std/python/Boot.hx:93
		if (o is None):
			return "null"
		# /usr/lib/haxe/std/python/Boot.hx:95
		if isinstance(o,str):
			return o
		# /usr/lib/haxe/std/python/Boot.hx:97
		if (s is None):
			s = ""
		# /usr/lib/haxe/std/python/Boot.hx:98
		if (len(s) >= 5):
			return "<...>"
		# /usr/lib/haxe/std/python/Boot.hx:100
		if isinstance(o,bool):
			if o:
				return "true"
			else:
				return "false"
		# /usr/lib/haxe/std/python/Boot.hx:103
		if isinstance(o,int):
			return str(o)
		# /usr/lib/haxe/std/python/Boot.hx:107
		if isinstance(o,float):
			try:
				if (o == int(o)):
					# /usr/lib/haxe/std/python/Boot.hx:110
					def _hx_local_1():
						# /usr/lib/haxe/std/python/Boot.hx:110
						def _hx_local_0():
							# /usr/lib/haxe/std/python/Boot.hx:110
							v = o
							return Math.floor((v + 0.5))
						return str(_hx_local_0())
					return _hx_local_1()
				else:
					return str(o)
			except Exception as _hx_e:
				_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
				e = _hx_e1
				return str(o)
		# /usr/lib/haxe/std/python/Boot.hx:119
		if isinstance(o,list):
			# /usr/lib/haxe/std/python/Boot.hx:121
			o1 = o
			# /usr/lib/haxe/std/python/Boot.hx:123
			l = len(o1)
			# /usr/lib/haxe/std/python/Boot.hx:125
			st = "["
			# /usr/lib/haxe/std/python/Boot.hx:126
			s = (("null" if s is None else s) + "\t")
			# /usr/lib/haxe/std/python/Boot.hx:127
			# /usr/lib/haxe/std/python/Boot.hx:127
			_g = 0
			while (_g < l):
				i = _g
				_g = (_g + 1)
				# /usr/lib/haxe/std/python/Boot.hx:128
				prefix = ""
				# /usr/lib/haxe/std/python/Boot.hx:129
				if (i > 0):
					prefix = ","
				# /usr/lib/haxe/std/python/Boot.hx:132
				st = (("null" if st is None else st) + HxOverrides.stringOrNull(((("null" if prefix is None else prefix) + HxOverrides.stringOrNull(python_Boot.toString1((o1[i] if i >= 0 and i < len(o1) else None),s))))))
			# /usr/lib/haxe/std/python/Boot.hx:134
			st = (("null" if st is None else st) + "]")
			# /usr/lib/haxe/std/python/Boot.hx:135
			return st
		# /usr/lib/haxe/std/python/Boot.hx:138
		try:
			if hasattr(o,"toString"):
				return o.toString()
		except Exception as _hx_e:
			_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
			pass
		# /usr/lib/haxe/std/python/Boot.hx:144
		if (python_lib_Inspect.isfunction(o) or python_lib_Inspect.ismethod(o)):
			return "<function>"
		# /usr/lib/haxe/std/python/Boot.hx:146
		if hasattr(o,"__class__"):
			# /usr/lib/haxe/std/python/Boot.hx:149
			if isinstance(o,_hx_AnonObject):
				# /usr/lib/haxe/std/python/Boot.hx:151
				toStr = None
				# /usr/lib/haxe/std/python/Boot.hx:152
				try:
					# /usr/lib/haxe/std/python/Boot.hx:154
					fields = python_Boot.fields(o)
					# /usr/lib/haxe/std/python/Boot.hx:155
					fieldsStr = None
					_g1 = []
					_g11 = 0
					while (_g11 < len(fields)):
						f = (fields[_g11] if _g11 >= 0 and _g11 < len(fields) else None)
						_g11 = (_g11 + 1)
						x = ((("" + ("null" if f is None else f)) + " : ") + HxOverrides.stringOrNull(python_Boot.toString1(python_Boot.simpleField(o,f),(("null" if s is None else s) + "\t"))))
						_g1.append(x)
					fieldsStr = _g1
					# /usr/lib/haxe/std/python/Boot.hx:156
					toStr = (("{ " + HxOverrides.stringOrNull(", ".join([x1 for x1 in fieldsStr]))) + " }")
				except Exception as _hx_e:
					_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
					e2 = _hx_e1
					return "{ ... }"
				# /usr/lib/haxe/std/python/Boot.hx:162
				if (toStr is None):
					return "{ ... }"
				else:
					return toStr
			# /usr/lib/haxe/std/python/Boot.hx:172
			if isinstance(o,Enum):
				# /usr/lib/haxe/std/python/Boot.hx:174
				o2 = o
				# /usr/lib/haxe/std/python/Boot.hx:176
				l1 = len(o2.params)
				# /usr/lib/haxe/std/python/Boot.hx:177
				hasParams = (l1 > 0)
				# /usr/lib/haxe/std/python/Boot.hx:178
				if hasParams:
					# /usr/lib/haxe/std/python/Boot.hx:179
					paramsStr = ""
					# /usr/lib/haxe/std/python/Boot.hx:180
					# /usr/lib/haxe/std/python/Boot.hx:180
					_g2 = 0
					while (_g2 < l1):
						i1 = _g2
						_g2 = (_g2 + 1)
						# /usr/lib/haxe/std/python/Boot.hx:181
						prefix1 = ""
						# /usr/lib/haxe/std/python/Boot.hx:182
						if (i1 > 0):
							prefix1 = ","
						# /usr/lib/haxe/std/python/Boot.hx:185
						paramsStr = (("null" if paramsStr is None else paramsStr) + HxOverrides.stringOrNull(((("null" if prefix1 is None else prefix1) + HxOverrides.stringOrNull(python_Boot.toString1((o2.params[i1] if i1 >= 0 and i1 < len(o2.params) else None),s))))))
					# /usr/lib/haxe/std/python/Boot.hx:187
					return (((HxOverrides.stringOrNull(o2.tag) + "(") + ("null" if paramsStr is None else paramsStr)) + ")")
				else:
					return o2.tag
			# /usr/lib/haxe/std/python/Boot.hx:193
			if hasattr(o,"_hx_class_name"):
				if (o.__class__.__name__ != "type"):
					# /usr/lib/haxe/std/python/Boot.hx:195
					fields1 = python_Boot.getInstanceFields(o)
					# /usr/lib/haxe/std/python/Boot.hx:196
					fieldsStr1 = None
					_g3 = []
					_g12 = 0
					while (_g12 < len(fields1)):
						f1 = (fields1[_g12] if _g12 >= 0 and _g12 < len(fields1) else None)
						_g12 = (_g12 + 1)
						x1 = ((("" + ("null" if f1 is None else f1)) + " : ") + HxOverrides.stringOrNull(python_Boot.toString1(python_Boot.simpleField(o,f1),(("null" if s is None else s) + "\t"))))
						_g3.append(x1)
					fieldsStr1 = _g3
					# /usr/lib/haxe/std/python/Boot.hx:198
					toStr1 = (((HxOverrides.stringOrNull(o._hx_class_name) + "( ") + HxOverrides.stringOrNull(", ".join([x1 for x1 in fieldsStr1]))) + " )")
					# /usr/lib/haxe/std/python/Boot.hx:199
					return toStr1
				else:
					# /usr/lib/haxe/std/python/Boot.hx:201
					fields2 = python_Boot.getClassFields(o)
					# /usr/lib/haxe/std/python/Boot.hx:202
					fieldsStr2 = None
					_g4 = []
					_g13 = 0
					while (_g13 < len(fields2)):
						f2 = (fields2[_g13] if _g13 >= 0 and _g13 < len(fields2) else None)
						_g13 = (_g13 + 1)
						x2 = ((("" + ("null" if f2 is None else f2)) + " : ") + HxOverrides.stringOrNull(python_Boot.toString1(python_Boot.simpleField(o,f2),(("null" if s is None else s) + "\t"))))
						_g4.append(x2)
					fieldsStr2 = _g4
					# /usr/lib/haxe/std/python/Boot.hx:203
					toStr2 = (((("#" + HxOverrides.stringOrNull(o._hx_class_name)) + "( ") + HxOverrides.stringOrNull(", ".join([x1 for x1 in fieldsStr2]))) + " )")
					# /usr/lib/haxe/std/python/Boot.hx:204
					return toStr2
			# /usr/lib/haxe/std/python/Boot.hx:208
			if (o == str):
				return "#String"
			# /usr/lib/haxe/std/python/Boot.hx:212
			if (o == list):
				return "#Array"
			# /usr/lib/haxe/std/python/Boot.hx:216
			if callable(o):
				return "function"
			# /usr/lib/haxe/std/python/Boot.hx:219
			try:
				if hasattr(o,"__repr__"):
					return o.__repr__()
			except Exception as _hx_e:
				_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
				pass
			# /usr/lib/haxe/std/python/Boot.hx:225
			if hasattr(o,"__str__"):
				return o.__str__([])
			# /usr/lib/haxe/std/python/Boot.hx:229
			if hasattr(o,"__name__"):
				return o.__name__
			# /usr/lib/haxe/std/python/Boot.hx:232
			return "???"
		else:
			return str(o)

	@staticmethod
	def fields(o):
		# /usr/lib/haxe/std/python/Boot.hx:244
		a = []
		# /usr/lib/haxe/std/python/Boot.hx:245
		if (o is not None):
			# /usr/lib/haxe/std/python/Boot.hx:246
			if hasattr(o,"_hx_fields"):
				# /usr/lib/haxe/std/python/Boot.hx:247
				fields = o._hx_fields
				# /usr/lib/haxe/std/python/Boot.hx:248
				return list(fields)
			# /usr/lib/haxe/std/python/Boot.hx:250
			if isinstance(o,_hx_AnonObject):
				# /usr/lib/haxe/std/python/Boot.hx:252
				d = o.__dict__
				# /usr/lib/haxe/std/python/Boot.hx:253
				keys = d.keys()
				# /usr/lib/haxe/std/python/Boot.hx:254
				handler = python_Boot.unhandleKeywords
				# /usr/lib/haxe/std/python/Boot.hx:256
				for k in keys:
				# /usr/lib/haxe/std/python/Boot.hx:257
					a.append(handler(k))
			elif hasattr(o,"__dict__"):
				# /usr/lib/haxe/std/python/Boot.hx:260
				a1 = []
				# /usr/lib/haxe/std/python/Boot.hx:261
				d1 = o.__dict__
				# /usr/lib/haxe/std/python/Boot.hx:262
				keys1 = d1.keys()
				# /usr/lib/haxe/std/python/Boot.hx:263
				for k in keys1:
				# /usr/lib/haxe/std/python/Boot.hx:264
					a.append(k)
		# /usr/lib/haxe/std/python/Boot.hx:268
		return a

	@staticmethod
	def simpleField(o,field):
		# /usr/lib/haxe/std/python/Boot.hx:280
		if (field is None):
			return None
		# /usr/lib/haxe/std/python/Boot.hx:282
		field1 = None
		if field in python_Boot.keywords:
			field1 = ("_hx_" + field)
		elif ((((len(field) > 2) and ((ord(field[0]) == 95))) and ((ord(field[1]) == 95))) and ((ord(field[(len(field) - 1)]) != 95))):
			field1 = ("_hx_" + field)
		else:
			field1 = field
		# /usr/lib/haxe/std/python/Boot.hx:283
		if hasattr(o,field1):
			return getattr(o,field1)
		else:
			return None

	@staticmethod
	def field(o,field):
		# /usr/lib/haxe/std/python/Boot.hx:287
		if (field is None):
			return None
		# /usr/lib/haxe/std/python/Boot.hx:289
		# /usr/lib/haxe/std/python/Boot.hx:289
		_hx_local_0 = len(field)
		# /usr/lib/haxe/std/python/Boot.hx:294
		if (_hx_local_0 == 10):
			if (field == "charCodeAt"):
				if isinstance(o,str):
					# /usr/lib/haxe/std/python/Boot.hx:294
					s4 = o
					def _hx_local_1(a11):
						return HxString.charCodeAt(s4,a11)
					return _hx_local_1
		elif (_hx_local_0 == 11):
			if (field == "toLowerCase"):
				if isinstance(o,str):
					# /usr/lib/haxe/std/python/Boot.hx:291
					s1 = o
					def _hx_local_2():
						return HxString.toLowerCase(s1)
					return _hx_local_2
			elif (field == "toUpperCase"):
				if isinstance(o,str):
					# /usr/lib/haxe/std/python/Boot.hx:292
					s2 = o
					def _hx_local_3():
						return HxString.toUpperCase(s2)
					return _hx_local_3
			elif (field == "lastIndexOf"):
				if isinstance(o,str):
					# /usr/lib/haxe/std/python/Boot.hx:296
					s6 = o
					def _hx_local_4(a13):
						return HxString.lastIndexOf(s6,a13)
					return _hx_local_4
				elif isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:314
					a2 = o
					def _hx_local_5(x2):
						return python_internal_ArrayImpl.lastIndexOf(a2,x2)
					return _hx_local_5
		elif (_hx_local_0 == 9):
			if (field == "substring"):
				if isinstance(o,str):
					# /usr/lib/haxe/std/python/Boot.hx:299
					s9 = o
					def _hx_local_6(a15):
						return HxString.substring(s9,a15)
					return _hx_local_6
		elif (_hx_local_0 == 5):
			if (field == "split"):
				if isinstance(o,str):
					# /usr/lib/haxe/std/python/Boot.hx:297
					s7 = o
					def _hx_local_7(d):
						return HxString.split(s7,d)
					return _hx_local_7
			elif (field == "shift"):
				if isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:317
					x14 = o
					def _hx_local_8():
						return python_internal_ArrayImpl.shift(x14)
					return _hx_local_8
			elif (field == "slice"):
				if isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:318
					x15 = o
					def _hx_local_9(a18):
						return python_internal_ArrayImpl.slice(x15,a18)
					return _hx_local_9
		elif (_hx_local_0 == 4):
			if (field == "copy"):
				if isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:305
					def _hx_local_10():
						# /usr/lib/haxe/std/python/Boot.hx:305
						x6 = o
						return list(x6)
					return _hx_local_10
			elif (field == "join"):
				if isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:308
					def _hx_local_11(sep):
						# /usr/lib/haxe/std/python/Boot.hx:308
						x9 = o
						return sep.join([python_Boot.toString1(x1,'') for x1 in x9])
					return _hx_local_11
			elif (field == "push"):
				if isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:311
					x11 = o
					def _hx_local_12(e):
						return python_internal_ArrayImpl.push(x11,e)
					return _hx_local_12
			elif (field == "sort"):
				if isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:319
					x16 = o
					def _hx_local_13(f2):
						python_internal_ArrayImpl.sort(x16,f2)
					return _hx_local_13
		elif (_hx_local_0 == 7):
			if (field == "indexOf"):
				if isinstance(o,str):
					# /usr/lib/haxe/std/python/Boot.hx:295
					s5 = o
					def _hx_local_14(a12):
						return HxString.indexOf(s5,a12)
					return _hx_local_14
				elif isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:313
					a = o
					def _hx_local_15(x1):
						return python_internal_ArrayImpl.indexOf(a,x1)
					return _hx_local_15
			elif (field == "unshift"):
				if isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:312
					x12 = o
					def _hx_local_16(e1):
						python_internal_ArrayImpl.unshift(x12,e1)
					return _hx_local_16
			elif (field == "reverse"):
				if isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:316
					a4 = o
					def _hx_local_17():
						python_internal_ArrayImpl.reverse(a4)
					return _hx_local_17
		elif (_hx_local_0 == 3):
			if (field == "map"):
				if isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:302
					x4 = o
					def _hx_local_18(f):
						return python_internal_ArrayImpl.map(x4,f)
					return _hx_local_18
			elif (field == "pop"):
				if isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:310
					x10 = o
					def _hx_local_19():
						return python_internal_ArrayImpl.pop(x10)
					return _hx_local_19
		elif (_hx_local_0 == 8):
			if (field == "toString"):
				if isinstance(o,str):
					# /usr/lib/haxe/std/python/Boot.hx:300
					s10 = o
					def _hx_local_20():
						return HxString.toString(s10)
					return _hx_local_20
				elif isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:309
					x3 = o
					def _hx_local_21():
						return python_internal_ArrayImpl.toString(x3)
					return _hx_local_21
			elif (field == "iterator"):
				if isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:306
					x7 = o
					def _hx_local_22():
						return python_internal_ArrayImpl.iterator(x7)
					return _hx_local_22
		elif (_hx_local_0 == 6):
			if (field == "length"):
				if isinstance(o,str):
					# /usr/lib/haxe/std/python/Boot.hx:290
					s = o
					return len(s)
				elif isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:301
					x = o
					return len(x)
			elif (field == "charAt"):
				if isinstance(o,str):
					# /usr/lib/haxe/std/python/Boot.hx:293
					s3 = o
					def _hx_local_23(a1):
						return HxString.charAt(s3,a1)
					return _hx_local_23
			elif (field == "substr"):
				if isinstance(o,str):
					# /usr/lib/haxe/std/python/Boot.hx:298
					s8 = o
					def _hx_local_24(a14):
						return HxString.substr(s8,a14)
					return _hx_local_24
			elif (field == "filter"):
				if isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:303
					x5 = o
					def _hx_local_25(f1):
						return python_internal_ArrayImpl.filter(x5,f1)
					return _hx_local_25
			elif (field == "concat"):
				if isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:304
					a16 = o
					def _hx_local_26(a21):
						return python_internal_ArrayImpl.concat(a16,a21)
					return _hx_local_26
			elif (field == "insert"):
				if isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:307
					a3 = o
					def _hx_local_27(a17,x8):
						python_internal_ArrayImpl.insert(a3,a17,x8)
					return _hx_local_27
			elif (field == "remove"):
				if isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:315
					x13 = o
					def _hx_local_28(e2):
						return python_internal_ArrayImpl.remove(x13,e2)
					return _hx_local_28
			elif (field == "splice"):
				if isinstance(o,list):
					# /usr/lib/haxe/std/python/Boot.hx:320
					x17 = o
					def _hx_local_29(a19,a22):
						return python_internal_ArrayImpl.splice(x17,a19,a22)
					return _hx_local_29
		else:
			pass
		# /usr/lib/haxe/std/python/Boot.hx:324
		field1 = None
		if field in python_Boot.keywords:
			field1 = ("_hx_" + field)
		elif ((((len(field) > 2) and ((ord(field[0]) == 95))) and ((ord(field[1]) == 95))) and ((ord(field[(len(field) - 1)]) != 95))):
			field1 = ("_hx_" + field)
		else:
			field1 = field
		# /usr/lib/haxe/std/python/Boot.hx:325
		if hasattr(o,field1):
			return getattr(o,field1)
		else:
			return None

	@staticmethod
	def getInstanceFields(c):
		# /usr/lib/haxe/std/python/Boot.hx:330
		f = None
		if hasattr(c,"_hx_fields"):
			f = c._hx_fields
		else:
			f = []
		# /usr/lib/haxe/std/python/Boot.hx:331
		if hasattr(c,"_hx_methods"):
			# /usr/lib/haxe/std/python/Boot.hx:332
			a = c._hx_methods
			f = (f + a)
		# /usr/lib/haxe/std/python/Boot.hx:334
		sc = python_Boot.getSuperClass(c)
		# /usr/lib/haxe/std/python/Boot.hx:336
		if (sc is None):
			return f
		else:
			# /usr/lib/haxe/std/python/Boot.hx:340
			scArr = python_Boot.getInstanceFields(sc)
			# /usr/lib/haxe/std/python/Boot.hx:341
			scMap = set(scArr)
			# /usr/lib/haxe/std/python/Boot.hx:343
			res = []
			# /usr/lib/haxe/std/python/Boot.hx:344
			# /usr/lib/haxe/std/python/Boot.hx:344
			_g = 0
			while (_g < len(f)):
				f1 = (f[_g] if _g >= 0 and _g < len(f) else None)
				_g = (_g + 1)
				# /usr/lib/haxe/std/python/Boot.hx:345
				if (not f1 in scMap):
					# /usr/lib/haxe/std/python/Boot.hx:346
					scArr.append(f1)
			# /usr/lib/haxe/std/python/Boot.hx:350
			return scArr

	@staticmethod
	def getSuperClass(c):
		# /usr/lib/haxe/std/python/Boot.hx:355
		if (c is None):
			return None
		# /usr/lib/haxe/std/python/Boot.hx:358
		try:
			# /usr/lib/haxe/std/python/Boot.hx:359
			if hasattr(c,"_hx_super"):
				return c._hx_super
			# /usr/lib/haxe/std/python/Boot.hx:362
			return None
		except Exception as _hx_e:
			_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
			pass
		# /usr/lib/haxe/std/python/Boot.hx:366
		return None

	@staticmethod
	def getClassFields(c):
		# /usr/lib/haxe/std/python/Boot.hx:371
		if hasattr(c,"_hx_statics"):
			# /usr/lib/haxe/std/python/Boot.hx:372
			x = c._hx_statics
			# /usr/lib/haxe/std/python/Boot.hx:373
			return list(x)
		else:
			return []

	@staticmethod
	def unhandleKeywords(name):
		# /usr/lib/haxe/std/python/Boot.hx:397
		if (HxString.substr(name,0,python_Boot.prefixLength) == "_hx_"):
			# /usr/lib/haxe/std/python/Boot.hx:398
			real = HxString.substr(name,python_Boot.prefixLength,None)
			# /usr/lib/haxe/std/python/Boot.hx:399
			if real in python_Boot.keywords:
				return real
		# /usr/lib/haxe/std/python/Boot.hx:401
		return name
python_Boot._hx_class = python_Boot


class python_Lib:
	_hx_class_name = "python.Lib"
	_hx_statics = ["print", "println"]

	@staticmethod
	def print(v):
		# /usr/lib/haxe/std/python/Lib.hx:33
		_hx_str = Std.string(v)
		# /usr/lib/haxe/std/python/Lib.hx:35
		python_lib_Sys.stdout.buffer.write(_hx_str.encode("utf-8", "strict"))
		# /usr/lib/haxe/std/python/Lib.hx:36
		python_lib_Sys.stdout.flush()

	@staticmethod
	def println(v):
		# /usr/lib/haxe/std/python/Lib.hx:40
		_hx_str = Std.string(v)
		# /usr/lib/haxe/std/python/Lib.hx:42
		python_lib_Sys.stdout.buffer.write((("" + ("null" if _hx_str is None else _hx_str)) + "\n").encode("utf-8", "strict"))
		# /usr/lib/haxe/std/python/Lib.hx:43
		python_lib_Sys.stdout.flush()
python_Lib._hx_class = python_Lib


class python_internal_ArrayImpl:
	_hx_class_name = "python.internal.ArrayImpl"
	_hx_statics = ["concat", "iterator", "indexOf", "lastIndexOf", "toString", "pop", "push", "unshift", "remove", "shift", "slice", "sort", "splice", "map", "filter", "insert", "reverse", "_get", "_set"]

	@staticmethod
	def concat(a1,a2):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:35
		return (a1 + a2)

	@staticmethod
	def iterator(x):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:45
		return python_HaxeIterator(x.__iter__())

	@staticmethod
	def indexOf(a,x,fromIndex = None):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:50
		_hx_len = len(a)
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:52
		l = None
		if (fromIndex is None):
			l = 0
		elif (fromIndex < 0):
			l = (_hx_len + fromIndex)
		else:
			l = fromIndex
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:55
		if (l < 0):
			l = 0
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:56
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:56
		_g = l
		while (_g < _hx_len):
			i = _g
			_g = (_g + 1)
			# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:57
			if (a[i] == x):
				return i
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:59
		return -1

	@staticmethod
	def lastIndexOf(a,x,fromIndex = None):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:64
		_hx_len = len(a)
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:66
		l = None
		if (fromIndex is None):
			l = _hx_len
		elif (fromIndex < 0):
			l = ((_hx_len + fromIndex) + 1)
		else:
			l = (fromIndex + 1)
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:69
		if (l > _hx_len):
			l = _hx_len
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:70
		def _hx_local_1():
			# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:70
			nonlocal l
			l = (l - 1)
			return l
		while (_hx_local_1() > -1):
			if (a[l] == x):
				return l
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:73
		return -1

	@staticmethod
	def toString(x):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:84
		return (("[" + HxOverrides.stringOrNull(",".join([python_Boot.toString1(x1,'') for x1 in x]))) + "]")

	@staticmethod
	def pop(x):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:89
		if (len(x) == 0):
			return None
		else:
			return x.pop()

	@staticmethod
	def push(x,e):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:94
		x.append(e)
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:95
		return len(x)

	@staticmethod
	def unshift(x,e):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:100
		x.insert(0, e)

	@staticmethod
	def remove(x,e):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:105
		try:
			# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:106
			x.remove(e)
			# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:107
			return True
		except Exception as _hx_e:
			_hx_e1 = _hx_e.val if isinstance(_hx_e, _HxException) else _hx_e
			e1 = _hx_e1
			return False

	@staticmethod
	def shift(x):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:115
		if (len(x) == 0):
			return None
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:116
		return x.pop(0)

	@staticmethod
	def slice(x,pos,end = None):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:121
		return x[pos:end]

	@staticmethod
	def sort(x,f):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:125
		x.sort(key= python_lib_Functools.cmp_to_key(f))

	@staticmethod
	def splice(x,pos,_hx_len):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:130
		if (pos < 0):
			pos = (len(x) + pos)
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:131
		if (pos < 0):
			pos = 0
		# /usr/lib/haxe/std/python/Syntax.hx:80
		res = x[pos:(pos + _hx_len)]
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:133
		del x[pos:(pos + _hx_len)]
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:134
		return res

	@staticmethod
	def map(x,f):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:139
		return list(map(f,x))

	@staticmethod
	def filter(x,f):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:144
		return list(filter(f,x))

	@staticmethod
	def insert(a,pos,x):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:149
		a.insert(pos, x)

	@staticmethod
	def reverse(a):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:153
		a.reverse()

	@staticmethod
	def _get(x,idx):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:158
		if ((idx > -1) and ((idx < len(x)))):
			return x[idx]
		else:
			return None

	@staticmethod
	def _set(x,idx,v):
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:163
		l = len(x)
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:164
		while (l < idx):
			# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:165
			# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:165
			x.append(None)
			# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:166
			l = (l + 1)
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:168
		if (l == idx):
			# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:169
			x.append(v)
		else:
			x[idx] = v
		# /usr/lib/haxe/std/python/internal/ArrayImpl.hx:173
		return v
python_internal_ArrayImpl._hx_class = python_internal_ArrayImpl


class _HxException(Exception):
	_hx_class_name = "_HxException"
	_hx_fields = ["val"]
	_hx_methods = []
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = Exception


	def __init__(self,val):
		# /usr/lib/haxe/std/python/internal/HxException.hx:28
		self.val = None
		# /usr/lib/haxe/std/python/internal/HxException.hx:31
		message = str(val)
		# /usr/lib/haxe/std/python/internal/HxException.hx:32
		super().__init__(message)
		# /usr/lib/haxe/std/python/internal/HxException.hx:33
		self.val = val

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.val = None
_HxException._hx_class = _HxException


class HxOverrides:
	_hx_class_name = "HxOverrides"
	_hx_statics = ["eq", "stringOrNull", "modf", "mod"]

	@staticmethod
	def eq(a,b):
		# /usr/lib/haxe/std/python/internal/HxOverrides.hx:46
		if (isinstance(a,list) or isinstance(b,list)):
			return a is b
		# /usr/lib/haxe/std/python/internal/HxOverrides.hx:49
		return (a == b)

	@staticmethod
	def stringOrNull(s):
		# /usr/lib/haxe/std/python/internal/HxOverrides.hx:53
		if (s is None):
			return "null"
		else:
			return s

	@staticmethod
	def modf(a,b):
		# /usr/lib/haxe/std/python/internal/HxOverrides.hx:127
		return float('nan') if (b == 0.0) else a % b if a >= 0 else -(-a % b)

	@staticmethod
	def mod(a,b):
		# /usr/lib/haxe/std/python/internal/HxOverrides.hx:131
		return a % b if a >= 0 else -(-a % b)
HxOverrides._hx_class = HxOverrides


class HxString:
	_hx_class_name = "HxString"
	_hx_statics = ["split", "charCodeAt", "charAt", "lastIndexOf", "toUpperCase", "toLowerCase", "indexOf", "toString", "substring", "substr"]

	@staticmethod
	def split(s,d):
		# /usr/lib/haxe/std/python/internal/StringImpl.hx:31
		if (d == ""):
			return list(s)
		else:
			return s.split(d)

	@staticmethod
	def charCodeAt(s,index):
		# /usr/lib/haxe/std/python/internal/StringImpl.hx:37
		if ((((s is None) or ((len(s) == 0))) or ((index < 0))) or ((index >= len(s)))):
			return None
		else:
			return ord(s[index])

	@staticmethod
	def charAt(s,index):
		# /usr/lib/haxe/std/python/internal/StringImpl.hx:43
		if ((index < 0) or ((index >= len(s)))):
			return ""
		else:
			return s[index]

	@staticmethod
	def lastIndexOf(s,_hx_str,startIndex = None):
		# /usr/lib/haxe/std/python/internal/StringImpl.hx:48
		if (startIndex is None):
			return s.rfind(_hx_str, 0, len(s))
		else:
			# /usr/lib/haxe/std/python/internal/StringImpl.hx:52
			i = s.rfind(_hx_str, 0, (startIndex + 1))
			# /usr/lib/haxe/std/python/internal/StringImpl.hx:53
			startLeft = None
			if (i == -1):
				startLeft = max(0,((startIndex + 1) - len(_hx_str)))
			else:
				startLeft = (i + 1)
			# /usr/lib/haxe/std/python/internal/StringImpl.hx:54
			check = s.find(_hx_str, startLeft, len(s))
			# /usr/lib/haxe/std/python/internal/StringImpl.hx:55
			if ((check > i) and ((check <= startIndex))):
				return check
			else:
				return i

	@staticmethod
	def toUpperCase(s):
		# /usr/lib/haxe/std/python/internal/StringImpl.hx:65
		return s.upper()

	@staticmethod
	def toLowerCase(s):
		# /usr/lib/haxe/std/python/internal/StringImpl.hx:69
		return s.lower()

	@staticmethod
	def indexOf(s,_hx_str,startIndex = None):
		# /usr/lib/haxe/std/python/internal/StringImpl.hx:73
		if (startIndex is None):
			return s.find(_hx_str)
		else:
			return s.find(_hx_str, startIndex)

	@staticmethod
	def toString(s):
		# /usr/lib/haxe/std/python/internal/StringImpl.hx:80
		return s

	@staticmethod
	def substring(s,startIndex,endIndex = None):
		# /usr/lib/haxe/std/python/internal/StringImpl.hx:96
		if (startIndex < 0):
			startIndex = 0
		# /usr/lib/haxe/std/python/internal/StringImpl.hx:97
		if (endIndex is None):
			return s[startIndex:]
		else:
			# /usr/lib/haxe/std/python/internal/StringImpl.hx:100
			if (endIndex < 0):
				endIndex = 0
			# /usr/lib/haxe/std/python/internal/StringImpl.hx:101
			if (endIndex < startIndex):
				return s[endIndex:startIndex]
			else:
				return s[startIndex:endIndex]

	@staticmethod
	def substr(s,startIndex,_hx_len = None):
		# /usr/lib/haxe/std/python/internal/StringImpl.hx:112
		if (_hx_len is None):
			return s[startIndex:]
		else:
			# /usr/lib/haxe/std/python/internal/StringImpl.hx:115
			if (_hx_len == 0):
				return ""
			# /usr/lib/haxe/std/python/internal/StringImpl.hx:116
			return s[startIndex:(startIndex + _hx_len)]
HxString._hx_class = HxString


class sx_Sx:
	_hx_class_name = "sx.Sx"
	_hx_statics = ["dipFactor", "pixelSnapping", "__backendManager", "theme", "__root", "__onFrame", "__skins", "__initTasks", "__readyCallback", "toDip", "toPx", "snap", "setBackendManger", "registerSkin", "addInitTask", "init", "skin", "dropSkins", "frame", "__doneInitTask", "__initializationFinished", "get_backendManager", "get_root", "set_root", "get_stageWidth", "get_stageHeight", "get_onFrame"]

	def __init__(self):
		pass
	backendManager = None
	_hx___backendManager = None
	theme = None
	root = None
	_hx___root = None
	onFrame = None
	_hx___onFrame = None
	stageWidth = None
	stageHeight = None
	_hx___readyCallback = None

	@staticmethod
	def toDip(px):
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:65
		return (px / sx_Sx.dipFactor)

	@staticmethod
	def toPx(dip):
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:74
		return (dip * sx_Sx.dipFactor)

	@staticmethod
	def snap(value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:84
		if sx_Sx.pixelSnapping:
			value = Math.floor((value + 0.5))
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:86
		return value

	@staticmethod
	def setBackendManger(manager):
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:96
		if (sx_Sx._hx___backendManager is not None):
			raise sx_exceptions_InvalidBackendException("Backend manager is already set.", _hx_AnonObject({'fileName': "Sx.hx", 'lineNumber': 97, 'className': "sx.Sx", 'methodName': "setBackendManger"}))
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:100
		sx_Sx._hx___backendManager = manager

	@staticmethod
	def registerSkin(name,factory):
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:109
		sx_Sx._hx___skins.h[name] = factory

	@staticmethod
	def addInitTask(task):
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:120
		_this = sx_Sx._hx___initTasks
		_this.append(task)

	@staticmethod
	def init(readyCallback):
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:131
		sx_Sx._hx___readyCallback = readyCallback
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:133
		if (sx_Sx._hx___backendManager is None):
			sx_Sx._hx___backendManager = sx_backend_dummy_BackendManager()
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:137
		if (len(sx_Sx._hx___initTasks) == 0):
			# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:138
			sx_tween_Tweener._hx___time = (sx_tween_Tweener.getTime() - sx_tween_Tweener._hx___totalPausedTime)
			sx_Sx._hx___backendManager.setupPointerDevices()
			sx_Sx._hx___backendManager.setupFrames()
			sx_Sx._hx___readyCallback()
		else:
			# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:140
			tasks = list(sx_Sx._hx___initTasks)
			# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:141
			# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:141
			_g = 0
			while (_g < len(tasks)):
				task = (tasks[_g] if _g >= 0 and _g < len(tasks) else None)
				_g = (_g + 1)
				# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:142
				def _hx_local_1():
					# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:142
					a1 = [task]
					def _hx_local_4():
						def _hx_local_3(a1):
							def _hx_local_2():
								sx_Sx._hx___doneInitTask((a1[0] if 0 < len(a1) else None))
							return _hx_local_2
						return _hx_local_3(a1)
					return _hx_local_4()
				task(_hx_local_1())

	@staticmethod
	def skin(name):
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:155
		factory = sx_Sx._hx___skins.h.get(name,None)
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:157
		if (factory is None):
			return None
		else:
			return factory()

	@staticmethod
	def dropSkins():
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:166
		sx_Sx._hx___skins = haxe_ds_StringMap()

	@staticmethod
	def frame():
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
		if ((sx_Sx._hx___onFrame is not None) and ((len(sx_Sx._hx___onFrame._hx___listeners) > 0))):
			if sx_Sx._hx___onFrame._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				_g = 0
				_g1 = sx_Sx._hx___onFrame._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener()
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
				False
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
				sx_Sx._hx___onFrame._hx___listenersInUse = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				_g2 = 0
				_g11 = sx_Sx._hx___onFrame._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1()
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
				sx_Sx._hx___onFrame._hx___listenersInUse = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:177
		sx_tween_Tweener.update()

	@staticmethod
	def _hx___doneInitTask(task):
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:186
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:186
		_g1 = 0
		_g = len(sx_Sx._hx___initTasks)
		while (_g1 < _g):
			i = _g1
			_g1 = (_g1 + 1)
			# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:187
			if Reflect.compareMethods(python_internal_ArrayImpl._get(sx_Sx._hx___initTasks, i),task):
				# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:188
				# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:188
				_this = sx_Sx._hx___initTasks
				pos = i
				if (pos < 0):
					pos = (len(_this) + pos)
				if (pos < 0):
					pos = 0
				res = _this[pos:(pos + 1)]
				del _this[pos:(pos + 1)]
				res
				# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:189
				break
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:193
		if (len(sx_Sx._hx___initTasks) == 0):
			# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:194
			sx_tween_Tweener._hx___time = (sx_tween_Tweener.getTime() - sx_tween_Tweener._hx___totalPausedTime)
			sx_Sx._hx___backendManager.setupPointerDevices()
			sx_Sx._hx___backendManager.setupFrames()
			sx_Sx._hx___readyCallback()

	@staticmethod
	def _hx___initializationFinished():
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:205
		sx_tween_Tweener._hx___time = (sx_tween_Tweener.getTime() - sx_tween_Tweener._hx___totalPausedTime)
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:206
		sx_Sx._hx___backendManager.setupPointerDevices()
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:207
		sx_Sx._hx___backendManager.setupFrames()
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:209
		sx_Sx._hx___readyCallback()

	@staticmethod
	def get_backendManager():
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:218
		if (sx_Sx._hx___backendManager is None):
			sx_Sx._hx___backendManager = sx_backend_dummy_BackendManager()
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:222
		return sx_Sx._hx___backendManager

	@staticmethod
	def get_root():
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:231
		if (sx_Sx._hx___root is None):
			return sx_Sx.get_backendManager().getRoot()
		else:
			return sx_Sx._hx___root

	@staticmethod
	def set_root(value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:240
		def _hx_local_1():
			# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:240
			def _hx_local_0():
				# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:240
				sx_Sx._hx___root = value
				return sx_Sx._hx___root
			return _hx_local_0()
		return _hx_local_1()

	@staticmethod
	def get_stageWidth():
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:245
		return sx_Sx.get_backendManager().getRoot().get_width()

	@staticmethod
	def get_stageHeight():
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:246
		return sx_Sx.get_backendManager().getRoot().get_height()

	@staticmethod
	def get_onFrame():
		# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:249
		if (sx_Sx._hx___onFrame is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:249
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:249
				def _hx_local_0():
					# /home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx:249
					sx_Sx._hx___onFrame = sx_signals_Signal()
					return sx_Sx._hx___onFrame
				return _hx_local_0()
			return _hx_local_1()
		else:
			return sx_Sx._hx___onFrame
sx_Sx._hx_class = sx_Sx


class sx_backend_interfaces_IBackend:
	_hx_class_name = "sx.backend.interfaces.IBackend"
	_hx_methods = ["addWidget", "addWidgetAt", "removeWidget", "removeWidgetAt", "getWidgetIndex", "setWidgetIndex", "getWidgetAt", "swapWidgets", "swapWidgetsAt", "widgetGlobalToLocal", "widgetLocalToGlobal", "widgetOriginChanged", "widgetOffsetChanged", "widgetResized", "widgetMoved", "widgetRotated", "widgetScaledX", "widgetScaledY", "widgetAlphaChanged", "widgetVisibilityChanged", "widgetOverflowChanged", "widgetSkinChanged", "widgetDisposed"]
sx_backend_interfaces_IBackend._hx_class = sx_backend_interfaces_IBackend


class sx_backend_dummy_Backend:
	_hx_class_name = "sx.backend.dummy.Backend"
	_hx_fields = ["__node"]
	_hx_methods = ["addWidget", "addWidgetAt", "removeWidget", "removeWidgetAt", "getWidgetIndex", "setWidgetIndex", "getWidgetAt", "swapWidgets", "swapWidgetsAt", "widgetGlobalToLocal", "widgetLocalToGlobal", "widgetOriginChanged", "widgetOffsetChanged", "widgetResized", "widgetMoved", "widgetRotated", "widgetScaledX", "widgetScaledY", "widgetAlphaChanged", "widgetVisibilityChanged", "widgetOverflowChanged", "widgetSkinChanged", "widgetDisposed"]
	_hx_interfaces = [sx_backend_interfaces_IBackend]

	def __init__(self,widget):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx:17
		self._hx___node = None
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx:25
		self._hx___node = sx_properties_displaylist_ArrayDisplayList(widget)

	def addWidget(self,child):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx:34
		_this = self._hx___node
		child1 = child.backend._hx___node
		if (child1.parent is not None):
			_this1 = child1.parent
			if (child1.parent == _this1):
				python_internal_ArrayImpl.remove(_this1.children,child1)
				child1.parent = None
				child1
			else:
				None
		_this2 = _this.children
		_this2.append(child1)
		child1.parent = _this
		child1

	def addWidgetAt(self,child,index):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx:47
		_this = self._hx___node
		child1 = child.backend._hx___node
		if (child1.parent is not None):
			_this1 = child1.parent
			if (child1.parent == _this1):
				python_internal_ArrayImpl.remove(_this1.children,child1)
				child1.parent = None
				child1
			else:
				None
		_this.children.insert(index, child1)
		child1.parent = _this
		child1

	def removeWidget(self,child):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx:56
		_this = self._hx___node
		child1 = child.backend._hx___node
		if (child1.parent == _this):
			python_internal_ArrayImpl.remove(_this.children,child1)
			child1.parent = None
			child1
		else:
			None

	def removeWidgetAt(self,index):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx:69
		removed = None
		_this = self._hx___node
		index1 = index
		if (index1 < 0):
			index1 = (len(_this.children) + index1)
		if ((index1 < 0) or ((index1 >= len(_this.children)))):
			removed = None
		else:
			def _hx_local_0():
				_this1 = _this.children
				def _hx_local_2():
					def _hx_local_1():
						pos = index1
						if (pos < 0):
							pos = (len(_this1) + pos)
						if (pos < 0):
							pos = 0
						res = _this1[pos:(pos + 1)]
						del _this1[pos:(pos + 1)]
						return res
					return _hx_local_1()
				return _hx_local_2()
			removed1 = python_internal_ArrayImpl._get((_hx_local_0()), 0)
			removed1.parent = None
			removed = removed1
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx:71
		if (removed is None):
			return None
		else:
			return removed.widget

	def getWidgetIndex(self,child):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx:80
		index = python_internal_ArrayImpl.indexOf(self._hx___node.children,child.backend._hx___node,None)
		if (index < 0):
			raise sx_exceptions_NotChildException(None, _hx_AnonObject({'fileName': "ArrayDisplayList.hx", 'lineNumber': 166, 'className': "sx.properties.displaylist.ArrayDisplayList", 'methodName': "getChildIndex"}))
		return index

	def setWidgetIndex(self,child,index):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx:95
		_this = self._hx___node
		child1 = child.backend._hx___node
		index1 = index
		currentIndex = python_internal_ArrayImpl.indexOf(_this.children,child1,None)
		if (currentIndex < 0):
			raise sx_exceptions_NotChildException(None, _hx_AnonObject({'fileName': "ArrayDisplayList.hx", 'lineNumber': 186, 'className': "sx.properties.displaylist.ArrayDisplayList", 'methodName': "setChildIndex"}))
		if (index1 < 0):
			index1 = (len(_this.children) + index1)
		if (index1 < 0):
			index1 = 0
		elif (index1 >= len(_this.children)):
			index1 = (len(_this.children) - 1)
		if (index1 != currentIndex):
			python_internal_ArrayImpl.remove(_this.children,child1)
			_this.children.insert(index1, child1)
			return index1
		else:
			return currentIndex

	def getWidgetAt(self,index):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx:108
		childNode = None
		_this = self._hx___node
		index1 = index
		if (index1 < 0):
			index1 = (len(_this.children) + index1)
		if ((index1 < 0) or ((index1 >= len(_this.children)))):
			childNode = None
		else:
			childNode = (_this.children[index1] if index1 >= 0 and index1 < len(_this.children) else None)
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx:110
		if (childNode is None):
			return None
		else:
			return childNode.widget

	def swapWidgets(self,child1,child2):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx:119
		_this = self._hx___node
		child11 = child1.backend._hx___node
		child21 = child2.backend._hx___node
		index1 = python_internal_ArrayImpl.indexOf(_this.children,child11,None)
		index2 = python_internal_ArrayImpl.indexOf(_this.children,child21,None)
		if ((index1 < 0) or ((index2 < 0))):
			raise sx_exceptions_NotChildException(None, _hx_AnonObject({'fileName': "ArrayDisplayList.hx", 'lineNumber': 235, 'className': "sx.properties.displaylist.ArrayDisplayList", 'methodName': "swapChildren"}))
		python_internal_ArrayImpl._set(_this.children, index1, child21)
		python_internal_ArrayImpl._set(_this.children, index2, child11)

	def swapWidgetsAt(self,index1,index2):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx:130
		_this = self._hx___node
		index11 = index1
		index21 = index2
		if (index11 < 0):
			index11 = (len(_this.children) + index11)
		if (index21 < 0):
			index21 = (len(_this.children) + index21)
		if ((((index11 < 0) or ((index11 >= len(_this.children)))) or ((index21 < 0))) or ((index21 > len(_this.children)))):
			raise sx_exceptions_OutOfBoundsException("Provided index does not exist in display list of this widget.", _hx_AnonObject({'fileName': "ArrayDisplayList.hx", 'lineNumber': 255, 'className': "sx.properties.displaylist.ArrayDisplayList", 'methodName': "swapChildrenAt"}))
		child = (_this.children[index11] if index11 >= 0 and index11 < len(_this.children) else None)
		python_internal_ArrayImpl._set(_this.children, index11, (_this.children[index21] if index21 >= 0 and index21 < len(_this.children) else None))
		python_internal_ArrayImpl._set(_this.children, index21, child)

	def widgetGlobalToLocal(self,point):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx:139
		return sx_backend_dummy_Point()

	def widgetLocalToGlobal(self,point):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx:148
		return sx_backend_dummy_Point()

	def widgetOriginChanged(self):
		pass

	def widgetOffsetChanged(self):
		pass

	def widgetResized(self):
		pass

	def widgetMoved(self):
		pass

	def widgetRotated(self):
		pass

	def widgetScaledX(self):
		pass

	def widgetScaledY(self):
		pass

	def widgetAlphaChanged(self):
		pass

	def widgetVisibilityChanged(self):
		pass

	def widgetOverflowChanged(self):
		pass

	def widgetSkinChanged(self):
		pass

	def widgetDisposed(self):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx:255
		self._hx___node = None

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___node = None
sx_backend_dummy_Backend._hx_class = sx_backend_dummy_Backend


class sx_backend_interfaces_IBackendManager:
	_hx_class_name = "sx.backend.interfaces.IBackendManager"
	_hx_methods = ["setupPointerDevices", "setupFrames", "getRoot", "getPointerPosition", "widgetBackend", "textRenderer", "textInputRenderer", "bitmapRenderer"]
sx_backend_interfaces_IBackendManager._hx_class = sx_backend_interfaces_IBackendManager


class sx_backend_dummy_BackendManager:
	_hx_class_name = "sx.backend.dummy.BackendManager"
	_hx_fields = ["__root"]
	_hx_methods = ["setupPointerDevices", "setupFrames", "getPointerPosition", "getRoot", "widgetBackend", "textRenderer", "textInputRenderer", "bitmapRenderer"]
	_hx_interfaces = [sx_backend_interfaces_IBackendManager]

	def __init__(self):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx:23
		self._hx___root = None

	def setupPointerDevices(self):
		pass

	def setupFrames(self):
		pass

	def getPointerPosition(self,touchId = 0):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx:60
		if (touchId is None):
			touchId = 0
		return sx_backend_dummy_Point()

	def getRoot(self):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx:69
		if (self._hx___root is None):
			self._hx___root = sx_widgets_Widget()
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx:73
		return self._hx___root

	def widgetBackend(self,widget):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx:82
		return sx_backend_dummy_Backend(widget)

	def textRenderer(self,textField):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx:91
		return sx_backend_dummy_TextRenderer(textField)

	def textInputRenderer(self,textInput):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx:100
		return sx_backend_dummy_TextInputRenderer(textInput)

	def bitmapRenderer(self,bmp):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BackendManager.hx:109
		return sx_backend_dummy_BitmapRenderer(bmp)

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___root = None
sx_backend_dummy_BackendManager._hx_class = sx_backend_dummy_BackendManager


class sx_backend_interfaces_IRenderer:
	_hx_class_name = "sx.backend.interfaces.IRenderer"
	_hx_methods = ["getWidth", "getHeight", "onResize", "setAvailableAreaWidth", "setAvailableAreaHeight", "dispose"]
sx_backend_interfaces_IRenderer._hx_class = sx_backend_interfaces_IRenderer


class sx_backend_interfaces_IBitmapRenderer:
	_hx_class_name = "sx.backend.interfaces.IBitmapRenderer"
	_hx_methods = ["setBitmapData", "getBitmapDataWidth", "getBitmapDataHeight", "setBitmapScale", "setBitmapSmoothing"]
	_hx_interfaces = [sx_backend_interfaces_IRenderer]
sx_backend_interfaces_IBitmapRenderer._hx_class = sx_backend_interfaces_IBitmapRenderer


class sx_backend_dummy_BitmapRenderer:
	_hx_class_name = "sx.backend.dummy.BitmapRenderer"
	_hx_fields = ["__bmp", "__bitmapData", "__onResize"]
	_hx_methods = ["setBitmapData", "getBitmapDataWidth", "getBitmapDataHeight", "setBitmapScale", "setBitmapSmoothing", "getWidth", "getHeight", "onResize", "setAvailableAreaWidth", "setAvailableAreaHeight", "dispose"]
	_hx_interfaces = [sx_backend_interfaces_IBitmapRenderer]

	def __init__(self,bmp):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx:16
		self._hx___bmp = None
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx:18
		self._hx___bitmapData = None
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx:20
		self._hx___onResize = None
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx:28
		self._hx___bmp = bmp

	def setBitmapData(self,bitmapData):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx:37
		self._hx___bitmapData = bitmapData

	def getBitmapDataWidth(self):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx:46
		if ((self._hx___bitmapData is None) or ((Reflect.field(self._hx___bitmapData,"width") is None))):
			return 0
		else:
			return Reflect.field(self._hx___bitmapData,"width")

	def getBitmapDataHeight(self):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx:59
		if ((self._hx___bitmapData is None) or ((Reflect.field(self._hx___bitmapData,"height") is None))):
			return 0
		else:
			return Reflect.field(self._hx___bitmapData,"height")

	def setBitmapScale(self,scaleX,scaleY):
		pass

	def setBitmapSmoothing(self,smooth):
		pass

	def getWidth(self):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx:90
		return (0 if (((self._hx___bitmapData is None) or ((Reflect.field(self._hx___bitmapData,"width") is None)))) else Reflect.field(self._hx___bitmapData,"width"))

	def getHeight(self):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx:99
		return (0 if (((self._hx___bitmapData is None) or ((Reflect.field(self._hx___bitmapData,"height") is None)))) else Reflect.field(self._hx___bitmapData,"height"))

	def onResize(self,callback):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx:110
		self._hx___onResize = callback

	def setAvailableAreaWidth(self,width):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx:119
		if (self._hx___bitmapData is not None):
			Reflect.setField(self._hx___bitmapData,"width",width)

	def setAvailableAreaHeight(self,height):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx:130
		if (self._hx___bitmapData is not None):
			Reflect.setField(self._hx___bitmapData,"height",height)

	def dispose(self):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx:141
		self._hx___bmp = None
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx:142
		self._hx___onResize = None
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/BitmapRenderer.hx:143
		self._hx___bitmapData = None

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___bmp = None
		_hx_o._hx___bitmapData = None
		_hx_o._hx___onResize = None
sx_backend_dummy_BitmapRenderer._hx_class = sx_backend_dummy_BitmapRenderer


class sx_backend_dummy_Point:
	_hx_class_name = "sx.backend.dummy.Point"
	_hx_fields = ["x", "y"]

	def __init__(self,x = 0,y = 0):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx:19
		if (x is None):
			x = 0
		if (y is None):
			y = 0
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx:11
		self.x = None
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx:13
		self.y = None
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx:21
		self.x = x
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Point.hx:22
		self.y = y

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.x = None
		_hx_o.y = None
sx_backend_dummy_Point._hx_class = sx_backend_dummy_Point


class sx_backend_interfaces_ITextInputRenderer:
	_hx_class_name = "sx.backend.interfaces.ITextInputRenderer"
	_hx_methods = ["onTextChange", "onReceiveCursor", "onLoseCursor", "getText", "setText", "getFormat", "setFormat"]
	_hx_interfaces = [sx_backend_interfaces_IRenderer]
sx_backend_interfaces_ITextInputRenderer._hx_class = sx_backend_interfaces_ITextInputRenderer


class sx_backend_dummy_TextInputRenderer:
	_hx_class_name = "sx.backend.dummy.TextInputRenderer"
	_hx_fields = ["__textInput", "__text", "__onTextChange", "__format", "__width", "__height"]
	_hx_methods = ["onTextChange", "onReceiveCursor", "onLoseCursor", "getText", "setText", "getFormat", "setFormat", "onResize", "getWidth", "getHeight", "setAvailableAreaWidth", "setAvailableAreaHeight", "dispose", "set_text", "get_text"]
	_hx_interfaces = [sx_backend_interfaces_ITextInputRenderer]

	def __init__(self,textInput):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:16
		self._hx___textInput = None
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:19
		self._hx___text = None
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:21
		self._hx___onTextChange = None
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:23
		self._hx___format = None
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:25
		self._hx___width = None
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:27
		self._hx___height = None
		self._hx___height = 0
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:25
		self._hx___width = 0
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:19
		self._hx___text = ""
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:35
		self._hx___textInput = textInput

	def onTextChange(self,onTextChange):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:44
		self._hx___onTextChange = onTextChange

	def onReceiveCursor(self,callback):
		pass

	def onLoseCursor(self,callback):
		pass

	def getText(self):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:71
		return self._hx___text

	def setText(self,text):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:81
		self._hx___text = text

	def getFormat(self):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:90
		return self._hx___format

	def setFormat(self,format):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:99
		self._hx___format = format

	def onResize(self,callback):
		pass

	def getWidth(self):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:117
		return self._hx___width

	def getHeight(self):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:126
		return self._hx___height

	def setAvailableAreaWidth(self,width):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:135
		self._hx___width = width

	def setAvailableAreaHeight(self,height):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:144
		self._hx___height = height

	def dispose(self):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:153
		self._hx___textInput = None

	def set_text(self,value):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:162
		self._hx___text = value
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:163
		if (self._hx___onTextChange is not None):
			self._hx___onTextChange(value)
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:165
		return value

	def get_text(self):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextInputRenderer.hx:170
		return self._hx___text

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___textInput = None
		_hx_o._hx___text = None
		_hx_o._hx___onTextChange = None
		_hx_o._hx___format = None
		_hx_o._hx___width = None
		_hx_o._hx___height = None
sx_backend_dummy_TextInputRenderer._hx_class = sx_backend_dummy_TextInputRenderer


class sx_backend_interfaces_ITextRenderer:
	_hx_class_name = "sx.backend.interfaces.ITextRenderer"
	_hx_methods = ["setText", "getFormat", "setFormat"]
	_hx_interfaces = [sx_backend_interfaces_IRenderer]
sx_backend_interfaces_ITextRenderer._hx_class = sx_backend_interfaces_ITextRenderer


class sx_backend_dummy_TextRenderer:
	_hx_class_name = "sx.backend.dummy.TextRenderer"
	_hx_fields = ["__textField", "__text", "__onResize", "__format"]
	_hx_methods = ["setText", "getFormat", "setFormat", "onResize", "getWidth", "getHeight", "setAvailableAreaWidth", "setAvailableAreaHeight", "dispose"]
	_hx_interfaces = [sx_backend_interfaces_ITextRenderer]

	def __init__(self,textField):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:16
		self._hx___textField = None
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:18
		self._hx___text = None
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:20
		self._hx___onResize = None
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:22
		self._hx___format = None
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:18
		self._hx___text = ""
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:30
		self._hx___textField = textField

	def setText(self,text):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:39
		self._hx___text = text
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:40
		if (self._hx___onResize is not None):
			self._hx___onResize(self.getWidth(),self.getHeight())

	def getFormat(self):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:49
		return self._hx___format

	def setFormat(self,format):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:58
		self._hx___format = format

	def onResize(self,callback):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:67
		self._hx___onResize = callback

	def getWidth(self):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:77
		_hx_max = 0
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:78
		nlPos = 0
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:79
		prevPos = 0
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:80
		while True:
			# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:81
			# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:81
			_this = self._hx___text
			nlPos = (_this.find("\n") if ((prevPos is None)) else _this.find("\n", prevPos))
			# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:82
			if ((nlPos > 0) and (((nlPos - prevPos) > _hx_max))):
				_hx_max = (nlPos - prevPos)
			# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:85
			prevPos = (nlPos + 1)
			# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:86
			if (not ((nlPos >= 0))):
				break
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:88
		return _hx_max

	def getHeight(self):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:97
		linesCount = 0
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:98
		pos = None
		_this = self._hx___text
		pos = _this.find("\n")
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:99
		while (pos >= 0):
			# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:100
			_this1 = self._hx___text
			startIndex = (pos + 1)
			pos = (_this1.find("\n") if ((startIndex is None)) else _this1.find("\n", startIndex))
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:103
		return linesCount

	def setAvailableAreaWidth(self,width):
		pass

	def setAvailableAreaHeight(self,height):
		pass

	def dispose(self):
		# /home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/TextRenderer.hx:130
		self._hx___textField = None

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___textField = None
		_hx_o._hx___text = None
		_hx_o._hx___onResize = None
		_hx_o._hx___format = None
sx_backend_dummy_TextRenderer._hx_class = sx_backend_dummy_TextRenderer


class sx_ds_ObjectPool:
	_hx_class_name = "sx.ds.ObjectPool"
	_hx_fields = ["length", "__pool"]
	_hx_methods = ["push", "pop", "clear"]

	def __init__(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx:12
		self.length = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx:14
		self._hx___pool = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx:12
		self.length = 0
		# /home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx:22
		self._hx___pool = []

	def push(self,obj):
		# /home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx:31
		python_internal_ArrayImpl._set(self._hx___pool, self.length, obj)
		# /home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx:32
		# /home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx:32
		_hx_local_0 = self
		_hx_local_1 = _hx_local_0.length
		_hx_local_0.length = (_hx_local_1 + 1)
		_hx_local_1

	def pop(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx:41
		if (self.length > 0):
			# /home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx:42
			# /home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx:42
			_hx_local_0 = self
			_hx_local_1 = _hx_local_0.length
			_hx_local_0.length = (_hx_local_1 - 1)
			_hx_local_1
			# /home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx:43
			return python_internal_ArrayImpl._get(self._hx___pool, self.length)
		else:
			return None

	def clear(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx:55
		# /home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx:55
		_g1 = 0
		_g = self.length
		while (_g1 < _g):
			i = _g1
			_g1 = (_g1 + 1)
			# /home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx:56
			python_internal_ArrayImpl._set(self._hx___pool, i, None)
		# /home/alex/Work/HaXe/sx2-core/src/sx/ds/ObjectPool.hx:58
		self.length = 0

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.length = None
		_hx_o._hx___pool = None
sx_ds_ObjectPool._hx_class = sx_ds_ObjectPool


class sx_exceptions_SxException(_Exception_HException):
	_hx_class_name = "sx.exceptions.SxException"
	_hx_fields = []
	_hx_methods = []
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = _Exception_HException


	def __init__(self,msg = "",pos = None):
		# /home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx:17
		if (msg is None):
			msg = ""
		# /home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx:19
		super().__init__(msg,pos)
		# /home/alex/Work/HaXe/sx2-core/src/sx/exceptions/SxException.hx:20
		self.truncateStack(_hx_AnonObject({'fileName': "SxException.hx", 'lineNumber': 20, 'className': "sx.exceptions.SxException", 'methodName': "new"}),1)
sx_exceptions_SxException._hx_class = sx_exceptions_SxException


class sx_exceptions_InvalidBackendException(sx_exceptions_SxException):
	_hx_class_name = "sx.exceptions.InvalidBackendException"
	_hx_fields = []
	_hx_methods = []
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_exceptions_SxException


	def __init__(self,msg = None,pos = None):
		# /home/alex/Work/HaXe/sx2-core/src/sx/exceptions/InvalidBackendException.hx:11
		super().__init__(msg,pos)
sx_exceptions_InvalidBackendException._hx_class = sx_exceptions_InvalidBackendException


class sx_exceptions_LockedPropertyException(_Exception_HException):
	_hx_class_name = "sx.exceptions.LockedPropertyException"
	_hx_fields = []
	_hx_methods = []
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = _Exception_HException


	def __init__(self,msg = "Property cannot be changed.",pos = None):
		# /home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LockedPropertyException.hx:17
		if (msg is None):
			msg = "Property cannot be changed."
		# /home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LockedPropertyException.hx:19
		super().__init__(msg,pos)
sx_exceptions_LockedPropertyException._hx_class = sx_exceptions_LockedPropertyException


class sx_exceptions_LoopedResizeException(sx_exceptions_SxException):
	_hx_class_name = "sx.exceptions.LoopedResizeException"
	_hx_fields = []
	_hx_methods = []
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_exceptions_SxException


	def __init__(self,msg = "Possible endless resizing loop detected.",pos = None):
		# /home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LoopedResizeException.hx:18
		if (msg is None):
			msg = "Possible endless resizing loop detected."
		# /home/alex/Work/HaXe/sx2-core/src/sx/exceptions/LoopedResizeException.hx:20
		super().__init__(msg,pos)
sx_exceptions_LoopedResizeException._hx_class = sx_exceptions_LoopedResizeException


class sx_exceptions_NoReadException(sx_exceptions_SxException):
	_hx_class_name = "sx.exceptions.NoReadException"
	_hx_fields = []
	_hx_methods = []
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_exceptions_SxException


	def __init__(self,msg = "Accessing this property for reading is not allowed.",pos = None):
		# /home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NoReadException.hx:18
		if (msg is None):
			msg = "Accessing this property for reading is not allowed."
		# /home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NoReadException.hx:20
		super().__init__(msg,pos)
sx_exceptions_NoReadException._hx_class = sx_exceptions_NoReadException


class sx_exceptions_NotChildException(sx_exceptions_SxException):
	_hx_class_name = "sx.exceptions.NotChildException"
	_hx_fields = []
	_hx_methods = []
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_exceptions_SxException


	def __init__(self,msg = "Provided widget is not a child of this one.",pos = None):
		# /home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NotChildException.hx:18
		if (msg is None):
			msg = "Provided widget is not a child of this one."
		# /home/alex/Work/HaXe/sx2-core/src/sx/exceptions/NotChildException.hx:20
		super().__init__(msg,pos)
sx_exceptions_NotChildException._hx_class = sx_exceptions_NotChildException


class sx_exceptions_OutOfBoundsException(sx_exceptions_SxException):
	_hx_class_name = "sx.exceptions.OutOfBoundsException"
	_hx_fields = []
	_hx_methods = []
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_exceptions_SxException


	def __init__(self,msg = "Provided argument does not fit required bounds.",pos = None):
		# /home/alex/Work/HaXe/sx2-core/src/sx/exceptions/OutOfBoundsException.hx:18
		if (msg is None):
			msg = "Provided argument does not fit required bounds."
		# /home/alex/Work/HaXe/sx2-core/src/sx/exceptions/OutOfBoundsException.hx:20
		super().__init__(msg,pos)
sx_exceptions_OutOfBoundsException._hx_class = sx_exceptions_OutOfBoundsException


class sx_layout_Layout:
	_hx_class_name = "sx.layout.Layout"
	_hx_fields = ["autoArrange", "__widget"]
	_hx_methods = ["arrangeChildren", "usedBy", "removed", "__isChildArrangeable", "__hookWidget", "__releaseWidget", "__widgetInitialized", "__childAdded", "__childRemoved", "__widgetResized"]

	def __init__(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:23
		self.autoArrange = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:25
		self._hx___widget = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:23
		self.autoArrange = True

	def arrangeChildren(self):
		pass

	def usedBy(self,widget):
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:52
		if (self._hx___widget is not None):
			self._hx___widget.set_layout(None)
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:53
		self._hx___widget = widget
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:55
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:55
		self._hx___widget.get_onResize().add(self._hx___widgetResized)
		self._hx___widget.get_onChildAdded().add(self._hx___childAdded)
		self._hx___widget.get_onChildRemoved().add(self._hx___childRemoved)
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:56
		if widget.initialized:
			self.arrangeChildren()
		else:
			widget.get_onInitialize().add(self._hx___widgetInitialized)

	def removed(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:70
		if (self._hx___widget is not None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:71
			# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:71
			widget = self._hx___widget
			if (not widget.initialized):
				widget.get_onInitialize().remove(self._hx___widgetInitialized)
			widget.get_onResize().remove(self._hx___widgetResized)
			widget.get_onChildAdded().remove(self._hx___childAdded)
			widget.get_onChildRemoved().remove(self._hx___childRemoved)
			# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:72
			self._hx___widget = None

	def _hx___isChildArrangeable(self,child):
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:82
		return (child.arrangeable and child.visible)

	def _hx___hookWidget(self,widget):
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:91
		self._hx___widget.get_onResize().add(self._hx___widgetResized)
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:92
		self._hx___widget.get_onChildAdded().add(self._hx___childAdded)
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:93
		self._hx___widget.get_onChildRemoved().add(self._hx___childRemoved)

	def _hx___releaseWidget(self,widget):
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:102
		if (not widget.initialized):
			widget.get_onInitialize().remove(self._hx___widgetInitialized)
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:106
		widget.get_onResize().remove(self._hx___widgetResized)
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:107
		widget.get_onChildAdded().remove(self._hx___childAdded)
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:108
		widget.get_onChildRemoved().remove(self._hx___childRemoved)

	def _hx___widgetInitialized(self,widget):
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:117
		widget.get_onInitialize().remove(self._hx___widgetInitialized)
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:118
		if (self.autoArrange and ((self._hx___widget == widget))):
			self.arrangeChildren()

	def _hx___childAdded(self,parent,child):
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:129
		if ((self.autoArrange and self._hx___widget.initialized) and self._hx___isChildArrangeable(child)):
			self.arrangeChildren()

	def _hx___childRemoved(self,parent,child):
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:140
		if ((self.autoArrange and self._hx___widget.initialized) and self._hx___isChildArrangeable(child)):
			self.arrangeChildren()

	def _hx___widgetResized(self,widget,changed,previousUnits,previousValue):
		# /home/alex/Work/HaXe/sx2-core/src/sx/layout/Layout.hx:151
		if (self.autoArrange and self._hx___widget.initialized):
			self.arrangeChildren()

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.autoArrange = None
		_hx_o._hx___widget = None
sx_layout_Layout._hx_class = sx_layout_Layout


class sx_properties__Align_HorizontalAlign_Impl_:
	_hx_class_name = "sx.properties._Align.HorizontalAlign_Impl_"
	_hx_statics = ["Left", "Center", "Right", "HNone", "andVertical"]

	@staticmethod
	def andVertical(this1,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:23
		weakAlign = sx_properties_abstracts__AAlign_AAlign_Impl_.fromVertical(b)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:24
		weakAlign.set_horizontal(this1)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:26
		return weakAlign
sx_properties__Align_HorizontalAlign_Impl_._hx_class = sx_properties__Align_HorizontalAlign_Impl_


class sx_properties__Align_VerticalAlign_Impl_:
	_hx_class_name = "sx.properties._Align.VerticalAlign_Impl_"
	_hx_statics = ["Top", "Middle", "Bottom", "VNone", "andHorizontal"]

	@staticmethod
	def andHorizontal(this1,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:47
		weakAlign = sx_properties_abstracts__AAlign_AAlign_Impl_.fromHorizontal(b)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:48
		weakAlign.set_vertical(this1)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:50
		return weakAlign
sx_properties__Align_VerticalAlign_Impl_._hx_class = sx_properties__Align_VerticalAlign_Impl_


class sx_properties__Align_NoneAlign_Impl_:
	_hx_class_name = "sx.properties._Align.NoneAlign_Impl_"
	_hx_statics = ["None", "toHorizontal", "toVertical"]

	@staticmethod
	def toHorizontal(this1):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:63
		return "none"

	@staticmethod
	def toVertical(this1):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:64
		return "none"
sx_properties__Align_NoneAlign_Impl_._hx_class = sx_properties__Align_NoneAlign_Impl_


class sx_properties_Align:
	_hx_class_name = "sx.properties.Align"
	_hx_fields = ["__horizontal", "__vertical", "onChange", "weak"]
	_hx_methods = ["set", "copyValueFrom", "dispose", "__invokeOnChange", "set_vertical", "set_horizontal", "get_vertical", "get_horizontal"]

	def __init__(self,horizontal = "none",vertical = "none"):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:73
		if (horizontal is None):
			horizontal = "none"
		if (vertical is None):
			vertical = "none"
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:78
		self._hx___horizontal = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:81
		self._hx___vertical = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:89
		self.onChange = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:92
		self.weak = None
		self.weak = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:81
		self._hx___vertical = "none"
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:78
		self._hx___horizontal = "none"
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:100
		self._hx___horizontal = horizontal
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:101
		self._hx___vertical = vertical
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:103
		self.onChange = sx_signals_Signal()

	def set(self,horizontal,vertical):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:114
		horizontalChanged = (self._hx___horizontal != horizontal)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:115
		verticalChanged = (self._hx___vertical != vertical)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:117
		self._hx___horizontal = horizontal
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:118
		self._hx___vertical = vertical
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:120
		if (horizontalChanged or verticalChanged):
			if ((self.onChange is not None) and ((len(self.onChange._hx___listeners) > 0))):
				if self.onChange._hx___listenersInUse:
					# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:121
					# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:121
					_g = 0
					_g1 = self.onChange._hx___listeners
					while (_g < len(_g1)):
						listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
						_g = (_g + 1)
						listener(horizontalChanged,verticalChanged)
					False
				else:
					self.onChange._hx___listenersInUse = True
					_g2 = 0
					_g11 = self.onChange._hx___listeners
					while (_g2 < len(_g11)):
						listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
						_g2 = (_g2 + 1)
						listener1(horizontalChanged,verticalChanged)
					self.onChange._hx___listenersInUse = False

	def copyValueFrom(self,align):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:133
		self.set(align.get_horizontal(),align.get_vertical())
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:134
		if align.weak:
			align.dispose()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:136
		return self

	def dispose(self):
		pass

	def _hx___invokeOnChange(self,horizontalChanged,verticalChanged):
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
		if ((self.onChange is not None) and ((len(self.onChange._hx___listeners) > 0))):
			if self.onChange._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				_g = 0
				_g1 = self.onChange._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(horizontalChanged,verticalChanged)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
				False
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
				self.onChange._hx___listenersInUse = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				_g2 = 0
				_g11 = self.onChange._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(horizontalChanged,verticalChanged)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
				self.onChange._hx___listenersInUse = False

	def set_vertical(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:163
		self._hx___vertical = value
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:164
		if ((self.onChange is not None) and ((len(self.onChange._hx___listeners) > 0))):
			if self.onChange._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:164
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:164
				_g = 0
				_g1 = self.onChange._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(False,True)
				False
			else:
				self.onChange._hx___listenersInUse = True
				_g2 = 0
				_g11 = self.onChange._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(False,True)
				self.onChange._hx___listenersInUse = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:166
		return value

	def set_horizontal(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:175
		self._hx___horizontal = value
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:176
		if ((self.onChange is not None) and ((len(self.onChange._hx___listeners) > 0))):
			if self.onChange._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:176
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:176
				_g = 0
				_g1 = self.onChange._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(True,False)
				False
			else:
				self.onChange._hx___listenersInUse = True
				_g2 = 0
				_g11 = self.onChange._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(True,False)
				self.onChange._hx___listenersInUse = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:178
		return value

	def get_vertical(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:183
		return self._hx___vertical

	def get_horizontal(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx:184
		return self._hx___horizontal

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___horizontal = None
		_hx_o._hx___vertical = None
		_hx_o.onChange = None
		_hx_o.weak = None
sx_properties_Align._hx_class = sx_properties_Align


class sx_properties_AutoSize:
	_hx_class_name = "sx.properties.AutoSize"
	_hx_fields = ["__width", "__height", "onChange", "weak"]
	_hx_methods = ["either", "neither", "both", "set", "copyValueFrom", "dispose", "__invokeOnChange", "set_width", "set_height", "get_width", "get_height"]

	def __init__(self,byDefault = False):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:11
		if (byDefault is None):
			byDefault = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:16
		self._hx___width = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:19
		self._hx___height = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:27
		self.onChange = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:30
		self.weak = None
		self.weak = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:19
		self._hx___height = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:16
		self._hx___width = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:38
		self._hx___width = byDefault
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:39
		self._hx___height = byDefault
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:41
		self.onChange = sx_signals_Signal()

	def either(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:50
		return (self.get_width() or self.get_height())

	def neither(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:59
		return ((not self.get_width()) and (not self.get_height()))

	def both(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:68
		return (self.get_width() and self.get_height())

	def set(self,width,height):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:79
		widthChanged = (self._hx___width != width)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:80
		heightChanged = (self._hx___height != height)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:82
		self._hx___width = width
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:83
		self._hx___height = height
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:85
		if (widthChanged or heightChanged):
			if ((self.onChange is not None) and ((len(self.onChange._hx___listeners) > 0))):
				if self.onChange._hx___listenersInUse:
					# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:86
					# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:86
					_g = 0
					_g1 = self.onChange._hx___listeners
					while (_g < len(_g1)):
						listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
						_g = (_g + 1)
						listener(widthChanged,heightChanged)
					False
				else:
					self.onChange._hx___listenersInUse = True
					_g2 = 0
					_g11 = self.onChange._hx___listeners
					while (_g2 < len(_g11)):
						listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
						_g2 = (_g2 + 1)
						listener1(widthChanged,heightChanged)
					self.onChange._hx___listenersInUse = False

	def copyValueFrom(self,autoSize):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:98
		self.set(autoSize.get_width(),autoSize.get_height())
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:99
		if autoSize.weak:
			autoSize.dispose()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:101
		return self

	def dispose(self):
		pass

	def _hx___invokeOnChange(self,horizontalChanged,verticalChanged):
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
		if ((self.onChange is not None) and ((len(self.onChange._hx___listeners) > 0))):
			if self.onChange._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				_g = 0
				_g1 = self.onChange._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(horizontalChanged,verticalChanged)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
				False
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
				self.onChange._hx___listenersInUse = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				_g2 = 0
				_g11 = self.onChange._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(horizontalChanged,verticalChanged)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
				self.onChange._hx___listenersInUse = False

	def set_width(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:128
		if (self._hx___width != value):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:129
			self._hx___width = value
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:130
			if ((self.onChange is not None) and ((len(self.onChange._hx___listeners) > 0))):
				if self.onChange._hx___listenersInUse:
					# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:130
					# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:130
					_g = 0
					_g1 = self.onChange._hx___listeners
					while (_g < len(_g1)):
						listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
						_g = (_g + 1)
						listener(True,False)
					False
				else:
					self.onChange._hx___listenersInUse = True
					_g2 = 0
					_g11 = self.onChange._hx___listeners
					while (_g2 < len(_g11)):
						listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
						_g2 = (_g2 + 1)
						listener1(True,False)
					self.onChange._hx___listenersInUse = False
		else:
			self._hx___width = value
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:136
		return value

	def set_height(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:145
		if (self._hx___height != value):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:146
			self._hx___height = value
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:147
			if ((self.onChange is not None) and ((len(self.onChange._hx___listeners) > 0))):
				if self.onChange._hx___listenersInUse:
					# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:147
					# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:147
					_g = 0
					_g1 = self.onChange._hx___listeners
					while (_g < len(_g1)):
						listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
						_g = (_g + 1)
						listener(False,True)
					False
				else:
					self.onChange._hx___listenersInUse = True
					_g2 = 0
					_g11 = self.onChange._hx___listeners
					while (_g2 < len(_g11)):
						listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
						_g2 = (_g2 + 1)
						listener1(False,True)
					self.onChange._hx___listenersInUse = False
		else:
			self._hx___height = value
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:152
		return value

	def get_width(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:157
		return self._hx___width

	def get_height(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx:158
		return self._hx___height

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___width = None
		_hx_o._hx___height = None
		_hx_o.onChange = None
		_hx_o.weak = None
sx_properties_AutoSize._hx_class = sx_properties_AutoSize


class sx_properties_abstracts__AAlign_AAlign_Impl_:
	_hx_class_name = "sx.properties.abstracts._AAlign.AAlign_Impl_"
	_hx_statics = ["__pool", "fromHorizontal", "fromVertical", "fromNone"]

	@staticmethod
	def fromHorizontal(v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx:25
		weakAlign = None
		_this = sx_properties_abstracts__AAlign_AAlign_Impl_._hx___pool
		if (_this.length > 0):
			_this.length = (_this.length - 1)
			weakAlign = python_internal_ArrayImpl._get(_this._hx___pool, _this.length)
		else:
			weakAlign = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx:26
		if (weakAlign is None):
			weakAlign = sx_properties_abstracts__AAlign_WeakAlign()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx:27
		weakAlign.weak = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx:28
		weakAlign.set(v,"none")
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx:30
		return weakAlign

	@staticmethod
	def fromVertical(v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx:41
		weakAlign = None
		_this = sx_properties_abstracts__AAlign_AAlign_Impl_._hx___pool
		if (_this.length > 0):
			_this.length = (_this.length - 1)
			weakAlign = python_internal_ArrayImpl._get(_this._hx___pool, _this.length)
		else:
			weakAlign = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx:42
		if (weakAlign is None):
			weakAlign = sx_properties_abstracts__AAlign_WeakAlign()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx:43
		weakAlign.weak = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx:44
		weakAlign.set("none",v)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx:46
		return weakAlign

	@staticmethod
	def fromNone(v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx:56
		return sx_properties_abstracts__AAlign_AAlign_Impl_.fromHorizontal("none")
sx_properties_abstracts__AAlign_AAlign_Impl_._hx_class = sx_properties_abstracts__AAlign_AAlign_Impl_


class sx_properties_abstracts__AAlign_WeakAlign(sx_properties_Align):
	_hx_class_name = "sx.properties.abstracts._AAlign.WeakAlign"
	_hx_fields = []
	_hx_methods = ["dispose"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_properties_Align


	def __init__(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx:76
		super().__init__()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx:77
		self.onChange = None

	def dispose(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx:86
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx:86
		_this = sx_properties_abstracts__AAlign_AAlign_Impl_._hx___pool
		python_internal_ArrayImpl._set(_this._hx___pool, _this.length, self)
		_this.length = (_this.length + 1)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAlign.hx:88
		self.weak = False

	@staticmethod
	def _hx_empty_init(_hx_o):		pass
sx_properties_abstracts__AAlign_WeakAlign._hx_class = sx_properties_abstracts__AAlign_WeakAlign


class sx_properties_abstracts__AAutoSize_AAutoSize_Impl_:
	_hx_class_name = "sx.properties.abstracts._AAutoSize.AAutoSize_Impl_"
	_hx_statics = ["__pool", "fromBool"]

	@staticmethod
	def fromBool(v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx:24
		weakAutoSize = None
		_this = sx_properties_abstracts__AAutoSize_AAutoSize_Impl_._hx___pool
		if (_this.length > 0):
			_this.length = (_this.length - 1)
			weakAutoSize = python_internal_ArrayImpl._get(_this._hx___pool, _this.length)
		else:
			weakAutoSize = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx:25
		if (weakAutoSize is None):
			weakAutoSize = sx_properties_abstracts__AAutoSize_WeakAutoSize()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx:26
		weakAutoSize.weak = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx:27
		weakAutoSize.set_width(v)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx:28
		weakAutoSize.set_height(v)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx:30
		return weakAutoSize
sx_properties_abstracts__AAutoSize_AAutoSize_Impl_._hx_class = sx_properties_abstracts__AAutoSize_AAutoSize_Impl_


class sx_properties_abstracts__AAutoSize_WeakAutoSize(sx_properties_AutoSize):
	_hx_class_name = "sx.properties.abstracts._AAutoSize.WeakAutoSize"
	_hx_fields = []
	_hx_methods = ["dispose"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_properties_AutoSize


	def __init__(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx:51
		super().__init__()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx:52
		self.onChange = None

	def dispose(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx:61
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx:61
		_this = sx_properties_abstracts__AAutoSize_AAutoSize_Impl_._hx___pool
		python_internal_ArrayImpl._set(_this._hx___pool, _this.length, self)
		_this.length = (_this.length + 1)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/AAutoSize.hx:63
		self.weak = False

	@staticmethod
	def _hx_empty_init(_hx_o):		pass
sx_properties_abstracts__AAutoSize_WeakAutoSize._hx_class = sx_properties_abstracts__AAutoSize_WeakAutoSize


class sx_properties_abstracts__ACoordinate_ACoordinate_Impl_:
	_hx_class_name = "sx.properties.abstracts._ACoordinate.ACoordinate_Impl_"
	_hx_statics = ["__pool", "fromFloat", "fromSize", "toFloat", "_new", "AincB", "AdecB", "AmulIncB", "AdevDecB", "AplusB", "AminusB", "AmulB", "AdivB", "AltB", "AlteB", "AneB", "AgteB", "AgtB", "AeqB", "minusA", "Ainc", "Bdec", "AincBf", "AdecBf", "AmulIncBf", "AdevDecBf", "AplusBf", "AminusBf", "AmulBf", "AdivBf", "AltBf", "AlteBf", "AneBf", "AgteBf", "AgtBf", "AeqBf"]

	@staticmethod
	def fromFloat(v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:27
		weakCoordinate = None
		_this = sx_properties_abstracts__ACoordinate_ACoordinate_Impl_._hx___pool
		if (_this.length > 0):
			_this.length = (_this.length - 1)
			weakCoordinate = python_internal_ArrayImpl._get(_this._hx___pool, _this.length)
		else:
			weakCoordinate = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:28
		if (weakCoordinate is None):
			weakCoordinate = sx_properties_abstracts__ACoordinate_WeakCoordinate()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:29
		weakCoordinate.weak = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:30
		weakCoordinate.set_dip(v)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:32
		return weakCoordinate

	@staticmethod
	def fromSize(size):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:41
		return sx_properties_abstracts__ACoordinate_ACoordinate_Impl_.fromFloat(size.get_dip())

	@staticmethod
	def toFloat(this1):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:46
		return this1.get_dip()

	@staticmethod
	def _new(coordinate):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:51
		return coordinate

	@staticmethod
	def AincB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:58
		_g = a
		return _g.set_dip((_g.get_dip() + b.get_dip()))

	@staticmethod
	def AdecB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:59
		_g = a
		return _g.set_dip((_g.get_dip() - b.get_dip()))

	@staticmethod
	def AmulIncB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:60
		_g = a
		return _g.set_dip((_g.get_dip() * b.get_dip()))

	@staticmethod
	def AdevDecB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:61
		_g = a
		return _g.set_dip((_g.get_dip() / b.get_dip()))

	@staticmethod
	def AplusB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:62
		return (a.get_dip() + b.get_dip())

	@staticmethod
	def AminusB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:63
		return (a.get_dip() - b.get_dip())

	@staticmethod
	def AmulB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:64
		return (a.get_dip() * b.get_dip())

	@staticmethod
	def AdivB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:65
		return (a.get_dip() / b.get_dip())

	@staticmethod
	def AltB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:66
		return (a.get_dip() < b.get_dip())

	@staticmethod
	def AlteB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:67
		return (a.get_dip() <= b.get_dip())

	@staticmethod
	def AneB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:68
		return (a.get_dip() != b.get_dip())

	@staticmethod
	def AgteB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:69
		return (a.get_dip() >= b.get_dip())

	@staticmethod
	def AgtB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:70
		return (a.get_dip() > b.get_dip())

	@staticmethod
	def AeqB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:71
		return (a.get_dip() == b.get_dip())

	@staticmethod
	def minusA(a):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:72
		return -a.get_dip()

	@staticmethod
	def Ainc(a):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:74
		_g = a
		_g1 = _g.get_dip()
		_g.set_dip((_g1 + 1))
		return _g1

	@staticmethod
	def Bdec(a):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:75
		_g = a
		_g1 = _g.get_dip()
		_g.set_dip((_g1 - 1))
		return _g1

	@staticmethod
	def AincBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:81
		_g = a
		return _g.set_dip((_g.get_dip() + b))

	@staticmethod
	def AdecBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:82
		_g = a
		return _g.set_dip((_g.get_dip() - b))

	@staticmethod
	def AmulIncBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:83
		_g = a
		return _g.set_dip((_g.get_dip() * b))

	@staticmethod
	def AdevDecBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:84
		_g = a
		return _g.set_dip((_g.get_dip() / b))

	@staticmethod
	def AplusBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:85
		return (a.get_dip() + b)

	@staticmethod
	def AminusBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:86
		return (a.get_dip() - b)

	@staticmethod
	def AmulBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:87
		return (a.get_dip() * b)

	@staticmethod
	def AdivBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:88
		return (a.get_dip() / b)

	@staticmethod
	def AltBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:89
		return (a.get_dip() < b)

	@staticmethod
	def AlteBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:90
		return (a.get_dip() <= b)

	@staticmethod
	def AneBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:91
		return (a.get_dip() != b)

	@staticmethod
	def AgteBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:92
		return (a.get_dip() >= b)

	@staticmethod
	def AgtBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:93
		return (a.get_dip() > b)

	@staticmethod
	def AeqBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:94
		return (a.get_dip() == b)
sx_properties_abstracts__ACoordinate_ACoordinate_Impl_._hx_class = sx_properties_abstracts__ACoordinate_ACoordinate_Impl_


class sx_properties_metric_Size:
	_hx_class_name = "sx.properties.metric.Size"
	_hx_fields = ["__min", "__max", "units", "orientation", "pctSource", "onChange", "weak", "__value"]
	_hx_methods = ["isVertical", "isHorizontal", "toString", "copyValueFrom", "hasMin", "dispose", "__pctSource", "__invokeOnChange", "__constraintChanged", "get_dip", "get_px", "get_pct", "set_dip", "set_px", "set_pct", "get_min", "set_min", "get_max", "set_max"]
	_hx_statics = ["get_zeroProperty"]

	def __init__(self,orientation = "horizontal"):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:18
		if (orientation is None):
			orientation = "horizontal"
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:36
		self._hx___min = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:43
		self._hx___max = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:46
		self.units = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:49
		self.orientation = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:56
		self.pctSource = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:65
		self.onChange = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:68
		self.weak = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:71
		self._hx___value = None
		self._hx___value = 0
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:68
		self.weak = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:46
		self.units = "dip"
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:80
		self.orientation = orientation
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:81
		self.onChange = sx_signals_Signal()

	def isVertical(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:90
		return (self.orientation == "vertical")

	def isHorizontal(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:99
		return (self.orientation == "horizontal")

	def toString(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:109
		value = None
		_g = self.units
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:110
		if ((_g) == "dip"):
			value = self.get_dip()
		elif ((_g) == "px"):
			value = self.get_px()
		elif ((_g) == "pct"):
			value = self.get_pct()
		else:
			pass
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:115
		return (("" + Std.string(value)) + Std.string(self.units))

	def copyValueFrom(self,size):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:126
		previousUnits = self.units
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:127
		previousValue = self._hx___value
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:129
		self.units = size.units
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:130
		self._hx___value = size._hx___value
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:132
		if size.weak:
			size.dispose()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:134
		self._hx___invokeOnChange(previousUnits,previousValue)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:136
		return self

	def hasMin(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:145
		return (self._hx___min is not None)

	def dispose(self):
		pass

	def _hx___pctSource(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:163
		if (self.pctSource is None):
			return sx_properties_metric__Size_Size_Internal_ZeroSize.instance
		else:
			return self.pctSource()

	def _hx___invokeOnChange(self,previousUnits,previousValue):
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
		if ((self.onChange is not None) and ((len(self.onChange._hx___listeners) > 0))):
			if self.onChange._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				_g = 0
				_g1 = self.onChange._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(self,previousUnits,previousValue)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
				False
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
				self.onChange._hx___listenersInUse = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				_g2 = 0
				_g11 = self.onChange._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(self,previousUnits,previousValue)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
				self.onChange._hx___listenersInUse = False

	def _hx___constraintChanged(self,constraint,previousUnits,previousValue):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:181
		if (constraint == self._hx___min):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:182
			minValue = None
			size = self._hx___min
			if ((self.units) == "dip"):
				minValue = size.get_dip()
			elif ((self.units) == "px"):
				minValue = size.get_px()
			elif ((self.units) == "pct"):
				minValue = size.get_pct()
			else:
				pass
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:183
			if (self._hx___value < minValue):
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:184
				previous = self._hx___value
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:185
				self._hx___value = minValue
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:186
				self._hx___invokeOnChange(self.units,previous)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:189
			return
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:192
		if (constraint == self._hx___max):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:193
			maxValue = None
			size1 = self._hx___max
			if ((self.units) == "dip"):
				maxValue = size1.get_dip()
			elif ((self.units) == "px"):
				maxValue = size1.get_px()
			elif ((self.units) == "pct"):
				maxValue = size1.get_pct()
			else:
				pass
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:194
			if (self._hx___value > maxValue):
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:195
				previous1 = self._hx___value
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:196
				self._hx___value = maxValue
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:197
				self._hx___invokeOnChange(self.units,previous1)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:200
			return

	def get_dip(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:211
		_g = self.units
		if ((_g) == "dip"):
			return self._hx___value
		elif ((_g) == "px"):
			return (self._hx___value / sx_Sx.dipFactor)
		elif ((_g) == "pct"):
			return ((self._hx___pctSource().get_dip() * self._hx___value) * 0.01)
		else:
			pass

	def get_px(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:225
		_g = self.units
		if ((_g) == "dip"):
			return (self._hx___value * sx_Sx.dipFactor)
		elif ((_g) == "px"):
			return self._hx___value
		elif ((_g) == "pct"):
			return ((self._hx___pctSource().get_px() * self._hx___value) * 0.01)
		else:
			pass

	def get_pct(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:239
		_g = self.units
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:240
		if ((_g) == "dip"):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:241
			dip = self._hx___pctSource().get_dip()
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:242
			if (dip == 0):
				return 100
			else:
				return ((self._hx___value / dip) * 100)
		elif ((_g) == "px"):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:244
			px = self._hx___pctSource().get_px()
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:245
			if (px == 0):
				return 100
			else:
				return ((self._hx___value / px) * 100)
		elif ((_g) == "pct"):
			return self._hx___value
		else:
			pass

	def set_dip(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:258
		previousUnits = self.units
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:259
		previousValue = self._hx___value
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:261
		self.units = "dip"
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:262
		if ((self._hx___min is not None) and ((self._hx___min.get_dip() > value))):
			self._hx___value = self._hx___min.get_dip()
		elif ((self._hx___max is not None) and ((self._hx___max.get_dip() < value))):
			self._hx___value = self._hx___max.get_dip()
		else:
			self._hx___value = value
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:270
		self._hx___invokeOnChange(previousUnits,previousValue)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:272
		return value

	def set_px(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:282
		previousUnits = self.units
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:283
		previousValue = self._hx___value
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:285
		self.units = "px"
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:286
		if ((self._hx___min is not None) and ((self._hx___min.get_px() > value))):
			self._hx___value = self._hx___min.get_px()
		elif ((self._hx___max is not None) and ((self._hx___max.get_px() < value))):
			self._hx___value = self._hx___max.get_px()
		else:
			self._hx___value = value
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:294
		self._hx___invokeOnChange(previousUnits,previousValue)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:296
		return value

	def set_pct(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:306
		previousUnits = self.units
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:307
		previousValue = self._hx___value
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:309
		self.units = "pct"
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:310
		if ((self._hx___min is not None) and ((self._hx___min.get_pct() > value))):
			self._hx___value = self._hx___min.get_pct()
		elif ((self._hx___max is not None) and ((self._hx___max.get_pct() < value))):
			self._hx___value = self._hx___max.get_pct()
		else:
			self._hx___value = value
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:318
		self._hx___invokeOnChange(previousUnits,previousValue)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:320
		return value

	def get_min(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:329
		if (self._hx___min is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:330
			self._hx___min = sx_properties_metric_Size(self.orientation)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:331
			self._hx___min.pctSource = self._hx___pctSource
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:332
			self._hx___min._hx___value = Math.NEGATIVE_INFINITY
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:333
			self._hx___min.onChange.add(self._hx___constraintChanged)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:336
		return self._hx___min

	def set_min(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:345
		if (value is None):
			if (self._hx___min is not None):
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:347
				_g = self._hx___min.units
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:348
				if ((_g) == "dip"):
					self._hx___min.set_dip(Math.NEGATIVE_INFINITY)
				elif ((_g) == "px"):
					self._hx___min.set_px(Math.NEGATIVE_INFINITY)
				elif ((_g) == "pct"):
					self._hx___min.set_pct(Math.NEGATIVE_INFINITY)
				else:
					pass
		else:
			self.get_min().copyValueFrom(value)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:357
		return value

	def get_max(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:366
		if (self._hx___max is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:367
			self._hx___max = sx_properties_metric_Size(self.orientation)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:368
			self._hx___max.pctSource = self._hx___pctSource
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:369
			self._hx___max._hx___value = Math.POSITIVE_INFINITY
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:370
			self._hx___max.onChange.add(self._hx___constraintChanged)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:373
		return self._hx___max

	def set_max(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:382
		if (value is None):
			if (self._hx___max is not None):
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:384
				_g = self._hx___max.units
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:385
				if ((_g) == "dip"):
					self._hx___max.set_dip(Math.NEGATIVE_INFINITY)
				elif ((_g) == "px"):
					self._hx___max.set_px(Math.NEGATIVE_INFINITY)
				elif ((_g) == "pct"):
					self._hx___max.set_pct(Math.NEGATIVE_INFINITY)
				else:
					pass
		else:
			self.get_max().copyValueFrom(value)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:394
		return value
	zeroProperty = None

	@staticmethod
	def get_zeroProperty():
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:399
		return sx_properties_metric__Size_Size_Internal_ZeroSize.instance

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___min = None
		_hx_o._hx___max = None
		_hx_o.units = None
		_hx_o.orientation = None
		_hx_o.pctSource = None
		_hx_o.onChange = None
		_hx_o.weak = None
		_hx_o._hx___value = None
sx_properties_metric_Size._hx_class = sx_properties_metric_Size


class sx_properties_metric_Coordinate(sx_properties_metric_Size):
	_hx_class_name = "sx.properties.metric.Coordinate"
	_hx_fields = ["ownerSize", "pair", "selected"]
	_hx_methods = ["select", "__ownerSize", "get_px", "get_pct", "get_dip", "__invokeOnChange"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_properties_metric_Size


	def __init__(self,orientation = None):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx:15
		self.ownerSize = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx:20
		self.pair = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx:22
		self.selected = None
		self.selected = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx:12
		super().__init__(orientation)

	def select(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx:30
		if (not self.selected):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx:31
			self.selected = True
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx:32
			self.pair().selected = False

	def _hx___ownerSize(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx:42
		if (self.ownerSize is None):
			return sx_properties_metric__Size_Size_Internal_ZeroSize.instance
		else:
			return self.ownerSize()

	def get_px(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx:50
		if self.selected:
			return super().get_px()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx:51
		return ((self._hx___pctSource().get_px() - self.pair().get_px()) - self._hx___ownerSize().get_px())

	def get_pct(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx:59
		if self.selected:
			return super().get_pct()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx:60
		return ((self._hx___pctSource().get_pct() - self.pair().get_pct()) - self._hx___ownerSize().get_pct())

	def get_dip(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx:68
		if self.selected:
			return super().get_dip()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx:69
		return ((self._hx___pctSource().get_dip() - self.pair().get_dip()) - self._hx___ownerSize().get_dip())

	def _hx___invokeOnChange(self,previousUnits,previousValue):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx:78
		if (not self.selected):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx:78
			self.selected = True
			self.pair().selected = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Coordinate.hx:79
		super()._hx___invokeOnChange(previousUnits,previousValue)

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.ownerSize = None
		_hx_o.pair = None
		_hx_o.selected = None
sx_properties_metric_Coordinate._hx_class = sx_properties_metric_Coordinate


class sx_properties_abstracts__ACoordinate_WeakCoordinate(sx_properties_metric_Coordinate):
	_hx_class_name = "sx.properties.abstracts._ACoordinate.WeakCoordinate"
	_hx_fields = []
	_hx_methods = ["dispose", "__invokeOnChange"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_properties_metric_Coordinate


	def __init__(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:113
		super().__init__()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:114
		self.selected = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:115
		self.onChange = None

	def dispose(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:124
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:124
		_this = sx_properties_abstracts__ACoordinate_ACoordinate_Impl_._hx___pool
		python_internal_ArrayImpl._set(_this._hx___pool, _this.length, self)
		_this.length = (_this.length + 1)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx:126
		self.weak = False

	def _hx___invokeOnChange(self,previousUnits,previousValue):
		pass

	@staticmethod
	def _hx_empty_init(_hx_o):		pass
sx_properties_abstracts__ACoordinate_WeakCoordinate._hx_class = sx_properties_abstracts__ACoordinate_WeakCoordinate


class sx_properties_abstracts__APadding_APadding_Impl_:
	_hx_class_name = "sx.properties.abstracts._APadding.APadding_Impl_"
	_hx_statics = ["__pool", "fromFloat", "get_onChange", "set_dip", "set_px", "set_pct"]
	dip = None
	px = None
	pct = None
	onChange = None

	@staticmethod
	def fromFloat(v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx:25
		weakPadding = None
		_this = sx_properties_abstracts__APadding_APadding_Impl_._hx___pool
		if (_this.length > 0):
			_this.length = (_this.length - 1)
			weakPadding = python_internal_ArrayImpl._get(_this._hx___pool, _this.length)
		else:
			weakPadding = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx:26
		if (weakPadding is None):
			weakPadding = sx_properties_abstracts__APadding_WeakPadding()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx:27
		weakPadding.weak = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx:28
		weakPadding.set_dip(v)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx:30
		return weakPadding

	@staticmethod
	def get_onChange(this1):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx:50
		return this1.onComponentsChange

	@staticmethod
	def set_dip(this1,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx:53
		return this1.set_dip(v)

	@staticmethod
	def set_px(this1,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx:54
		return this1.set_px(v)

	@staticmethod
	def set_pct(this1,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx:55
		return this1.set_pct(v)
sx_properties_abstracts__APadding_APadding_Impl_._hx_class = sx_properties_abstracts__APadding_APadding_Impl_


class sx_properties_metric_SizeSetterProxy(sx_properties_metric_Size):
	_hx_class_name = "sx.properties.metric.SizeSetterProxy"
	_hx_fields = []
	_hx_methods = ["__invokeOnChange", "get_dip", "get_px", "get_pct"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_properties_metric_Size


	def __init__(self,orientation = None):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx:17
		super().__init__(orientation)

	def _hx___invokeOnChange(self,previousUnits,previousValue):
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
		if ((self.onChange is not None) and ((len(self.onChange._hx___listeners) > 0))):
			if self.onChange._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				_g = 0
				_g1 = self.onChange._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(self,self.units,self._hx___value)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
				False
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
				self.onChange._hx___listenersInUse = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				_g2 = 0
				_g11 = self.onChange._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(self,self.units,self._hx___value)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
				self.onChange._hx___listenersInUse = False

	def get_dip(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx:30
		raise sx_exceptions_NoReadException(None, _hx_AnonObject({'fileName': "SizeSetterProxy.hx", 'lineNumber': 30, 'className': "sx.properties.metric.SizeSetterProxy", 'methodName': "get_dip"}))

	def get_px(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx:31
		raise sx_exceptions_NoReadException(None, _hx_AnonObject({'fileName': "SizeSetterProxy.hx", 'lineNumber': 31, 'className': "sx.properties.metric.SizeSetterProxy", 'methodName': "get_px"}))

	def get_pct(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/SizeSetterProxy.hx:32
		raise sx_exceptions_NoReadException(None, _hx_AnonObject({'fileName': "SizeSetterProxy.hx", 'lineNumber': 32, 'className': "sx.properties.metric.SizeSetterProxy", 'methodName': "get_pct"}))

	@staticmethod
	def _hx_empty_init(_hx_o):		pass
sx_properties_metric_SizeSetterProxy._hx_class = sx_properties_metric_SizeSetterProxy


class sx_properties_metric_Padding(sx_properties_metric_SizeSetterProxy):
	_hx_class_name = "sx.properties.metric.Padding"
	_hx_fields = ["__left", "__right", "__top", "__bottom", "__horizontal", "__vertical", "ownerWidth", "ownerHeight", "onComponentsChange", "__batchChanges"]
	_hx_methods = ["__sideChanged", "__dimensionChanged", "__setDimension", "__setAll", "__invokeOnComponentsChange", "__ownerWidthProvider", "__ownerHeightProvider", "__constraintChanged", "__verticalConstraintChanged", "__horizontalConstraintChanged", "get_horizontal", "get_vertical", "set_horizontal", "set_vertical", "toString", "get_left", "get_right", "get_top", "get_bottom", "set_left", "set_right", "set_top", "set_bottom"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_properties_metric_SizeSetterProxy


	def __init__(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:22
		self._hx___left = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:25
		self._hx___right = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:28
		self._hx___top = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:31
		self._hx___bottom = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:35
		self._hx___horizontal = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:38
		self._hx___vertical = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:41
		self.ownerWidth = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:43
		self.ownerHeight = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:51
		self.onComponentsChange = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:54
		self._hx___batchChanges = None
		self._hx___batchChanges = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:62
		super().__init__()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:64
		self.onChange.add(self._hx___setAll)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:66
		self._hx___left = sx_properties_metric_Size("horizontal")
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:67
		self._hx___right = sx_properties_metric_Size("horizontal")
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:68
		self._hx___top = sx_properties_metric_Size("vertical")
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:69
		self._hx___bottom = sx_properties_metric_Size("vertical")
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:71
		self._hx___left.onChange.add(self._hx___sideChanged)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:72
		self._hx___right.onChange.add(self._hx___sideChanged)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:73
		self._hx___top.onChange.add(self._hx___sideChanged)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:74
		self._hx___bottom.onChange.add(self._hx___sideChanged)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:76
		self._hx___left.pctSource = self._hx___ownerWidthProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:77
		self._hx___right.pctSource = self._hx___ownerWidthProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:78
		self._hx___top.pctSource = self._hx___ownerHeightProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:79
		self._hx___bottom.pctSource = self._hx___ownerHeightProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:81
		self.onComponentsChange = sx_signals_Signal()

	def _hx___sideChanged(self,changed,previousUnits,previousValue):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:90
		if self._hx___batchChanges:
			return
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:91
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:91
		horizontal = (changed.orientation == "horizontal")
		vertical = (changed.orientation == "vertical")
		if ((self.onComponentsChange is not None) and ((len(self.onComponentsChange._hx___listeners) > 0))):
			if self.onComponentsChange._hx___listenersInUse:
				_g = 0
				_g1 = self.onComponentsChange._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(horizontal,vertical)
				False
			else:
				self.onComponentsChange._hx___listenersInUse = True
				_g2 = 0
				_g11 = self.onComponentsChange._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(horizontal,vertical)
				self.onComponentsChange._hx___listenersInUse = False

	def _hx___dimensionChanged(self,changed,units,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:100
		self._hx___batchChanges = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:102
		if (changed.orientation == "horizontal"):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:103
			first = self.get_left()
			second = self.get_right()
			if ((units) == "dip"):
				first.set_dip(value)
				second.set_dip(value)
			elif ((units) == "px"):
				first.set_px(value)
				second.set_px(value)
			elif ((units) == "pct"):
				first.set_pct(value)
				second.set_pct(value)
			else:
				pass
		else:
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:105
			first1 = self.get_top()
			second1 = self.get_bottom()
			if ((units) == "dip"):
				first1.set_dip(value)
				second1.set_dip(value)
			elif ((units) == "px"):
				first1.set_px(value)
				second1.set_px(value)
			elif ((units) == "pct"):
				first1.set_pct(value)
				second1.set_pct(value)
			else:
				pass
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:108
		self._hx___batchChanges = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:109
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:109
		horizontal = (changed.orientation == "horizontal")
		vertical = (changed.orientation == "vertical")
		if ((self.onComponentsChange is not None) and ((len(self.onComponentsChange._hx___listeners) > 0))):
			if self.onComponentsChange._hx___listenersInUse:
				_g = 0
				_g1 = self.onComponentsChange._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(horizontal,vertical)
				False
			else:
				self.onComponentsChange._hx___listenersInUse = True
				_g2 = 0
				_g11 = self.onComponentsChange._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(horizontal,vertical)
				self.onComponentsChange._hx___listenersInUse = False

	def _hx___setDimension(self,first,second,units,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:119
		if ((units) == "dip"):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:120
			first.set_dip(value)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:121
			second.set_dip(value)
		elif ((units) == "px"):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:123
			first.set_px(value)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:124
			second.set_px(value)
		elif ((units) == "pct"):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:126
			first.set_pct(value)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:127
			second.set_pct(value)
		else:
			pass

	def _hx___setAll(self,changed,units,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:137
		self._hx___batchChanges = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:140
		if ((units) == "dip"):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:141
			self.get_left().set_dip(value)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:142
			self.get_right().set_dip(value)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:143
			self.get_top().set_dip(value)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:144
			self.get_bottom().set_dip(value)
		elif ((units) == "px"):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:146
			self.get_left().set_px(value)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:147
			self.get_right().set_px(value)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:148
			self.get_top().set_px(value)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:149
			self.get_bottom().set_px(value)
		elif ((units) == "pct"):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:151
			self.get_left().set_pct(value)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:152
			self.get_right().set_pct(value)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:153
			self.get_top().set_pct(value)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:154
			self.get_bottom().set_pct(value)
		else:
			pass
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:157
		self._hx___batchChanges = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:158
		if ((self.onComponentsChange is not None) and ((len(self.onComponentsChange._hx___listeners) > 0))):
			if self.onComponentsChange._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:158
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:158
				_g = 0
				_g1 = self.onComponentsChange._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(True,True)
				False
			else:
				self.onComponentsChange._hx___listenersInUse = True
				_g2 = 0
				_g11 = self.onComponentsChange._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(True,True)
				self.onComponentsChange._hx___listenersInUse = False

	def _hx___invokeOnComponentsChange(self,horizontal,vertical):
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
		if ((self.onComponentsChange is not None) and ((len(self.onComponentsChange._hx___listeners) > 0))):
			if self.onComponentsChange._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				_g = 0
				_g1 = self.onComponentsChange._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(horizontal,vertical)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
				False
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
				self.onComponentsChange._hx___listenersInUse = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				_g2 = 0
				_g11 = self.onComponentsChange._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(horizontal,vertical)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
				self.onComponentsChange._hx___listenersInUse = False

	def _hx___ownerWidthProvider(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:176
		if (self.ownerWidth is None):
			return sx_properties_metric__Size_Size_Internal_ZeroSize.instance
		else:
			return self.ownerWidth()

	def _hx___ownerHeightProvider(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:185
		if (self.ownerHeight is None):
			return sx_properties_metric__Size_Size_Internal_ZeroSize.instance
		else:
			return self.ownerHeight()

	def _hx___constraintChanged(self,constraint,previousUnits,previousValue):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:194
		super()._hx___constraintChanged(constraint,previousUnits,previousValue)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:196
		if (constraint == self._hx___min):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:197
			if (self._hx___horizontal is not None):
				self._hx___horizontal.set_min(constraint)
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:200
				self.get_left().set_min(constraint)
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:201
				self.get_right().set_min(constraint)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:204
			if (self._hx___vertical is not None):
				self._hx___vertical.set_min(constraint)
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:207
				self.get_top().set_min(constraint)
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:208
				self.get_bottom().set_min(constraint)
		elif (constraint == self._hx___max):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:212
			if (self._hx___horizontal is not None):
				self._hx___horizontal.set_max(constraint)
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:215
				self.get_left().set_max(constraint)
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:216
				self.get_right().set_max(constraint)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:219
			if (self._hx___vertical is not None):
				self._hx___vertical.set_max(constraint)
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:222
				self.get_top().set_max(constraint)
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:223
				self.get_bottom().set_max(constraint)

	def _hx___verticalConstraintChanged(self,constraint,previousUnits,previousValue):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:234
		def _hx_local_0():
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:234
			b = self._hx___vertical.get_max()
			return (constraint.get_dip() == b.get_dip())
		if _hx_local_0():
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:235
			self.get_top().set_max(constraint)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:236
			self.get_bottom().set_max(constraint)
		else:
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:237
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:237
				b1 = self._hx___vertical.get_min()
				return (constraint.get_dip() == b1.get_dip())
			if _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:238
				self.get_top().set_min(constraint)
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:239
				self.get_bottom().set_min(constraint)

	def _hx___horizontalConstraintChanged(self,constraint,previousUnits,previousValue):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:249
		def _hx_local_0():
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:249
			b = self._hx___horizontal.get_max()
			return (constraint.get_dip() == b.get_dip())
		if _hx_local_0():
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:250
			self.get_left().set_max(constraint)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:251
			self.get_right().set_max(constraint)
		else:
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:252
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:252
				b1 = self._hx___horizontal.get_min()
				return (constraint.get_dip() == b1.get_dip())
			if _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:253
				self.get_left().set_min(constraint)
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:254
				self.get_right().set_min(constraint)

	def get_horizontal(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:264
		if (self._hx___horizontal is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:265
			self._hx___horizontal = sx_properties_metric_SizeSetterProxy("horizontal")
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:266
			self._hx___horizontal.onChange.add(self._hx___dimensionChanged)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:267
			self._hx___horizontal.get_min().onChange.add(self._hx___horizontalConstraintChanged)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:268
			self._hx___horizontal.get_max().onChange.add(self._hx___horizontalConstraintChanged)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:271
		return self._hx___horizontal

	def get_vertical(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:280
		if (self._hx___vertical is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:281
			self._hx___vertical = sx_properties_metric_SizeSetterProxy("vertical")
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:282
			self._hx___vertical.onChange.add(self._hx___dimensionChanged)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:283
			self._hx___vertical.get_min().onChange.add(self._hx___verticalConstraintChanged)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:284
			self._hx___vertical.get_max().onChange.add(self._hx___verticalConstraintChanged)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:287
		return self._hx___vertical

	def set_horizontal(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:296
		proxy = self.get_horizontal()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:297
		proxy.copyValueFrom(value)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:299
		return proxy

	def set_vertical(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:308
		proxy = self.get_vertical()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:309
		proxy.copyValueFrom(value)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:311
		return proxy

	def toString(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:320
		return (((((((("{ left : " + Std.string(self.get_left())) + ", top : ") + Std.string(self.get_top())) + ", right : ") + Std.string(self.get_right())) + ", bottom : ") + Std.string(self.get_bottom())) + " }")

	def get_left(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:325
		return self._hx___left

	def get_right(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:326
		return self._hx___right

	def get_top(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:327
		return self._hx___top

	def get_bottom(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:328
		return self._hx___bottom

	def set_left(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:331
		return self._hx___left.copyValueFrom(v)

	def set_right(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:332
		return self._hx___right.copyValueFrom(v)

	def set_top(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:333
		return self._hx___top.copyValueFrom(v)

	def set_bottom(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Padding.hx:334
		return self._hx___bottom.copyValueFrom(v)

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___left = None
		_hx_o._hx___right = None
		_hx_o._hx___top = None
		_hx_o._hx___bottom = None
		_hx_o._hx___horizontal = None
		_hx_o._hx___vertical = None
		_hx_o.ownerWidth = None
		_hx_o.ownerHeight = None
		_hx_o.onComponentsChange = None
		_hx_o._hx___batchChanges = None
sx_properties_metric_Padding._hx_class = sx_properties_metric_Padding


class sx_properties_abstracts__APadding_WeakPadding(sx_properties_metric_Padding):
	_hx_class_name = "sx.properties.abstracts._APadding.WeakPadding"
	_hx_fields = []
	_hx_methods = ["dispose", "__invokeOnChange"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_properties_metric_Padding


	def __init__(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx:74
		super().__init__()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx:75
		self.onChange = None

	def dispose(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx:84
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx:84
		_this = sx_properties_abstracts__APadding_APadding_Impl_._hx___pool
		python_internal_ArrayImpl._set(_this._hx___pool, _this.length, self)
		_this.length = (_this.length + 1)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/APadding.hx:86
		self.weak = False

	def _hx___invokeOnChange(self,units,value):
		pass

	@staticmethod
	def _hx_empty_init(_hx_o):		pass
sx_properties_abstracts__APadding_WeakPadding._hx_class = sx_properties_abstracts__APadding_WeakPadding


class sx_properties_abstracts__ASize_ASize_Impl_:
	_hx_class_name = "sx.properties.abstracts._ASize.ASize_Impl_"
	_hx_statics = ["__pool", "fromFloat", "fromSize", "toFloat", "_new", "AincB", "AdecB", "AmulIncB", "AdevDecB", "AplusB", "AminusB", "AmulB", "AdivB", "AltB", "AlteB", "AneB", "AgteB", "AgtB", "AeqB", "minusA", "Ainc", "Bdec", "AincBf", "AdecBf", "AmulIncBf", "AdevDecBf", "AplusBf", "AminusBf", "AmulBf", "AdivBf", "AltBf", "AlteBf", "AneBf", "AgteBf", "AgtBf", "AeqBf"]

	@staticmethod
	def fromFloat(v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:27
		weakSize = None
		_this = sx_properties_abstracts__ASize_ASize_Impl_._hx___pool
		if (_this.length > 0):
			_this.length = (_this.length - 1)
			weakSize = python_internal_ArrayImpl._get(_this._hx___pool, _this.length)
		else:
			weakSize = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:28
		if (weakSize is None):
			weakSize = sx_properties_abstracts__ASize_WeakSize()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:29
		weakSize.weak = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:30
		weakSize.set_dip(v)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:32
		return weakSize

	@staticmethod
	def fromSize(coordinate):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:41
		return sx_properties_abstracts__ASize_ASize_Impl_.fromFloat(coordinate.get_dip())

	@staticmethod
	def toFloat(this1):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:46
		return this1.get_dip()

	@staticmethod
	def _new(size):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:51
		return size

	@staticmethod
	def AincB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:58
		_g = a
		return _g.set_dip((_g.get_dip() + b.get_dip()))

	@staticmethod
	def AdecB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:59
		_g = a
		return _g.set_dip((_g.get_dip() - b.get_dip()))

	@staticmethod
	def AmulIncB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:60
		_g = a
		return _g.set_dip((_g.get_dip() * b.get_dip()))

	@staticmethod
	def AdevDecB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:61
		_g = a
		return _g.set_dip((_g.get_dip() / b.get_dip()))

	@staticmethod
	def AplusB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:62
		return (a.get_dip() + b.get_dip())

	@staticmethod
	def AminusB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:63
		return (a.get_dip() - b.get_dip())

	@staticmethod
	def AmulB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:64
		return (a.get_dip() * b.get_dip())

	@staticmethod
	def AdivB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:65
		return (a.get_dip() / b.get_dip())

	@staticmethod
	def AltB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:66
		return (a.get_dip() < b.get_dip())

	@staticmethod
	def AlteB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:67
		return (a.get_dip() <= b.get_dip())

	@staticmethod
	def AneB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:68
		return (a.get_dip() != b.get_dip())

	@staticmethod
	def AgteB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:69
		return (a.get_dip() >= b.get_dip())

	@staticmethod
	def AgtB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:70
		return (a.get_dip() > b.get_dip())

	@staticmethod
	def AeqB(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:71
		return (a.get_dip() == b.get_dip())

	@staticmethod
	def minusA(a):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:72
		return -a.get_dip()

	@staticmethod
	def Ainc(a):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:74
		_g = a
		_g1 = _g.get_dip()
		_g.set_dip((_g1 + 1))
		return _g1

	@staticmethod
	def Bdec(a):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:75
		_g = a
		_g1 = _g.get_dip()
		_g.set_dip((_g1 - 1))
		return _g1

	@staticmethod
	def AincBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:81
		_g = a
		return _g.set_dip((_g.get_dip() + b))

	@staticmethod
	def AdecBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:82
		_g = a
		return _g.set_dip((_g.get_dip() - b))

	@staticmethod
	def AmulIncBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:83
		_g = a
		return _g.set_dip((_g.get_dip() * b))

	@staticmethod
	def AdevDecBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:84
		_g = a
		return _g.set_dip((_g.get_dip() / b))

	@staticmethod
	def AplusBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:85
		return (a.get_dip() + b)

	@staticmethod
	def AminusBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:86
		return (a.get_dip() - b)

	@staticmethod
	def AmulBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:87
		return (a.get_dip() * b)

	@staticmethod
	def AdivBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:88
		return (a.get_dip() / b)

	@staticmethod
	def AltBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:89
		return (a.get_dip() < b)

	@staticmethod
	def AlteBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:90
		return (a.get_dip() <= b)

	@staticmethod
	def AneBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:91
		return (a.get_dip() != b)

	@staticmethod
	def AgteBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:92
		return (a.get_dip() >= b)

	@staticmethod
	def AgtBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:93
		return (a.get_dip() > b)

	@staticmethod
	def AeqBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:94
		return (a.get_dip() == b)
sx_properties_abstracts__ASize_ASize_Impl_._hx_class = sx_properties_abstracts__ASize_ASize_Impl_


class sx_properties_abstracts__ASize_WeakSize(sx_properties_metric_Size):
	_hx_class_name = "sx.properties.abstracts._ASize.WeakSize"
	_hx_fields = []
	_hx_methods = ["dispose", "__invokeOnChange"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_properties_metric_Size


	def __init__(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:113
		super().__init__()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:114
		self.onChange = None

	def dispose(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:123
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:123
		_this = sx_properties_abstracts__ASize_ASize_Impl_._hx___pool
		python_internal_ArrayImpl._set(_this._hx___pool, _this.length, self)
		_this.length = (_this.length + 1)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx:125
		self.weak = False

	def _hx___invokeOnChange(self,previousUnits,previousValue):
		pass

	@staticmethod
	def _hx_empty_init(_hx_o):		pass
sx_properties_abstracts__ASize_WeakSize._hx_class = sx_properties_abstracts__ASize_WeakSize


class sx_properties_abstracts__ASizeGetterProxy_ASizeGetterProxy_Impl_:
	_hx_class_name = "sx.properties.abstracts._ASizeGetterProxy.ASizeGetterProxy_Impl_"
	_hx_statics = ["get_dip", "get_px", "get_pct", "AplusBf", "AminusBf", "AmulBf", "AdivBf", "AltBf", "AlteBf", "AneBf", "AgteBf", "AgtBf", "AeqBf"]
	dip = None
	px = None
	pct = None

	@staticmethod
	def get_dip(this1):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeGetterProxy.hx:23
		return this1.get_dip()

	@staticmethod
	def get_px(this1):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeGetterProxy.hx:24
		return this1.get_px()

	@staticmethod
	def get_pct(this1):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeGetterProxy.hx:25
		return this1.get_pct()

	@staticmethod
	def AplusBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeGetterProxy.hx:31
		return (a.get_dip() + b)

	@staticmethod
	def AminusBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeGetterProxy.hx:32
		return (a.get_dip() - b)

	@staticmethod
	def AmulBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeGetterProxy.hx:33
		return (a.get_dip() * b)

	@staticmethod
	def AdivBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeGetterProxy.hx:34
		return (a.get_dip() / b)

	@staticmethod
	def AltBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeGetterProxy.hx:35
		return (a.get_dip() < b)

	@staticmethod
	def AlteBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeGetterProxy.hx:36
		return (a.get_dip() <= b)

	@staticmethod
	def AneBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeGetterProxy.hx:37
		return (a.get_dip() != b)

	@staticmethod
	def AgteBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeGetterProxy.hx:38
		return (a.get_dip() >= b)

	@staticmethod
	def AgtBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeGetterProxy.hx:39
		return (a.get_dip() > b)

	@staticmethod
	def AeqBf(a,b):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeGetterProxy.hx:40
		return (a.get_dip() == b)
sx_properties_abstracts__ASizeGetterProxy_ASizeGetterProxy_Impl_._hx_class = sx_properties_abstracts__ASizeGetterProxy_ASizeGetterProxy_Impl_


class sx_properties_abstracts__ASizeSetterProxy_ASizeSetterProxy_Impl_:
	_hx_class_name = "sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_"
	_hx_statics = ["__pool", "fromFloat", "set_dip", "set_px", "set_pct"]
	dip = None
	px = None
	pct = None

	@staticmethod
	def fromFloat(v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx:25
		weakSizeSetterProxy = None
		_this = sx_properties_abstracts__ASizeSetterProxy_ASizeSetterProxy_Impl_._hx___pool
		if (_this.length > 0):
			_this.length = (_this.length - 1)
			weakSizeSetterProxy = python_internal_ArrayImpl._get(_this._hx___pool, _this.length)
		else:
			weakSizeSetterProxy = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx:26
		if (weakSizeSetterProxy is None):
			weakSizeSetterProxy = sx_properties_abstracts__ASizeSetterProxy_WeakSizeSetterProxy()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx:27
		weakSizeSetterProxy.weak = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx:28
		weakSizeSetterProxy.set_dip(v)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx:30
		return weakSizeSetterProxy

	@staticmethod
	def set_dip(this1,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx:43
		return this1.set_dip(v)

	@staticmethod
	def set_px(this1,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx:44
		return this1.set_px(v)

	@staticmethod
	def set_pct(this1,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx:45
		return this1.set_pct(v)
sx_properties_abstracts__ASizeSetterProxy_ASizeSetterProxy_Impl_._hx_class = sx_properties_abstracts__ASizeSetterProxy_ASizeSetterProxy_Impl_


class sx_properties_abstracts__ASizeSetterProxy_WeakSizeSetterProxy(sx_properties_metric_SizeSetterProxy):
	_hx_class_name = "sx.properties.abstracts._ASizeSetterProxy.WeakSizeSetterProxy"
	_hx_fields = []
	_hx_methods = ["dispose", "__invokeOnChange"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_properties_metric_SizeSetterProxy


	def __init__(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx:64
		super().__init__()
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx:65
		self.onChange = None

	def dispose(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx:74
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx:74
		_this = sx_properties_abstracts__ASizeSetterProxy_ASizeSetterProxy_Impl_._hx___pool
		python_internal_ArrayImpl._set(_this._hx___pool, _this.length, self)
		_this.length = (_this.length + 1)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASizeSetterProxy.hx:76
		self.weak = False

	def _hx___invokeOnChange(self,units,value):
		pass

	@staticmethod
	def _hx_empty_init(_hx_o):		pass
sx_properties_abstracts__ASizeSetterProxy_WeakSizeSetterProxy._hx_class = sx_properties_abstracts__ASizeSetterProxy_WeakSizeSetterProxy


class sx_properties_displaylist_ArrayDisplayList:
	_hx_class_name = "sx.properties.displaylist.ArrayDisplayList"
	_hx_fields = ["widget", "parent", "children"]
	_hx_methods = ["addChild", "addChildAt", "removeChild", "removeChildAt", "removeChildren", "contains", "getChildIndex", "setChildIndex", "getChildAt", "swapChildren", "swapChildrenAt", "get_numChildren"]

	def __init__(self,widget):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:16
		self.widget = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:18
		self.parent = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:23
		self.children = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:31
		self.widget = widget
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:32
		self.children = []

	def addChild(self,child):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:43
		if (child.parent is not None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:43
			_this = child.parent
			if (child.parent == _this):
				python_internal_ArrayImpl.remove(_this.children,child)
				child.parent = None
				child
			else:
				None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:45
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:45
		_this1 = self.children
		_this1.append(child)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:46
		child.parent = self
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:48
		return child

	def addChildAt(self,child,index):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:63
		if (child.parent is not None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:63
			_this = child.parent
			if (child.parent == _this):
				python_internal_ArrayImpl.remove(_this.children,child)
				child.parent = None
				child
			else:
				None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:65
		self.children.insert(index, child)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:66
		child.parent = self
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:68
		return child

	def removeChild(self,child):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:80
		if (child.parent == self):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:81
			python_internal_ArrayImpl.remove(self.children,child)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:82
			child.parent = None
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:84
			return child
		else:
			return None

	def removeChildAt(self,index):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:100
		if (index < 0):
			index = (len(self.children) + index)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:102
		if ((index < 0) or ((index >= len(self.children)))):
			return None
		else:
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:107
			def _hx_local_0():
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:107
				_this = self.children
				def _hx_local_2():
					def _hx_local_1():
						pos = index
						if (pos < 0):
							pos = (len(_this) + pos)
						if (pos < 0):
							pos = 0
						res = _this[pos:(pos + 1)]
						del _this[pos:(pos + 1)]
						return res
					return _hx_local_1()
				return _hx_local_2()
			removed = python_internal_ArrayImpl._get((_hx_local_0()), 0)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:108
			removed.parent = None
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:110
			return removed

	def removeChildren(self,beginIndex = 0,endIndex = -1):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:123
		if (beginIndex is None):
			beginIndex = 0
		if (endIndex is None):
			endIndex = -1
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:124
		if (beginIndex < 0):
			beginIndex = (len(self.children) + beginIndex)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:125
		if (beginIndex < 0):
			beginIndex = 0
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:126
		if (endIndex < 0):
			endIndex = (len(self.children) + endIndex)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:128
		if ((beginIndex >= len(self.children)) or ((endIndex < beginIndex))):
			return 0
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:130
		removed = None
		_this = self.children
		_hx_len = ((endIndex - beginIndex) + 1)
		pos = beginIndex
		if (pos < 0):
			pos = (len(_this) + pos)
		if (pos < 0):
			pos = 0
		res = _this[pos:(pos + _hx_len)]
		del _this[pos:(pos + _hx_len)]
		removed = res
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:131
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:131
		_g = 0
		while (_g < len(removed)):
			node = (removed[_g] if _g >= 0 and _g < len(removed) else None)
			_g = (_g + 1)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:132
			node.parent = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:135
		return len(removed)

	def contains(self,child):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:144
		found = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:146
		while (child is not None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:147
			if (child == self):
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:148
				found = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:149
				break
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:151
			child = child.parent
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:154
		return found

	def getChildIndex(self,child):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:165
		index = python_internal_ArrayImpl.indexOf(self.children,child,None)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:166
		if (index < 0):
			raise sx_exceptions_NotChildException(None, _hx_AnonObject({'fileName': "ArrayDisplayList.hx", 'lineNumber': 166, 'className': "sx.properties.displaylist.ArrayDisplayList", 'methodName': "getChildIndex"}))
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:168
		return index

	def setChildIndex(self,child,index):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:185
		currentIndex = python_internal_ArrayImpl.indexOf(self.children,child,None)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:186
		if (currentIndex < 0):
			raise sx_exceptions_NotChildException(None, _hx_AnonObject({'fileName': "ArrayDisplayList.hx", 'lineNumber': 186, 'className': "sx.properties.displaylist.ArrayDisplayList", 'methodName': "setChildIndex"}))
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:188
		if (index < 0):
			index = (len(self.children) + index)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:189
		if (index < 0):
			index = 0
		elif (index >= len(self.children)):
			index = (len(self.children) - 1)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:195
		if (index != currentIndex):
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:196
			python_internal_ArrayImpl.remove(self.children,child)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:197
			self.children.insert(index, child)
			# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:199
			return index
		else:
			return currentIndex

	def getChildAt(self,index):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:215
		if (index < 0):
			index = (len(self.children) + index)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:217
		if ((index < 0) or ((index >= len(self.children)))):
			return None
		else:
			return (self.children[index] if index >= 0 and index < len(self.children) else None)

	def swapChildren(self,child1,child2):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:232
		index1 = python_internal_ArrayImpl.indexOf(self.children,child1,None)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:233
		index2 = python_internal_ArrayImpl.indexOf(self.children,child2,None)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:235
		if ((index1 < 0) or ((index2 < 0))):
			raise sx_exceptions_NotChildException(None, _hx_AnonObject({'fileName': "ArrayDisplayList.hx", 'lineNumber': 235, 'className': "sx.properties.displaylist.ArrayDisplayList", 'methodName': "swapChildren"}))
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:237
		python_internal_ArrayImpl._set(self.children, index1, child2)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:238
		python_internal_ArrayImpl._set(self.children, index2, child1)

	def swapChildrenAt(self,index1,index2):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:251
		if (index1 < 0):
			index1 = (len(self.children) + index1)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:252
		if (index2 < 0):
			index2 = (len(self.children) + index2)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:254
		if ((((index1 < 0) or ((index1 >= len(self.children)))) or ((index2 < 0))) or ((index2 > len(self.children)))):
			raise sx_exceptions_OutOfBoundsException("Provided index does not exist in display list of this widget.", _hx_AnonObject({'fileName': "ArrayDisplayList.hx", 'lineNumber': 255, 'className': "sx.properties.displaylist.ArrayDisplayList", 'methodName': "swapChildrenAt"}))
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:258
		child = (self.children[index1] if index1 >= 0 and index1 < len(self.children) else None)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:259
		python_internal_ArrayImpl._set(self.children, index1, (self.children[index2] if index2 >= 0 and index2 < len(self.children) else None))
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:260
		python_internal_ArrayImpl._set(self.children, index2, child)

	def get_numChildren(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx:265
		return len(self.children)

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.widget = None
		_hx_o.parent = None
		_hx_o.children = None
sx_properties_displaylist_ArrayDisplayList._hx_class = sx_properties_displaylist_ArrayDisplayList


class sx_properties_metric_Offset:
	_hx_class_name = "sx.properties.metric.Offset"
	_hx_fields = ["__left", "__right", "__top", "__bottom", "onChange", "__silentChanges"]
	_hx_methods = ["set", "__changed", "get_left", "get_right", "get_top", "get_bottom", "set_left", "set_right", "set_top", "set_bottom"]

	def __init__(self,widthProvider = None,heightProvider = None):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:20
		self._hx___left = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:23
		self._hx___right = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:26
		self._hx___top = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:29
		self._hx___bottom = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:32
		self.onChange = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:35
		self._hx___silentChanges = None
		self._hx___silentChanges = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:43
		self._hx___left = sx_properties_metric_Coordinate("horizontal")
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:44
		self._hx___left.pctSource = widthProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:45
		self._hx___left.ownerSize = widthProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:46
		self._hx___left.onChange.add(self._hx___changed)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:48
		self._hx___right = sx_properties_metric_Coordinate("horizontal")
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:49
		self._hx___right.pctSource = widthProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:50
		self._hx___right.ownerSize = widthProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:51
		self._hx___right.onChange.add(self._hx___changed)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:53
		self._hx___top = sx_properties_metric_Coordinate("vertical")
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:54
		self._hx___top.pctSource = heightProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:55
		self._hx___top.ownerSize = heightProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:56
		self._hx___top.onChange.add(self._hx___changed)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:58
		self._hx___bottom = sx_properties_metric_Coordinate("vertical")
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:59
		self._hx___bottom.pctSource = heightProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:60
		self._hx___bottom.ownerSize = heightProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:61
		self._hx___bottom.onChange.add(self._hx___changed)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:63
		self._hx___left.pair = self.get_right
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:64
		self._hx___right.pair = self.get_left
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:65
		self._hx___top.pair = self.get_bottom
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:66
		self._hx___bottom.pair = self.get_top
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:68
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:68
		_this = self._hx___left
		if (not _this.selected):
			_this.selected = True
			_this.pair().selected = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:69
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:69
		_this1 = self._hx___top
		if (not _this1.selected):
			_this1.selected = True
			_this1.pair().selected = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:71
		self.onChange = sx_signals_Signal()

	def set(self,x,y):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:89
		self._hx___silentChanges = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:91
		if ((-1 <= x) and ((x <= 1))):
			self.get_left().set_pct((x * 100))
		else:
			self.get_left().set_dip(x)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:96
		if ((-1 <= y) and ((y <= 1))):
			self.get_top().set_pct((y * 100))
		else:
			self.get_top().set_dip(y)
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:102
		self._hx___silentChanges = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
		if ((self.onChange is not None) and ((len(self.onChange._hx___listeners) > 0))):
			if self.onChange._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				_g = 0
				_g1 = self.onChange._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener()
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
				False
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
				self.onChange._hx___listenersInUse = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				_g2 = 0
				_g11 = self.onChange._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1()
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
				self.onChange._hx___listenersInUse = False

	def _hx___changed(self,property,previousUnits,previousValue):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:112
		if (not self._hx___silentChanges):
			if ((self.onChange is not None) and ((len(self.onChange._hx___listeners) > 0))):
				if self.onChange._hx___listenersInUse:
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
					_g = 0
					_g1 = self.onChange._hx___listeners
					while (_g < len(_g1)):
						listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
						_g = (_g + 1)
						listener()
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
					False
				else:
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
					self.onChange._hx___listenersInUse = True
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
					_g2 = 0
					_g11 = self.onChange._hx___listeners
					while (_g2 < len(_g11)):
						listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
						_g2 = (_g2 + 1)
						listener1()
					# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
					self.onChange._hx___listenersInUse = False

	def get_left(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:117
		return self._hx___left

	def get_right(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:118
		return self._hx___right

	def get_top(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:119
		return self._hx___top

	def get_bottom(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:120
		return self._hx___bottom

	def set_left(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:123
		self._hx___left.copyValueFrom(v)
		return self._hx___left

	def set_right(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:124
		self._hx___right.copyValueFrom(v)
		return self._hx___right

	def set_top(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:125
		self._hx___top.copyValueFrom(v)
		return self._hx___top

	def set_bottom(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Offset.hx:126
		self._hx___bottom.copyValueFrom(v)
		return self._hx___bottom

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___left = None
		_hx_o._hx___right = None
		_hx_o._hx___top = None
		_hx_o._hx___bottom = None
		_hx_o.onChange = None
		_hx_o._hx___silentChanges = None
sx_properties_metric_Offset._hx_class = sx_properties_metric_Offset


class sx_signals_Signal:
	_hx_class_name = "sx.signals.Signal"
	_hx_fields = ["__listeners", "__listenersInUse"]
	_hx_methods = ["add", "unique", "remove", "will", "__indexOf", "__cloneListenersInUse", "get_listenersCount"]

	def __init__(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:27
		self._hx___listeners = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:29
		self._hx___listenersInUse = None
		self._hx___listenersInUse = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:37
		self._hx___listeners = []

	def add(self,listener):
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:46
		if self._hx___listenersInUse:
			# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:46
			self._hx___listeners = list(self._hx___listeners)
			self._hx___listenersInUse = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:47
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:47
		_this = self._hx___listeners
		_this.append(listener)

	def unique(self,listener):
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:59
		if (self._hx___indexOf(listener) >= 0):
			return False
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:61
		if self._hx___listenersInUse:
			# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:61
			self._hx___listeners = list(self._hx___listeners)
			self._hx___listenersInUse = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:62
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:62
		_this = self._hx___listeners
		_this.append(listener)
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:64
		return True

	def remove(self,listener):
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:76
		index = self._hx___indexOf(listener)
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:77
		if (index < 0):
			return False
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:79
		if self._hx___listenersInUse:
			# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:79
			self._hx___listeners = list(self._hx___listeners)
			self._hx___listenersInUse = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:80
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:80
		_this = self._hx___listeners
		pos = index
		if (pos < 0):
			pos = (len(_this) + pos)
		if (pos < 0):
			pos = 0
		res = _this[pos:(pos + 1)]
		del _this[pos:(pos + 1)]
		res
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:82
		return True

	def will(self,listener):
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:100
		return (self._hx___indexOf(listener) >= 0)

	def _hx___indexOf(self,listener):
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:109
		index = -1
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:111
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:111
		_g1 = 0
		_g = len(self._hx___listeners)
		while (_g1 < _g):
			i = _g1
			_g1 = (_g1 + 1)
			# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:112
			if Reflect.compareMethods((self._hx___listeners[i] if i >= 0 and i < len(self._hx___listeners) else None),listener):
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:113
				index = i
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:114
				break
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:118
		return index

	def _hx___cloneListenersInUse(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:127
		if self._hx___listenersInUse:
			# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:128
			self._hx___listeners = list(self._hx___listeners)
			# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:129
			self._hx___listenersInUse = False

	def get_listenersCount(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:135
		return len(self._hx___listeners)

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___listeners = None
		_hx_o._hx___listenersInUse = None
sx_signals_Signal._hx_class = sx_signals_Signal


class sx_properties_metric__Size_Size_Internal_ZeroSize(sx_properties_metric_Size):
	_hx_class_name = "sx.properties.metric._Size.Size_Internal_ZeroSize"
	_hx_fields = []
	_hx_methods = ["get_px", "get_pct", "get_dip", "set_px", "set_pct", "set_dip"]
	_hx_statics = ["instance"]
	_hx_interfaces = []
	_hx_super = sx_properties_metric_Size


	def __init__(self,orientation = None):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:409
		super().__init__(orientation)

	def get_px(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:417
		return 0

	def get_pct(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:418
		return 0

	def get_dip(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:419
		return 0

	def set_px(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:420
		return v

	def set_pct(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:421
		return v

	def set_dip(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/properties/metric/Size.hx:422
		return v

	@staticmethod
	def _hx_empty_init(_hx_o):		pass
sx_properties_metric__Size_Size_Internal_ZeroSize._hx_class = sx_properties_metric__Size_Size_Internal_ZeroSize


class sx_skins__ASkin_ASkin_Impl_:
	_hx_class_name = "sx.skins._ASkin.ASkin_Impl_"
	_hx_statics = ["__byName"]

	@staticmethod
	def _hx___byName(name):
		# /home/alex/Work/HaXe/sx2-core/src/sx/skins/ASkin.hx:19
		return sx_Sx.skin(name)
sx_skins__ASkin_ASkin_Impl_._hx_class = sx_skins__ASkin_ASkin_Impl_


class sx_skins_base_SkinBase:
	_hx_class_name = "sx.skins.base.SkinBase"
	_hx_fields = ["__padding", "__widget"]
	_hx_methods = ["refresh", "hasPadding", "usedBy", "removed", "__widgetResized", "__widgetWidthProvider", "__widgetHeightProvider", "get_padding", "set_padding"]

	def __init__(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:19
		self._hx___padding = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:22
		self._hx___widget = None

	def refresh(self):
		pass

	def hasPadding(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:48
		return (self._hx___padding is not None)

	def usedBy(self,widget):
		# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:59
		if (self._hx___widget is not None):
			self._hx___widget.set_skin(None)
		# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:61
		self._hx___widget = widget
		# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:62
		self._hx___widget.get_onResize().add(self._hx___widgetResized)
		# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:63
		if self._hx___widget.initialized:
			self.refresh()

	def removed(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:73
		if (self._hx___widget is not None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:74
			self._hx___widget.get_onResize().remove(self._hx___widgetResized)
			# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:75
			self._hx___widget = None

	def _hx___widgetResized(self,widget,changed,previousUnits,previousValue):
		# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:85
		if self._hx___widget.initialized:
			self.refresh()

	def _hx___widgetWidthProvider(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:94
		if (self._hx___widget is None):
			return sx_properties_metric__Size_Size_Internal_ZeroSize.instance
		else:
			return self._hx___widget.get_width()

	def _hx___widgetHeightProvider(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:103
		if (self._hx___widget is None):
			return sx_properties_metric__Size_Size_Internal_ZeroSize.instance
		else:
			return self._hx___widget.get_width()

	def get_padding(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:112
		if (self._hx___padding is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:113
			self._hx___padding = sx_properties_metric_Padding()
			# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:114
			self._hx___padding.ownerWidth = self._hx___widgetWidthProvider
			# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:115
			self._hx___padding.ownerWidth = self._hx___widgetHeightProvider
		# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:118
		return self._hx___padding

	def set_padding(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/skins/base/SkinBase.hx:123
		self.get_padding().copyValueFrom(v)
		return self.get_padding()

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___padding = None
		_hx_o._hx___widget = None
sx_skins_base_SkinBase._hx_class = sx_skins_base_SkinBase


class sx_themes_Theme:
	_hx_class_name = "sx.themes.Theme"
	_hx_fields = ["__styles"]
	_hx_methods = ["initialize", "styles", "apply"]
	_hx_statics = ["DEFAULT_STYLE"]

	def __init__(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx:19
		self._hx___styles = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx:27
		self._hx___styles = haxe_ds_StringMap()
		# /home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx:29
		self.initialize()

	def initialize(self):
		pass

	def styles(self,cls):
		# /home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx:50
		className = Type.getClassName(cls)
		# /home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx:51
		styles = self._hx___styles.h.get(className,None)
		# /home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx:53
		if (styles is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx:54
			styles = haxe_ds_StringMap()
			# /home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx:55
			self._hx___styles.h[className] = styles
		# /home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx:58
		return styles

	def apply(self,widget):
		# /home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx:69
		if (widget.style is None):
			return
		# /home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx:71
		fn = None
		this1 = self.styles(Type.getClass(widget))
		fn = this1.get(widget.style)
		# /home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx:72
		if (fn is None):
			return
		# /home/alex/Work/HaXe/sx2-core/src/sx/themes/Theme.hx:74
		fn(widget)

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___styles = None
sx_themes_Theme._hx_class = sx_themes_Theme


class sx_tools_OrientationTools:
	_hx_class_name = "sx.tools.OrientationTools"
	_hx_statics = ["opposite"]

	@staticmethod
	def opposite(orientation):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx:23
		if ((orientation) == "vertical"):
			return "horizontal"
		elif ((orientation) == "horizontal"):
			return "vertical"
		else:
			pass
sx_tools_OrientationTools._hx_class = sx_tools_OrientationTools


class sx_tools_SizeTools:
	_hx_class_name = "sx.tools.SizeTools"
	_hx_statics = ["isZero", "notZero", "get"]

	@staticmethod
	def isZero(size):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx:45
		return (size._hx___value == 0)

	@staticmethod
	def notZero(size):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx:55
		return (size._hx___value != 0)

	@staticmethod
	def get(size,units):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx:64
		if ((units) == "dip"):
			return size.get_dip()
		elif ((units) == "px"):
			return size.get_px()
		elif ((units) == "pct"):
			return size.get_pct()
		else:
			pass
sx_tools_SizeTools._hx_class = sx_tools_SizeTools


class sx_tools_PaddingTools:
	_hx_class_name = "sx.tools.PaddingTools"
	_hx_statics = ["sumDip", "sumPx", "side", "oppositeSide", "isZero"]

	@staticmethod
	def sumDip(padding,orientation):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx:88
		if ((orientation) == "horizontal"):
			return (padding.get_left().get_dip() + padding.get_right().get_dip())
		elif ((orientation) == "vertical"):
			return (padding.get_top().get_dip() + padding.get_bottom().get_dip())
		else:
			pass

	@staticmethod
	def sumPx(padding,orientation):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx:100
		if ((orientation) == "horizontal"):
			return (padding.get_left().get_px() + padding.get_right().get_px())
		elif ((orientation) == "vertical"):
			return (padding.get_top().get_px() + padding.get_bottom().get_px())
		else:
			pass

	@staticmethod
	def side(padding,side):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx:112
		if ((side) == "left"):
			return padding.get_left()
		elif ((side) == "right"):
			return padding.get_right()
		elif ((side) == "top"):
			return padding.get_top()
		elif ((side) == "bottom"):
			return padding.get_bottom()
		else:
			pass

	@staticmethod
	def oppositeSide(padding,side):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx:126
		if ((side) == "left"):
			return padding.get_right()
		elif ((side) == "right"):
			return padding.get_left()
		elif ((side) == "top"):
			return padding.get_bottom()
		elif ((side) == "bottom"):
			return padding.get_top()
		else:
			pass

	@staticmethod
	def isZero(padding):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx:141
		leftZero = (padding.get_left()._hx___value == 0)
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx:142
		rightZero = (padding.get_right()._hx___value == 0)
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx:143
		topZero = (padding.get_top()._hx___value == 0)
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx:144
		bottomZero = (padding.get_bottom()._hx___value == 0)
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/PropertiesTools.hx:146
		return (((leftZero and rightZero) and topZero) and bottomZero)
sx_tools_PaddingTools._hx_class = sx_tools_PaddingTools


class sx_tools_WidgetTools:
	_hx_class_name = "sx.tools.WidgetTools"
	_hx_statics = ["sizeDependsOnParent", "positionDependsOnParent", "positionDependsOnSize", "coordinate", "selectedCoordinate", "selectedSide", "size", "findEnabled", "hasOrigin", "hasOffset", "isArrangeable"]

	@staticmethod
	def sizeDependsOnParent(widget):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:23
		return ((widget.get_width().units == "pct") or ((widget.get_height().units == "pct")))

	@staticmethod
	def positionDependsOnParent(widget):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:32
		left = widget.get_left()
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:33
		if (left.selected and ((left.units == "pct"))):
			return True
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:34
		if widget.get_right().selected:
			return True
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:36
		top = widget.get_top()
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:37
		if (top.selected and ((top.units == "pct"))):
			return True
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:38
		if widget.get_bottom().selected:
			return True
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:40
		return False

	@staticmethod
	def positionDependsOnSize(widget):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:49
		return (widget.get_bottom().selected or widget.get_right().selected)

	@staticmethod
	def coordinate(widget,side):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:58
		if ((side) == "left"):
			return widget.get_left()
		elif ((side) == "right"):
			return widget.get_right()
		elif ((side) == "top"):
			return widget.get_top()
		elif ((side) == "bottom"):
			return widget.get_bottom()
		else:
			pass

	@staticmethod
	def selectedCoordinate(widget,orientation):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:73
		if ((orientation) == "horizontal"):
			if widget.get_left().selected:
				return widget.get_left()
			else:
				return widget.get_right()
		elif ((orientation) == "vertical"):
			if widget.get_top().selected:
				return widget.get_top()
			else:
				return widget.get_bottom()
		else:
			pass

	@staticmethod
	def selectedSide(widget,orientation):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:85
		if ((orientation) == "horizontal"):
			if widget.get_left().selected:
				return "left"
			else:
				return "right"
		elif ((orientation) == "vertical"):
			if widget.get_top().selected:
				return "top"
			else:
				return "bottom"
		else:
			pass

	@staticmethod
	def size(widget,orientation):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:96
		if ((orientation) == "horizontal"):
			return widget.get_width()
		elif ((orientation) == "vertical"):
			return widget.get_height()
		else:
			pass

	@staticmethod
	def findEnabled(widget):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:108
		current = widget
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:109
		useNextEnabled = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:111
		while (current is not None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:112
			if useNextEnabled:
				if current.enabled:
					# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:114
					widget = current
					# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:115
					useNextEnabled = False
					# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:116
					break
			elif (not current.enabled):
				useNextEnabled = True
			# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:124
			current = current.get_parent()
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:127
		if useNextEnabled:
			widget = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:131
		return widget

	@staticmethod
	def hasOrigin(widget):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:141
		return (widget._hx___origin is not None)

	@staticmethod
	def hasOffset(widget):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:151
		return (widget._hx___offset is not None)

	@staticmethod
	def isArrangeable(widget):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tools/WidgetTools.hx:160
		return (widget.arrangeable and widget.visible)
sx_tools_WidgetTools._hx_class = sx_tools_WidgetTools


class sx_tween_Actuator:
	_hx_class_name = "sx.tween.Actuator"
	_hx_fields = ["startTime", "done", "__duration", "__setValuesFn", "__setEndValuesFn", "__onUpdate", "__onComplete"]
	_hx_methods = ["delay", "ease", "stop", "complete", "onUpdate", "onComplete", "__update", "__ease"]

	def __init__(self,startTime,duration,setValuesFn,setEndValuesFn):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:14
		self.startTime = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:16
		self.done = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:19
		self._hx___duration = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:21
		self._hx___setValuesFn = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:23
		self._hx___setEndValuesFn = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:25
		self._hx___onUpdate = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:27
		self._hx___onComplete = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:16
		self.done = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:35
		self._hx___duration = duration
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:37
		self.startTime = startTime
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:38
		self._hx___setValuesFn = setValuesFn
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:39
		self._hx___setEndValuesFn = setEndValuesFn

	def delay(self,offset):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:48
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:48
		_hx_local_0 = self
		_hx_local_1 = _hx_local_0.startTime
		_hx_local_0.startTime = (_hx_local_1 + offset)
		_hx_local_0.startTime
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:50
		return self

	def ease(self,fn):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:59
		self._hx___ease = fn
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:61
		return self

	def stop(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:73
		self.done = True

	def complete(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:82
		self._hx___setEndValuesFn()
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:83
		self.done = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:84
		if (self._hx___onComplete is not None):
			self._hx___onComplete()

	def onUpdate(self,fn):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:95
		self._hx___onUpdate = fn
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:97
		return self

	def onComplete(self,fn):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:106
		self._hx___onComplete = fn
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:108
		return self

	def _hx___update(self,currentTime):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:117
		if self.done:
			return
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:119
		time = (currentTime - self.startTime)
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:120
		if (time < 0):
			return
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:122
		if (time >= self._hx___duration):
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:123
			time = self._hx___duration
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:124
			self.done = True
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:125
			self._hx___setEndValuesFn()
		else:
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:127
			value = self._hx___ease((time / self._hx___duration))
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:128
			self._hx___setValuesFn(value)
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:131
		if (self._hx___onUpdate is not None):
			self._hx___onUpdate()
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:132
		if (self.done and ((self._hx___onComplete is not None))):
			self._hx___onComplete()

	def _hx___ease(self,t):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx:141
		return t

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.startTime = None
		_hx_o.done = None
		_hx_o._hx___duration = None
		_hx_o._hx___setValuesFn = None
		_hx_o._hx___setEndValuesFn = None
		_hx_o._hx___onUpdate = None
		_hx_o._hx___onComplete = None
sx_tween_Actuator._hx_class = sx_tween_Actuator


class sx_tween_Tweener:
	_hx_class_name = "sx.tween.Tweener"
	_hx_fields = ["active", "__actuators"]
	_hx_methods = ["stop", "__update", "__createActuator"]
	_hx_statics = ["__time", "__tweeners", "__pausedAll", "__pausedAllTime", "__totalPausedTime", "getTime", "pauseAll", "resumeAll", "stopAll", "update", "initialize", "__updateTime", "get_pausedAll"]

	def __init__(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:36
		self.active = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:39
		self._hx___actuators = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:36
		self.active = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:128
		self._hx___actuators = []

	def stop(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:137
		self.active = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:138
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:138
		_g = 0
		_g1 = self._hx___actuators
		while (_g < len(_g1)):
			actuator = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
			_g = (_g + 1)
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:139
			actuator.stop()

	def _hx___update(self,currentTime):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:150
		needRemoval = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:151
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:151
		_g = 0
		_g1 = self._hx___actuators
		while (_g < len(_g1)):
			actuator = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
			_g = (_g + 1)
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:152
			if (actuator.startTime < currentTime):
				# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:153
				actuator._hx___update(currentTime)
				# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:154
				if actuator.done:
					needRemoval = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:161
		if needRemoval:
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:162
			i = 0
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:163
			while (i < len(self._hx___actuators)):
				if (self._hx___actuators[i] if i >= 0 and i < len(self._hx___actuators) else None).done:
					# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:165
					_this = self._hx___actuators
					pos = i
					if (pos < 0):
						pos = (len(_this) + pos)
					if (pos < 0):
						pos = 0
					res = _this[pos:(pos + 1)]
					del _this[pos:(pos + 1)]
					res
				else:
					i = (i + 1)
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:171
			self.active = (len(self._hx___actuators) > 0)

	def _hx___createActuator(self,duration,setValuesFn,setEndValuesFn):
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:181
		actuator = sx_tween_Actuator(sx_tween_Tweener._hx___time, duration, setValuesFn, setEndValuesFn)
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:183
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:183
		_this = self._hx___actuators
		_this.append(actuator)
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:185
		if (not self.active):
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:186
			self.active = True
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:187
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:187
			_this1 = sx_tween_Tweener._hx___tweeners
			_this1.append(self)
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:190
		return actuator
	pausedAll = None

	@staticmethod
	def getTime():
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:49
		return haxe_Timer.stamp()

	@staticmethod
	def pauseAll():
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:58
		if sx_tween_Tweener._hx___pausedAll:
			return
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:59
		sx_tween_Tweener._hx___pausedAll = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:61
		sx_tween_Tweener._hx___time = (sx_tween_Tweener.getTime() - sx_tween_Tweener._hx___totalPausedTime)
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:62
		sx_tween_Tweener._hx___pausedAllTime = sx_tween_Tweener._hx___time

	@staticmethod
	def resumeAll():
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:71
		if (not sx_tween_Tweener._hx___pausedAll):
			return
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:72
		sx_tween_Tweener._hx___pausedAll = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:74
		sx_tween_Tweener._hx___time = (sx_tween_Tweener.getTime() - sx_tween_Tweener._hx___totalPausedTime)
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:76
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:76
		_hx_local_0 = sx_tween_Tweener
		_hx_local_1 = _hx_local_0._hx___totalPausedTime
		_hx_local_0._hx___totalPausedTime = (_hx_local_1 + ((sx_tween_Tweener._hx___time - sx_tween_Tweener._hx___pausedAllTime)))
		_hx_local_0._hx___totalPausedTime
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:77
		sx_tween_Tweener._hx___time = (sx_tween_Tweener.getTime() - sx_tween_Tweener._hx___totalPausedTime)

	@staticmethod
	def stopAll():
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:86
		_g = 0
		_g1 = sx_tween_Tweener._hx___tweeners
		while (_g < len(_g1)):
			tweener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
			_g = (_g + 1)
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:87
			tweener.stop()

	@staticmethod
	def update():
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:97
		if sx_tween_Tweener._hx___pausedAll:
			return
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:98
		sx_tween_Tweener._hx___time = (sx_tween_Tweener.getTime() - sx_tween_Tweener._hx___totalPausedTime)
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:99
		if (len(sx_tween_Tweener._hx___tweeners) == 0):
			return
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:101
		needRemoval = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:102
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:102
		_g = 0
		_g1 = sx_tween_Tweener._hx___tweeners
		while (_g < len(_g1)):
			tweener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
			_g = (_g + 1)
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:103
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:103
			currentTime = sx_tween_Tweener._hx___time
			needRemoval1 = False
			_g2 = 0
			_g11 = tweener._hx___actuators
			while (_g2 < len(_g11)):
				actuator = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
				_g2 = (_g2 + 1)
				if (actuator.startTime < currentTime):
					actuator._hx___update(currentTime)
					if actuator.done:
						needRemoval1 = True
			if needRemoval1:
				i = 0
				while (i < len(tweener._hx___actuators)):
					if (tweener._hx___actuators[i] if i >= 0 and i < len(tweener._hx___actuators) else None).done:
						_this = tweener._hx___actuators
						pos = i
						if (pos < 0):
							pos = (len(_this) + pos)
						if (pos < 0):
							pos = 0
						res = _this[pos:(pos + 1)]
						del _this[pos:(pos + 1)]
						res
					else:
						i = (i + 1)
				tweener.active = (len(tweener._hx___actuators) > 0)
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:104
			if (not tweener.active):
				needRemoval = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:110
		if needRemoval:
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:111
			i1 = 0
			# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:112
			while (i1 < len(sx_tween_Tweener._hx___tweeners)):
				if (not python_internal_ArrayImpl._get(sx_tween_Tweener._hx___tweeners, i1).active):
					# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:114
					_this1 = sx_tween_Tweener._hx___tweeners
					pos1 = i1
					if (pos1 < 0):
						pos1 = (len(_this1) + pos1)
					if (pos1 < 0):
						pos1 = 0
					res1 = _this1[pos1:(pos1 + 1)]
					del _this1[pos1:(pos1 + 1)]
					res1
				else:
					i1 = (i1 + 1)

	@staticmethod
	def initialize():
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:199
		sx_tween_Tweener._hx___time = (sx_tween_Tweener.getTime() - sx_tween_Tweener._hx___totalPausedTime)

	@staticmethod
	def _hx___updateTime():
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:208
		sx_tween_Tweener._hx___time = (sx_tween_Tweener.getTime() - sx_tween_Tweener._hx___totalPausedTime)

	@staticmethod
	def get_pausedAll():
		# /home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx:213
		return sx_tween_Tweener._hx___pausedAll

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.active = None
		_hx_o._hx___actuators = None
sx_tween_Tweener._hx_class = sx_tween_Tweener


class sx_widgets_base_RendererHolder(sx_widgets_Widget):
	_hx_class_name = "sx.widgets.base.RendererHolder"
	_hx_fields = ["autoSize", "__padding", "__rendererOnResizeIsSet", "__adjustingSize", "__helperSize"]
	_hx_methods = ["dispose", "__createRenderer", "__autoSizeChanged", "__disableRendererResizeListener", "__enableRendererResizeListener", "__rendererResized", "__propertyResized", "__adjustSize", "__paddingChanged", "__widthProviderForPadding", "__heightProviderForPadding", "__getPaddedRendererSize", "__getPaddingPixels", "__getHelperSize", "get___renderer", "set_autoSize", "get_padding", "set_padding"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_widgets_Widget


	def __init__(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:29
		self.autoSize = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:32
		self._hx___padding = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:37
		self._hx___rendererOnResizeIsSet = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:39
		self._hx___adjustingSize = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:41
		self._hx___helperSize = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:39
		self._hx___adjustingSize = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:37
		self._hx___rendererOnResizeIsSet = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:49
		super().__init__()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:51
		self._hx___padding = sx_properties_metric_Padding()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:52
		self._hx___padding.ownerWidth = self._hx___widthProviderForPadding
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:53
		self._hx___padding.ownerHeight = self._hx___heightProviderForPadding
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:54
		self._hx___padding.onComponentsChange.add(self._hx___paddingChanged)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:56
		self.set_autoSize(sx_properties_AutoSize(True))
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:57
		self.autoSize.onChange.add(self._hx___autoSizeChanged)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:59
		self._hx___createRenderer()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:61
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:61
		self.get___renderer().onResize(self._hx___rendererResized)
		self._hx___rendererOnResizeIsSet = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:64
		rendererWidth = self.get___renderer().getWidth()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:65
		rendererHeight = self.get___renderer().getHeight()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:66
		if (((rendererWidth != 0) or ((rendererHeight != 0))) or (not sx_tools_PaddingTools.isZero(self.get_padding()))):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:67
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:67
			size = self.get_width()
			self._hx___adjustingSize = True
			size.set_px((rendererWidth + sx_tools_PaddingTools.sumPx(self.get_padding(),size.orientation)))
			self._hx___adjustingSize = False
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:68
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:68
			size1 = self.get_height()
			self._hx___adjustingSize = True
			size1.set_px((rendererHeight + sx_tools_PaddingTools.sumPx(self.get_padding(),size1.orientation)))
			self._hx___adjustingSize = False

	def dispose(self,disposeChildren = True):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:77
		if (disposeChildren is None):
			disposeChildren = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:78
		super().dispose(disposeChildren)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:80
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:80
		self.get___renderer().onResize(None)
		self._hx___rendererOnResizeIsSet = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:81
		self.get___renderer().dispose()

	def _hx___createRenderer(self):
		pass

	def _hx___autoSizeChanged(self,widthChanged,heightChanged):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:101
		if self._hx___rendererOnResizeIsSet:
			if self.autoSize.neither():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:102
				self.get___renderer().onResize(None)
				self._hx___rendererOnResizeIsSet = False
		elif self.autoSize.either():
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:104
			self.get___renderer().onResize(self._hx___rendererResized)
			self._hx___rendererOnResizeIsSet = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:107
		if widthChanged:
			if self.autoSize.get_width():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:109
				size = self.get_width()
				rendererSizePx = self.get___renderer().getWidth()
				self._hx___adjustingSize = True
				size.set_px((rendererSizePx + sx_tools_PaddingTools.sumPx(self.get_padding(),size.orientation)))
				self._hx___adjustingSize = False
			else:
				self.get___renderer().setAvailableAreaWidth((self.get_width().get_px() - sx_tools_PaddingTools.sumPx(self.get_padding(),"horizontal")))
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:114
		if heightChanged:
			if self.autoSize.get_height():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:116
				size1 = self.get_height()
				rendererSizePx1 = self.get___renderer().getHeight()
				self._hx___adjustingSize = True
				size1.set_px((rendererSizePx1 + sx_tools_PaddingTools.sumPx(self.get_padding(),size1.orientation)))
				self._hx___adjustingSize = False
			else:
				self.get___renderer().setAvailableAreaHeight((self.get_height().get_px() - sx_tools_PaddingTools.sumPx(self.get_padding(),"vertical")))

	def _hx___disableRendererResizeListener(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:129
		self.get___renderer().onResize(None)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:130
		self._hx___rendererOnResizeIsSet = False

	def _hx___enableRendererResizeListener(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:139
		self.get___renderer().onResize(self._hx___rendererResized)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:140
		self._hx___rendererOnResizeIsSet = True

	def _hx___rendererResized(self,widthPx,heightPx):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:149
		if self.autoSize.get_width():
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:149
			size = self.get_width()
			self._hx___adjustingSize = True
			size.set_px((widthPx + sx_tools_PaddingTools.sumPx(self.get_padding(),size.orientation)))
			self._hx___adjustingSize = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:150
		if self.autoSize.get_height():
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:150
			size1 = self.get_height()
			self._hx___adjustingSize = True
			size1.set_px((heightPx + sx_tools_PaddingTools.sumPx(self.get_padding(),size1.orientation)))
			self._hx___adjustingSize = False

	def _hx___propertyResized(self,changed,previousUnits,previousValue):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:159
		if (not self._hx___adjustingSize):
			if (changed.orientation == "horizontal"):
				if self.autoSize.get_width():
					self.autoSize.set_width(False)
				else:
					self.get___renderer().setAvailableAreaWidth((changed.get_px() - sx_tools_PaddingTools.sumPx(self.get_padding(),"horizontal")))
			elif self.autoSize.get_height():
				self.autoSize.set_height(False)
			else:
				self.get___renderer().setAvailableAreaHeight((changed.get_px() - sx_tools_PaddingTools.sumPx(self.get_padding(),"vertical")))
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:177
		super()._hx___propertyResized(changed,previousUnits,previousValue)

	def _hx___adjustSize(self,size,rendererSizePx):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:186
		self._hx___adjustingSize = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:187
		size.set_px((rendererSizePx + sx_tools_PaddingTools.sumPx(self.get_padding(),size.orientation)))
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:188
		self._hx___adjustingSize = False

	def _hx___paddingChanged(self,horizontal,vertical):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:197
		if horizontal:
			if self.autoSize.get_width():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:199
				size = self.get_width()
				rendererSizePx = self.get___renderer().getWidth()
				self._hx___adjustingSize = True
				size.set_px((rendererSizePx + sx_tools_PaddingTools.sumPx(self.get_padding(),size.orientation)))
				self._hx___adjustingSize = False
			else:
				self.get___renderer().setAvailableAreaWidth((self.get_width().get_px() - sx_tools_PaddingTools.sumPx(self.get_padding(),"horizontal")))
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:204
		if vertical:
			if self.autoSize.get_height():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:206
				size1 = self.get_height()
				rendererSizePx1 = self.get___renderer().getHeight()
				self._hx___adjustingSize = True
				size1.set_px((rendererSizePx1 + sx_tools_PaddingTools.sumPx(self.get_padding(),size1.orientation)))
				self._hx___adjustingSize = False
			else:
				self.get___renderer().setAvailableAreaHeight((self.get_height().get_px() - sx_tools_PaddingTools.sumPx(self.get_padding(),"vertical")))

	def _hx___widthProviderForPadding(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:219
		if self.autoSize.get_width():
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:220
			helperSize = None
			paddingSide1 = self.get_padding().get_left()
			paddingSide2 = self.get_padding().get_right()
			rendererSizePx = self.get___renderer().getWidth()
			paddingSide1Px = None
			_g = paddingSide1.units
			if ((_g) == "pct"):
				rendererSize = None
				if (paddingSide1.orientation == "horizontal"):
					rendererSize = self.get___renderer().getWidth()
				else:
					rendererSize = self.get___renderer().getHeight()
				holderSize = None
				_g1 = paddingSide2.units
				if ((_g1) == "pct"):
					holderSize = (rendererSize / ((0.01 * (((100 - paddingSide1.get_pct()) - paddingSide2.get_pct())))))
				else:
					holderSize = (((rendererSize + paddingSide2.get_px())) / ((0.01 * ((100 - paddingSide1.get_pct())))))
				paddingSide1Px = ((paddingSide1.get_pct() * 0.01) * holderSize)
			else:
				paddingSide1Px = paddingSide1.get_px()
			paddingSide2Px = None
			_g2 = paddingSide2.units
			if ((_g2) == "pct"):
				rendererSize1 = None
				if (paddingSide2.orientation == "horizontal"):
					rendererSize1 = self.get___renderer().getWidth()
				else:
					rendererSize1 = self.get___renderer().getHeight()
				holderSize1 = None
				_g11 = paddingSide1.units
				if ((_g11) == "pct"):
					holderSize1 = (rendererSize1 / ((0.01 * (((100 - paddingSide2.get_pct()) - paddingSide1.get_pct())))))
				else:
					holderSize1 = (((rendererSize1 + paddingSide1.get_px())) / ((0.01 * ((100 - paddingSide2.get_pct())))))
				paddingSide2Px = ((paddingSide2.get_pct() * 0.01) * holderSize1)
			else:
				paddingSide2Px = paddingSide2.get_px()
			helperSize1 = None
			if (self._hx___helperSize is None):
				self._hx___helperSize = sx_properties_metric_Size()
			helperSize1 = self._hx___helperSize
			helperSize1.set_px(((rendererSizePx + paddingSide1Px) + paddingSide2Px))
			helperSize = self._hx___helperSize
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:222
			return helperSize
		else:
			return self.get_width()

	def _hx___heightProviderForPadding(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:235
		if self.autoSize.get_width():
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:236
			helperSize = None
			paddingSide1 = self.get_padding().get_top()
			paddingSide2 = self.get_padding().get_bottom()
			rendererSizePx = self.get___renderer().getHeight()
			paddingSide1Px = None
			_g = paddingSide1.units
			if ((_g) == "pct"):
				rendererSize = None
				if (paddingSide1.orientation == "horizontal"):
					rendererSize = self.get___renderer().getWidth()
				else:
					rendererSize = self.get___renderer().getHeight()
				holderSize = None
				_g1 = paddingSide2.units
				if ((_g1) == "pct"):
					holderSize = (rendererSize / ((0.01 * (((100 - paddingSide1.get_pct()) - paddingSide2.get_pct())))))
				else:
					holderSize = (((rendererSize + paddingSide2.get_px())) / ((0.01 * ((100 - paddingSide1.get_pct())))))
				paddingSide1Px = ((paddingSide1.get_pct() * 0.01) * holderSize)
			else:
				paddingSide1Px = paddingSide1.get_px()
			paddingSide2Px = None
			_g2 = paddingSide2.units
			if ((_g2) == "pct"):
				rendererSize1 = None
				if (paddingSide2.orientation == "horizontal"):
					rendererSize1 = self.get___renderer().getWidth()
				else:
					rendererSize1 = self.get___renderer().getHeight()
				holderSize1 = None
				_g11 = paddingSide1.units
				if ((_g11) == "pct"):
					holderSize1 = (rendererSize1 / ((0.01 * (((100 - paddingSide2.get_pct()) - paddingSide1.get_pct())))))
				else:
					holderSize1 = (((rendererSize1 + paddingSide1.get_px())) / ((0.01 * ((100 - paddingSide2.get_pct())))))
				paddingSide2Px = ((paddingSide2.get_pct() * 0.01) * holderSize1)
			else:
				paddingSide2Px = paddingSide2.get_px()
			helperSize1 = None
			if (self._hx___helperSize is None):
				self._hx___helperSize = sx_properties_metric_Size()
			helperSize1 = self._hx___helperSize
			helperSize1.set_px(((rendererSizePx + paddingSide1Px) + paddingSide2Px))
			helperSize = self._hx___helperSize
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:238
			return helperSize
		else:
			return self.get_width()

	def _hx___getPaddedRendererSize(self,paddingSide1,paddingSide2,rendererSizePx):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:251
		paddingSide1Px = None
		_g = paddingSide1.units
		if ((_g) == "pct"):
			rendererSize = None
			if (paddingSide1.orientation == "horizontal"):
				rendererSize = self.get___renderer().getWidth()
			else:
				rendererSize = self.get___renderer().getHeight()
			holderSize = None
			_g1 = paddingSide2.units
			if ((_g1) == "pct"):
				holderSize = (rendererSize / ((0.01 * (((100 - paddingSide1.get_pct()) - paddingSide2.get_pct())))))
			else:
				holderSize = (((rendererSize + paddingSide2.get_px())) / ((0.01 * ((100 - paddingSide1.get_pct())))))
			paddingSide1Px = ((paddingSide1.get_pct() * 0.01) * holderSize)
		else:
			paddingSide1Px = paddingSide1.get_px()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:252
		paddingSide2Px = None
		_g2 = paddingSide2.units
		if ((_g2) == "pct"):
			rendererSize1 = None
			if (paddingSide2.orientation == "horizontal"):
				rendererSize1 = self.get___renderer().getWidth()
			else:
				rendererSize1 = self.get___renderer().getHeight()
			holderSize1 = None
			_g11 = paddingSide1.units
			if ((_g11) == "pct"):
				holderSize1 = (rendererSize1 / ((0.01 * (((100 - paddingSide2.get_pct()) - paddingSide1.get_pct())))))
			else:
				holderSize1 = (((rendererSize1 + paddingSide1.get_px())) / ((0.01 * ((100 - paddingSide2.get_pct())))))
			paddingSide2Px = ((paddingSide2.get_pct() * 0.01) * holderSize1)
		else:
			paddingSide2Px = paddingSide2.get_px()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:254
		helperSize = None
		if (self._hx___helperSize is None):
			self._hx___helperSize = sx_properties_metric_Size()
		helperSize = self._hx___helperSize
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:255
		helperSize.set_px(((rendererSizePx + paddingSide1Px) + paddingSide2Px))
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:257
		return self._hx___helperSize

	def _hx___getPaddingPixels(self,paddingSide,oppositeSide):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:266
		_g = paddingSide.units
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:267
		if ((_g) == "pct"):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:268
			rendererSize = None
			if (paddingSide.orientation == "horizontal"):
				rendererSize = self.get___renderer().getWidth()
			else:
				rendererSize = self.get___renderer().getHeight()
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:269
			holderSize = None
			_g1 = oppositeSide.units
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:270
			if ((_g1) == "pct"):
				holderSize = (rendererSize / ((0.01 * (((100 - paddingSide.get_pct()) - oppositeSide.get_pct())))))
			else:
				holderSize = (((rendererSize + oppositeSide.get_px())) / ((0.01 * ((100 - paddingSide.get_pct())))))
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:274
			return ((paddingSide.get_pct() * 0.01) * holderSize)
		else:
			return paddingSide.get_px()

	def _hx___getHelperSize(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:287
		if (self._hx___helperSize is None):
			self._hx___helperSize = sx_properties_metric_Size()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:289
		return self._hx___helperSize

	def get___renderer(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:300
		return None

	def set_autoSize(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:309
		if (self.autoSize is None):
			self.autoSize = value
		else:
			self.autoSize.copyValueFrom(value)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:315
		return self.autoSize

	def get_padding(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:320
		return self._hx___padding

	def set_padding(self,v):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx:323
		self._hx___padding.copyValueFrom(v)
		return self._hx___padding

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.autoSize = None
		_hx_o._hx___padding = None
		_hx_o._hx___rendererOnResizeIsSet = None
		_hx_o._hx___adjustingSize = None
		_hx_o._hx___helperSize = None
sx_widgets_base_RendererHolder._hx_class = sx_widgets_base_RendererHolder


class sx_widgets_Bmp(sx_widgets_base_RendererHolder):
	_hx_class_name = "sx.widgets.Bmp"
	_hx_fields = ["bitmapData", "renderer", "keepAspect", "smooth", "__dontUpdateBitmapScaling"]
	_hx_methods = ["__createRenderer", "__propertyResized", "__paddingChanged", "__autoSizeChanged", "__updateBitmapScaling", "__scaleBitmapHeight", "__scaleBitmapWidth", "__scaleBitmapBoth", "set_bitmapData", "set_keepAspect", "set_smooth", "get___renderer"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_widgets_base_RendererHolder


	def __init__(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:21
		self.bitmapData = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:23
		self.renderer = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:35
		self.keepAspect = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:37
		self.smooth = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:40
		self._hx___dontUpdateBitmapScaling = None
		self._hx___dontUpdateBitmapScaling = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:37
		self.smooth = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:35
		self.keepAspect = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:18
		super().__init__()

	def _hx___createRenderer(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:48
		self.renderer = sx_Sx.get_backendManager().bitmapRenderer(self)

	def _hx___propertyResized(self,changed,previousUnits,previousValue):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:57
		if self._hx___dontUpdateBitmapScaling:
			super()._hx___propertyResized(changed,previousUnits,previousValue)
		else:
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:60
			self._hx___dontUpdateBitmapScaling = True
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:61
			super()._hx___propertyResized(changed,previousUnits,previousValue)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:62
			if self.autoSize.both():
				self.renderer.setBitmapScale(1,1)
			elif self.autoSize.get_width():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:62
				bitmapHeight = None
				_this = self.renderer
				if ((_this._hx___bitmapData is None) or ((Reflect.field(_this._hx___bitmapData,"height") is None))):
					bitmapHeight = 0
				else:
					bitmapHeight = Reflect.field(_this._hx___bitmapData,"height")
				if (bitmapHeight <= 0):
					self.renderer.setBitmapScale(0,0)
				elif self.keepAspect:
					self.renderer.setBitmapScale(1,1)
				else:
					renderHeight = (self.get_height().get_px() - sx_tools_PaddingTools.sumPx(self.get_padding(),"vertical"))
					if (renderHeight <= 0):
						self.renderer.setBitmapScale(0,0)
					else:
						scaleY = (renderHeight / bitmapHeight)
						self.renderer.setBitmapScale(1,scaleY)
			elif self.autoSize.get_height():
				bitmapWidth = None
				_this1 = self.renderer
				if ((_this1._hx___bitmapData is None) or ((Reflect.field(_this1._hx___bitmapData,"width") is None))):
					bitmapWidth = 0
				else:
					bitmapWidth = Reflect.field(_this1._hx___bitmapData,"width")
				if (bitmapWidth <= 0):
					self.renderer.setBitmapScale(0,0)
				elif self.keepAspect:
					self.renderer.setBitmapScale(1,1)
				else:
					renderWidth = (self.get_width().get_px() - sx_tools_PaddingTools.sumPx(self.get_padding(),"horizontal"))
					if (renderWidth <= 0):
						self.renderer.setBitmapScale(0,0)
					else:
						scaleX = (renderWidth / bitmapWidth)
						self.renderer.setBitmapScale(scaleX,1)
			else:
				bitmapWidth1 = None
				_this2 = self.renderer
				if ((_this2._hx___bitmapData is None) or ((Reflect.field(_this2._hx___bitmapData,"width") is None))):
					bitmapWidth1 = 0
				else:
					bitmapWidth1 = Reflect.field(_this2._hx___bitmapData,"width")
				bitmapHeight1 = None
				_this3 = self.renderer
				if ((_this3._hx___bitmapData is None) or ((Reflect.field(_this3._hx___bitmapData,"height") is None))):
					bitmapHeight1 = 0
				else:
					bitmapHeight1 = Reflect.field(_this3._hx___bitmapData,"height")
				if ((bitmapWidth1 <= 0) or ((bitmapHeight1 <= 0))):
					self.renderer.setBitmapScale(0,0)
				else:
					renderWidth1 = ((self.get_width().get_px() - self.get_padding().get_left().get_px()) - self.get_padding().get_right().get_px())
					renderHeight1 = ((self.get_height().get_px() - self.get_padding().get_top().get_px()) - self.get_padding().get_bottom().get_px())
					if ((renderWidth1 <= 0) or ((renderHeight1 <= 0))):
						self.renderer.setBitmapScale(0,0)
					else:
						scaleX1 = (renderWidth1 / bitmapWidth1)
						scaleY1 = (renderHeight1 / bitmapHeight1)
						if self.keepAspect:
							if (scaleX1 < scaleY1):
								self.renderer.setBitmapScale(scaleX1,scaleX1)
							else:
								self.renderer.setBitmapScale(scaleY1,scaleY1)
						else:
							self.renderer.setBitmapScale(scaleX1,scaleY1)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:63
			self._hx___dontUpdateBitmapScaling = False

	def _hx___paddingChanged(self,horizontal,vertical):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:73
		if self._hx___dontUpdateBitmapScaling:
			super()._hx___paddingChanged(horizontal,vertical)
		else:
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:76
			self._hx___dontUpdateBitmapScaling = True
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:77
			if self.autoSize.both():
				self.renderer.setBitmapScale(1,1)
			elif self.autoSize.get_width():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:77
				bitmapHeight = None
				_this = self.renderer
				if ((_this._hx___bitmapData is None) or ((Reflect.field(_this._hx___bitmapData,"height") is None))):
					bitmapHeight = 0
				else:
					bitmapHeight = Reflect.field(_this._hx___bitmapData,"height")
				if (bitmapHeight <= 0):
					self.renderer.setBitmapScale(0,0)
				elif self.keepAspect:
					self.renderer.setBitmapScale(1,1)
				else:
					renderHeight = (self.get_height().get_px() - sx_tools_PaddingTools.sumPx(self.get_padding(),"vertical"))
					if (renderHeight <= 0):
						self.renderer.setBitmapScale(0,0)
					else:
						scaleY = (renderHeight / bitmapHeight)
						self.renderer.setBitmapScale(1,scaleY)
			elif self.autoSize.get_height():
				bitmapWidth = None
				_this1 = self.renderer
				if ((_this1._hx___bitmapData is None) or ((Reflect.field(_this1._hx___bitmapData,"width") is None))):
					bitmapWidth = 0
				else:
					bitmapWidth = Reflect.field(_this1._hx___bitmapData,"width")
				if (bitmapWidth <= 0):
					self.renderer.setBitmapScale(0,0)
				elif self.keepAspect:
					self.renderer.setBitmapScale(1,1)
				else:
					renderWidth = (self.get_width().get_px() - sx_tools_PaddingTools.sumPx(self.get_padding(),"horizontal"))
					if (renderWidth <= 0):
						self.renderer.setBitmapScale(0,0)
					else:
						scaleX = (renderWidth / bitmapWidth)
						self.renderer.setBitmapScale(scaleX,1)
			else:
				bitmapWidth1 = None
				_this2 = self.renderer
				if ((_this2._hx___bitmapData is None) or ((Reflect.field(_this2._hx___bitmapData,"width") is None))):
					bitmapWidth1 = 0
				else:
					bitmapWidth1 = Reflect.field(_this2._hx___bitmapData,"width")
				bitmapHeight1 = None
				_this3 = self.renderer
				if ((_this3._hx___bitmapData is None) or ((Reflect.field(_this3._hx___bitmapData,"height") is None))):
					bitmapHeight1 = 0
				else:
					bitmapHeight1 = Reflect.field(_this3._hx___bitmapData,"height")
				if ((bitmapWidth1 <= 0) or ((bitmapHeight1 <= 0))):
					self.renderer.setBitmapScale(0,0)
				else:
					renderWidth1 = ((self.get_width().get_px() - self.get_padding().get_left().get_px()) - self.get_padding().get_right().get_px())
					renderHeight1 = ((self.get_height().get_px() - self.get_padding().get_top().get_px()) - self.get_padding().get_bottom().get_px())
					if ((renderWidth1 <= 0) or ((renderHeight1 <= 0))):
						self.renderer.setBitmapScale(0,0)
					else:
						scaleX1 = (renderWidth1 / bitmapWidth1)
						scaleY1 = (renderHeight1 / bitmapHeight1)
						if self.keepAspect:
							if (scaleX1 < scaleY1):
								self.renderer.setBitmapScale(scaleX1,scaleX1)
							else:
								self.renderer.setBitmapScale(scaleY1,scaleY1)
						else:
							self.renderer.setBitmapScale(scaleX1,scaleY1)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:78
			super()._hx___paddingChanged(horizontal,vertical)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:79
			self._hx___dontUpdateBitmapScaling = False

	def _hx___autoSizeChanged(self,widthChanged,heightChanged):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:89
		if self._hx___dontUpdateBitmapScaling:
			super()._hx___paddingChanged(widthChanged,heightChanged)
		else:
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:92
			self._hx___dontUpdateBitmapScaling = True
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:93
			if self.autoSize.both():
				self.renderer.setBitmapScale(1,1)
			elif self.autoSize.get_width():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:93
				bitmapHeight = None
				_this = self.renderer
				if ((_this._hx___bitmapData is None) or ((Reflect.field(_this._hx___bitmapData,"height") is None))):
					bitmapHeight = 0
				else:
					bitmapHeight = Reflect.field(_this._hx___bitmapData,"height")
				if (bitmapHeight <= 0):
					self.renderer.setBitmapScale(0,0)
				elif self.keepAspect:
					self.renderer.setBitmapScale(1,1)
				else:
					renderHeight = (self.get_height().get_px() - sx_tools_PaddingTools.sumPx(self.get_padding(),"vertical"))
					if (renderHeight <= 0):
						self.renderer.setBitmapScale(0,0)
					else:
						scaleY = (renderHeight / bitmapHeight)
						self.renderer.setBitmapScale(1,scaleY)
			elif self.autoSize.get_height():
				bitmapWidth = None
				_this1 = self.renderer
				if ((_this1._hx___bitmapData is None) or ((Reflect.field(_this1._hx___bitmapData,"width") is None))):
					bitmapWidth = 0
				else:
					bitmapWidth = Reflect.field(_this1._hx___bitmapData,"width")
				if (bitmapWidth <= 0):
					self.renderer.setBitmapScale(0,0)
				elif self.keepAspect:
					self.renderer.setBitmapScale(1,1)
				else:
					renderWidth = (self.get_width().get_px() - sx_tools_PaddingTools.sumPx(self.get_padding(),"horizontal"))
					if (renderWidth <= 0):
						self.renderer.setBitmapScale(0,0)
					else:
						scaleX = (renderWidth / bitmapWidth)
						self.renderer.setBitmapScale(scaleX,1)
			else:
				bitmapWidth1 = None
				_this2 = self.renderer
				if ((_this2._hx___bitmapData is None) or ((Reflect.field(_this2._hx___bitmapData,"width") is None))):
					bitmapWidth1 = 0
				else:
					bitmapWidth1 = Reflect.field(_this2._hx___bitmapData,"width")
				bitmapHeight1 = None
				_this3 = self.renderer
				if ((_this3._hx___bitmapData is None) or ((Reflect.field(_this3._hx___bitmapData,"height") is None))):
					bitmapHeight1 = 0
				else:
					bitmapHeight1 = Reflect.field(_this3._hx___bitmapData,"height")
				if ((bitmapWidth1 <= 0) or ((bitmapHeight1 <= 0))):
					self.renderer.setBitmapScale(0,0)
				else:
					renderWidth1 = ((self.get_width().get_px() - self.get_padding().get_left().get_px()) - self.get_padding().get_right().get_px())
					renderHeight1 = ((self.get_height().get_px() - self.get_padding().get_top().get_px()) - self.get_padding().get_bottom().get_px())
					if ((renderWidth1 <= 0) or ((renderHeight1 <= 0))):
						self.renderer.setBitmapScale(0,0)
					else:
						scaleX1 = (renderWidth1 / bitmapWidth1)
						scaleY1 = (renderHeight1 / bitmapHeight1)
						if self.keepAspect:
							if (scaleX1 < scaleY1):
								self.renderer.setBitmapScale(scaleX1,scaleX1)
							else:
								self.renderer.setBitmapScale(scaleY1,scaleY1)
						else:
							self.renderer.setBitmapScale(scaleX1,scaleY1)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:94
			super()._hx___paddingChanged(widthChanged,heightChanged)
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:95
			self._hx___dontUpdateBitmapScaling = False

	def _hx___updateBitmapScaling(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:105
		if self.autoSize.both():
			self.renderer.setBitmapScale(1,1)
		elif self.autoSize.get_width():
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:108
			bitmapHeight = None
			_this = self.renderer
			if ((_this._hx___bitmapData is None) or ((Reflect.field(_this._hx___bitmapData,"height") is None))):
				bitmapHeight = 0
			else:
				bitmapHeight = Reflect.field(_this._hx___bitmapData,"height")
			if (bitmapHeight <= 0):
				self.renderer.setBitmapScale(0,0)
			elif self.keepAspect:
				self.renderer.setBitmapScale(1,1)
			else:
				renderHeight = (self.get_height().get_px() - sx_tools_PaddingTools.sumPx(self.get_padding(),"vertical"))
				if (renderHeight <= 0):
					self.renderer.setBitmapScale(0,0)
				else:
					scaleY = (renderHeight / bitmapHeight)
					self.renderer.setBitmapScale(1,scaleY)
		elif self.autoSize.get_height():
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:110
			bitmapWidth = None
			_this1 = self.renderer
			if ((_this1._hx___bitmapData is None) or ((Reflect.field(_this1._hx___bitmapData,"width") is None))):
				bitmapWidth = 0
			else:
				bitmapWidth = Reflect.field(_this1._hx___bitmapData,"width")
			if (bitmapWidth <= 0):
				self.renderer.setBitmapScale(0,0)
			elif self.keepAspect:
				self.renderer.setBitmapScale(1,1)
			else:
				renderWidth = (self.get_width().get_px() - sx_tools_PaddingTools.sumPx(self.get_padding(),"horizontal"))
				if (renderWidth <= 0):
					self.renderer.setBitmapScale(0,0)
				else:
					scaleX = (renderWidth / bitmapWidth)
					self.renderer.setBitmapScale(scaleX,1)
		else:
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:112
			bitmapWidth1 = None
			_this2 = self.renderer
			if ((_this2._hx___bitmapData is None) or ((Reflect.field(_this2._hx___bitmapData,"width") is None))):
				bitmapWidth1 = 0
			else:
				bitmapWidth1 = Reflect.field(_this2._hx___bitmapData,"width")
			bitmapHeight1 = None
			_this3 = self.renderer
			if ((_this3._hx___bitmapData is None) or ((Reflect.field(_this3._hx___bitmapData,"height") is None))):
				bitmapHeight1 = 0
			else:
				bitmapHeight1 = Reflect.field(_this3._hx___bitmapData,"height")
			if ((bitmapWidth1 <= 0) or ((bitmapHeight1 <= 0))):
				self.renderer.setBitmapScale(0,0)
			else:
				renderWidth1 = ((self.get_width().get_px() - self.get_padding().get_left().get_px()) - self.get_padding().get_right().get_px())
				renderHeight1 = ((self.get_height().get_px() - self.get_padding().get_top().get_px()) - self.get_padding().get_bottom().get_px())
				if ((renderWidth1 <= 0) or ((renderHeight1 <= 0))):
					self.renderer.setBitmapScale(0,0)
				else:
					scaleX1 = (renderWidth1 / bitmapWidth1)
					scaleY1 = (renderHeight1 / bitmapHeight1)
					if self.keepAspect:
						if (scaleX1 < scaleY1):
							self.renderer.setBitmapScale(scaleX1,scaleX1)
						else:
							self.renderer.setBitmapScale(scaleY1,scaleY1)
					else:
						self.renderer.setBitmapScale(scaleX1,scaleY1)

	def _hx___scaleBitmapHeight(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:122
		bitmapHeight = None
		_this = self.renderer
		if ((_this._hx___bitmapData is None) or ((Reflect.field(_this._hx___bitmapData,"height") is None))):
			bitmapHeight = 0
		else:
			bitmapHeight = Reflect.field(_this._hx___bitmapData,"height")
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:124
		if (bitmapHeight <= 0):
			self.renderer.setBitmapScale(0,0)
		elif self.keepAspect:
			self.renderer.setBitmapScale(1,1)
		else:
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:132
			renderHeight = (self.get_height().get_px() - sx_tools_PaddingTools.sumPx(self.get_padding(),"vertical"))
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:133
			if (renderHeight <= 0):
				self.renderer.setBitmapScale(0,0)
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:136
				scaleY = (renderHeight / bitmapHeight)
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:137
				self.renderer.setBitmapScale(1,scaleY)

	def _hx___scaleBitmapWidth(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:149
		bitmapWidth = None
		_this = self.renderer
		if ((_this._hx___bitmapData is None) or ((Reflect.field(_this._hx___bitmapData,"width") is None))):
			bitmapWidth = 0
		else:
			bitmapWidth = Reflect.field(_this._hx___bitmapData,"width")
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:151
		if (bitmapWidth <= 0):
			self.renderer.setBitmapScale(0,0)
		elif self.keepAspect:
			self.renderer.setBitmapScale(1,1)
		else:
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:159
			renderWidth = (self.get_width().get_px() - sx_tools_PaddingTools.sumPx(self.get_padding(),"horizontal"))
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:160
			if (renderWidth <= 0):
				self.renderer.setBitmapScale(0,0)
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:163
				scaleX = (renderWidth / bitmapWidth)
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:164
				self.renderer.setBitmapScale(scaleX,1)

	def _hx___scaleBitmapBoth(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:176
		bitmapWidth = None
		_this = self.renderer
		if ((_this._hx___bitmapData is None) or ((Reflect.field(_this._hx___bitmapData,"width") is None))):
			bitmapWidth = 0
		else:
			bitmapWidth = Reflect.field(_this._hx___bitmapData,"width")
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:177
		bitmapHeight = None
		_this1 = self.renderer
		if ((_this1._hx___bitmapData is None) or ((Reflect.field(_this1._hx___bitmapData,"height") is None))):
			bitmapHeight = 0
		else:
			bitmapHeight = Reflect.field(_this1._hx___bitmapData,"height")
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:179
		if ((bitmapWidth <= 0) or ((bitmapHeight <= 0))):
			self.renderer.setBitmapScale(0,0)
		else:
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:183
			renderWidth = ((self.get_width().get_px() - self.get_padding().get_left().get_px()) - self.get_padding().get_right().get_px())
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:184
			renderHeight = ((self.get_height().get_px() - self.get_padding().get_top().get_px()) - self.get_padding().get_bottom().get_px())
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:186
			if ((renderWidth <= 0) or ((renderHeight <= 0))):
				self.renderer.setBitmapScale(0,0)
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:190
				scaleX = (renderWidth / bitmapWidth)
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:191
				scaleY = (renderHeight / bitmapHeight)
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:193
				if self.keepAspect:
					if (scaleX < scaleY):
						self.renderer.setBitmapScale(scaleX,scaleX)
					else:
						self.renderer.setBitmapScale(scaleY,scaleY)
				else:
					self.renderer.setBitmapScale(scaleX,scaleY)

	def set_bitmapData(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:212
		self.bitmapData = value
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:213
		self.renderer.setBitmapData(self.bitmapData)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:215
		return value

	def set_keepAspect(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:224
		if (self.keepAspect != value):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:225
			self.keepAspect = value
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:226
			if self.autoSize.both():
				self.renderer.setBitmapScale(1,1)
			elif self.autoSize.get_width():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:226
				bitmapHeight = None
				_this = self.renderer
				if ((_this._hx___bitmapData is None) or ((Reflect.field(_this._hx___bitmapData,"height") is None))):
					bitmapHeight = 0
				else:
					bitmapHeight = Reflect.field(_this._hx___bitmapData,"height")
				if (bitmapHeight <= 0):
					self.renderer.setBitmapScale(0,0)
				elif self.keepAspect:
					self.renderer.setBitmapScale(1,1)
				else:
					renderHeight = (self.get_height().get_px() - sx_tools_PaddingTools.sumPx(self.get_padding(),"vertical"))
					if (renderHeight <= 0):
						self.renderer.setBitmapScale(0,0)
					else:
						scaleY = (renderHeight / bitmapHeight)
						self.renderer.setBitmapScale(1,scaleY)
			elif self.autoSize.get_height():
				bitmapWidth = None
				_this1 = self.renderer
				if ((_this1._hx___bitmapData is None) or ((Reflect.field(_this1._hx___bitmapData,"width") is None))):
					bitmapWidth = 0
				else:
					bitmapWidth = Reflect.field(_this1._hx___bitmapData,"width")
				if (bitmapWidth <= 0):
					self.renderer.setBitmapScale(0,0)
				elif self.keepAspect:
					self.renderer.setBitmapScale(1,1)
				else:
					renderWidth = (self.get_width().get_px() - sx_tools_PaddingTools.sumPx(self.get_padding(),"horizontal"))
					if (renderWidth <= 0):
						self.renderer.setBitmapScale(0,0)
					else:
						scaleX = (renderWidth / bitmapWidth)
						self.renderer.setBitmapScale(scaleX,1)
			else:
				bitmapWidth1 = None
				_this2 = self.renderer
				if ((_this2._hx___bitmapData is None) or ((Reflect.field(_this2._hx___bitmapData,"width") is None))):
					bitmapWidth1 = 0
				else:
					bitmapWidth1 = Reflect.field(_this2._hx___bitmapData,"width")
				bitmapHeight1 = None
				_this3 = self.renderer
				if ((_this3._hx___bitmapData is None) or ((Reflect.field(_this3._hx___bitmapData,"height") is None))):
					bitmapHeight1 = 0
				else:
					bitmapHeight1 = Reflect.field(_this3._hx___bitmapData,"height")
				if ((bitmapWidth1 <= 0) or ((bitmapHeight1 <= 0))):
					self.renderer.setBitmapScale(0,0)
				else:
					renderWidth1 = ((self.get_width().get_px() - self.get_padding().get_left().get_px()) - self.get_padding().get_right().get_px())
					renderHeight1 = ((self.get_height().get_px() - self.get_padding().get_top().get_px()) - self.get_padding().get_bottom().get_px())
					if ((renderWidth1 <= 0) or ((renderHeight1 <= 0))):
						self.renderer.setBitmapScale(0,0)
					else:
						scaleX1 = (renderWidth1 / bitmapWidth1)
						scaleY1 = (renderHeight1 / bitmapHeight1)
						if self.keepAspect:
							if (scaleX1 < scaleY1):
								self.renderer.setBitmapScale(scaleX1,scaleX1)
							else:
								self.renderer.setBitmapScale(scaleY1,scaleY1)
						else:
							self.renderer.setBitmapScale(scaleX1,scaleY1)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:229
		return value

	def set_smooth(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:238
		if (self.smooth != value):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:239
			self.smooth = value
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:240
			self.renderer.setBitmapSmoothing(self.smooth)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:243
		return value

	def get___renderer(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx:248
		return self.renderer

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o.bitmapData = None
		_hx_o.renderer = None
		_hx_o.keepAspect = None
		_hx_o.smooth = None
		_hx_o._hx___dontUpdateBitmapScaling = None
sx_widgets_Bmp._hx_class = sx_widgets_Bmp


class sx_widgets_Text(sx_widgets_base_RendererHolder):
	_hx_class_name = "sx.widgets.Text"
	_hx_fields = ["__text", "renderer"]
	_hx_methods = ["getTextFormat", "setTextFormat", "__createRenderer", "set_text", "get_text", "get___renderer"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_widgets_base_RendererHolder


	def __init__(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx:18
		self._hx___text = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx:20
		self.renderer = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx:18
		self._hx___text = ""
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx:13
		super().__init__()

	def getTextFormat(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx:28
		return self.renderer.getFormat()

	def setTextFormat(self,format):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx:37
		self.renderer.setFormat(format)
		return

	def _hx___createRenderer(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx:46
		self.renderer = sx_Sx.get_backendManager().textRenderer(self)

	def set_text(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx:55
		self._hx___text = value
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx:56
		self.renderer.setText(self._hx___text)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx:58
		return value

	def get_text(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx:63
		return self._hx___text

	def get___renderer(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/Text.hx:64
		return self.renderer

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___text = None
		_hx_o.renderer = None
sx_widgets_Text._hx_class = sx_widgets_Text


class sx_widgets_TextInput(sx_widgets_base_RendererHolder):
	_hx_class_name = "sx.widgets.TextInput"
	_hx_fields = ["__text", "__invitation", "renderer", "__onChange", "__hasCursor"]
	_hx_methods = ["getTextFormat", "setTextFormat", "__createRenderer", "set_text", "__rendererTextChanged", "__rendererReceiveCursor", "__rendererLoseCursor", "__updateRendererContent", "set_invitation", "get_invitation", "get_text", "get___renderer", "get_onChange"]
	_hx_statics = []
	_hx_interfaces = []
	_hx_super = sx_widgets_base_RendererHolder


	def __init__(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:20
		self._hx___text = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:23
		self._hx___invitation = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:25
		self.renderer = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:29
		self._hx___onChange = None
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:32
		self._hx___hasCursor = None
		self._hx___hasCursor = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:23
		self._hx___invitation = ""
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:20
		self._hx___text = ""
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:40
		super().__init__()
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:41
		self.get_width().set_dip(100)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:42
		self.renderer.onTextChange(self._hx___rendererTextChanged)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:43
		self.renderer.onReceiveCursor(self._hx___rendererReceiveCursor)
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:44
		self.renderer.onLoseCursor(self._hx___rendererLoseCursor)

	def getTextFormat(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:53
		return self.renderer.getFormat()

	def setTextFormat(self,format):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:62
		self.renderer.setFormat(format)
		return

	def _hx___createRenderer(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:71
		self.renderer = sx_Sx.get_backendManager().textInputRenderer(self)

	def set_text(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:80
		self._hx___text = value
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:81
		if (self._hx___hasCursor or ((len(self.get_text()) > 0))):
			self.renderer.setText(self.get_text())
		else:
			self.renderer.setText(self.get_invitation())
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
		if ((self._hx___onChange is not None) and ((len(self._hx___onChange._hx___listeners) > 0))):
			if self._hx___onChange._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				_g = 0
				_g1 = self._hx___onChange._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(self)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
				False
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
				self._hx___onChange._hx___listenersInUse = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				_g2 = 0
				_g11 = self._hx___onChange._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(self)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
				self._hx___onChange._hx___listenersInUse = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:85
		return value

	def _hx___rendererTextChanged(self,newText):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:94
		self._hx___text = newText
		# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:146
		if ((self._hx___onChange is not None) and ((len(self._hx___onChange._hx___listeners) > 0))):
			if self._hx___onChange._hx___listenersInUse:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:148
				_g = 0
				_g1 = self._hx___onChange._hx___listeners
				while (_g < len(_g1)):
					listener = (_g1[_g] if _g >= 0 and _g < len(_g1) else None)
					_g = (_g + 1)
					listener(self)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:149
				False
			else:
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:151
				self._hx___onChange._hx___listenersInUse = True
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:152
				_g2 = 0
				_g11 = self._hx___onChange._hx___listeners
				while (_g2 < len(_g11)):
					listener1 = (_g11[_g2] if _g2 >= 0 and _g2 < len(_g11) else None)
					_g2 = (_g2 + 1)
					listener1(self)
				# /home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx:153
				self._hx___onChange._hx___listenersInUse = False

	def _hx___rendererReceiveCursor(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:104
		self._hx___hasCursor = True
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:105
		if (self._hx___hasCursor or ((len(self.get_text()) > 0))):
			self.renderer.setText(self.get_text())
		else:
			self.renderer.setText(self.get_invitation())

	def _hx___rendererLoseCursor(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:114
		self._hx___hasCursor = False
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:115
		if (self._hx___hasCursor or ((len(self.get_text()) > 0))):
			self.renderer.setText(self.get_text())
		else:
			self.renderer.setText(self.get_invitation())

	def _hx___updateRendererContent(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:125
		if (self._hx___hasCursor or ((len(self.get_text()) > 0))):
			self.renderer.setText(self.get_text())
		else:
			self.renderer.setText(self.get_invitation())

	def set_invitation(self,value):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:138
		self._hx___invitation = value
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:139
		if (self._hx___hasCursor or ((len(self.get_text()) > 0))):
			self.renderer.setText(self.get_text())
		else:
			self.renderer.setText(self.get_invitation())
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:141
		return value

	def get_invitation(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:146
		return self._hx___invitation

	def get_text(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:147
		return self._hx___text

	def get___renderer(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:148
		return self.renderer

	def get_onChange(self):
		# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:149
		if (self._hx___onChange is None):
			# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:149
			def _hx_local_1():
				# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:149
				def _hx_local_0():
					# /home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx:149
					self._hx___onChange = sx_signals_Signal()
					return self._hx___onChange
				return _hx_local_0()
			return _hx_local_1()
		else:
			return self._hx___onChange

	@staticmethod
	def _hx_empty_init(_hx_o):
		_hx_o._hx___text = None
		_hx_o._hx___invitation = None
		_hx_o.renderer = None
		_hx_o._hx___onChange = None
		_hx_o._hx___hasCursor = None
sx_widgets_TextInput._hx_class = sx_widgets_TextInput

# /usr/lib/haxe/std/python/_std/Math.hx:135
Math.NEGATIVE_INFINITY = float("-inf")
# /usr/lib/haxe/std/python/_std/Math.hx:136
Math.POSITIVE_INFINITY = float("inf")
# /usr/lib/haxe/std/python/_std/Math.hx:137
Math.NaN = float("nan")
# /usr/lib/haxe/std/python/_std/Math.hx:138
Math.PI = python_lib_Math.pi

sx_widgets_Widget.MAX_RESIZE_DEPTH = 5
hunit_TestCase._hx___rtti = "<class path=\"hunit.TestCase\" params=\"\">\n\t<getMockData public=\"1\" set=\"method\" line=\"54\" static=\"1\">\n\t\t<f a=\"mock\">\n\t\t\t<c path=\"hunit.mock.IMock\"/>\n\t\t\t<c path=\"hunit.mock.MockData\"/>\n\t\t</f>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</getMockData>\n\t<match public=\"1\" set=\"accessor\"><c path=\"hunit.match.MatchFactory\"/></match>\n\t<assert public=\"1\" set=\"accessor\"><c path=\"hunit.assert.AssertFactory\"/></assert>\n\t<__hu_state public=\"1\">\n\t\t<t path=\"Null\"><c path=\"hunit.TestState\"/></t>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</__hu_state>\n\t<setupTestCase public=\"1\" set=\"method\" line=\"75\"><f a=\"\"><x path=\"Void\"/></f></setupTestCase>\n\t<setup public=\"1\" set=\"method\" line=\"84\"><f a=\"\"><x path=\"Void\"/></f></setup>\n\t<tearDown public=\"1\" set=\"method\" line=\"94\"><f a=\"\"><x path=\"Void\"/></f></tearDown>\n\t<tearDownTestCase public=\"1\" set=\"method\" line=\"104\"><f a=\"\"><x path=\"Void\"/></f></tearDownTestCase>\n\t<expectException public=\"1\" params=\"T\" set=\"method\" line=\"173\">\n\t\t<f a=\"?match:?pos\" v=\"null:\">\n\t\t\t<x path=\"hunit.Match\"><c path=\"expectException.T\"/></x>\n\t\t\t<t path=\"haxe.PosInfos\"/>\n\t\t\t<x path=\"Void\"/>\n\t\t</f>\n\t\t<meta><m n=\":value\"><e>{match:null}</e></m></meta>\n\t</expectException>\n\t<notice public=\"1\" set=\"method\" line=\"187\"><f a=\"msg:?pos\">\n\t<c path=\"String\"/>\n\t<t path=\"haxe.PosInfos\"/>\n\t<x path=\"Void\"/>\n</f></notice>\n\t<set_match set=\"method\" line=\"198\">\n\t\t<f a=\"match\">\n\t\t\t<c path=\"hunit.match.MatchFactory\"/>\n\t\t\t<c path=\"hunit.match.MatchFactory\"/>\n\t\t</f>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</set_match>\n\t<set_assert set=\"method\" line=\"213\">\n\t\t<f a=\"assert\">\n\t\t\t<c path=\"hunit.assert.AssertFactory\"/>\n\t\t\t<c path=\"hunit.assert.AssertFactory\"/>\n\t\t</f>\n\t\t<meta><m n=\":noCompletion\"/></meta>\n\t</set_assert>\n\t<new public=\"1\" set=\"method\" line=\"64\"><f a=\"\"><x path=\"Void\"/></f></new>\n\t<meta>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t\t<m n=\":access\"><e>hunit.mock.IMock</e></m>\n\t\t<m n=\":rtti\"/>\n\t\t<m n=\":keepSub\"/>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t</meta>\n</class>"
ChildWidgetNodeTest.__meta__ = _hx_AnonObject({'fields': _hx_AnonObject({'childWidgetNode': _hx_AnonObject({'test': None})})})
ChildWidgetNodeTest._hx___rtti = "<class path=\"ChildWidgetNodeTest\" params=\"\">\n\t<extends path=\"hunit.TestCase\"/>\n\t<childWidgetNode public=\"1\" set=\"method\" line=\"16\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</childWidgetNode>\n\t<new public=\"1\" set=\"method\" line=\"12\"><f a=\"\"><x path=\"Void\"/></f></new>\n\t<meta>\n\t\t<m n=\":directlyUsed\"/>\n\t\t<m n=\":build\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t</meta>\n</class>"
MetricValueTest.__meta__ = _hx_AnonObject({'fields': _hx_AnonObject({'dip': _hx_AnonObject({'test': None}), 'pixel': _hx_AnonObject({'test': None}), 'pct': _hx_AnonObject({'test': None})})})
MetricValueTest._hx___rtti = "<class path=\"MetricValueTest\" params=\"\">\n\t<extends path=\"hunit.TestCase\"/>\n\t<dip public=\"1\" set=\"method\" line=\"15\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</dip>\n\t<pixel public=\"1\" set=\"method\" line=\"24\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</pixel>\n\t<pct public=\"1\" set=\"method\" line=\"33\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</pct>\n\t<new public=\"1\" set=\"method\" line=\"11\"><f a=\"\"><x path=\"Void\"/></f></new>\n\t<meta>\n\t\t<m n=\":directlyUsed\"/>\n\t\t<m n=\":build\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t</meta>\n</class>"
SignalValueTest.__meta__ = _hx_AnonObject({'fields': _hx_AnonObject({'simple': _hx_AnonObject({'test': None}), 'closureWithBlockBody': _hx_AnonObject({'test': None}), 'closureWithSingleExprBody': _hx_AnonObject({'test': None})})})
SignalValueTest._hx___rtti = "<class path=\"SignalValueTest\" params=\"\">\n\t<extends path=\"hunit.TestCase\"/>\n\t<simple public=\"1\" set=\"method\" line=\"15\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</simple>\n\t<closureWithBlockBody public=\"1\" set=\"method\" line=\"26\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</closureWithBlockBody>\n\t<closureWithSingleExprBody public=\"1\" set=\"method\" line=\"37\">\n\t\t<f a=\"\"><x path=\"Void\"/></f>\n\t\t<meta><m n=\"test\"/></meta>\n\t</closureWithSingleExprBody>\n\t<new public=\"1\" set=\"method\" line=\"11\"><f a=\"\"><x path=\"Void\"/></f></new>\n\t<meta>\n\t\t<m n=\":directlyUsed\"/>\n\t\t<m n=\":build\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":autoBuild\"><e>hunit.utils.TestMacroUtils.buildTestCase()</e></m>\n\t\t<m n=\":build\"><e>hunit.utils.ClassTypeUtils.cacheMethodSignatures()</e></m>\n\t</meta>\n</class>"
Xml.Element = 0
Xml.PCData = 1
Xml.CData = 2
Xml.Comment = 3
Xml.DocType = 4
Xml.ProcessingInstruction = 5
Xml.Document = 6
def _hx_init_haxe_xml_Parser_escapes():
	# /usr/lib/haxe/std/haxe/xml/Parser.hx:51
	def _hx_local_0():
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:52
		h = haxe_ds_StringMap()
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:53
		h.h["lt"] = "<"
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:54
		h.h["gt"] = ">"
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:55
		h.h["amp"] = "&"
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:56
		h.h["quot"] = "\""
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:57
		h.h["apos"] = "'"
		# /usr/lib/haxe/std/haxe/xml/Parser.hx:58
		return h
	return _hx_local_0()
haxe_xml_Parser.escapes = _hx_init_haxe_xml_Parser_escapes()
hunit_Utils.META_TEST = "test"
hunit_Utils.buffer = ""
hunit_utils_CTypeClassFieldsUtils.TEST_INDICATOR = "test"
python_Boot.keywords = set(["and", "del", "from", "not", "with", "as", "elif", "global", "or", "yield", "assert", "else", "if", "pass", "None", "break", "except", "import", "raise", "True", "class", "exec", "in", "return", "False", "continue", "finally", "is", "try", "def", "for", "lambda", "while"])
python_Boot.prefixLength = len("_hx_")
sx_Sx.dipFactor = 1
sx_Sx.pixelSnapping = False
sx_Sx._hx___skins = haxe_ds_StringMap()
sx_Sx._hx___initTasks = []
sx_properties__Align_HorizontalAlign_Impl_.Left = "left"
sx_properties__Align_HorizontalAlign_Impl_.Center = "center"
sx_properties__Align_HorizontalAlign_Impl_.Right = "right"
sx_properties__Align_HorizontalAlign_Impl_.HNone = "none"
sx_properties__Align_VerticalAlign_Impl_.Top = "top"
sx_properties__Align_VerticalAlign_Impl_.Middle = "middle"
sx_properties__Align_VerticalAlign_Impl_.Bottom = "bottom"
sx_properties__Align_VerticalAlign_Impl_.VNone = "none"
sx_properties__Align_NoneAlign_Impl_._hx_None = "none"
sx_properties_abstracts__AAlign_AAlign_Impl_._hx___pool = sx_ds_ObjectPool()
sx_properties_abstracts__AAutoSize_AAutoSize_Impl_._hx___pool = sx_ds_ObjectPool()
sx_properties_abstracts__ACoordinate_ACoordinate_Impl_._hx___pool = sx_ds_ObjectPool()
sx_properties_abstracts__APadding_APadding_Impl_._hx___pool = sx_ds_ObjectPool()
sx_properties_abstracts__ASize_ASize_Impl_._hx___pool = sx_ds_ObjectPool()
sx_properties_abstracts__ASizeSetterProxy_ASizeSetterProxy_Impl_._hx___pool = sx_ds_ObjectPool()
sx_properties_metric__Size_Size_Internal_ZeroSize.instance = sx_properties_metric__Size_Size_Internal_ZeroSize()
sx_themes_Theme.DEFAULT_STYLE = "__DEFAULT__"
sx_tween_Tweener._hx___time = 0
sx_tween_Tweener._hx___tweeners = []
sx_tween_Tweener._hx___pausedAll = False
sx_tween_Tweener._hx___pausedAllTime = 0
sx_tween_Tweener._hx___totalPausedTime = 0

HUnit.main()