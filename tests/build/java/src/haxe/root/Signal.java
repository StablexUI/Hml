package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Signal extends sx.widgets.Widget
{
	public Signal(haxe.lang.EmptyObject empty)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public Signal()
	{
		//line 138 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 138 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		haxe.root.Signal.__hx_ctor__Signal(this);
	}
	
	
	public static void __hx_ctor__Signal(haxe.root.Signal __temp_me19)
	{
		//line 31 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		__temp_me19.closureSingleExpr_initialized = false;
		//line 27 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		__temp_me19.closureBlockBody_initialized = false;
		//line 23 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		__temp_me19.simple_initialized = false;
		//line 19 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		__temp_me19.closureSingleExprClicked_initialized = false;
		//line 15 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		__temp_me19.closureBlockClicked_initialized = false;
		//line 11 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		__temp_me19.simpleClicked_initialized = false;
		//line 138 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		sx.widgets.Widget.__hx_ctor_sx_widgets_Widget(__temp_me19);
		//line 139 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		__temp_me19.addChild(__temp_me19.get_simple());
		//line 140 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		__temp_me19.addChild(__temp_me19.get_closureBlockBody());
		//line 141 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		__temp_me19.addChild(__temp_me19.get_closureSingleExpr());
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return new haxe.root.Signal(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return new haxe.root.Signal();
	}
	
	
	public boolean simpleClicked_initialized;
	
	public boolean simpleClicked;
	
	public boolean closureBlockClicked_initialized;
	
	public boolean closureBlockClicked;
	
	public boolean closureSingleExprClicked_initialized;
	
	public boolean closureSingleExprClicked;
	
	public boolean simple_initialized;
	
	public sx.widgets.Widget simple;
	
	public boolean closureBlockBody_initialized;
	
	public sx.widgets.Widget closureBlockBody;
	
	public boolean closureSingleExpr_initialized;
	
	public sx.widgets.Widget closureSingleExpr;
	
	public void destroyHml()
	{
	}
	
	
	public boolean set_simpleClicked(boolean value)
	{
		//line 41 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.simpleClicked_initialized = true;
		//line 42 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return this.simpleClicked = value;
	}
	
	
	public boolean get_simpleClicked()
	{
		//line 47 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		if (this.simpleClicked_initialized) 
		{
			//line 47 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			return this.simpleClicked;
		}
		
		//line 48 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.simpleClicked_initialized = true;
		//line 49 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.set_simpleClicked(false);
		//line 50 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		boolean res = this.simpleClicked;
		//line 51 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return res;
	}
	
	
	public boolean set_closureBlockClicked(boolean value)
	{
		//line 55 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.closureBlockClicked_initialized = true;
		//line 56 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return this.closureBlockClicked = value;
	}
	
	
	public boolean get_closureBlockClicked()
	{
		//line 61 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		if (this.closureBlockClicked_initialized) 
		{
			//line 61 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			return this.closureBlockClicked;
		}
		
		//line 62 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.closureBlockClicked_initialized = true;
		//line 63 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.set_closureBlockClicked(false);
		//line 64 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		boolean res = this.closureBlockClicked;
		//line 65 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return res;
	}
	
	
	public boolean set_closureSingleExprClicked(boolean value)
	{
		//line 69 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.closureSingleExprClicked_initialized = true;
		//line 70 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return this.closureSingleExprClicked = value;
	}
	
	
	public boolean get_closureSingleExprClicked()
	{
		//line 75 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		if (this.closureSingleExprClicked_initialized) 
		{
			//line 75 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			return this.closureSingleExprClicked;
		}
		
		//line 76 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.closureSingleExprClicked_initialized = true;
		//line 77 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.set_closureSingleExprClicked(false);
		//line 78 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		boolean res = this.closureSingleExprClicked;
		//line 79 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return res;
	}
	
	
	public sx.widgets.Widget set_simple(sx.widgets.Widget value)
	{
		//line 83 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.simple_initialized = true;
		//line 84 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return this.simple = value;
	}
	
	
	public sx.widgets.Widget get_simple()
	{
		//line 87 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		haxe.root.Signal _g = this;
		//line 89 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		if (this.simple_initialized) 
		{
			//line 89 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			return this.simple;
		}
		
		//line 90 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.simple_initialized = true;
		//line 91 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.set_simple(new sx.widgets.Widget());
		//line 92 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		sx.widgets.Widget res = this.simple;
		//line 94 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		res.get_onClick().add(new haxe.root.Signal_get_simple_94__Fun(_g));
		//line 97 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return res;
	}
	
	
	public sx.widgets.Widget set_closureBlockBody(sx.widgets.Widget value)
	{
		//line 101 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.closureBlockBody_initialized = true;
		//line 102 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return this.closureBlockBody = value;
	}
	
	
	public sx.widgets.Widget get_closureBlockBody()
	{
		//line 105 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		haxe.root.Signal _g = this;
		//line 107 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		if (this.closureBlockBody_initialized) 
		{
			//line 107 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			return this.closureBlockBody;
		}
		
		//line 108 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.closureBlockBody_initialized = true;
		//line 109 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.set_closureBlockBody(new sx.widgets.Widget());
		//line 110 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		sx.widgets.Widget res = this.closureBlockBody;
		//line 112 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		res.get_onClick().add(new haxe.root.Signal_get_closureBlockBody_113__Fun(_g));
		//line 115 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return res;
	}
	
	
	public sx.widgets.Widget set_closureSingleExpr(sx.widgets.Widget value)
	{
		//line 119 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.closureSingleExpr_initialized = true;
		//line 120 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return this.closureSingleExpr = value;
	}
	
	
	public sx.widgets.Widget get_closureSingleExpr()
	{
		//line 123 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		haxe.root.Signal _g = this;
		//line 125 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		if (this.closureSingleExpr_initialized) 
		{
			//line 125 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			return this.closureSingleExpr;
		}
		
		//line 126 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.closureSingleExpr_initialized = true;
		//line 127 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		this.set_closureSingleExpr(new sx.widgets.Widget());
		//line 128 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		sx.widgets.Widget res = this.closureSingleExpr;
		//line 130 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		res.get_onClick().add(new haxe.root.Signal_get_closureSingleExpr_131__Fun(_g));
		//line 133 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return res;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		{
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			switch (field.hashCode())
			{
				case -1569233160:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("closureSingleExpr")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							this.set_closureSingleExpr(((sx.widgets.Widget) (value) ));
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return value;
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							this.closureSingleExpr = ((sx.widgets.Widget) (value) );
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return value;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -261253206:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("simpleClicked_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.simpleClicked_initialized = haxe.lang.Runtime.toBool(value);
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return value;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 267827213:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("closureSingleExpr_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.closureSingleExpr_initialized = haxe.lang.Runtime.toBool(value);
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return value;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -1317860843:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("simpleClicked")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							this.set_simpleClicked(haxe.lang.Runtime.toBool(value));
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return value;
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							this.simpleClicked = haxe.lang.Runtime.toBool(value);
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return value;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 376196052:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("closureBlockBody")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							this.set_closureBlockBody(((sx.widgets.Widget) (value) ));
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return value;
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							this.closureBlockBody = ((sx.widgets.Widget) (value) );
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return value;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -126118326:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("closureBlockClicked_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.closureBlockClicked_initialized = haxe.lang.Runtime.toBool(value);
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return value;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -531680535:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("closureBlockBody_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.closureBlockBody_initialized = haxe.lang.Runtime.toBool(value);
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return value;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -1802372939:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("closureBlockClicked")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							this.set_closureBlockClicked(haxe.lang.Runtime.toBool(value));
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return value;
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							this.closureBlockClicked = haxe.lang.Runtime.toBool(value);
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return value;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -902286926:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("simple")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							this.set_simple(((sx.widgets.Widget) (value) ));
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return value;
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							this.simple = ((sx.widgets.Widget) (value) );
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return value;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -1318002524:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("closureSingleExprClicked_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.closureSingleExprClicked_initialized = haxe.lang.Runtime.toBool(value);
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return value;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 1175141319:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("simple_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.simple_initialized = haxe.lang.Runtime.toBool(value);
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return value;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -365921777:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("closureSingleExprClicked")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							this.set_closureSingleExprClicked(haxe.lang.Runtime.toBool(value));
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return value;
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							this.closureSingleExprClicked = haxe.lang.Runtime.toBool(value);
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return value;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
			}
			
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		{
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			switch (field.hashCode())
			{
				case 976418383:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("get_closureSingleExpr")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_closureSingleExpr")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -261253206:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("simpleClicked_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.simpleClicked_initialized;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -782337957:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("set_closureSingleExpr")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_closureSingleExpr")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -1317860843:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("simpleClicked")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return this.get_simpleClicked();
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return this.simpleClicked;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 1843787165:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("get_closureBlockBody")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_closureBlockBody")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -126118326:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("closureBlockClicked_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.closureBlockClicked_initialized;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 1232863761:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("set_closureBlockBody")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_closureBlockBody")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -1802372939:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("closureBlockClicked")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return this.get_closureBlockClicked();
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return this.closureBlockClicked;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 1178391227:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("get_simple")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_simple")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -1318002524:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("closureSingleExprClicked_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.closureSingleExprClicked_initialized;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -1179770833:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("set_simple")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_simple")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -365921777:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("closureSingleExprClicked")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return this.get_closureSingleExprClicked();
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return this.closureSingleExprClicked;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 1336691416:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("get_closureSingleExprClicked")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_closureSingleExprClicked")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 1175141319:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("simple_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.simple_initialized;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -1720147124:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("set_closureSingleExprClicked")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_closureSingleExprClicked")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -902286926:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("simple")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return this.get_simple();
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return this.simple;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 732368460:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("get_closureBlockClicked")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_closureBlockClicked")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -531680535:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("closureBlockBody_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.closureBlockBody_initialized;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -1510326952:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("set_closureBlockClicked")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_closureBlockClicked")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 376196052:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("closureBlockBody")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return this.get_closureBlockBody();
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return this.closureBlockBody;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -1391338260:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("get_simpleClicked")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_simpleClicked")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 267827213:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("closureSingleExpr_initialized")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.closureSingleExpr_initialized;
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 1963476216:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("set_simpleClicked")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_simpleClicked")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -1569233160:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("closureSingleExpr")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						if (handleProperties) 
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return this.get_closureSingleExpr();
						}
						else
						{
							//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
							return this.closureSingleExpr;
						}
						
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 1460060589:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("destroyHml")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "destroyHml")) );
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
			}
			
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		{
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			switch (field.hashCode())
			{
				case 976418383:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("get_closureSingleExpr")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.get_closureSingleExpr();
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 1460060589:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("destroyHml")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						this.destroyHml();
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -782337957:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("set_closureSingleExpr")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.set_closureSingleExpr(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 1963476216:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("set_simpleClicked")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.set_simpleClicked(haxe.lang.Runtime.toBool(dynargs.__get(0)));
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 1843787165:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("get_closureBlockBody")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.get_closureBlockBody();
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -1391338260:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("get_simpleClicked")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.get_simpleClicked();
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 1232863761:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("set_closureBlockBody")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.set_closureBlockBody(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -1510326952:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("set_closureBlockClicked")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.set_closureBlockClicked(haxe.lang.Runtime.toBool(dynargs.__get(0)));
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 1178391227:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("get_simple")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.get_simple();
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 732368460:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("get_closureBlockClicked")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.get_closureBlockClicked();
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -1179770833:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("set_simple")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.set_simple(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case -1720147124:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("set_closureSingleExprClicked")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.set_closureSingleExprClicked(haxe.lang.Runtime.toBool(dynargs.__get(0)));
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
				case 1336691416:
				{
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					if (field.equals("get_closureSingleExprClicked")) 
					{
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						__temp_executeDef1 = false;
						//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
						return this.get_closureSingleExprClicked();
					}
					
					//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
					break;
				}
				
				
			}
			
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("closureSingleExpr");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("closureSingleExpr_initialized");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("closureBlockBody");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("closureBlockBody_initialized");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("simple");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("simple_initialized");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("closureSingleExprClicked");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("closureSingleExprClicked_initialized");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("closureBlockClicked");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("closureBlockClicked_initialized");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("simpleClicked");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		baseArr.push("simpleClicked_initialized");
		//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
		{
			//line 9 "/home/alex/Work/HaXe/sx2-hml/tests/hml/gen/Signal.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


