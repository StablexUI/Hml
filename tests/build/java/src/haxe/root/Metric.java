package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Metric extends sx.widgets.Widget
{
	public Metric(haxe.lang.EmptyObject empty)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public Metric()
	{
		//line 78 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 78 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		haxe.root.Metric.__hx_ctor__Metric(this);
	}
	
	
	public static void __hx_ctor__Metric(haxe.root.Metric __temp_me16)
	{
		//line 19 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		__temp_me16.percents_initialized = false;
		//line 15 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		__temp_me16.pixels_initialized = false;
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		__temp_me16.dips_initialized = false;
		//line 78 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		sx.widgets.Widget.__hx_ctor_sx_widgets_Widget(__temp_me16);
		//line 79 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		__temp_me16.addChild(__temp_me16.get_dips());
		//line 80 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		__temp_me16.addChild(__temp_me16.get_pixels());
		//line 81 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		__temp_me16.addChild(__temp_me16.get_percents());
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		return new haxe.root.Metric(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		return new haxe.root.Metric();
	}
	
	
	public boolean dips_initialized;
	
	public sx.widgets.Widget dips;
	
	public boolean pixels_initialized;
	
	public sx.widgets.Widget pixels;
	
	public boolean percents_initialized;
	
	public sx.widgets.Widget percents;
	
	public void destroyHml()
	{
	}
	
	
	public sx.widgets.Widget set_dips(sx.widgets.Widget value)
	{
		//line 29 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		this.dips_initialized = true;
		//line 30 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		return this.dips = value;
	}
	
	
	public sx.widgets.Widget get_dips()
	{
		//line 35 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		if (this.dips_initialized) 
		{
			//line 35 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			return this.dips;
		}
		
		//line 36 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		this.dips_initialized = true;
		//line 37 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		this.set_dips(new sx.widgets.Widget());
		//line 38 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		sx.widgets.Widget res = this.dips;
		//line 40 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		res.get_left().set_dip(((double) (10) ));
		//line 41 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		return res;
	}
	
	
	public sx.widgets.Widget set_pixels(sx.widgets.Widget value)
	{
		//line 45 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		this.pixels_initialized = true;
		//line 46 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		return this.pixels = value;
	}
	
	
	public sx.widgets.Widget get_pixels()
	{
		//line 51 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		if (this.pixels_initialized) 
		{
			//line 51 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			return this.pixels;
		}
		
		//line 52 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		this.pixels_initialized = true;
		//line 53 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		this.set_pixels(new sx.widgets.Widget());
		//line 54 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		sx.widgets.Widget res = this.pixels;
		//line 56 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		res.get_left().set_px(((double) (10) ));
		//line 57 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		return res;
	}
	
	
	public sx.widgets.Widget set_percents(sx.widgets.Widget value)
	{
		//line 61 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		this.percents_initialized = true;
		//line 62 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		return this.percents = value;
	}
	
	
	public sx.widgets.Widget get_percents()
	{
		//line 67 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		if (this.percents_initialized) 
		{
			//line 67 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			return this.percents;
		}
		
		//line 68 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		this.percents_initialized = true;
		//line 69 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		this.set_percents(new sx.widgets.Widget());
		//line 70 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		sx.widgets.Widget res = this.percents;
		//line 72 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		res.get_left().set_pct(((double) (10) ));
		//line 73 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		return res;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		{
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			switch (field.hashCode())
			{
				case 428090574:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("percents")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
							this.set_percents(((sx.widgets.Widget) (value) ));
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
							return value;
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
							this.percents = ((sx.widgets.Widget) (value) );
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
							return value;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case 307717725:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("dips_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						this.dips_initialized = haxe.lang.Runtime.toBool(value);
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return value;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case 1918330083:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("percents_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						this.percents_initialized = haxe.lang.Runtime.toBool(value);
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return value;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case 3083592:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("dips")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
							this.set_dips(((sx.widgets.Widget) (value) ));
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
							return value;
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
							this.dips = ((sx.widgets.Widget) (value) );
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
							return value;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case -987857235:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("pixels")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
							this.set_pixels(((sx.widgets.Widget) (value) ));
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
							return value;
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
							this.pixels = ((sx.widgets.Widget) (value) );
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
							return value;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case -665393086:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("pixels_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						this.pixels_initialized = haxe.lang.Runtime.toBool(value);
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return value;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
			}
			
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		{
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			switch (field.hashCode())
			{
				case -1494964329:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("get_percents")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_percents")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case 307717725:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("dips_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return this.dips_initialized;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case 54028299:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("set_percents")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_percents")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case 3083592:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("dips")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
							return this.get_dips();
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
							return this.dips;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case 1092820918:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("get_pixels")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_pixels")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case -665393086:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("pixels_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return this.pixels_initialized;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case -1265341142:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("set_pixels")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_pixels")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case -987857235:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("pixels")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
							return this.get_pixels();
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
							return this.pixels;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case 1976196241:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("get_dips")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_dips")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case 1918330083:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("percents_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return this.percents_initialized;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case 1415083781:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("set_dips")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_dips")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case 428090574:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("percents")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
							return this.get_percents();
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
							return this.percents;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case 1460060589:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("destroyHml")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "destroyHml")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
			}
			
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		{
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			switch (field.hashCode())
			{
				case -1494964329:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("get_percents")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return this.get_percents();
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case 1460060589:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("destroyHml")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						this.destroyHml();
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case 54028299:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("set_percents")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return this.set_percents(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case 1415083781:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("set_dips")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return this.set_dips(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case 1092820918:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("get_pixels")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return this.get_pixels();
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case 1976196241:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("get_dips")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return this.get_dips();
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
				case -1265341142:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					if (field.equals("set_pixels")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
						return this.set_pixels(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
					break;
				}
				
				
			}
			
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		baseArr.push("percents");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		baseArr.push("percents_initialized");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		baseArr.push("pixels");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		baseArr.push("pixels_initialized");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		baseArr.push("dips");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		baseArr.push("dips_initialized");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
		{
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Metric.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


