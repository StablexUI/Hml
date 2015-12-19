package sx.properties;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class AutoSize extends haxe.lang.HxObject
{
	public AutoSize(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public AutoSize(java.lang.Object byDefault)
	{
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		sx.properties.AutoSize.__hx_ctor_sx_properties_AutoSize(this, byDefault);
	}
	
	
	public static void __hx_ctor_sx_properties_AutoSize(sx.properties.AutoSize __temp_me129, java.lang.Object byDefault)
	{
		//line 30 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		__temp_me129.weak = false;
		//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		__temp_me129.__height = false;
		//line 16 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		__temp_me129.__width = false;
		//line 37 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		boolean __temp_byDefault128 = ( (haxe.lang.Runtime.eq(byDefault, null)) ? (false) : (haxe.lang.Runtime.toBool(byDefault)) );
		//line 38 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		__temp_me129.__width = __temp_byDefault128;
		//line 39 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		__temp_me129.__height = __temp_byDefault128;
		//line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		__temp_me129.onChange = new sx.signals.Signal<haxe.lang.Function>();
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		return new sx.properties.AutoSize(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		return new sx.properties.AutoSize(((java.lang.Object) (arr.__get(0)) ));
	}
	
	
	
	
	public boolean __width;
	
	
	
	public boolean __height;
	
	public sx.signals.Signal<haxe.lang.Function> onChange;
	
	public boolean weak;
	
	public boolean either()
	{
		//line 50 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		return ( this.get_width() || this.get_height() );
	}
	
	
	public boolean neither()
	{
		//line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		return (  ! (this.get_width())  &&  ! (this.get_height())  );
	}
	
	
	public boolean both()
	{
		//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		return ( this.get_width() && this.get_height() );
	}
	
	
	public void set(boolean width, boolean height)
	{
		//line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		boolean widthChanged = ( this.__width != width );
		//line 80 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		boolean heightChanged = ( this.__height != height );
		//line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		this.__width = width;
		//line 83 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		this.__height = height;
		//line 85 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		if (( widthChanged || heightChanged )) 
		{
			//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			if (( ( this.onChange != null ) && ( this.onChange.__listeners.length > 0 ) )) 
			{
				//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				if (this.onChange.__listenersInUse) 
				{
					//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					{
						//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						int _g = 0;
						//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						haxe.root.Array<haxe.lang.Function> _g1 = this.onChange.__listeners;
						//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						while (( _g < _g1.length ))
						{
							//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							haxe.lang.Function listener = _g1.__get(_g);
							//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							 ++ _g;
							//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							listener.__hx_invoke2_o(0.0, widthChanged, 0.0, heightChanged);
						}
						
					}
					
					//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					boolean __temp_expr1 = false;
				}
				else
				{
					//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					this.onChange.__listenersInUse = true;
					//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					{
						//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						int _g2 = 0;
						//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						haxe.root.Array<haxe.lang.Function> _g11 = this.onChange.__listeners;
						//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						while (( _g2 < _g11.length ))
						{
							//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							haxe.lang.Function listener1 = _g11.__get(_g2);
							//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							 ++ _g2;
							//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							listener1.__hx_invoke2_o(0.0, widthChanged, 0.0, heightChanged);
						}
						
					}
					
					//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					this.onChange.__listenersInUse = false;
				}
				
			}
			
		}
		
	}
	
	
	public sx.properties.AutoSize copyValueFrom(sx.properties.AutoSize autoSize)
	{
		//line 98 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		this.set(autoSize.get_width(), autoSize.get_height());
		//line 99 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		if (autoSize.weak) 
		{
			//line 99 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			autoSize.dispose();
		}
		
		//line 101 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		return this;
	}
	
	
	public void dispose()
	{
	}
	
	
	public final void __invokeOnChange(boolean horizontalChanged, boolean verticalChanged)
	{
		//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (( ( this.onChange != null ) && ( this.onChange.__listeners.length > 0 ) )) 
		{
			//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (this.onChange.__listenersInUse) 
			{
				//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g = 0;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g1 = this.onChange.__listeners;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g < _g1.length ))
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener = _g1.__get(_g);
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener.__hx_invoke2_o(0.0, horizontalChanged, 0.0, verticalChanged);
					}
					
				}
				
				//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				boolean __temp_expr1 = false;
			}
			else
			{
				//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.onChange.__listenersInUse = true;
				//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g2 = 0;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g11 = this.onChange.__listeners;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g2 < _g11.length ))
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener1 = _g11.__get(_g2);
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g2;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener1.__hx_invoke2_o(0.0, horizontalChanged, 0.0, verticalChanged);
					}
					
				}
				
				//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.onChange.__listenersInUse = false;
			}
			
		}
		
	}
	
	
	public boolean set_width(boolean value)
	{
		//line 128 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		if (( this.__width != value )) 
		{
			//line 129 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			this.__width = value;
			//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			if (( ( this.onChange != null ) && ( this.onChange.__listeners.length > 0 ) )) 
			{
				//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				if (this.onChange.__listenersInUse) 
				{
					//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					{
						//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						int _g = 0;
						//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						haxe.root.Array<haxe.lang.Function> _g1 = this.onChange.__listeners;
						//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						while (( _g < _g1.length ))
						{
							//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							haxe.lang.Function listener = _g1.__get(_g);
							//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							 ++ _g;
							//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							listener.__hx_invoke2_o(0.0, true, 0.0, false);
						}
						
					}
					
					//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					boolean __temp_expr1 = false;
				}
				else
				{
					//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					this.onChange.__listenersInUse = true;
					//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					{
						//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						int _g2 = 0;
						//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						haxe.root.Array<haxe.lang.Function> _g11 = this.onChange.__listeners;
						//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						while (( _g2 < _g11.length ))
						{
							//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							haxe.lang.Function listener1 = _g11.__get(_g2);
							//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							 ++ _g2;
							//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							listener1.__hx_invoke2_o(0.0, true, 0.0, false);
						}
						
					}
					
					//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					this.onChange.__listenersInUse = false;
				}
				
			}
			
		}
		else
		{
			//line 132 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			this.__width = value;
		}
		
		//line 136 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		return value;
	}
	
	
	public boolean set_height(boolean value)
	{
		//line 145 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		if (( this.__height != value )) 
		{
			//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			this.__height = value;
			//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			if (( ( this.onChange != null ) && ( this.onChange.__listeners.length > 0 ) )) 
			{
				//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				if (this.onChange.__listenersInUse) 
				{
					//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					{
						//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						int _g = 0;
						//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						haxe.root.Array<haxe.lang.Function> _g1 = this.onChange.__listeners;
						//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						while (( _g < _g1.length ))
						{
							//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							haxe.lang.Function listener = _g1.__get(_g);
							//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							 ++ _g;
							//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							listener.__hx_invoke2_o(0.0, false, 0.0, true);
						}
						
					}
					
					//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					boolean __temp_expr1 = false;
				}
				else
				{
					//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					this.onChange.__listenersInUse = true;
					//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					{
						//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						int _g2 = 0;
						//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						haxe.root.Array<haxe.lang.Function> _g11 = this.onChange.__listeners;
						//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						while (( _g2 < _g11.length ))
						{
							//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							haxe.lang.Function listener1 = _g11.__get(_g2);
							//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							 ++ _g2;
							//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
							listener1.__hx_invoke2_o(0.0, false, 0.0, true);
						}
						
					}
					
					//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					this.onChange.__listenersInUse = false;
				}
				
			}
			
		}
		else
		{
			//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			this.__height = value;
		}
		
		//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		return value;
	}
	
	
	public boolean get_width()
	{
		//line 157 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		return this.__width;
	}
	
	
	public boolean get_height()
	{
		//line 158 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		return this.__height;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		{
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			switch (field.hashCode())
			{
				case 3645304:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("weak")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.weak = haxe.lang.Runtime.toBool(value);
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return value;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("width")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.set_width(haxe.lang.Runtime.toBool(value));
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return value;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 1036773999:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("onChange")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.onChange = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return value;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 1246399974:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("__width")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.__width = haxe.lang.Runtime.toBool(value);
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return value;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case -449301241:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("__height")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.__height = haxe.lang.Runtime.toBool(value);
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return value;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case -1221029593:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("height")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.set_height(haxe.lang.Runtime.toBool(value));
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return value;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
			}
			
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		{
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			switch (field.hashCode())
			{
				case 859648560:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("get_height")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_height")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 113126854:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("width")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.get_width();
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 1150076829:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("get_width")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_width")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 1246399974:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("__width")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.__width;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case -1498513500:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("set_height")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_height")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case -1221029593:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("height")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.get_height();
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 935459753:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("set_width")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_width")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case -449301241:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("__height")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.__height;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 607543015:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("__invokeOnChange")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__invokeOnChange")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 1036773999:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("onChange")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.onChange;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 1671767583:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("dispose")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "dispose")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 3645304:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("weak")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.weak;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 2000617670:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("copyValueFrom")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "copyValueFrom")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case -1302894395:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("either")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "either")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 113762:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("set")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 1833230003:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("neither")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "neither")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 3029889:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("both")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "both")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
			}
			
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		{
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			switch (field.hashCode())
			{
				case 859648560:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("get_height")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.get_height();
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case -1302894395:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("either")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.either();
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 1150076829:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("get_width")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.get_width();
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 1833230003:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("neither")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.neither();
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case -1498513500:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("set_height")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.set_height(haxe.lang.Runtime.toBool(dynargs.__get(0)));
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 3029889:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("both")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.both();
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 935459753:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("set_width")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.set_width(haxe.lang.Runtime.toBool(dynargs.__get(0)));
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 113762:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("set")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.set(haxe.lang.Runtime.toBool(dynargs.__get(0)), haxe.lang.Runtime.toBool(dynargs.__get(1)));
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 607543015:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("__invokeOnChange")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.__invokeOnChange(haxe.lang.Runtime.toBool(dynargs.__get(0)), haxe.lang.Runtime.toBool(dynargs.__get(1)));
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 2000617670:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("copyValueFrom")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						return this.copyValueFrom(((sx.properties.AutoSize) (dynargs.__get(0)) ));
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
				case 1671767583:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					if (field.equals("dispose")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
						this.dispose();
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
					break;
				}
				
				
			}
			
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		baseArr.push("weak");
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		baseArr.push("onChange");
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		baseArr.push("__height");
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		baseArr.push("height");
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		baseArr.push("__width");
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		baseArr.push("width");
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
		{
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/AutoSize.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


