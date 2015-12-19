package sx.tween;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Tweener extends haxe.lang.HxObject
{
	static
	{
		//line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		sx.tween.Tweener.__time = ((double) (((int) (0.0) )) );
		//line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		sx.tween.Tweener.__tweeners = new haxe.root.Array<sx.tween.Tweener>(new sx.tween.Tweener[]{});
		//line 29 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		sx.tween.Tweener.__pausedAll = false;
		//line 31 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		sx.tween.Tweener.__pausedAllTime = ((double) (((int) (0.0) )) );
		//line 33 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		sx.tween.Tweener.__totalPausedTime = ((double) (((int) (0.0) )) );
		//line 47 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		sx.tween.Tweener.getTime = ( (( sx.tween.Tweener_Anon_47__Fun.__hx_current != null )) ? (sx.tween.Tweener_Anon_47__Fun.__hx_current) : (sx.tween.Tweener_Anon_47__Fun.__hx_current = ((sx.tween.Tweener_Anon_47__Fun) (new sx.tween.Tweener_Anon_47__Fun()) )) );
	}
	
	public Tweener(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Tweener()
	{
		//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		sx.tween.Tweener.__hx_ctor_sx_tween_Tweener(this);
	}
	
	
	public static void __hx_ctor_sx_tween_Tweener(sx.tween.Tweener __temp_me153)
	{
		//line 36 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		__temp_me153.active = false;
		//line 128 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		__temp_me153.__actuators = new haxe.root.Array<sx.tween.Actuator>(new sx.tween.Actuator[]{});
	}
	
	
	public static double __time;
	
	public static haxe.root.Array<sx.tween.Tweener> __tweeners;
	
	
	
	public static boolean __pausedAll;
	
	public static double __pausedAllTime;
	
	public static double __totalPausedTime;
	
	public static haxe.lang.Function getTime;
	
	public static void pauseAll()
	{
		//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		if (sx.tween.Tweener.__pausedAll) 
		{
			//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			return ;
		}
		
		//line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		sx.tween.Tweener.__pausedAll = true;
		//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		sx.tween.Tweener.__time = ( ((double) (sx.tween.Tweener.getTime.__hx_invoke0_f()) ) - sx.tween.Tweener.__totalPausedTime );
		//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		sx.tween.Tweener.__pausedAllTime = sx.tween.Tweener.__time;
	}
	
	
	public static void resumeAll()
	{
		//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		if ( ! (sx.tween.Tweener.__pausedAll) ) 
		{
			//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			return ;
		}
		
		//line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		sx.tween.Tweener.__pausedAll = false;
		//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		sx.tween.Tweener.__time = ( ((double) (sx.tween.Tweener.getTime.__hx_invoke0_f()) ) - sx.tween.Tweener.__totalPausedTime );
		//line 76 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		sx.tween.Tweener.__totalPausedTime += ( sx.tween.Tweener.__time - sx.tween.Tweener.__pausedAllTime );
		//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		sx.tween.Tweener.__time = ( ((double) (sx.tween.Tweener.getTime.__hx_invoke0_f()) ) - sx.tween.Tweener.__totalPausedTime );
	}
	
	
	public static void stopAll()
	{
		//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		int _g = 0;
		//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		haxe.root.Array<sx.tween.Tweener> _g1 = sx.tween.Tweener.__tweeners;
		//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		while (( _g < _g1.length ))
		{
			//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			sx.tween.Tweener tweener = _g1.__get(_g);
			//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			 ++ _g;
			//line 87 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			tweener.stop();
		}
		
	}
	
	
	public static void update()
	{
		//line 97 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		if (sx.tween.Tweener.__pausedAll) 
		{
			//line 97 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			return ;
		}
		
		//line 98 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		sx.tween.Tweener.__time = ( ((double) (sx.tween.Tweener.getTime.__hx_invoke0_f()) ) - sx.tween.Tweener.__totalPausedTime );
		//line 99 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		if (( sx.tween.Tweener.__tweeners.length == 0 )) 
		{
			//line 99 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			return ;
		}
		
		//line 101 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		boolean needRemoval = false;
		//line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		{
			//line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			int _g = 0;
			//line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			haxe.root.Array<sx.tween.Tweener> _g1 = sx.tween.Tweener.__tweeners;
			//line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			while (( _g < _g1.length ))
			{
				//line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				sx.tween.Tweener tweener = _g1.__get(_g);
				//line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				 ++ _g;
				//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				{
					//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					double currentTime = sx.tween.Tweener.__time;
					//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					boolean needRemoval1 = false;
					//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					{
						//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						int _g2 = 0;
						//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						haxe.root.Array<sx.tween.Actuator> _g11 = tweener.__actuators;
						//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						while (( _g2 < _g11.length ))
						{
							//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
							sx.tween.Actuator actuator = _g11.__get(_g2);
							//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
							 ++ _g2;
							//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
							if (( actuator.startTime < currentTime )) 
							{
								//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
								actuator.__update(currentTime);
								//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
								if (actuator.done) 
								{
									//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
									needRemoval1 = true;
								}
								
							}
							
						}
						
					}
					
					//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					if (needRemoval1) 
					{
						//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						int i = 0;
						//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						while (( i < tweener.__actuators.length ))
						{
							//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
							if (tweener.__actuators.__get(i).done) 
							{
								//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
								tweener.__actuators.splice(i, 1);
							}
							else
							{
								//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
								i++;
							}
							
						}
						
						//line 103 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						tweener.active = ( tweener.__actuators.length > 0 );
					}
					
				}
				
				//line 104 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				if ( ! (tweener.active) ) 
				{
					//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					needRemoval = true;
				}
				
			}
			
		}
		
		//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		if (needRemoval) 
		{
			//line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			int i1 = 0;
			//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			while (( i1 < sx.tween.Tweener.__tweeners.length ))
			{
				//line 113 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				if ( ! (sx.tween.Tweener.__tweeners.__get(i1).active) ) 
				{
					//line 114 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					sx.tween.Tweener.__tweeners.splice(i1, 1);
				}
				else
				{
					//line 116 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					i1++;
				}
				
			}
			
		}
		
	}
	
	
	public static void initialize()
	{
		//line 199 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		sx.tween.Tweener.__time = ( ((double) (sx.tween.Tweener.getTime.__hx_invoke0_f()) ) - sx.tween.Tweener.__totalPausedTime );
	}
	
	
	public static void __updateTime()
	{
		//line 208 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		sx.tween.Tweener.__time = ( ((double) (sx.tween.Tweener.getTime.__hx_invoke0_f()) ) - sx.tween.Tweener.__totalPausedTime );
	}
	
	
	public static boolean get_pausedAll()
	{
		//line 213 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		return sx.tween.Tweener.__pausedAll;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		return new sx.tween.Tweener(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		return new sx.tween.Tweener();
	}
	
	
	public boolean active;
	
	public haxe.root.Array<sx.tween.Actuator> __actuators;
	
	public void stop()
	{
		//line 137 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		this.active = false;
		//line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		{
			//line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			int _g = 0;
			//line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			haxe.root.Array<sx.tween.Actuator> _g1 = this.__actuators;
			//line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			while (( _g < _g1.length ))
			{
				//line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				sx.tween.Actuator actuator = _g1.__get(_g);
				//line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				 ++ _g;
				//line 139 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				actuator.stop();
			}
			
		}
		
	}
	
	
	public final void __update(double currentTime)
	{
		//line 150 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		boolean needRemoval = false;
		//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		{
			//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			int _g = 0;
			//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			haxe.root.Array<sx.tween.Actuator> _g1 = this.__actuators;
			//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			while (( _g < _g1.length ))
			{
				//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				sx.tween.Actuator actuator = _g1.__get(_g);
				//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				 ++ _g;
				//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				if (( actuator.startTime < currentTime )) 
				{
					//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					actuator.__update(currentTime);
					//line 154 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					if (actuator.done) 
					{
						//line 155 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						needRemoval = true;
					}
					
				}
				
			}
			
		}
		
		//line 161 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		if (needRemoval) 
		{
			//line 162 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			int i = 0;
			//line 163 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			while (( i < this.__actuators.length ))
			{
				//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				if (this.__actuators.__get(i).done) 
				{
					//line 165 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					this.__actuators.splice(i, 1);
				}
				else
				{
					//line 167 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					i++;
				}
				
			}
			
			//line 171 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			this.active = ( this.__actuators.length > 0 );
		}
		
	}
	
	
	public sx.tween.Actuator __createActuator(double duration, haxe.lang.Function setValuesFn, haxe.lang.Function setEndValuesFn)
	{
		//line 181 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		sx.tween.Actuator actuator = new sx.tween.Actuator(sx.tween.Tweener.__time, duration, setValuesFn, setEndValuesFn);
		//line 183 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		this.__actuators.push(actuator);
		//line 185 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		if ( ! (this.active) ) 
		{
			//line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			this.active = true;
			//line 187 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			sx.tween.Tweener.__tweeners.push(this);
		}
		
		//line 190 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		return actuator;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		{
			//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			boolean __temp_executeDef1 = true;
			//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			switch (field.hashCode())
			{
				case 128509370:
				{
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					if (field.equals("__actuators")) 
					{
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						this.__actuators = ((haxe.root.Array<sx.tween.Actuator>) (value) );
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					break;
				}
				
				
				case -1422950650:
				{
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					if (field.equals("active")) 
					{
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						this.active = haxe.lang.Runtime.toBool(value);
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					break;
				}
				
				
			}
			
			//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			if (__temp_executeDef1) 
			{
				//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		{
			//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			boolean __temp_executeDef1 = true;
			//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			switch (field.hashCode())
			{
				case -495536395:
				{
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					if (field.equals("__createActuator")) 
					{
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__createActuator")) );
					}
					
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					break;
				}
				
				
				case -1422950650:
				{
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					if (field.equals("active")) 
					{
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return this.active;
					}
					
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					break;
				}
				
				
				case -67117911:
				{
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					if (field.equals("__update")) 
					{
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__update")) );
					}
					
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					break;
				}
				
				
				case 128509370:
				{
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					if (field.equals("__actuators")) 
					{
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return this.__actuators;
					}
					
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					break;
				}
				
				
				case 3540994:
				{
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					if (field.equals("stop")) 
					{
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "stop")) );
					}
					
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					break;
				}
				
				
			}
			
			//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			if (__temp_executeDef1) 
			{
				//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		{
			//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			boolean __temp_executeDef1 = true;
			//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			switch (field.hashCode())
			{
				case -495536395:
				{
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					if (field.equals("__createActuator")) 
					{
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						return this.__createActuator(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ), ((haxe.lang.Function) (dynargs.__get(1)) ), ((haxe.lang.Function) (dynargs.__get(2)) ));
					}
					
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					break;
				}
				
				
				case 3540994:
				{
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					if (field.equals("stop")) 
					{
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						this.stop();
					}
					
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					break;
				}
				
				
				case -67117911:
				{
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					if (field.equals("__update")) 
					{
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
						this.__update(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
					break;
				}
				
				
			}
			
			//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			if (__temp_executeDef1) 
			{
				//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		baseArr.push("__actuators");
		//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		baseArr.push("active");
		//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
		{
			//line 19 "/home/alex/Work/HaXe/sx2-core/src/sx/tween/Tweener.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


