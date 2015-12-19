package sx.widgets;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Widget extends haxe.lang.HxObject
{
	static
	{
		//line 42 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		sx.widgets.Widget.MAX_RESIZE_DEPTH = 5;
	}
	
	public Widget(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Widget()
	{
		//line 227 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		sx.widgets.Widget.__hx_ctor_sx_widgets_Widget(this);
	}
	
	
	public static void __hx_ctor_sx_widgets_Widget(sx.widgets.Widget __temp_me6)
	{
		//line 221 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__resizeCounter = 0;
		//line 216 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__listeningParentResize = false;
		//line 161 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.disposed = false;
		//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.initialized = false;
		//line 144 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.style = "__DEFAULT__";
		//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.enabled = true;
		//line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.arrangeable = true;
		//line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.overflow = true;
		//line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.visible = true;
		//line 98 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.alpha = ((double) (((int) (1.0) )) );
		//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.rotation = ((double) (((int) (0.0) )) );
		//line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.scaleY = ((double) (((int) (1.0) )) );
		//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.scaleX = ((double) (((int) (1.0) )) );
		//line 50 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.numChildren = 0;
		//line 229 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__createBackend();
		//line 231 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__width = new sx.properties.metric.Size(haxe.lang.Runtime.toString("horizontal"));
		//line 232 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__width.pctSource = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me6, "__parentWidthProvider")) );
		//line 233 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__width.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me6, "__propertyResized")) ));
		//line 235 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__height = new sx.properties.metric.Size(haxe.lang.Runtime.toString("vertical"));
		//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__height.pctSource = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me6, "__parentHeightProvider")) );
		//line 237 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__height.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me6, "__propertyResized")) ));
		//line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__left = new sx.properties.metric.Coordinate(haxe.lang.Runtime.toString("horizontal"));
		//line 240 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__left.pctSource = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me6, "__parentWidthProvider")) );
		//line 241 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__left.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me6, "__propertyMoved")) ));
		//line 243 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__right = new sx.properties.metric.Coordinate(haxe.lang.Runtime.toString("horizontal"));
		//line 244 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__right.pctSource = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me6, "__parentWidthProvider")) );
		//line 245 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__right.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me6, "__propertyMoved")) ));
		//line 247 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__top = new sx.properties.metric.Coordinate(haxe.lang.Runtime.toString("vertical"));
		//line 248 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__top.pctSource = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me6, "__parentHeightProvider")) );
		//line 249 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__top.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me6, "__propertyMoved")) ));
		//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__bottom = new sx.properties.metric.Coordinate(haxe.lang.Runtime.toString("vertical"));
		//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__bottom.pctSource = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me6, "__parentHeightProvider")) );
		//line 253 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__bottom.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me6, "__propertyMoved")) ));
		//line 255 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__left.pair = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me6, "get_right")) );
		//line 256 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__right.pair = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me6, "get_left")) );
		//line 257 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__top.pair = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me6, "get_bottom")) );
		//line 258 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__bottom.pair = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me6, "get_top")) );
		//line 259 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__left.ownerSize = __temp_me6.__right.ownerSize = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me6, "get_width")) );
		//line 260 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		__temp_me6.__top.ownerSize = __temp_me6.__bottom.ownerSize = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me6, "get_height")) );
		//line 262 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		{
			//line 262 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			sx.properties.metric.Coordinate _this = __temp_me6.__left;
			//line 262 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if ( ! (_this.selected) ) 
			{
				//line 262 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				_this.selected = true;
				//line 262 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				((sx.properties.metric.Coordinate) (_this.pair.__hx_invoke0_o()) ).selected = false;
			}
			
		}
		
		//line 263 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		{
			//line 263 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			sx.properties.metric.Coordinate _this1 = __temp_me6.__top;
			//line 263 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if ( ! (_this1.selected) ) 
			{
				//line 263 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				_this1.selected = true;
				//line 263 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				((sx.properties.metric.Coordinate) (_this1.pair.__hx_invoke0_o()) ).selected = false;
			}
			
		}
		
	}
	
	
	public static int MAX_RESIZE_DEPTH;
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return new sx.widgets.Widget(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return new sx.widgets.Widget();
	}
	
	
	public java.lang.String name;
	
	
	
	public sx.widgets.Widget __parent;
	
	public int numChildren;
	
	
	
	public sx.properties.metric.Coordinate __left;
	
	
	
	public sx.properties.metric.Coordinate __right;
	
	
	
	public sx.properties.metric.Coordinate __top;
	
	
	
	public sx.properties.metric.Coordinate __bottom;
	
	
	
	public sx.properties.metric.Offset __origin;
	
	
	
	public sx.properties.metric.Offset __offset;
	
	
	
	public sx.properties.metric.Size __width;
	
	
	
	public sx.properties.metric.Size __height;
	
	public double scaleX;
	
	public double scaleY;
	
	public double rotation;
	
	public double alpha;
	
	public boolean visible;
	
	public boolean overflow;
	
	
	
	public sx.skins.base.SkinBase __skin;
	
	
	
	public sx.layout.Layout __layout;
	
	public boolean arrangeable;
	
	public boolean enabled;
	
	public java.lang.String style;
	
	public sx.backend.dummy.Backend backend;
	
	public boolean initialized;
	
	public boolean disposed;
	
	
	
	public sx.tween.Tweener __tween;
	
	
	
	public sx.signals.Signal<haxe.lang.Function> __onResize;
	
	
	
	public sx.signals.Signal<haxe.lang.Function> __onMove;
	
	
	
	public sx.signals.Signal<haxe.lang.Function> __onChildAdded;
	
	
	
	public sx.signals.Signal<haxe.lang.Function> __onChildRemoved;
	
	
	
	public sx.signals.Signal<haxe.lang.Function> __onParentChanged;
	
	
	
	public sx.signals.Signal<haxe.lang.Function> __onEnable;
	
	
	
	public sx.signals.Signal<haxe.lang.Function> __onDisable;
	
	
	
	public sx.signals.Signal<haxe.lang.Function> __onPointerPress;
	
	
	
	public sx.signals.Signal<haxe.lang.Function> __onPointerRelease;
	
	
	
	public sx.signals.Signal<haxe.lang.Function> __onPointerTap;
	
	
	
	
	
	public sx.signals.Signal<haxe.lang.Function> __onPointerMove;
	
	
	
	public sx.signals.Signal<haxe.lang.Function> __onPointerOver;
	
	
	
	public sx.signals.Signal<haxe.lang.Function> __onPointerOut;
	
	
	
	public sx.signals.Signal<haxe.lang.Function> __onInitialize;
	
	
	
	public sx.signals.Signal<haxe.lang.Function> __onDispose;
	
	public boolean __listeningParentResize;
	
	public int __resizeCounter;
	
	public void initialize()
	{
		//line 272 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (this.initialized) 
		{
			//line 272 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return ;
		}
		
		//line 274 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (haxe.lang.Runtime.valEq(this.style, "__DEFAULT__")) 
		{
			//line 275 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( ( this.style != null ) && ( sx.Sx.theme != null ) )) 
			{
				//line 275 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				sx.Sx.theme.apply(this);
			}
			
		}
		
		//line 278 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.initialized = true;
		//line 280 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.__initializeSelf();
		//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (( ( this.__onInitialize != null ) && ( this.__onInitialize.__listeners.length > 0 ) )) 
		{
			//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (this.__onInitialize.__listenersInUse) 
			{
				//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g = 0;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g1 = this.__onInitialize.__listeners;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g < _g1.length ))
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener = _g1.__get(_g);
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener.__hx_invoke1_o(0.0, this);
					}
					
				}
				
				//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				boolean __temp_expr1 = false;
			}
			else
			{
				//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__onInitialize.__listenersInUse = true;
				//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g2 = 0;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g11 = this.__onInitialize.__listeners;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g2 < _g11.length ))
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener1 = _g11.__get(_g2);
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g2;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener1.__hx_invoke1_o(0.0, this);
					}
					
				}
				
				//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__onInitialize.__listenersInUse = false;
			}
			
		}
		
		//line 282 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.__initializeChildren();
	}
	
	
	public sx.widgets.Widget addChild(sx.widgets.Widget child)
	{
		//line 293 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( child.get_parent() != null )) 
		{
			//line 293 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			child.get_parent().removeChild(child);
		}
		
		//line 295 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.backend.addWidget(child);
		//line 296 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.numChildren++;
		//line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		{
			//line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( child.__listeningParentResize && ( child.get_parent() != null ) )) 
			{
				//line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				child.__listeningParentResize = false;
				//line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				child.get_parent().get_onResize().remove(((haxe.lang.Function) (new haxe.lang.Closure(child, "__parentResized")) ));
			}
			
			//line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			child.__parent = this;
			//line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( child.__parent != null )) 
			{
				//line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				child.__updateParentResizeListener();
				//line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( child.__parent.initialized &&  ! (child.initialized)  )) 
				{
					//line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					child.initialize();
				}
				
			}
			
			//line 297 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			sx.widgets.Widget __temp_expr1 = this;
		}
		
		//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (( ( this.__onChildAdded != null ) && ( this.__onChildAdded.__listeners.length > 0 ) )) 
		{
			//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (this.__onChildAdded.__listenersInUse) 
			{
				//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g = 0;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g1 = this.__onChildAdded.__listeners;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g < _g1.length ))
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener = _g1.__get(_g);
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener.__hx_invoke2_o(0.0, this, 0.0, child);
					}
					
				}
				
				//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				boolean __temp_expr2 = false;
			}
			else
			{
				//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__onChildAdded.__listenersInUse = true;
				//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g2 = 0;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g11 = this.__onChildAdded.__listeners;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g2 < _g11.length ))
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener1 = _g11.__get(_g2);
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g2;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener1.__hx_invoke2_o(0.0, this, 0.0, child);
					}
					
				}
				
				//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__onChildAdded.__listenersInUse = false;
			}
			
		}
		
		//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (( ( child.__onParentChanged != null ) && ( child.__onParentChanged.__listeners.length > 0 ) )) 
		{
			//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (child.__onParentChanged.__listenersInUse) 
			{
				//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g3 = 0;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g12 = child.__onParentChanged.__listeners;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g3 < _g12.length ))
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener2 = _g12.__get(_g3);
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g3;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener2.__hx_invoke2_o(0.0, this, 0.0, child);
					}
					
				}
				
				//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				boolean __temp_expr3 = false;
			}
			else
			{
				//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				child.__onParentChanged.__listenersInUse = true;
				//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g4 = 0;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g13 = child.__onParentChanged.__listeners;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g4 < _g13.length ))
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener3 = _g13.__get(_g4);
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g4;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener3.__hx_invoke2_o(0.0, this, 0.0, child);
					}
					
				}
				
				//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				child.__onParentChanged.__listenersInUse = false;
			}
			
		}
		
		//line 302 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return child;
	}
	
	
	public sx.widgets.Widget addChildAt(sx.widgets.Widget child, int index)
	{
		//line 317 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( child.get_parent() != null )) 
		{
			//line 317 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			child.get_parent().removeChild(child);
		}
		
		//line 319 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.backend.addWidgetAt(child, index);
		//line 320 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.numChildren++;
		//line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		{
			//line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( child.__listeningParentResize && ( child.get_parent() != null ) )) 
			{
				//line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				child.__listeningParentResize = false;
				//line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				child.get_parent().get_onResize().remove(((haxe.lang.Function) (new haxe.lang.Closure(child, "__parentResized")) ));
			}
			
			//line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			child.__parent = this;
			//line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( child.__parent != null )) 
			{
				//line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				child.__updateParentResizeListener();
				//line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( child.__parent.initialized &&  ! (child.initialized)  )) 
				{
					//line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					child.initialize();
				}
				
			}
			
			//line 321 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			sx.widgets.Widget __temp_expr1 = this;
		}
		
		//line 323 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( ( this.__onChildAdded != null ) || ( child.__onParentChanged != null ) )) 
		{
			//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( this.__onChildAdded != null ) && ( this.__onChildAdded.__listeners.length > 0 ) )) 
			{
				//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (this.__onChildAdded.__listenersInUse) 
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g = 0;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.root.Array<haxe.lang.Function> _g1 = this.__onChildAdded.__listeners;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g < _g1.length ))
						{
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							haxe.lang.Function listener = _g1.__get(_g);
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g;
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener.__hx_invoke2_o(0.0, this, 0.0, child);
						}
						
					}
					
					//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					boolean __temp_expr2 = false;
				}
				else
				{
					//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.__onChildAdded.__listenersInUse = true;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g2 = 0;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.root.Array<haxe.lang.Function> _g11 = this.__onChildAdded.__listeners;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g2 < _g11.length ))
						{
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							haxe.lang.Function listener1 = _g11.__get(_g2);
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g2;
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener1.__hx_invoke2_o(0.0, this, 0.0, child);
						}
						
					}
					
					//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.__onChildAdded.__listenersInUse = false;
				}
				
			}
			
			//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( child.__onParentChanged != null ) && ( child.__onParentChanged.__listeners.length > 0 ) )) 
			{
				//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (child.__onParentChanged.__listenersInUse) 
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g3 = 0;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.root.Array<haxe.lang.Function> _g12 = child.__onParentChanged.__listeners;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g3 < _g12.length ))
						{
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							haxe.lang.Function listener2 = _g12.__get(_g3);
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g3;
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener2.__hx_invoke2_o(0.0, this, 0.0, child);
						}
						
					}
					
					//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					boolean __temp_expr3 = false;
				}
				else
				{
					//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					child.__onParentChanged.__listenersInUse = true;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g4 = 0;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.root.Array<haxe.lang.Function> _g13 = child.__onParentChanged.__listeners;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g4 < _g13.length ))
						{
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							haxe.lang.Function listener3 = _g13.__get(_g4);
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g4;
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener3.__hx_invoke2_o(0.0, this, 0.0, child);
						}
						
					}
					
					//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					child.__onParentChanged.__listenersInUse = false;
				}
				
			}
			
		}
		
		//line 328 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return child;
	}
	
	
	public sx.widgets.Widget removeChild(sx.widgets.Widget child)
	{
		//line 340 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( child.get_parent() == this )) 
		{
			//line 341 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.removeWidget(child);
			//line 342 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.numChildren--;
			//line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			{
				//line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( child.__listeningParentResize && ( child.get_parent() != null ) )) 
				{
					//line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					child.__listeningParentResize = false;
					//line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					child.get_parent().get_onResize().remove(((haxe.lang.Function) (new haxe.lang.Closure(child, "__parentResized")) ));
				}
				
				//line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				child.__parent = null;
				//line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( child.__parent != null )) 
				{
					//line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					child.__updateParentResizeListener();
					//line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( child.__parent.initialized &&  ! (child.initialized)  )) 
					{
						//line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						child.initialize();
					}
					
				}
				
				//line 343 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				sx.widgets.Widget __temp_expr1 = null;
			}
			
			//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( this.__onChildRemoved != null ) && ( this.__onChildRemoved.__listeners.length > 0 ) )) 
			{
				//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (this.__onChildRemoved.__listenersInUse) 
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g = 0;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.root.Array<haxe.lang.Function> _g1 = this.__onChildRemoved.__listeners;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g < _g1.length ))
						{
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							haxe.lang.Function listener = _g1.__get(_g);
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g;
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener.__hx_invoke2_o(0.0, this, 0.0, child);
						}
						
					}
					
					//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					boolean __temp_expr2 = false;
				}
				else
				{
					//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.__onChildRemoved.__listenersInUse = true;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g2 = 0;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.root.Array<haxe.lang.Function> _g11 = this.__onChildRemoved.__listeners;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g2 < _g11.length ))
						{
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							haxe.lang.Function listener1 = _g11.__get(_g2);
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g2;
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener1.__hx_invoke2_o(0.0, this, 0.0, child);
						}
						
					}
					
					//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.__onChildRemoved.__listenersInUse = false;
				}
				
			}
			
			//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( child.__onParentChanged != null ) && ( child.__onParentChanged.__listeners.length > 0 ) )) 
			{
				//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (child.__onParentChanged.__listenersInUse) 
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g3 = 0;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.root.Array<haxe.lang.Function> _g12 = child.__onParentChanged.__listeners;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g3 < _g12.length ))
						{
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							haxe.lang.Function listener2 = _g12.__get(_g3);
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g3;
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener2.__hx_invoke2_o(0.0, null, 0.0, child);
						}
						
					}
					
					//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					boolean __temp_expr3 = false;
				}
				else
				{
					//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					child.__onParentChanged.__listenersInUse = true;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g4 = 0;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.root.Array<haxe.lang.Function> _g13 = child.__onParentChanged.__listeners;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g4 < _g13.length ))
						{
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							haxe.lang.Function listener3 = _g13.__get(_g4);
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g4;
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener3.__hx_invoke2_o(0.0, null, 0.0, child);
						}
						
					}
					
					//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					child.__onParentChanged.__listenersInUse = false;
				}
				
			}
			
			//line 348 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return child;
		}
		else
		{
			//line 350 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return null;
		}
		
	}
	
	
	public sx.widgets.Widget removeChildAt(int index)
	{
		//line 364 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		sx.widgets.Widget removed = this.backend.removeWidgetAt(index);
		//line 365 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( removed != null )) 
		{
			//line 366 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.numChildren--;
			//line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			{
				//line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( removed.__listeningParentResize && ( removed.get_parent() != null ) )) 
				{
					//line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					removed.__listeningParentResize = false;
					//line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					removed.get_parent().get_onResize().remove(((haxe.lang.Function) (new haxe.lang.Closure(removed, "__parentResized")) ));
				}
				
				//line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				removed.__parent = null;
				//line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( removed.__parent != null )) 
				{
					//line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					removed.__updateParentResizeListener();
					//line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( removed.__parent.initialized &&  ! (removed.initialized)  )) 
					{
						//line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						removed.initialize();
					}
					
				}
				
				//line 367 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				sx.widgets.Widget __temp_expr1 = null;
			}
			
			//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( this.__onChildRemoved != null ) && ( this.__onChildRemoved.__listeners.length > 0 ) )) 
			{
				//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (this.__onChildRemoved.__listenersInUse) 
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g = 0;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.root.Array<haxe.lang.Function> _g1 = this.__onChildRemoved.__listeners;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g < _g1.length ))
						{
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							haxe.lang.Function listener = _g1.__get(_g);
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g;
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener.__hx_invoke2_o(0.0, this, 0.0, removed);
						}
						
					}
					
					//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					boolean __temp_expr2 = false;
				}
				else
				{
					//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.__onChildRemoved.__listenersInUse = true;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g2 = 0;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.root.Array<haxe.lang.Function> _g11 = this.__onChildRemoved.__listeners;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g2 < _g11.length ))
						{
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							haxe.lang.Function listener1 = _g11.__get(_g2);
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g2;
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener1.__hx_invoke2_o(0.0, this, 0.0, removed);
						}
						
					}
					
					//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					this.__onChildRemoved.__listenersInUse = false;
				}
				
			}
			
			//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( removed.__onParentChanged != null ) && ( removed.__onParentChanged.__listeners.length > 0 ) )) 
			{
				//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (removed.__onParentChanged.__listenersInUse) 
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g3 = 0;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.root.Array<haxe.lang.Function> _g12 = removed.__onParentChanged.__listeners;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g3 < _g12.length ))
						{
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							haxe.lang.Function listener2 = _g12.__get(_g3);
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g3;
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener2.__hx_invoke2_o(0.0, null, 0.0, removed);
						}
						
					}
					
					//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					boolean __temp_expr3 = false;
				}
				else
				{
					//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					removed.__onParentChanged.__listenersInUse = true;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g4 = 0;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.root.Array<haxe.lang.Function> _g13 = removed.__onParentChanged.__listeners;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g4 < _g13.length ))
						{
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							haxe.lang.Function listener3 = _g13.__get(_g4);
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g4;
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener3.__hx_invoke2_o(0.0, null, 0.0, removed);
						}
						
					}
					
					//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					removed.__onParentChanged.__listenersInUse = false;
				}
				
			}
			
		}
		
		//line 373 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return removed;
	}
	
	
	public int removeChildren(java.lang.Object beginIndex, java.lang.Object endIndex)
	{
		//line 385 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		int __temp_endIndex4 = ( (haxe.lang.Runtime.eq(endIndex, null)) ? (-1) : (((int) (haxe.lang.Runtime.toInt(endIndex)) )) );
		//line 385 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		int __temp_beginIndex3 = ( (haxe.lang.Runtime.eq(beginIndex, null)) ? (0) : (((int) (haxe.lang.Runtime.toInt(beginIndex)) )) );
		//line 386 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( __temp_beginIndex3 < 0 )) 
		{
			//line 386 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_beginIndex3 = ( this.numChildren + __temp_beginIndex3 );
		}
		
		//line 387 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( __temp_beginIndex3 < 0 )) 
		{
			//line 387 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_beginIndex3 = 0;
		}
		
		//line 388 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( __temp_endIndex4 < 0 )) 
		{
			//line 389 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_endIndex4 = ( this.numChildren + __temp_endIndex4 );
		}
		else
		{
			//line 390 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( __temp_endIndex4 >= this.numChildren )) 
			{
				//line 391 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				__temp_endIndex4 = ( this.numChildren - 1 );
			}
			
		}
		
		//line 394 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( ( __temp_beginIndex3 >= this.numChildren ) || ( __temp_endIndex4 < __temp_beginIndex3 ) )) 
		{
			//line 394 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return 0;
		}
		
		//line 396 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		int removed = ( ( __temp_endIndex4 - __temp_beginIndex3 ) + 1 );
		//line 397 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		while (( __temp_beginIndex3 <= __temp_endIndex4 ))
		{
			//line 398 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.removeChildAt(__temp_beginIndex3);
			//line 399 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			__temp_endIndex4--;
		}
		
		//line 402 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return removed;
	}
	
	
	public boolean contains(sx.widgets.Widget child)
	{
		//line 411 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		while (( child != null ))
		{
			//line 412 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( child == this )) 
			{
				//line 412 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return true;
			}
			
			//line 413 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			child = child.get_parent();
		}
		
		//line 416 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return false;
	}
	
	
	public int getChildIndex(sx.widgets.Widget child)
	{
		//line 427 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( child.get_parent() != this )) 
		{
			//line 427 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			throw haxe.lang.HaxeException.wrap(new sx.exceptions.NotChildException(null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.widgets.Widget", "Widget.hx", "getChildIndex"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (427) )) )})));
		}
		
		//line 429 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.backend.getWidgetIndex(child);
	}
	
	
	public int setChildIndex(sx.widgets.Widget child, int index)
	{
		//line 446 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( child.get_parent() != this )) 
		{
			//line 446 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			throw haxe.lang.HaxeException.wrap(new sx.exceptions.NotChildException(null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.widgets.Widget", "Widget.hx", "setChildIndex"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (446) )) )})));
		}
		
		//line 448 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.backend.setWidgetIndex(child, index);
	}
	
	
	public sx.widgets.Widget getChildAt(int index)
	{
		//line 461 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.backend.getWidgetAt(index);
	}
	
	
	public void swapChildren(sx.widgets.Widget child1, sx.widgets.Widget child2)
	{
		//line 472 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( ( child1.get_parent() != this ) || ( child2.get_parent() != this ) )) 
		{
			//line 472 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			throw haxe.lang.HaxeException.wrap(new sx.exceptions.NotChildException(null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.widgets.Widget", "Widget.hx", "swapChildren"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (472) )) )})));
		}
		
		//line 473 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.backend.swapWidgets(child1, child2);
	}
	
	
	public void swapChildrenAt(int index1, int index2)
	{
		//line 486 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( index1 < 0 )) 
		{
			//line 486 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			index1 += this.numChildren;
		}
		
		//line 487 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( index2 < 0 )) 
		{
			//line 487 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			index2 += this.numChildren;
		}
		
		//line 489 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( ( ( ( index1 < 0 ) || ( index1 >= this.numChildren ) ) || ( index2 < 0 ) ) || ( index2 > this.numChildren ) )) 
		{
			//line 490 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			throw haxe.lang.HaxeException.wrap(new sx.exceptions.OutOfBoundsException("Provided index does not exist in display list of this widget.", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.widgets.Widget", "Widget.hx", "swapChildrenAt"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (490) )) )})));
		}
		
		//line 493 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.backend.swapWidgetsAt(index1, index2);
	}
	
	
	public sx.widgets.Widget getChild(java.lang.String name)
	{
		//line 502 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		sx.widgets.Widget child = null;
		//line 503 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		{
			//line 503 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			int _g1 = 0;
			//line 503 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			int _g = this.numChildren;
			//line 503 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			while (( _g1 < _g ))
			{
				//line 503 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				int i = _g1++;
				//line 504 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				child = this.getChildAt(i);
				//line 505 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (haxe.lang.Runtime.valEq(child.name, name)) 
				{
					//line 506 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					return child;
				}
				
				//line 509 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				child = child.getChild(name);
				//line 510 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( child != null )) 
				{
					//line 511 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					return child;
				}
				
			}
			
		}
		
		//line 515 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return null;
	}
	
	
	public <T> java.lang.Object getChildAs(java.lang.String name, java.lang.Class cls)
	{
		//line 526 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		sx.widgets.Widget child = null;
		//line 527 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		{
			//line 527 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			int _g1 = 0;
			//line 527 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			int _g = this.numChildren;
			//line 527 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			while (( _g1 < _g ))
			{
				//line 527 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				int i = _g1++;
				//line 528 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				child = this.getChildAt(i);
				//line 529 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( haxe.lang.Runtime.valEq(child.name, name) && haxe.root.Std.is(child, cls) )) 
				{
					//line 530 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					return ((java.lang.Object) (child) );
				}
				
				//line 533 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				child = ((sx.widgets.Widget) (((java.lang.Object) (child.getChildAs(name, cls)) )) );
				//line 534 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( child != null )) 
				{
					//line 535 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					return ((java.lang.Object) (child) );
				}
				
			}
			
		}
		
		//line 539 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return null;
	}
	
	
	public sx.widgets.Widget getDirectChild(java.lang.String name)
	{
		//line 548 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		sx.widgets.Widget child = null;
		//line 549 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		{
			//line 549 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			int _g1 = 0;
			//line 549 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			int _g = this.numChildren;
			//line 549 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			while (( _g1 < _g ))
			{
				//line 549 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				int i = _g1++;
				//line 550 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				child = this.getChildAt(i);
				//line 551 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (haxe.lang.Runtime.valEq(child.name, name)) 
				{
					//line 552 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					return child;
				}
				
			}
			
		}
		
		//line 556 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return null;
	}
	
	
	public sx.widgets.Widget getParent(java.lang.String name)
	{
		//line 565 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		sx.widgets.Widget parent = this.get_parent();
		//line 566 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		while (( ( parent != null ) &&  ! (haxe.lang.Runtime.valEq(parent.name, name))  ))
		{
			//line 567 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			parent = parent.get_parent();
		}
		
		//line 570 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return parent;
	}
	
	
	public <T> T getParentAs(java.lang.String name, java.lang.Class cls)
	{
		//line 579 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		sx.widgets.Widget parent = this.get_parent();
		//line 580 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		while (( ( parent != null ) && ((  ! (haxe.lang.Runtime.valEq(parent.name, name))  ||  ! (haxe.root.Std.is(parent, cls))  )) ))
		{
			//line 581 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			parent = parent.get_parent();
		}
		
		//line 584 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( parent == null )) 
		{
			//line 584 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return null;
		}
		else
		{
			//line 584 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return ((T) (((java.lang.Object) (parent) )) );
		}
		
	}
	
	
	public boolean isEnabled()
	{
		//line 593 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		sx.widgets.Widget current = this;
		//line 594 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		do 
		{
			//line 595 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if ( ! (current.enabled) ) 
			{
				//line 595 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return false;
			}
			
			//line 596 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			current = current.get_parent();
		}
		while (( current != null ));
		//line 599 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return true;
	}
	
	
	public sx.backend.dummy.Point globalToLocal(sx.backend.dummy.Point point)
	{
		//line 609 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.backend.widgetGlobalToLocal(point);
	}
	
	
	public sx.backend.dummy.Point localToGlobal(sx.backend.dummy.Point point)
	{
		//line 619 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.backend.widgetLocalToGlobal(point);
	}
	
	
	public void dispose(java.lang.Object disposeChildren)
	{
		//line 627 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		boolean __temp_disposeChildren5 = ( (haxe.lang.Runtime.eq(disposeChildren, null)) ? (true) : (haxe.lang.Runtime.toBool(disposeChildren)) );
		//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (( ( this.__onDispose != null ) && ( this.__onDispose.__listeners.length > 0 ) )) 
		{
			//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (this.__onDispose.__listenersInUse) 
			{
				//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g = 0;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g1 = this.__onDispose.__listeners;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g < _g1.length ))
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener = _g1.__get(_g);
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener.__hx_invoke1_o(0.0, this);
					}
					
				}
				
				//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				boolean __temp_expr1 = false;
			}
			else
			{
				//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__onDispose.__listenersInUse = true;
				//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g2 = 0;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g11 = this.__onDispose.__listeners;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g2 < _g11.length ))
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener1 = _g11.__get(_g2);
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g2;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener1.__hx_invoke1_o(0.0, this);
					}
					
				}
				
				//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__onDispose.__listenersInUse = false;
			}
			
		}
		
		//line 629 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.disposed = true;
		//line 631 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.get_parent() != null )) 
		{
			//line 632 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.get_parent().removeChild(this);
		}
		
		//line 635 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.get_skin() != null )) 
		{
			//line 635 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.set_skin(null);
		}
		
		//line 636 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.get_layout() != null )) 
		{
			//line 636 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.set_layout(null);
		}
		
		//line 638 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (__temp_disposeChildren5) 
		{
			//line 639 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			while (( this.numChildren > 0 ))
			{
				//line 639 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.getChildAt(0).dispose(true);
			}
			
		}
		else
		{
			//line 641 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.removeChildren(null, null);
		}
		
		//line 644 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__tween != null )) 
		{
			//line 644 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__tween.stop();
		}
		
		//line 646 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.backend.widgetDisposed();
	}
	
	
	public final void applyStyle()
	{
		//line 655 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( ( this.style != null ) && ( sx.Sx.theme != null ) )) 
		{
			//line 656 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			sx.Sx.theme.apply(this);
		}
		
	}
	
	
	public void __createBackend()
	{
		//line 666 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.backend = sx.Sx.get_backendManager().widgetBackend(this);
	}
	
	
	public void __propertyResized(sx.properties.metric.Size changed, java.lang.String previousUnits, double previousValue)
	{
		//line 675 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.get_parent() != null )) 
		{
			//line 675 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (this.__listeningParentResize) 
			{
				//line 675 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( ( changed != this.__right ) && ( changed != this.__top ) )) 
				{
					//line 675 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( haxe.lang.Runtime.valEq(previousUnits, haxe.lang.Runtime.toString("pct")) &&  ! (haxe.lang.Runtime.valEq(previousUnits, changed.units))  )) 
					{
						//line 675 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__updateParentResizeListener();
					}
					
				}
				
			}
			else
			{
				//line 675 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( ( haxe.lang.Runtime.valEq(changed.units, haxe.lang.Runtime.toString("pct")) || ( changed == this.__right ) ) || ( changed == this.__bottom ) )) 
				{
					//line 675 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.__listeningParentResize = true;
					//line 675 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.get_parent().get_onResize().add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__parentResized")) ));
				}
				
			}
			
		}
		
		//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		{
			//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__resizeCounter++;
			//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__resizeCounter > 5 )) 
			{
				//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				throw haxe.lang.HaxeException.wrap(new sx.exceptions.LoopedResizeException(null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.widgets.Widget", "Widget.hx", "__resized"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (686) )) )})));
			}
			
			//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (this.initialized) 
			{
				//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.widgetResized();
			}
			
			//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( ( this.__onResize != null ) && ( this.__onResize.__listeners.length > 0 ) )) 
			{
				//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (this.__onResize.__listenersInUse) 
				{
					//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					{
						//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						int _g = 0;
						//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						haxe.root.Array<haxe.lang.Function> _g1 = this.__onResize.__listeners;
						//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						while (( _g < _g1.length ))
						{
							//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							haxe.lang.Function listener = _g1.__get(_g);
							//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							 ++ _g;
							//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							listener.__hx_invoke4_o(0.0, this, 0.0, changed, 0.0, previousUnits, previousValue, haxe.lang.Runtime.undefined);
						}
						
					}
					
					//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					boolean __temp_expr1 = false;
				}
				else
				{
					//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.__onResize.__listenersInUse = true;
					//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					{
						//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						int _g2 = 0;
						//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						haxe.root.Array<haxe.lang.Function> _g11 = this.__onResize.__listeners;
						//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						while (( _g2 < _g11.length ))
						{
							//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							haxe.lang.Function listener1 = _g11.__get(_g2);
							//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							 ++ _g2;
							//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							listener1.__hx_invoke4_o(0.0, this, 0.0, changed, 0.0, previousUnits, previousValue, haxe.lang.Runtime.undefined);
						}
						
					}
					
					//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.__onResize.__listenersInUse = false;
				}
				
			}
			
			//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( haxe.lang.Runtime.valEq(changed.orientation, haxe.lang.Runtime.toString("horizontal")) && this.get_right().selected )) 
			{
				//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (this.initialized) 
				{
					//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetMoved();
				}
				
			}
			
			//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( haxe.lang.Runtime.valEq(changed.orientation, haxe.lang.Runtime.toString("vertical")) && this.get_bottom().selected )) 
			{
				//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (this.initialized) 
				{
					//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetMoved();
				}
				
			}
			
			//line 676 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__resizeCounter--;
		}
		
	}
	
	
	public final void __resized(sx.properties.metric.Size changed, java.lang.String previousUnits, double previousValue)
	{
		//line 685 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.__resizeCounter++;
		//line 686 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__resizeCounter > 5 )) 
		{
			//line 686 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			throw haxe.lang.HaxeException.wrap(new sx.exceptions.LoopedResizeException(null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.widgets.Widget", "Widget.hx", "__resized"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (686) )) )})));
		}
		
		//line 688 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (this.initialized) 
		{
			//line 688 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetResized();
		}
		
		//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (( ( this.__onResize != null ) && ( this.__onResize.__listeners.length > 0 ) )) 
		{
			//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (this.__onResize.__listenersInUse) 
			{
				//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g = 0;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g1 = this.__onResize.__listeners;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g < _g1.length ))
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener = _g1.__get(_g);
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener.__hx_invoke4_o(0.0, this, 0.0, changed, 0.0, previousUnits, previousValue, haxe.lang.Runtime.undefined);
					}
					
				}
				
				//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				boolean __temp_expr1 = false;
			}
			else
			{
				//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__onResize.__listenersInUse = true;
				//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g2 = 0;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g11 = this.__onResize.__listeners;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g2 < _g11.length ))
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener1 = _g11.__get(_g2);
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g2;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener1.__hx_invoke4_o(0.0, this, 0.0, changed, 0.0, previousUnits, previousValue, haxe.lang.Runtime.undefined);
					}
					
				}
				
				//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__onResize.__listenersInUse = false;
			}
			
		}
		
		//line 693 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( haxe.lang.Runtime.valEq(changed.orientation, haxe.lang.Runtime.toString("horizontal")) && this.get_right().selected )) 
		{
			//line 693 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (this.initialized) 
			{
				//line 693 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.widgetMoved();
			}
			
		}
		
		//line 694 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( haxe.lang.Runtime.valEq(changed.orientation, haxe.lang.Runtime.toString("vertical")) && this.get_bottom().selected )) 
		{
			//line 694 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (this.initialized) 
			{
				//line 694 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.widgetMoved();
			}
			
		}
		
		//line 696 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.__resizeCounter--;
	}
	
	
	public void __propertyMoved(sx.properties.metric.Size changed, java.lang.String previousUnits, double previousValue)
	{
		//line 705 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.get_parent() != null )) 
		{
			//line 705 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (this.__listeningParentResize) 
			{
				//line 705 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( ( changed != this.__right ) && ( changed != this.__top ) )) 
				{
					//line 705 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( haxe.lang.Runtime.valEq(previousUnits, haxe.lang.Runtime.toString("pct")) &&  ! (haxe.lang.Runtime.valEq(previousUnits, changed.units))  )) 
					{
						//line 705 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__updateParentResizeListener();
					}
					
				}
				
			}
			else
			{
				//line 705 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( ( haxe.lang.Runtime.valEq(changed.units, haxe.lang.Runtime.toString("pct")) || ( changed == this.__right ) ) || ( changed == this.__bottom ) )) 
				{
					//line 705 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.__listeningParentResize = true;
					//line 705 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.get_parent().get_onResize().add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__parentResized")) ));
				}
				
			}
			
		}
		
		//line 706 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (this.initialized) 
		{
			//line 706 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetMoved();
		}
		
		//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (( ( this.__onMove != null ) && ( this.__onMove.__listeners.length > 0 ) )) 
		{
			//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (this.__onMove.__listenersInUse) 
			{
				//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g = 0;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g1 = this.__onMove.__listeners;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g < _g1.length ))
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener = _g1.__get(_g);
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener.__hx_invoke4_o(0.0, this, 0.0, changed, 0.0, previousUnits, previousValue, haxe.lang.Runtime.undefined);
					}
					
				}
				
				//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				boolean __temp_expr1 = false;
			}
			else
			{
				//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__onMove.__listenersInUse = true;
				//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g2 = 0;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g11 = this.__onMove.__listeners;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g2 < _g11.length ))
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener1 = _g11.__get(_g2);
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g2;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener1.__hx_invoke4_o(0.0, this, 0.0, changed, 0.0, previousUnits, previousValue, haxe.lang.Runtime.undefined);
					}
					
				}
				
				//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__onMove.__listenersInUse = false;
			}
			
		}
		
	}
	
	
	public final void __moved()
	{
		//line 716 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (this.initialized) 
		{
			//line 716 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetMoved();
		}
		
	}
	
	
	public void __originChanged()
	{
		//line 725 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (this.initialized) 
		{
			//line 725 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetOriginChanged();
		}
		
	}
	
	
	public void __offsetChanged()
	{
		//line 734 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (this.initialized) 
		{
			//line 734 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetOffsetChanged();
		}
		
	}
	
	
	public sx.properties.metric.Size __parentWidthProvider()
	{
		//line 743 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.get_parent() == null )) 
		{
			//line 743 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return sx.properties.metric._Size.Size_Internal_ZeroSize.instance;
		}
		else
		{
			//line 743 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.get_parent().get_width();
		}
		
	}
	
	
	public sx.properties.metric.Size __parentHeightProvider()
	{
		//line 752 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.get_parent() == null )) 
		{
			//line 752 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return sx.properties.metric._Size.Size_Internal_ZeroSize.instance;
		}
		else
		{
			//line 752 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.get_parent().get_height();
		}
		
	}
	
	
	public void __parentResized(sx.widgets.Widget parent, sx.properties.metric.Size changed, java.lang.String previousUnits, double previousValue)
	{
		//line 762 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (haxe.lang.Runtime.valEq(changed.orientation, haxe.lang.Runtime.toString("horizontal"))) 
		{
			//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			sx.properties.metric.Coordinate position = this.get_left();
			//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			sx.properties.metric.Size size = this.get_width();
			//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (haxe.lang.Runtime.valEq(size.units, haxe.lang.Runtime.toString("pct"))) 
			{
				//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				java.lang.String previousUnits1 = haxe.lang.Runtime.toString("pct");
				//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				double previousValue1 = size.get_pct();
				//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__resizeCounter++;
				//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( this.__resizeCounter > 5 )) 
				{
					//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					throw haxe.lang.HaxeException.wrap(new sx.exceptions.LoopedResizeException(null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.widgets.Widget", "Widget.hx", "__resized"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (686) )) )})));
				}
				
				//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (this.initialized) 
				{
					//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetResized();
				}
				
				//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( ( this.__onResize != null ) && ( this.__onResize.__listeners.length > 0 ) )) 
				{
					//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (this.__onResize.__listenersInUse) 
					{
						//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						{
							//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							int _g = 0;
							//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							haxe.root.Array<haxe.lang.Function> _g1 = this.__onResize.__listeners;
							//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							while (( _g < _g1.length ))
							{
								//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								haxe.lang.Function listener = _g1.__get(_g);
								//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								 ++ _g;
								//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								listener.__hx_invoke4_o(0.0, this, 0.0, size, 0.0, previousUnits1, previousValue1, haxe.lang.Runtime.undefined);
							}
							
						}
						
						//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						boolean __temp_expr2 = false;
					}
					else
					{
						//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onResize.__listenersInUse = true;
						//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						{
							//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							int _g2 = 0;
							//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							haxe.root.Array<haxe.lang.Function> _g11 = this.__onResize.__listeners;
							//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							while (( _g2 < _g11.length ))
							{
								//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								haxe.lang.Function listener1 = _g11.__get(_g2);
								//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								 ++ _g2;
								//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								listener1.__hx_invoke4_o(0.0, this, 0.0, size, 0.0, previousUnits1, previousValue1, haxe.lang.Runtime.undefined);
							}
							
						}
						
						//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onResize.__listenersInUse = false;
					}
					
				}
				
				//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( haxe.lang.Runtime.valEq(size.orientation, haxe.lang.Runtime.toString("horizontal")) && this.get_right().selected )) 
				{
					//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (this.initialized) 
					{
						//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.backend.widgetMoved();
					}
					
				}
				
				//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( haxe.lang.Runtime.valEq(size.orientation, haxe.lang.Runtime.toString("vertical")) && this.get_bottom().selected )) 
				{
					//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (this.initialized) 
					{
						//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.backend.widgetMoved();
					}
					
				}
				
				//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__resizeCounter--;
			}
			
			//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (position.selected) 
			{
				//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (haxe.lang.Runtime.valEq(position.units, haxe.lang.Runtime.toString("pct"))) 
				{
					//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (this.initialized) 
					{
						//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.backend.widgetMoved();
					}
					
				}
				
			}
			else
			{
				//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (this.initialized) 
				{
					//line 763 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetMoved();
				}
				
			}
			
		}
		else
		{
			//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			sx.properties.metric.Coordinate position1 = this.get_top();
			//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			sx.properties.metric.Size size1 = this.get_height();
			//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (haxe.lang.Runtime.valEq(size1.units, haxe.lang.Runtime.toString("pct"))) 
			{
				//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				java.lang.String previousUnits2 = haxe.lang.Runtime.toString("pct");
				//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				double previousValue2 = size1.get_pct();
				//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__resizeCounter++;
				//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( this.__resizeCounter > 5 )) 
				{
					//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					throw haxe.lang.HaxeException.wrap(new sx.exceptions.LoopedResizeException(null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.widgets.Widget", "Widget.hx", "__resized"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (686) )) )})));
				}
				
				//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (this.initialized) 
				{
					//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetResized();
				}
				
				//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( ( this.__onResize != null ) && ( this.__onResize.__listeners.length > 0 ) )) 
				{
					//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (this.__onResize.__listenersInUse) 
					{
						//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						{
							//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							int _g3 = 0;
							//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							haxe.root.Array<haxe.lang.Function> _g12 = this.__onResize.__listeners;
							//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							while (( _g3 < _g12.length ))
							{
								//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								haxe.lang.Function listener2 = _g12.__get(_g3);
								//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								 ++ _g3;
								//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								listener2.__hx_invoke4_o(0.0, this, 0.0, size1, 0.0, previousUnits2, previousValue2, haxe.lang.Runtime.undefined);
							}
							
						}
						
						//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						boolean __temp_expr1 = false;
					}
					else
					{
						//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onResize.__listenersInUse = true;
						//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						{
							//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							int _g4 = 0;
							//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							haxe.root.Array<haxe.lang.Function> _g13 = this.__onResize.__listeners;
							//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							while (( _g4 < _g13.length ))
							{
								//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								haxe.lang.Function listener3 = _g13.__get(_g4);
								//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								 ++ _g4;
								//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
								listener3.__hx_invoke4_o(0.0, this, 0.0, size1, 0.0, previousUnits2, previousValue2, haxe.lang.Runtime.undefined);
							}
							
						}
						
						//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onResize.__listenersInUse = false;
					}
					
				}
				
				//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( haxe.lang.Runtime.valEq(size1.orientation, haxe.lang.Runtime.toString("horizontal")) && this.get_right().selected )) 
				{
					//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (this.initialized) 
					{
						//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.backend.widgetMoved();
					}
					
				}
				
				//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( haxe.lang.Runtime.valEq(size1.orientation, haxe.lang.Runtime.toString("vertical")) && this.get_bottom().selected )) 
				{
					//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (this.initialized) 
					{
						//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.backend.widgetMoved();
					}
					
				}
				
				//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__resizeCounter--;
			}
			
			//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (position1.selected) 
			{
				//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (haxe.lang.Runtime.valEq(position1.units, haxe.lang.Runtime.toString("pct"))) 
				{
					//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (this.initialized) 
					{
						//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.backend.widgetMoved();
					}
					
				}
				
			}
			else
			{
				//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (this.initialized) 
				{
					//line 767 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetMoved();
				}
				
			}
			
		}
		
	}
	
	
	public final void __reactParentResize(sx.properties.metric.Coordinate position, sx.properties.metric.Size size)
	{
		//line 781 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (haxe.lang.Runtime.valEq(size.units, haxe.lang.Runtime.toString("pct"))) 
		{
			//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			java.lang.String previousUnits = haxe.lang.Runtime.toString("pct");
			//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			double previousValue = size.get_pct();
			//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__resizeCounter++;
			//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__resizeCounter > 5 )) 
			{
				//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				throw haxe.lang.HaxeException.wrap(new sx.exceptions.LoopedResizeException(null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.widgets.Widget", "Widget.hx", "__resized"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (686) )) )})));
			}
			
			//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (this.initialized) 
			{
				//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.widgetResized();
			}
			
			//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( ( this.__onResize != null ) && ( this.__onResize.__listeners.length > 0 ) )) 
			{
				//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (this.__onResize.__listenersInUse) 
				{
					//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					{
						//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						int _g = 0;
						//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						haxe.root.Array<haxe.lang.Function> _g1 = this.__onResize.__listeners;
						//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						while (( _g < _g1.length ))
						{
							//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							haxe.lang.Function listener = _g1.__get(_g);
							//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							 ++ _g;
							//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							listener.__hx_invoke4_o(0.0, this, 0.0, size, 0.0, previousUnits, previousValue, haxe.lang.Runtime.undefined);
						}
						
					}
					
					//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					boolean __temp_expr1 = false;
				}
				else
				{
					//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.__onResize.__listenersInUse = true;
					//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					{
						//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						int _g2 = 0;
						//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						haxe.root.Array<haxe.lang.Function> _g11 = this.__onResize.__listeners;
						//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						while (( _g2 < _g11.length ))
						{
							//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							haxe.lang.Function listener1 = _g11.__get(_g2);
							//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							 ++ _g2;
							//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							listener1.__hx_invoke4_o(0.0, this, 0.0, size, 0.0, previousUnits, previousValue, haxe.lang.Runtime.undefined);
						}
						
					}
					
					//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.__onResize.__listenersInUse = false;
				}
				
			}
			
			//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( haxe.lang.Runtime.valEq(size.orientation, haxe.lang.Runtime.toString("horizontal")) && this.get_right().selected )) 
			{
				//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (this.initialized) 
				{
					//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetMoved();
				}
				
			}
			
			//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( haxe.lang.Runtime.valEq(size.orientation, haxe.lang.Runtime.toString("vertical")) && this.get_bottom().selected )) 
			{
				//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (this.initialized) 
				{
					//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetMoved();
				}
				
			}
			
			//line 782 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__resizeCounter--;
		}
		
		//line 786 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (position.selected) 
		{
			//line 787 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (haxe.lang.Runtime.valEq(position.units, haxe.lang.Runtime.toString("pct"))) 
			{
				//line 787 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (this.initialized) 
				{
					//line 787 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.backend.widgetMoved();
				}
				
			}
			
		}
		else
		{
			//line 790 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (this.initialized) 
			{
				//line 790 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.widgetMoved();
			}
			
		}
		
	}
	
	
	public final void __affectParentResizeListener(sx.properties.metric.Size changed, java.lang.String previousUnits)
	{
		//line 800 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.get_parent() != null )) 
		{
			//line 801 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (this.__listeningParentResize) 
			{
				//line 803 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( ( changed != this.__right ) && ( changed != this.__top ) )) 
				{
					//line 805 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (( haxe.lang.Runtime.valEq(previousUnits, haxe.lang.Runtime.toString("pct")) &&  ! (haxe.lang.Runtime.valEq(previousUnits, changed.units))  )) 
					{
						//line 806 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__updateParentResizeListener();
					}
					
				}
				
			}
			else
			{
				//line 810 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( ( haxe.lang.Runtime.valEq(changed.units, haxe.lang.Runtime.toString("pct")) || ( changed == this.__right ) ) || ( changed == this.__bottom ) )) 
				{
					//line 811 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.__listeningParentResize = true;
					//line 812 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.get_parent().get_onResize().add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__parentResized")) ));
				}
				
			}
			
		}
		
	}
	
	
	public void __updateParentResizeListener()
	{
		//line 824 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		boolean size = ( haxe.lang.Runtime.valEq(this.get_width().units, haxe.lang.Runtime.toString("pct")) || haxe.lang.Runtime.valEq(this.get_height().units, haxe.lang.Runtime.toString("pct")) );
		//line 825 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		boolean position = sx.tools.WidgetTools.positionDependsOnParent(this);
		//line 827 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( size || position )) 
		{
			//line 828 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__listeningParentResize = true;
			//line 829 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.get_parent().get_onResize().add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__parentResized")) ));
		}
		else
		{
			//line 830 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if ((  ! (size)  &&  ! (position)  )) 
			{
				//line 831 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.__listeningParentResize = false;
				//line 832 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.get_parent().get_onResize().remove(((haxe.lang.Function) (new haxe.lang.Closure(this, "__parentResized")) ));
			}
			
		}
		
	}
	
	
	public void __initializeSelf()
	{
		//line 842 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__offset != null )) 
		{
			//line 842 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetOffsetChanged();
		}
		
		//line 843 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__origin != null )) 
		{
			//line 843 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetOriginChanged();
		}
		
		//line 844 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( ( this.__width.__value != 0 ) ||  ! ((( this.__height.__value != 0 )))  )) 
		{
			//line 845 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetResized();
		}
		
		//line 847 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( ( ( ( this.__left.__value != 0 ) || this.__right.selected ) || ( this.__top.__value != 0 ) ) || this.__bottom.selected )) 
		{
			//line 848 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetMoved();
		}
		
		//line 850 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.rotation != 0 )) 
		{
			//line 850 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetRotated();
		}
		
		//line 851 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.scaleX != 1 )) 
		{
			//line 851 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetScaledX();
		}
		
		//line 852 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.scaleY != 1 )) 
		{
			//line 852 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetScaledY();
		}
		
		//line 853 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.alpha != 1 )) 
		{
			//line 853 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetAlphaChanged();
		}
		
		//line 854 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if ( ! (this.visible) ) 
		{
			//line 854 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetVisibilityChanged();
		}
		
		//line 855 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if ( ! (this.overflow) ) 
		{
			//line 855 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetOverflowChanged();
		}
		
		//line 856 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__skin != null )) 
		{
			//line 857 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.get_skin().refresh();
			//line 858 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetSkinChanged();
		}
		
	}
	
	
	public void __initializeChildren()
	{
		//line 869 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		int _g1 = 0;
		//line 869 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		int _g = this.numChildren;
		//line 869 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		while (( _g1 < _g ))
		{
			//line 869 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			int i = _g1++;
			//line 870 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.getChildAt(i).initialize();
		}
		
	}
	
	
	public double set_rotation(double rotation)
	{
		//line 880 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.rotation = rotation;
		//line 881 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (this.initialized) 
		{
			//line 881 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetRotated();
		}
		
		//line 883 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return rotation;
	}
	
	
	public double set_scaleX(double scaleX)
	{
		//line 892 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.scaleX = scaleX;
		//line 893 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (this.initialized) 
		{
			//line 893 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetScaledX();
		}
		
		//line 895 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return scaleX;
	}
	
	
	public double set_scaleY(double scaleY)
	{
		//line 904 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.scaleY = scaleY;
		//line 905 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (this.initialized) 
		{
			//line 905 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetScaledY();
		}
		
		//line 907 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return scaleY;
	}
	
	
	public double set_alpha(double alpha)
	{
		//line 916 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.alpha = alpha;
		//line 917 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (this.initialized) 
		{
			//line 917 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.backend.widgetAlphaChanged();
		}
		
		//line 919 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return alpha;
	}
	
	
	public boolean set_visible(boolean value)
	{
		//line 928 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.visible != value )) 
		{
			//line 929 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.visible = value;
			//line 930 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (this.initialized) 
			{
				//line 930 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.widgetVisibilityChanged();
			}
			
			//line 932 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( ( this.get_parent() != null ) && this.get_parent().initialized )) 
			{
				//line 933 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( ( this.get_parent().get_layout() != null ) && this.get_parent().get_layout().autoArrange )) 
				{
					//line 934 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.get_parent().get_layout().arrangeChildren();
				}
				
			}
			
		}
		
		//line 939 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return value;
	}
	
	
	public sx.skins.base.SkinBase set_skin(sx.skins.base.SkinBase value)
	{
		//line 948 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__skin == value )) 
		{
			//line 948 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return value;
		}
		
		//line 950 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__skin != null )) 
		{
			//line 951 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__skin.removed();
			//line 952 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (this.initialized) 
			{
				//line 952 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.widgetSkinChanged();
			}
			
		}
		
		//line 955 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.__skin = value;
		//line 956 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__skin != null )) 
		{
			//line 957 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__skin.usedBy(this);
			//line 958 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (this.initialized) 
			{
				//line 958 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.widgetSkinChanged();
			}
			
		}
		
		//line 961 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return value;
	}
	
	
	public sx.layout.Layout set_layout(sx.layout.Layout value)
	{
		//line 970 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__layout != null )) 
		{
			//line 970 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__layout.removed();
		}
		
		//line 971 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.__layout = value;
		//line 972 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__layout != null )) 
		{
			//line 972 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__layout.usedBy(this);
		}
		
		//line 974 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return value;
	}
	
	
	public java.lang.String set_style(java.lang.String value)
	{
		//line 983 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.style = value;
		//line 984 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( ( this.style != null ) && ( sx.Sx.theme != null ) )) 
		{
			//line 984 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			sx.Sx.theme.apply(this);
		}
		
		//line 986 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return value;
	}
	
	
	public sx.properties.metric.Offset get_origin()
	{
		//line 995 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__origin == null )) 
		{
			//line 996 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__origin = new sx.properties.metric.Offset(((haxe.lang.Function) (new haxe.lang.Closure(this, "get_width")) ), ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_height")) ));
			//line 997 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__origin.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__originChanged")) ));
		}
		
		//line 1000 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.__origin;
	}
	
	
	public sx.properties.metric.Offset get_offset()
	{
		//line 1009 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__offset == null )) 
		{
			//line 1010 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__offset = new sx.properties.metric.Offset(((haxe.lang.Function) (new haxe.lang.Closure(this, "get_width")) ), ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_height")) ));
			//line 1011 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__offset.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(this, "__offsetChanged")) ));
		}
		
		//line 1014 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.__offset;
	}
	
	
	public final sx.widgets.Widget set___parent(sx.widgets.Widget value)
	{
		//line 1023 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__listeningParentResize && ( this.get_parent() != null ) )) 
		{
			//line 1024 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__listeningParentResize = false;
			//line 1025 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.get_parent().get_onResize().remove(((haxe.lang.Function) (new haxe.lang.Closure(this, "__parentResized")) ));
		}
		
		//line 1028 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.__parent = value;
		//line 1029 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__parent != null )) 
		{
			//line 1030 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__updateParentResizeListener();
			//line 1031 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( this.__parent.initialized &&  ! (this.initialized)  )) 
			{
				//line 1032 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.initialize();
			}
			
		}
		
		//line 1036 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return value;
	}
	
	
	public boolean set_enabled(boolean value)
	{
		//line 1045 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.enabled != value )) 
		{
			//line 1046 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.enabled = value;
			//line 1047 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (this.enabled) 
			{
				//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (( ( this.__onEnable != null ) && ( this.__onEnable.__listeners.length > 0 ) )) 
				{
					//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (this.__onEnable.__listenersInUse) 
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						{
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g = 0;
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							haxe.root.Array<haxe.lang.Function> _g1 = this.__onEnable.__listeners;
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g < _g1.length ))
							{
								//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								haxe.lang.Function listener = _g1.__get(_g);
								//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g;
								//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener.__hx_invoke1_o(0.0, this);
							}
							
						}
						
						//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						boolean __temp_expr2 = false;
					}
					else
					{
						//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__onEnable.__listenersInUse = true;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						{
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g2 = 0;
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							haxe.root.Array<haxe.lang.Function> _g11 = this.__onEnable.__listeners;
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g2 < _g11.length ))
							{
								//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								haxe.lang.Function listener1 = _g11.__get(_g2);
								//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g2;
								//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener1.__hx_invoke1_o(0.0, this);
							}
							
						}
						
						//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__onEnable.__listenersInUse = false;
					}
					
				}
				
			}
			else
			{
				//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (( ( this.__onDisable != null ) && ( this.__onDisable.__listeners.length > 0 ) )) 
				{
					//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (this.__onDisable.__listenersInUse) 
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						{
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g3 = 0;
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							haxe.root.Array<haxe.lang.Function> _g12 = this.__onDisable.__listeners;
							//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g3 < _g12.length ))
							{
								//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								haxe.lang.Function listener2 = _g12.__get(_g3);
								//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g3;
								//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener2.__hx_invoke1_o(0.0, this);
							}
							
						}
						
						//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						boolean __temp_expr1 = false;
					}
					else
					{
						//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__onDisable.__listenersInUse = true;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						{
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							int _g4 = 0;
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							haxe.root.Array<haxe.lang.Function> _g13 = this.__onDisable.__listeners;
							//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							while (( _g4 < _g13.length ))
							{
								//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								haxe.lang.Function listener3 = _g13.__get(_g4);
								//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								 ++ _g4;
								//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
								listener3.__hx_invoke1_o(0.0, this);
							}
							
						}
						
						//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__onDisable.__listenersInUse = false;
					}
					
				}
				
			}
			
		}
		
		//line 1054 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return value;
	}
	
	
	public sx.tween.Tweener get_tween()
	{
		//line 1063 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__tween == null )) 
		{
			//line 1064 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.__tween = new sx.tween.Tweener();
		}
		
		//line 1067 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.__tween;
	}
	
	
	public boolean set_overflow(boolean value)
	{
		//line 1076 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.overflow != value )) 
		{
			//line 1077 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.overflow = value;
			//line 1078 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (this.initialized) 
			{
				//line 1078 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				this.backend.widgetOverflowChanged();
			}
			
		}
		
		//line 1081 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return value;
	}
	
	
	public boolean set_arrangeable(boolean value)
	{
		//line 1090 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.arrangeable != value )) 
		{
			//line 1091 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			this.arrangeable = value;
			//line 1092 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (( ( this.get_parent() != null ) && this.get_parent().initialized )) 
			{
				//line 1093 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				if (( ( this.get_parent().get_layout() != null ) && this.get_parent().get_layout().autoArrange )) 
				{
					//line 1094 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					this.get_parent().get_layout().arrangeChildren();
				}
				
			}
			
		}
		
		//line 1099 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return value;
	}
	
	
	public sx.widgets.Widget get_parent()
	{
		//line 1104 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.__parent;
	}
	
	
	public sx.properties.metric.Size get_width()
	{
		//line 1105 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.__width;
	}
	
	
	public sx.properties.metric.Size get_height()
	{
		//line 1106 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.__height;
	}
	
	
	public sx.properties.metric.Coordinate get_left()
	{
		//line 1107 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.__left;
	}
	
	
	public sx.properties.metric.Coordinate get_right()
	{
		//line 1108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.__right;
	}
	
	
	public sx.properties.metric.Coordinate get_top()
	{
		//line 1109 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.__top;
	}
	
	
	public sx.properties.metric.Coordinate get_bottom()
	{
		//line 1110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.__bottom;
	}
	
	
	public sx.skins.base.SkinBase get_skin()
	{
		//line 1111 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.__skin;
	}
	
	
	public sx.layout.Layout get_layout()
	{
		//line 1112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.__layout;
	}
	
	
	public sx.properties.metric.Coordinate set_left(sx.properties.metric.Size v)
	{
		//line 1115 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.__left.copyValueFrom(v);
		//line 1115 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.__left;
	}
	
	
	public sx.properties.metric.Coordinate set_right(sx.properties.metric.Size v)
	{
		//line 1116 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.__right.copyValueFrom(v);
		//line 1116 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.__right;
	}
	
	
	public sx.properties.metric.Coordinate set_top(sx.properties.metric.Size v)
	{
		//line 1117 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.__top.copyValueFrom(v);
		//line 1117 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.__top;
	}
	
	
	public sx.properties.metric.Coordinate set_bottom(sx.properties.metric.Size v)
	{
		//line 1118 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		this.__bottom.copyValueFrom(v);
		//line 1118 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.__bottom;
	}
	
	
	public sx.properties.metric.Size set_width(sx.properties.metric.Size v)
	{
		//line 1119 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.__width.copyValueFrom(v);
	}
	
	
	public sx.properties.metric.Size set_height(sx.properties.metric.Size v)
	{
		//line 1120 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return this.__height.copyValueFrom(v);
	}
	
	
	public sx.signals.Signal<haxe.lang.Function> get_onResize()
	{
		//line 1123 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__onResize == null )) 
		{
			//line 1123 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onResize = new sx.signals.Signal<haxe.lang.Function>();
		}
		else
		{
			//line 1123 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onResize;
		}
		
	}
	
	
	public sx.signals.Signal<haxe.lang.Function> get_onMove()
	{
		//line 1124 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__onMove == null )) 
		{
			//line 1124 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onMove = new sx.signals.Signal<haxe.lang.Function>();
		}
		else
		{
			//line 1124 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onMove;
		}
		
	}
	
	
	public sx.signals.Signal<haxe.lang.Function> get_onInitialize()
	{
		//line 1125 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__onInitialize == null )) 
		{
			//line 1125 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onInitialize = new sx.signals.Signal<haxe.lang.Function>();
		}
		else
		{
			//line 1125 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onInitialize;
		}
		
	}
	
	
	public sx.signals.Signal<haxe.lang.Function> get_onDispose()
	{
		//line 1126 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__onDispose == null )) 
		{
			//line 1126 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onDispose = new sx.signals.Signal<haxe.lang.Function>();
		}
		else
		{
			//line 1126 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onDispose;
		}
		
	}
	
	
	public sx.signals.Signal<haxe.lang.Function> get_onChildAdded()
	{
		//line 1127 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__onChildAdded == null )) 
		{
			//line 1127 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onChildAdded = new sx.signals.Signal<haxe.lang.Function>();
		}
		else
		{
			//line 1127 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onChildAdded;
		}
		
	}
	
	
	public sx.signals.Signal<haxe.lang.Function> get_onChildRemoved()
	{
		//line 1128 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__onChildRemoved == null )) 
		{
			//line 1128 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onChildRemoved = new sx.signals.Signal<haxe.lang.Function>();
		}
		else
		{
			//line 1128 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onChildRemoved;
		}
		
	}
	
	
	public sx.signals.Signal<haxe.lang.Function> get_onEnable()
	{
		//line 1129 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__onEnable == null )) 
		{
			//line 1129 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onEnable = new sx.signals.Signal<haxe.lang.Function>();
		}
		else
		{
			//line 1129 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onEnable;
		}
		
	}
	
	
	public sx.signals.Signal<haxe.lang.Function> get_onDisable()
	{
		//line 1130 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__onDisable == null )) 
		{
			//line 1130 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onDisable = new sx.signals.Signal<haxe.lang.Function>();
		}
		else
		{
			//line 1130 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onDisable;
		}
		
	}
	
	
	public sx.signals.Signal<haxe.lang.Function> get_onParentChanged()
	{
		//line 1131 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__onParentChanged == null )) 
		{
			//line 1131 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onParentChanged = new sx.signals.Signal<haxe.lang.Function>();
		}
		else
		{
			//line 1131 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onParentChanged;
		}
		
	}
	
	
	public sx.signals.Signal<haxe.lang.Function> get_onPointerPress()
	{
		//line 1132 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__onPointerPress == null )) 
		{
			//line 1132 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onPointerPress = new sx.signals.Signal<haxe.lang.Function>();
		}
		else
		{
			//line 1132 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onPointerPress;
		}
		
	}
	
	
	public sx.signals.Signal<haxe.lang.Function> get_onPointerRelease()
	{
		//line 1133 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__onPointerRelease == null )) 
		{
			//line 1133 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onPointerRelease = new sx.signals.Signal<haxe.lang.Function>();
		}
		else
		{
			//line 1133 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onPointerRelease;
		}
		
	}
	
	
	public sx.signals.Signal<haxe.lang.Function> get_onPointerTap()
	{
		//line 1134 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__onPointerTap == null )) 
		{
			//line 1134 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onPointerTap = new sx.signals.Signal<haxe.lang.Function>();
		}
		else
		{
			//line 1134 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onPointerTap;
		}
		
	}
	
	
	public sx.signals.Signal<haxe.lang.Function> get_onClick()
	{
		//line 1135 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__onPointerTap == null )) 
		{
			//line 1135 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onPointerTap = new sx.signals.Signal<haxe.lang.Function>();
		}
		else
		{
			//line 1135 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onPointerTap;
		}
		
	}
	
	
	public sx.signals.Signal<haxe.lang.Function> get_onPointerMove()
	{
		//line 1136 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__onPointerMove == null )) 
		{
			//line 1136 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onPointerMove = new sx.signals.Signal<haxe.lang.Function>();
		}
		else
		{
			//line 1136 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onPointerMove;
		}
		
	}
	
	
	public sx.signals.Signal<haxe.lang.Function> get_onPointerOver()
	{
		//line 1137 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__onPointerOver == null )) 
		{
			//line 1137 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onPointerOver = new sx.signals.Signal<haxe.lang.Function>();
		}
		else
		{
			//line 1137 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onPointerOver;
		}
		
	}
	
	
	public sx.signals.Signal<haxe.lang.Function> get_onPointerOut()
	{
		//line 1138 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		if (( this.__onPointerOut == null )) 
		{
			//line 1138 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onPointerOut = new sx.signals.Signal<haxe.lang.Function>();
		}
		else
		{
			//line 1138 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			return this.__onPointerOut;
		}
		
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		{
			//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			boolean __temp_executeDef1 = true;
			//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			switch (field.hashCode())
			{
				case -1094148408:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__resizeCounter")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__resizeCounter = ((int) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 666732453:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("numChildren")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.numChildren = ((int) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 92909918:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("alpha")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) 
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_alpha(value);
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						else
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.alpha = ((double) (value) );
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -908189618:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("scaleX")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) 
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_scaleX(value);
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						else
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.scaleX = ((double) (value) );
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -40300674:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("rotation")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) 
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_rotation(value);
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						else
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.rotation = ((double) (value) );
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -908189617:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("scaleY")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) 
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_scaleY(value);
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						else
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.scaleY = ((double) (value) );
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
			}
			
			//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (__temp_executeDef1) 
			{
				//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		{
			//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			boolean __temp_executeDef1 = true;
			//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			switch (field.hashCode())
			{
				case -1094148408:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__resizeCounter")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__resizeCounter = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 3373707:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("name")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.name = haxe.lang.Runtime.toString(value);
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 552599161:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__listeningParentResize")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__listeningParentResize = haxe.lang.Runtime.toBool(value);
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -223695734:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__parent")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) 
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set___parent(((sx.widgets.Widget) (value) ));
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						else
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.__parent = ((sx.widgets.Widget) (value) );
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1687521440:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onDispose")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onDispose = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 666732453:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("numChildren")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.numChildren = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1324770991:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onInitialize")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onInitialize = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 3317767:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("left")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.set_left(((sx.properties.metric.Size) (value) ));
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1725402864:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onPointerOut")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onPointerOut = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1484145689:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__left")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__left = ((sx.properties.metric.Coordinate) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1947881842:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onPointerOver")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onPointerOver = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 108511772:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("right")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.set_right(((sx.properties.metric.Size) (value) ));
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1947816047:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onPointerMove")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onPointerMove = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1241784892:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__right")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__right = ((sx.properties.metric.Coordinate) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1725407045:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onPointerTap")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onPointerTap = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 115029:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("top")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.set_top(((sx.properties.metric.Size) (value) ));
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -2068158807:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onPointerRelease")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onPointerRelease = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 90679669:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__top")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__top = ((sx.properties.metric.Coordinate) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 255599461:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onPointerPress")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onPointerPress = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1383228885:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("bottom")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.set_bottom(((sx.properties.metric.Size) (value) ));
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1687981015:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onDisable")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onDisable = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -611500533:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__bottom")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__bottom = ((sx.properties.metric.Coordinate) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -298833886:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onEnable")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onEnable = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -236891386:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__origin")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__origin = ((sx.properties.metric.Offset) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 543251243:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onParentChanged")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onParentChanged = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -248051597:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__offset")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__offset = ((sx.properties.metric.Offset) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -257142013:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onChildRemoved")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onChildRemoved = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("width")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.set_width(((sx.properties.metric.Size) (value) ));
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1780639843:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onChildAdded")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onChildAdded = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1246399974:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__width")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__width = ((sx.properties.metric.Size) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -241411536:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onMove")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onMove = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1221029593:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("height")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.set_height(((sx.properties.metric.Size) (value) ));
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 65576787:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onResize")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__onResize = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -449301241:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__height")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__height = ((sx.properties.metric.Size) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1244046987:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__tween")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__tween = ((sx.tween.Tweener) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -908189618:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("scaleX")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) 
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_scaleX(((double) (haxe.lang.Runtime.toDouble(value)) ));
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						else
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.scaleX = ((double) (haxe.lang.Runtime.toDouble(value)) );
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 285187621:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("disposed")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.disposed = haxe.lang.Runtime.toBool(value);
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -908189617:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("scaleY")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) 
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_scaleY(((double) (haxe.lang.Runtime.toDouble(value)) ));
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						else
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.scaleY = ((double) (haxe.lang.Runtime.toDouble(value)) );
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1234020052:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("initialized")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.initialized = haxe.lang.Runtime.toBool(value);
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -40300674:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("rotation")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) 
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_rotation(((double) (haxe.lang.Runtime.toDouble(value)) ));
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						else
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.rotation = ((double) (haxe.lang.Runtime.toDouble(value)) );
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -347208044:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("backend")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.backend = ((sx.backend.dummy.Backend) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 92909918:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("alpha")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) 
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_alpha(((double) (haxe.lang.Runtime.toDouble(value)) ));
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						else
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.alpha = ((double) (haxe.lang.Runtime.toDouble(value)) );
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 109780401:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("style")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) 
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_style(haxe.lang.Runtime.toString(value));
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						else
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.style = haxe.lang.Runtime.toString(value);
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 466743410:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("visible")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) 
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_visible(haxe.lang.Runtime.toBool(value));
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						else
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.visible = haxe.lang.Runtime.toBool(value);
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1609594047:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("enabled")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) 
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_enabled(haxe.lang.Runtime.toBool(value));
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						else
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.enabled = haxe.lang.Runtime.toBool(value);
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 529642498:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("overflow")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) 
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_overflow(haxe.lang.Runtime.toBool(value));
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						else
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.overflow = haxe.lang.Runtime.toBool(value);
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 110428934:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("arrangeable")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						if (handleProperties) 
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.set_arrangeable(haxe.lang.Runtime.toBool(value));
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						else
						{
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							this.arrangeable = haxe.lang.Runtime.toBool(value);
							//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
							return value;
						}
						
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 3532157:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("skin")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.set_skin(((sx.skins.base.SkinBase) (value) ));
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -337993974:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__layout")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__layout = ((sx.layout.Layout) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1483931299:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__skin")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__skin = ((sx.skins.base.SkinBase) (value) );
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1109722326:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("layout")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.set_layout(((sx.layout.Layout) (value) ));
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return value;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
			}
			
			//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (__temp_executeDef1) 
			{
				//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		{
			//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			boolean __temp_executeDef1 = true;
			//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			switch (field.hashCode())
			{
				case 592071001:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onPointerOut")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_onPointerOut")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 3373707:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("name")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.name;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1174332457:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onPointerOver")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_onPointerOver")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -995424086:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("parent")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_parent();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1174266662:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onPointerMove")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_onPointerMove")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -223695734:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__parent")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__parent;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1275389184:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onClick")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_onClick")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 666732453:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("numChildren")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.numChildren;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 592075182:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onPointerTap")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_onPointerTap")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 3317767:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("left")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_left();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -83377006:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onPointerRelease")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_onPointerRelease")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1484145689:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__left")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__left;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 2045372302:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onPointerPress")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_onPointerPress")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 108511772:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("right")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_right();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 191634466:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onParentChanged")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_onParentChanged")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1241784892:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__right")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__right;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -772539808:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onDisable")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_onDisable")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 115029:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("top")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_top();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -823492853:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onEnable")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_onEnable")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 90679669:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__top")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__top;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1532630828:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onChildRemoved")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_onChildRemoved")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1383228885:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("bottom")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_bottom();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 647307980:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onChildAdded")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_onChildAdded")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -611500533:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__bottom")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__bottom;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -772080233:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onDispose")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_onDispose")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1008619738:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("origin")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_origin();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 191439128:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onInitialize")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_onInitialize")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -236891386:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__origin")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__origin;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1067538265:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onMove")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_onMove")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1019779949:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("offset")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_offset();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -459082180:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onResize")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_onResize")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -248051597:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__offset")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__offset;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1498513500:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_height")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_height")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("width")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_width();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 935459753:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_width")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_width")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1246399974:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__width")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__width;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1660712792:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_bottom")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_bottom")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1221029593:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("height")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_height();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1985326072:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_top")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_top")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -449301241:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__height")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__height;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 930844671:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_right")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_right")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -908189618:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("scaleX")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.scaleX;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1415317956:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_left")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_left")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -908189617:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("scaleY")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.scaleY;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 970955827:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_layout")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_layout")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -40300674:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("rotation")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.rotation;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1976644806:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_skin")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_skin")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 92909918:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("alpha")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.alpha;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 697449268:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_bottom")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_bottom")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 466743410:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("visible")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.visible;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -74783508:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_top")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_top")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 529642498:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("overflow")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.overflow;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1145461747:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_right")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_right")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 3532157:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("skin")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_skin();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1976430416:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_left")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_left")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1483931299:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__skin")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__skin;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 859648560:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_height")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_height")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1109722326:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("layout")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_layout();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1150076829:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_width")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_width")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -337993974:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__layout")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__layout;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1085254067:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_parent")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_parent")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 110428934:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("arrangeable")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.arrangeable;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1861327529:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_arrangeable")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_arrangeable")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1609594047:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("enabled")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.enabled;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 155580223:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_overflow")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_overflow")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 109780401:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("style")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.style;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1147723842:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_tween")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_tween")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -347208044:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("backend")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.backend;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1621660572:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_enabled")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_enabled")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1234020052:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("initialized")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.initialized;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -597758009:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set___parent")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set___parent")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 285187621:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("disposed")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.disposed;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1060898204:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_offset")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_offset")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 110773867:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("tween")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_tween();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1072058415:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_origin")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_origin")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1244046987:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__tween")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__tween;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 932113300:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_style")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_style")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1463972723:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("onResize")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onResize();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1387206233:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_layout")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_layout")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 65576787:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onResize")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onResize;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1415532346:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_skin")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_skin")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1013139888:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("onMove")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onMove();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 454676885:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_visible")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_visible")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -241411536:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onMove")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onMove;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 915242817:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_alpha")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_alpha")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 372583555:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("onChildAdded")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onChildAdded();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1185673524:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_scaleY")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_scaleY")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1780639843:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onChildAdded")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onChildAdded;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1185673525:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_scaleX")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_scaleX")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -484536541:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("onChildRemoved")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onChildRemoved();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -414362949:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_rotation")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_rotation")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -257142013:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onChildRemoved")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onChildRemoved;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1904005519:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__initializeChildren")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__initializeChildren")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 2083955467:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("onParentChanged")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onParentChanged();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -2001696036:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__initializeSelf")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__initializeSelf")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 543251243:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onParentChanged")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onParentChanged;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1377326875:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__updateParentResizeListener")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__updateParentResizeListener")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1099562050:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("onEnable")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onEnable();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -233220249:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__affectParentResizeListener")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__affectParentResizeListener")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -298833886:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onEnable")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onEnable;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -310640323:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__reactParentResize")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__reactParentResize")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1287379959:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("onDisable")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onDisable();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -2009295290:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__parentResized")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__parentResized")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1687981015:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onDisable")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onDisable;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1029790878:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__parentHeightProvider")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__parentHeightProvider")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 28204933:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("onPointerPress")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerPress();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 208151917:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__parentWidthProvider")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__parentWidthProvider")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 255599461:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onPointerPress")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onPointerPress;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -709158207:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__offsetChanged")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__offsetChanged")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1550968119:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("onPointerRelease")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerRelease();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1595299022:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__originChanged")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__originChanged")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -2068158807:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onPointerRelease")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onPointerRelease;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1237360339:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__moved")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__moved")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 317350757:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("onPointerTap")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerTap();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -336065026:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__propertyMoved")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__propertyMoved")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1725407045:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onPointerTap")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onPointerTap;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -749022640:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__resized")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__resized")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1351902487:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("onClick")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onClick();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -982310213:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__propertyResized")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__propertyResized")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1247744079:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("onPointerMove")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerMove();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1695585768:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__createBackend")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__createBackend")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1947816047:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onPointerMove")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onPointerMove;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 78356195:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("applyStyle")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "applyStyle")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1247809874:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("onPointerOver")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerOver();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1671767583:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("dispose")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "dispose")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1947881842:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onPointerOver")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onPointerOver;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 729128585:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("localToGlobal")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "localToGlobal")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 317346576:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("onPointerOut")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerOut();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1731558541:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("globalToLocal")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "globalToLocal")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1725402864:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onPointerOut")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onPointerOut;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 2105594551:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("isEnabled")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "isEnabled")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -83285297:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("onInitialize")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onInitialize();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1041904654:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("getParentAs")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getParentAs")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1324770991:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onInitialize")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onInitialize;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 700591008:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("getParent")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getParent")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1286920384:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("onDispose")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onDispose();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1987557757:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("getDirectChild")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getDirectChild")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1687521440:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__onDispose")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__onDispose;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1783128632:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("getChildAs")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getChildAs")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 552599161:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__listeningParentResize")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__listeningParentResize;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1950456678:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("getChild")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getChild")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1094148408:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__resizeCounter")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__resizeCounter;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 746861701:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("swapChildrenAt")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "swapChildrenAt")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 871091088:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("initialize")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "initialize")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 2141556914:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("swapChildren")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "swapChildren")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1262040837:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("addChild")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addChild")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1783128633:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("getChildAt")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getChildAt")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1640464754:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("addChildAt")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addChildAt")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1811028760:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("setChildIndex")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setChildIndex")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -319766792:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("removeChild")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "removeChild")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1036897548:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("getChildIndex")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getChildIndex")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1941760331:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("removeChildAt")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "removeChildAt")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -567445985:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("contains")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "contains")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 65074851:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("removeChildren")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "removeChildren")) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
			}
			
			//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (__temp_executeDef1) 
			{
				//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		{
			//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			boolean __temp_executeDef1 = true;
			//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			switch (field.hashCode())
			{
				case -1094148408:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__resizeCounter")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((double) (this.__resizeCounter) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 666732453:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("numChildren")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((double) (this.numChildren) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 92909918:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("alpha")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.alpha;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -908189618:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("scaleX")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.scaleX;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -40300674:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("rotation")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.rotation;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -908189617:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("scaleY")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.scaleY;
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
			}
			
			//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (__temp_executeDef1) 
			{
				//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		{
			//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			boolean __temp_executeDef1 = true;
			//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			switch (field.hashCode())
			{
				case 592071001:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onPointerOut")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerOut();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 871091088:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("initialize")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.initialize();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1174332457:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onPointerOver")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerOver();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1262040837:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("addChild")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.addChild(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1174266662:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onPointerMove")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerMove();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1640464754:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("addChildAt")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.addChildAt(((sx.widgets.Widget) (dynargs.__get(0)) ), ((int) (haxe.lang.Runtime.toInt(dynargs.__get(1))) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1275389184:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onClick")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onClick();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -319766792:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("removeChild")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.removeChild(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 592075182:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onPointerTap")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerTap();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1941760331:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("removeChildAt")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.removeChildAt(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -83377006:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onPointerRelease")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerRelease();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 65074851:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("removeChildren")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.removeChildren(dynargs.__get(0), dynargs.__get(1));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 2045372302:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onPointerPress")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onPointerPress();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -567445985:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("contains")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.contains(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 191634466:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onParentChanged")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onParentChanged();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1036897548:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("getChildIndex")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.getChildIndex(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -772539808:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onDisable")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onDisable();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1811028760:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("setChildIndex")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.setChildIndex(((sx.widgets.Widget) (dynargs.__get(0)) ), ((int) (haxe.lang.Runtime.toInt(dynargs.__get(1))) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -823492853:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onEnable")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onEnable();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1783128633:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("getChildAt")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.getChildAt(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1532630828:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onChildRemoved")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onChildRemoved();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 2141556914:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("swapChildren")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.swapChildren(((sx.widgets.Widget) (dynargs.__get(0)) ), ((sx.widgets.Widget) (dynargs.__get(1)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 647307980:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onChildAdded")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onChildAdded();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 746861701:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("swapChildrenAt")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.swapChildrenAt(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ), ((int) (haxe.lang.Runtime.toInt(dynargs.__get(1))) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -772080233:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onDispose")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onDispose();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1950456678:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("getChild")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.getChild(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 191439128:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onInitialize")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onInitialize();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1783128632:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("getChildAs")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((java.lang.Object) (this.getChildAs(haxe.lang.Runtime.toString(dynargs.__get(0)), ((java.lang.Class) (dynargs.__get(1)) ))) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1067538265:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onMove")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onMove();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1987557757:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("getDirectChild")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.getDirectChild(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -459082180:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_onResize")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_onResize();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 700591008:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("getParent")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.getParent(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1498513500:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_height")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_height(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1041904654:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("getParentAs")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return ((java.lang.Object) (this.getParentAs(haxe.lang.Runtime.toString(dynargs.__get(0)), ((java.lang.Class) (dynargs.__get(1)) ))) );
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 935459753:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_width")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_width(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 2105594551:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("isEnabled")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.isEnabled();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1660712792:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_bottom")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_bottom(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1731558541:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("globalToLocal")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.globalToLocal(((sx.backend.dummy.Point) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1985326072:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_top")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_top(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 729128585:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("localToGlobal")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.localToGlobal(((sx.backend.dummy.Point) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 930844671:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_right")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_right(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1671767583:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("dispose")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.dispose(dynargs.__get(0));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1415317956:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_left")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_left(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 78356195:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("applyStyle")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.applyStyle();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 970955827:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_layout")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_layout();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1695585768:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__createBackend")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__createBackend();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1976644806:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_skin")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_skin();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -982310213:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__propertyResized")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__propertyResized(((sx.properties.metric.Size) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(2))) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 697449268:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_bottom")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_bottom();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -749022640:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__resized")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__resized(((sx.properties.metric.Size) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(2))) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -74783508:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_top")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_top();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -336065026:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__propertyMoved")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__propertyMoved(((sx.properties.metric.Size) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(2))) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1145461747:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_right")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_right();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1237360339:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__moved")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__moved();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1976430416:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_left")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_left();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1595299022:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__originChanged")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__originChanged();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 859648560:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_height")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_height();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -709158207:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__offsetChanged")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__offsetChanged();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1150076829:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_width")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_width();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 208151917:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__parentWidthProvider")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__parentWidthProvider();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1085254067:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_parent")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_parent();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1029790878:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__parentHeightProvider")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.__parentHeightProvider();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1861327529:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_arrangeable")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_arrangeable(haxe.lang.Runtime.toBool(dynargs.__get(0)));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -2009295290:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__parentResized")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__parentResized(((sx.widgets.Widget) (dynargs.__get(0)) ), ((sx.properties.metric.Size) (dynargs.__get(1)) ), haxe.lang.Runtime.toString(dynargs.__get(2)), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(3))) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 155580223:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_overflow")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_overflow(haxe.lang.Runtime.toBool(dynargs.__get(0)));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -310640323:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__reactParentResize")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__reactParentResize(((sx.properties.metric.Coordinate) (dynargs.__get(0)) ), ((sx.properties.metric.Size) (dynargs.__get(1)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1147723842:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_tween")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_tween();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -233220249:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__affectParentResizeListener")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__affectParentResizeListener(((sx.properties.metric.Size) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1621660572:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_enabled")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_enabled(haxe.lang.Runtime.toBool(dynargs.__get(0)));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1377326875:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__updateParentResizeListener")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__updateParentResizeListener();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -597758009:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set___parent")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set___parent(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -2001696036:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__initializeSelf")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__initializeSelf();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1060898204:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_offset")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_offset();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1904005519:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("__initializeChildren")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						this.__initializeChildren();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1072058415:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("get_origin")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.get_origin();
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -414362949:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_rotation")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_rotation(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 932113300:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_style")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_style(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1185673525:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_scaleX")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_scaleX(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1387206233:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_layout")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_layout(((sx.layout.Layout) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case -1185673524:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_scaleY")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_scaleY(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 1415532346:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_skin")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_skin(((sx.skins.base.SkinBase) (dynargs.__get(0)) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 915242817:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_alpha")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_alpha(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
				case 454676885:
				{
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					if (field.equals("set_visible")) 
					{
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						__temp_executeDef1 = false;
						//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
						return this.set_visible(haxe.lang.Runtime.toBool(dynargs.__get(0)));
					}
					
					//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
					break;
				}
				
				
			}
			
			//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			if (__temp_executeDef1) 
			{
				//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__resizeCounter");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__listeningParentResize");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__onDispose");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("onDispose");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__onInitialize");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("onInitialize");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__onPointerOut");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("onPointerOut");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__onPointerOver");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("onPointerOver");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__onPointerMove");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("onPointerMove");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("onClick");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__onPointerTap");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("onPointerTap");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__onPointerRelease");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("onPointerRelease");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__onPointerPress");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("onPointerPress");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__onDisable");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("onDisable");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__onEnable");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("onEnable");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__onParentChanged");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("onParentChanged");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__onChildRemoved");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("onChildRemoved");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__onChildAdded");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("onChildAdded");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__onMove");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("onMove");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__onResize");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("onResize");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__tween");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("tween");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("disposed");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("initialized");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("backend");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("style");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("enabled");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("arrangeable");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__layout");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("layout");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__skin");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("skin");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("overflow");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("visible");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("alpha");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("rotation");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("scaleY");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("scaleX");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__height");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("height");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__width");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("width");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__offset");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("offset");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__origin");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("origin");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__bottom");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("bottom");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__top");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("top");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__right");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("right");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__left");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("left");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("numChildren");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("__parent");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("parent");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		baseArr.push("name");
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
		{
			//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Widget.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


