package sx.properties;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Align extends haxe.lang.HxObject
{
	public Align(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Align(java.lang.String horizontal, java.lang.String vertical)
	{
		//line 98 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		sx.properties.Align.__hx_ctor_sx_properties_Align(this, horizontal, vertical);
	}
	
	
	public static void __hx_ctor_sx_properties_Align(sx.properties.Align __temp_me127, java.lang.String horizontal, java.lang.String vertical)
	{
		//line 92 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		__temp_me127.weak = false;
		//line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		__temp_me127.__vertical = haxe.lang.Runtime.toString("none");
		//line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		__temp_me127.__horizontal = haxe.lang.Runtime.toString("none");
		//line 99 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		if (( vertical == null )) 
		{
			//line 99 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			vertical = "none";
		}
		
		//line 99 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		if (( horizontal == null )) 
		{
			//line 99 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			horizontal = "none";
		}
		
		//line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		__temp_me127.__horizontal = horizontal;
		//line 101 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		__temp_me127.__vertical = vertical;
		//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		__temp_me127.onChange = new sx.signals.Signal<haxe.lang.Function>();
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		return new sx.properties.Align(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		return new sx.properties.Align(haxe.lang.Runtime.toString(arr.__get(0)), haxe.lang.Runtime.toString(arr.__get(1)));
	}
	
	
	
	
	public java.lang.String __horizontal;
	
	
	
	public java.lang.String __vertical;
	
	public sx.signals.Signal<haxe.lang.Function> onChange;
	
	public boolean weak;
	
	public void set(java.lang.String horizontal, java.lang.String vertical)
	{
		//line 114 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		boolean horizontalChanged =  ! (haxe.lang.Runtime.valEq(this.__horizontal, horizontal)) ;
		//line 115 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		boolean verticalChanged =  ! (haxe.lang.Runtime.valEq(this.__vertical, vertical)) ;
		//line 117 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		this.__horizontal = horizontal;
		//line 118 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		this.__vertical = vertical;
		//line 120 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		if (( horizontalChanged || verticalChanged )) 
		{
			//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			if (( ( this.onChange != null ) && ( this.onChange.__listeners.length > 0 ) )) 
			{
				//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				if (this.onChange.__listenersInUse) 
				{
					//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					{
						//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						int _g = 0;
						//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						haxe.root.Array<haxe.lang.Function> _g1 = this.onChange.__listeners;
						//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						while (( _g < _g1.length ))
						{
							//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							haxe.lang.Function listener = _g1.__get(_g);
							//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							 ++ _g;
							//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							listener.__hx_invoke2_o(0.0, horizontalChanged, 0.0, verticalChanged);
						}
						
					}
					
					//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					boolean __temp_expr1 = false;
				}
				else
				{
					//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					this.onChange.__listenersInUse = true;
					//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					{
						//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						int _g2 = 0;
						//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						haxe.root.Array<haxe.lang.Function> _g11 = this.onChange.__listeners;
						//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						while (( _g2 < _g11.length ))
						{
							//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							haxe.lang.Function listener1 = _g11.__get(_g2);
							//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							 ++ _g2;
							//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
							listener1.__hx_invoke2_o(0.0, horizontalChanged, 0.0, verticalChanged);
						}
						
					}
					
					//line 121 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					this.onChange.__listenersInUse = false;
				}
				
			}
			
		}
		
	}
	
	
	public sx.properties.Align copyValueFrom(sx.properties.Align align)
	{
		//line 133 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		this.set(align.get_horizontal(), align.get_vertical());
		//line 134 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		if (align.weak) 
		{
			//line 134 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			align.dispose();
		}
		
		//line 136 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
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
	
	
	public java.lang.String set_vertical(java.lang.String value)
	{
		//line 163 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		this.__vertical = value;
		//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		if (( ( this.onChange != null ) && ( this.onChange.__listeners.length > 0 ) )) 
		{
			//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			if (this.onChange.__listenersInUse) 
			{
				//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				{
					//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					int _g = 0;
					//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					haxe.root.Array<haxe.lang.Function> _g1 = this.onChange.__listeners;
					//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					while (( _g < _g1.length ))
					{
						//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						haxe.lang.Function listener = _g1.__get(_g);
						//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						 ++ _g;
						//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						listener.__hx_invoke2_o(0.0, false, 0.0, true);
					}
					
				}
				
				//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				boolean __temp_expr1 = false;
			}
			else
			{
				//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				this.onChange.__listenersInUse = true;
				//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				{
					//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					int _g2 = 0;
					//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					haxe.root.Array<haxe.lang.Function> _g11 = this.onChange.__listeners;
					//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					while (( _g2 < _g11.length ))
					{
						//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						haxe.lang.Function listener1 = _g11.__get(_g2);
						//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						 ++ _g2;
						//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						listener1.__hx_invoke2_o(0.0, false, 0.0, true);
					}
					
				}
				
				//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				this.onChange.__listenersInUse = false;
			}
			
		}
		
		//line 166 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		return value;
	}
	
	
	public java.lang.String set_horizontal(java.lang.String value)
	{
		//line 175 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		this.__horizontal = value;
		//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		if (( ( this.onChange != null ) && ( this.onChange.__listeners.length > 0 ) )) 
		{
			//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			if (this.onChange.__listenersInUse) 
			{
				//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				{
					//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					int _g = 0;
					//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					haxe.root.Array<haxe.lang.Function> _g1 = this.onChange.__listeners;
					//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					while (( _g < _g1.length ))
					{
						//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						haxe.lang.Function listener = _g1.__get(_g);
						//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						 ++ _g;
						//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						listener.__hx_invoke2_o(0.0, true, 0.0, false);
					}
					
				}
				
				//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				boolean __temp_expr1 = false;
			}
			else
			{
				//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				this.onChange.__listenersInUse = true;
				//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				{
					//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					int _g2 = 0;
					//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					haxe.root.Array<haxe.lang.Function> _g11 = this.onChange.__listeners;
					//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					while (( _g2 < _g11.length ))
					{
						//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						haxe.lang.Function listener1 = _g11.__get(_g2);
						//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						 ++ _g2;
						//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						listener1.__hx_invoke2_o(0.0, true, 0.0, false);
					}
					
				}
				
				//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				this.onChange.__listenersInUse = false;
			}
			
		}
		
		//line 178 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		return value;
	}
	
	
	public java.lang.String get_vertical()
	{
		//line 183 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		return this.__vertical;
	}
	
	
	public java.lang.String get_horizontal()
	{
		//line 184 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		return this.__horizontal;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		{
			//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			boolean __temp_executeDef1 = true;
			//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			switch (field.hashCode())
			{
				case 3645304:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("weak")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.weak = haxe.lang.Runtime.toBool(value);
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return value;
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 1387629604:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("horizontal")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.set_horizontal(haxe.lang.Runtime.toString(value));
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return value;
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 1036773999:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("onChange")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.onChange = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return value;
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 1853898756:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("__horizontal")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.__horizontal = haxe.lang.Runtime.toString(value);
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return value;
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 912429910:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("__vertical")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.__vertical = haxe.lang.Runtime.toString(value);
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return value;
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case -1984141450:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("vertical")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.set_vertical(haxe.lang.Runtime.toString(value));
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return value;
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
			}
			
			//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			if (__temp_executeDef1) 
			{
				//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		{
			//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			boolean __temp_executeDef1 = true;
			//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			switch (field.hashCode())
			{
				case 167805101:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("get_horizontal")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_horizontal")) );
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 1387629604:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("horizontal")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.get_horizontal();
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 387770943:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("get_vertical")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_vertical")) );
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 1853898756:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("__horizontal")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.__horizontal;
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case -1603931103:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("set_horizontal")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_horizontal")) );
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case -1984141450:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("vertical")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.get_vertical();
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 1936763571:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("set_vertical")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_vertical")) );
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 912429910:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("__vertical")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.__vertical;
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 607543015:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("__invokeOnChange")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__invokeOnChange")) );
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 1036773999:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("onChange")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.onChange;
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 1671767583:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("dispose")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "dispose")) );
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 3645304:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("weak")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.weak;
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 2000617670:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("copyValueFrom")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "copyValueFrom")) );
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 113762:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("set")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set")) );
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
			}
			
			//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			if (__temp_executeDef1) 
			{
				//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		{
			//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			boolean __temp_executeDef1 = true;
			//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			switch (field.hashCode())
			{
				case 167805101:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("get_horizontal")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.get_horizontal();
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 113762:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("set")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.set(haxe.lang.Runtime.toString(dynargs.__get(0)), haxe.lang.Runtime.toString(dynargs.__get(1)));
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 387770943:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("get_vertical")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.get_vertical();
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 2000617670:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("copyValueFrom")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.copyValueFrom(((sx.properties.Align) (dynargs.__get(0)) ));
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case -1603931103:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("set_horizontal")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.set_horizontal(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 1671767583:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("dispose")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.dispose();
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 1936763571:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("set_vertical")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						return this.set_vertical(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
				case 607543015:
				{
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					if (field.equals("__invokeOnChange")) 
					{
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						__temp_executeDef1 = false;
						//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
						this.__invokeOnChange(haxe.lang.Runtime.toBool(dynargs.__get(0)), haxe.lang.Runtime.toBool(dynargs.__get(1)));
					}
					
					//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
					break;
				}
				
				
			}
			
			//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			if (__temp_executeDef1) 
			{
				//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		baseArr.push("weak");
		//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		baseArr.push("onChange");
		//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		baseArr.push("__vertical");
		//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		baseArr.push("vertical");
		//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		baseArr.push("__horizontal");
		//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		baseArr.push("horizontal");
		//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
		{
			//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/Align.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


