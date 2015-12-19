package sx.tween;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Actuator extends haxe.lang.HxObject
{
	public Actuator(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Actuator(double startTime, double duration, haxe.lang.Function setValuesFn, haxe.lang.Function setEndValuesFn)
	{
		//line 33 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		sx.tween.Actuator.__hx_ctor_sx_tween_Actuator(this, startTime, duration, setValuesFn, setEndValuesFn);
	}
	
	
	public static void __hx_ctor_sx_tween_Actuator(sx.tween.Actuator __temp_me152, double startTime, double duration, haxe.lang.Function setValuesFn, haxe.lang.Function setEndValuesFn)
	{
		//line 16 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		__temp_me152.done = false;
		//line 139 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		__temp_me152.__ease = ( (( sx.tween.Actuator___hx_ctor_sx_tween_Actuator_139__Fun.__hx_current != null )) ? (sx.tween.Actuator___hx_ctor_sx_tween_Actuator_139__Fun.__hx_current) : (sx.tween.Actuator___hx_ctor_sx_tween_Actuator_139__Fun.__hx_current = ((sx.tween.Actuator___hx_ctor_sx_tween_Actuator_139__Fun) (new sx.tween.Actuator___hx_ctor_sx_tween_Actuator_139__Fun()) )) );
		//line 35 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		__temp_me152.__duration = duration;
		//line 37 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		__temp_me152.startTime = startTime;
		//line 38 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		__temp_me152.__setValuesFn = setValuesFn;
		//line 39 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		__temp_me152.__setEndValuesFn = setEndValuesFn;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		return new sx.tween.Actuator(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		return new sx.tween.Actuator(((double) (haxe.lang.Runtime.toDouble(arr.__get(0))) ), ((double) (haxe.lang.Runtime.toDouble(arr.__get(1))) ), ((haxe.lang.Function) (arr.__get(2)) ), ((haxe.lang.Function) (arr.__get(3)) ));
	}
	
	
	public double startTime;
	
	public boolean done;
	
	public double __duration;
	
	public haxe.lang.Function __setValuesFn;
	
	public haxe.lang.Function __setEndValuesFn;
	
	public haxe.lang.Function __onUpdate;
	
	public haxe.lang.Function __onComplete;
	
	public sx.tween.Actuator delay(double offset)
	{
		//line 48 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		this.startTime += offset;
		//line 50 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		return this;
	}
	
	
	public sx.tween.Actuator ease(haxe.lang.Function fn)
	{
		//line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		this.__ease = fn;
		//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		return this;
	}
	
	
	public void stop()
	{
		//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		this.done = true;
	}
	
	
	public void complete()
	{
		//line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		this.__setEndValuesFn.__hx_invoke0_o();
		//line 83 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		this.done = true;
		//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		if (( this.__onComplete != null )) 
		{
			//line 85 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			this.__onComplete.__hx_invoke0_o();
		}
		
	}
	
	
	public sx.tween.Actuator onUpdate(haxe.lang.Function fn)
	{
		//line 95 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		this.__onUpdate = fn;
		//line 97 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		return this;
	}
	
	
	public sx.tween.Actuator onComplete(haxe.lang.Function fn)
	{
		//line 106 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		this.__onComplete = fn;
		//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		return this;
	}
	
	
	public void __update(double currentTime)
	{
		//line 117 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		if (this.done) 
		{
			//line 117 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			return ;
		}
		
		//line 119 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		double time = ( currentTime - this.startTime );
		//line 120 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		if (( time < 0 )) 
		{
			//line 120 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			return ;
		}
		
		//line 122 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		if (( time >= this.__duration )) 
		{
			//line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			time = this.__duration;
			//line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			this.done = true;
			//line 125 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			this.__setEndValuesFn.__hx_invoke0_o();
		}
		else
		{
			//line 127 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			double value = ((double) (this.__ease.__hx_invoke1_f(( time / this.__duration ), haxe.lang.Runtime.undefined)) );
			//line 128 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			this.__setValuesFn.__hx_invoke1_o(value, haxe.lang.Runtime.undefined);
		}
		
		//line 131 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		if (( this.__onUpdate != null )) 
		{
			//line 131 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			this.__onUpdate.__hx_invoke0_o();
		}
		
		//line 132 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		if (( this.done && ( this.__onComplete != null ) )) 
		{
			//line 132 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			this.__onComplete.__hx_invoke0_o();
		}
		
	}
	
	
	public haxe.lang.Function __ease;
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		{
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			switch (field.hashCode())
			{
				case 904558964:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("__duration")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.__duration = ((double) (value) );
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return value;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case -2129294769:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("startTime")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.startTime = ((double) (value) );
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return value;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
			}
			
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		{
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			switch (field.hashCode())
			{
				case -1484357682:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("__ease")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.__ease = ((haxe.lang.Function) (value) );
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return value;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case -2129294769:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("startTime")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.startTime = ((double) (haxe.lang.Runtime.toDouble(value)) );
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return value;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case -1658189800:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("__onComplete")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.__onComplete = ((haxe.lang.Function) (value) );
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return value;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case 3089282:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("done")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.done = haxe.lang.Runtime.toBool(value);
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return value;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case 161168232:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("__onUpdate")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.__onUpdate = ((haxe.lang.Function) (value) );
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return value;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case 904558964:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("__duration")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.__duration = ((double) (haxe.lang.Runtime.toDouble(value)) );
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return value;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case -837073501:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("__setEndValuesFn")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.__setEndValuesFn = ((haxe.lang.Function) (value) );
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return value;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case -2146350036:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("__setValuesFn")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.__setValuesFn = ((haxe.lang.Function) (value) );
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return value;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
			}
			
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		{
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			switch (field.hashCode())
			{
				case -1484357682:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("__ease")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.__ease;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case -2129294769:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("startTime")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.startTime;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case -67117911:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("__update")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__update")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case 3089282:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("done")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.done;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case -2124458952:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("onComplete")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "onComplete")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case 904558964:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("__duration")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.__duration;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case 1559564168:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("onUpdate")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "onUpdate")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case -2146350036:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("__setValuesFn")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.__setValuesFn;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case -599445191:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("complete")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "complete")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case -837073501:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("__setEndValuesFn")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.__setEndValuesFn;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case 3540994:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("stop")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "stop")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case 161168232:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("__onUpdate")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.__onUpdate;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case 3105774:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("ease")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "ease")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case -1658189800:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("__onComplete")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.__onComplete;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case 95467907:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("delay")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "delay")) );
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
			}
			
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		{
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			switch (field.hashCode())
			{
				case 904558964:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("__duration")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.__duration;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case -2129294769:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("startTime")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.startTime;
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
			}
			
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		{
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			switch (field.hashCode())
			{
				case -67117911:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("__update")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.__update(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case 95467907:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("delay")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.delay(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case -2124458952:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("onComplete")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.onComplete(((haxe.lang.Function) (dynargs.__get(0)) ));
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case 3105774:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("ease")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.ease(((haxe.lang.Function) (dynargs.__get(0)) ));
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case 1559564168:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("onUpdate")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						return this.onUpdate(((haxe.lang.Function) (dynargs.__get(0)) ));
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case 3540994:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("stop")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.stop();
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
				case -599445191:
				{
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					if (field.equals("complete")) 
					{
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						__temp_executeDef1 = false;
						//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
						this.complete();
					}
					
					//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
					break;
				}
				
				
			}
			
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		baseArr.push("__ease");
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		baseArr.push("__onComplete");
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		baseArr.push("__onUpdate");
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		baseArr.push("__setEndValuesFn");
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		baseArr.push("__setValuesFn");
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		baseArr.push("__duration");
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		baseArr.push("done");
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		baseArr.push("startTime");
		//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
		{
			//line 11 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Actuator.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


