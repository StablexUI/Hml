package sx.signals;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Signal<T> extends haxe.lang.HxObject
{
	public Signal(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Signal()
	{
		//line 35 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		sx.signals.Signal.__hx_ctor_sx_signals_Signal(this);
	}
	
	
	public static <T_c> void __hx_ctor_sx_signals_Signal(sx.signals.Signal<T_c> __temp_me144)
	{
		//line 29 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		__temp_me144.__listenersInUse = false;
		//line 37 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		__temp_me144.__listeners = new haxe.root.Array<T_c>(( (T_c[]) (new java.lang.Object[] {}) ));
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		return new sx.signals.Signal<java.lang.Object>(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		return new sx.signals.Signal<java.lang.Object>();
	}
	
	
	
	
	public haxe.root.Array<T> __listeners;
	
	public boolean __listenersInUse;
	
	public void add(T listener)
	{
		//line 46 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (this.__listenersInUse) 
		{
			//line 46 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			this.__listeners = this.__listeners.copy();
			//line 46 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			this.__listenersInUse = false;
		}
		
		//line 47 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		this.__listeners.push(listener);
	}
	
	
	public boolean unique(T listener)
	{
		//line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (( this.__indexOf(listener) >= 0 )) 
		{
			//line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			return false;
		}
		
		//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (this.__listenersInUse) 
		{
			//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			this.__listeners = this.__listeners.copy();
			//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			this.__listenersInUse = false;
		}
		
		//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		this.__listeners.push(listener);
		//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		return true;
	}
	
	
	public boolean remove(T listener)
	{
		//line 76 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		int index = this.__indexOf(listener);
		//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (( index < 0 )) 
		{
			//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			return false;
		}
		
		//line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (this.__listenersInUse) 
		{
			//line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			this.__listeners = this.__listeners.copy();
			//line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			this.__listenersInUse = false;
		}
		
		//line 80 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		this.__listeners.splice(index, 1);
		//line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		return true;
	}
	
	
	public boolean will(T listener)
	{
		//line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		return ( this.__indexOf(listener) >= 0 );
	}
	
	
	public int __indexOf(T listener)
	{
		//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		int index = -1;
		//line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		{
			//line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			int _g1 = 0;
			//line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			int _g = this.__listeners.length;
			//line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			while (( _g1 < _g ))
			{
				//line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				int i = _g1++;
				//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (haxe.root.Reflect.compareMethods(this.__listeners.__get(i), listener)) 
				{
					//line 113 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					index = i;
					//line 114 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
			}
			
		}
		
		//line 118 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		return index;
	}
	
	
	public final void __cloneListenersInUse()
	{
		//line 127 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (this.__listenersInUse) 
		{
			//line 128 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			this.__listeners = this.__listeners.copy();
			//line 129 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			this.__listenersInUse = false;
		}
		
	}
	
	
	public int get_listenersCount()
	{
		//line 135 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		return this.__listeners.length;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			switch (field.hashCode())
			{
				case -2139192573:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("__listenersInUse")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__listenersInUse = haxe.lang.Runtime.toBool(value);
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
				case -1619320225:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("__listeners")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__listeners = ((haxe.root.Array<T>) (value) );
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			switch (field.hashCode())
			{
				case -354900455:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("get_listenersCount")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_listenersCount")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
				case 1922899472:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("listenersCount")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return this.get_listenersCount();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
				case -1453463040:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("__cloneListenersInUse")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__cloneListenersInUse")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
				case -1619320225:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("__listeners")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return this.__listeners;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
				case 97066601:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("__indexOf")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__indexOf")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
				case -2139192573:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("__listenersInUse")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return this.__listenersInUse;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
				case 3649490:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("will")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "will")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
				case 96417:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("add")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "add")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
				case -934610812:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("remove")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "remove")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
				case -840528943:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("unique")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "unique")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			switch (field.hashCode())
			{
				case 1922899472:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("listenersCount")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return ((double) (this.get_listenersCount()) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			switch (field.hashCode())
			{
				case -354900455:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("get_listenersCount")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return this.get_listenersCount();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
				case 96417:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("add")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.add(((T) (dynargs.__get(0)) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
				case -1453463040:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("__cloneListenersInUse")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						this.__cloneListenersInUse();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
				case -840528943:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("unique")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return this.unique(((T) (dynargs.__get(0)) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
				case 97066601:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("__indexOf")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return this.__indexOf(((T) (dynargs.__get(0)) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
				case -934610812:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("remove")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return this.remove(((T) (dynargs.__get(0)) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
				case 3649490:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					if (field.equals("will")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						return this.will(((T) (dynargs.__get(0)) ));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		baseArr.push("__listenersInUse");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		baseArr.push("__listeners");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		baseArr.push("listenersCount");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


