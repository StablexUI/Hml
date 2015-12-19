package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Child extends sx.widgets.Widget
{
	public Child(haxe.lang.EmptyObject empty)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public Child()
	{
		//line 55 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 55 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		haxe.root.Child.__hx_ctor__Child(this);
	}
	
	
	public static void __hx_ctor__Child(haxe.root.Child __temp_me7)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		__temp_me7.level2_initialized = false;
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		__temp_me7.level1_initialized = false;
		//line 55 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		sx.widgets.Widget.__hx_ctor_sx_widgets_Widget(__temp_me7);
		//line 56 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		__temp_me7.addChild(__temp_me7.get_level1());
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		return new haxe.root.Child(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		return new haxe.root.Child();
	}
	
	
	public boolean level1_initialized;
	
	public sx.widgets.Widget level1;
	
	public boolean level2_initialized;
	
	public sx.widgets.Widget level2;
	
	public void destroyHml()
	{
	}
	
	
	public sx.widgets.Widget set_level1(sx.widgets.Widget value)
	{
		//line 25 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		this.level1_initialized = true;
		//line 26 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		return this.level1 = value;
	}
	
	
	public sx.widgets.Widget set_level2(sx.widgets.Widget value)
	{
		//line 30 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		this.level2_initialized = true;
		//line 31 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		return this.level2 = value;
	}
	
	
	public sx.widgets.Widget get_level2()
	{
		//line 36 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		if (this.level2_initialized) 
		{
			//line 36 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			return this.level2;
		}
		
		//line 37 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		this.level2_initialized = true;
		//line 38 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		this.set_level2(new sx.widgets.Widget());
		//line 39 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		sx.widgets.Widget res = this.level2;
		//line 40 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		return res;
	}
	
	
	public sx.widgets.Widget get_level1()
	{
		//line 45 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		if (this.level1_initialized) 
		{
			//line 45 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			return this.level1;
		}
		
		//line 46 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		this.level1_initialized = true;
		//line 47 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		this.set_level1(new sx.widgets.Widget());
		//line 48 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		sx.widgets.Widget res = this.level1;
		//line 49 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		res.addChild(this.get_level2());
		//line 50 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		return res;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		{
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			switch (field.hashCode())
			{
				case -1106127570:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (field.equals("level2")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
							this.set_level2(((sx.widgets.Widget) (value) ));
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
							return value;
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
							this.level2 = ((sx.widgets.Widget) (value) );
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
							return value;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
				case 1115455170:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (field.equals("level1_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						this.level1_initialized = haxe.lang.Runtime.toBool(value);
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return value;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
				case 822052163:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (field.equals("level2_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						this.level2_initialized = haxe.lang.Runtime.toBool(value);
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return value;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
				case -1106127571:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (field.equals("level1")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
							this.set_level1(((sx.widgets.Widget) (value) ));
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
							return value;
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
							this.level1 = ((sx.widgets.Widget) (value) );
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
							return value;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
			}
			
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		{
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			switch (field.hashCode())
			{
				case 974550582:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (field.equals("get_level1")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_level1")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
				case 1115455170:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (field.equals("level1_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return this.level1_initialized;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
				case 974550583:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (field.equals("get_level2")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_level2")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
				case -1106127571:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (field.equals("level1")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
							return this.get_level1();
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
							return this.level1;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
				case -1383611477:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (field.equals("set_level2")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_level2")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
				case 822052163:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (field.equals("level2_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return this.level2_initialized;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
				case -1383611478:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (field.equals("set_level1")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_level1")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
				case -1106127570:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (field.equals("level2")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
							return this.get_level2();
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
							return this.level2;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
				case 1460060589:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (field.equals("destroyHml")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "destroyHml")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
			}
			
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		{
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			switch (field.hashCode())
			{
				case 974550582:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (field.equals("get_level1")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return this.get_level1();
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
				case 1460060589:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (field.equals("destroyHml")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						this.destroyHml();
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
				case 974550583:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (field.equals("get_level2")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return this.get_level2();
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
				case -1383611478:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (field.equals("set_level1")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return this.set_level1(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
				case -1383611477:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					if (field.equals("set_level2")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
						return this.set_level2(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
					break;
				}
				
				
			}
			
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		baseArr.push("level2");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		baseArr.push("level2_initialized");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		baseArr.push("level1");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		baseArr.push("level1_initialized");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
		{
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Child.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


