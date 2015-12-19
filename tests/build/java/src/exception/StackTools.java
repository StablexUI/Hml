package exception;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class StackTools extends haxe.lang.HxObject
{
	public StackTools(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public StackTools()
	{
		//line 14 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		exception.StackTools.__hx_ctor_exception_StackTools(this);
	}
	
	
	public static void __hx_ctor_exception_StackTools(exception.StackTools __temp_me28)
	{
	}
	
	
	public static haxe.root.Array<haxe.StackItem> truncate(haxe.root.Array<haxe.StackItem> stack, java.lang.Object pos, java.lang.Object fromTop)
	{
		//line 34 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		boolean __temp_fromTop26 = ( (haxe.lang.Runtime.eq(fromTop, null)) ? (false) : (haxe.lang.Runtime.toBool(fromTop)) );
		//line 34 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		return exception.StackTools.javaTruncate(stack, pos, __temp_fromTop26);
	}
	
	
	public static haxe.root.Array<haxe.StackItem> javaTruncate(haxe.root.Array<haxe.StackItem> stack, java.lang.Object pos, java.lang.Object fromTop)
	{
		//line 175 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		boolean __temp_fromTop27 = ( (haxe.lang.Runtime.eq(fromTop, null)) ? (false) : (haxe.lang.Runtime.toBool(fromTop)) );
		//line 176 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		int posIndex = 0;
		//line 178 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		int from = 0;
		//line 178 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		if (__temp_fromTop27) 
		{
			//line 178 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			from = ( stack.length - 1 );
		}
		else
		{
			//line 178 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			from = 0;
		}
		
		//line 179 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		int till = 0;
		//line 179 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		if (__temp_fromTop27) 
		{
			//line 179 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			till = -1;
		}
		else
		{
			//line 179 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			till = stack.length;
		}
		
		//line 181 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		{
			//line 233 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			int _g_current = 0;
			//line 234 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			int _g_till = 0;
			//line 181 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			int _g_current1 = from;
			//line 181 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			int _g_till1 = till;
			//line 181 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			{
				//line 181 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				label1:
				//line 181 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
				while (( _g_current1 != _g_till1 ))
				{
					//line 181 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					int i = 0;
					//line 181 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					if (( _g_current1 < _g_till1 )) 
					{
						//line 181 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						i = _g_current1++;
					}
					else
					{
						//line 181 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						i = _g_current1--;
					}
					
					//line 182 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
					{
						//line 182 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						haxe.StackItem _g = stack.__get(i);
						//line 182 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
						switch (_g.index)
						{
							case 2:
							{
								//line 182 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
								if (( ((haxe.StackItem) (_g.params[0]) ) != null )) 
								{
									//line 182 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
									switch (((haxe.StackItem) (_g.params[0]) ).index)
									{
										case 3:
										{
											//line 182 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
											int line = ((int) (haxe.lang.Runtime.toInt(_g.params[2])) );
											//line 182 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
											java.lang.String file = haxe.lang.Runtime.toString(_g.params[1]);
											//line 182 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
											java.lang.String methodName = haxe.lang.Runtime.toString(((haxe.StackItem) (_g.params[0]) ).params[1]);
											//line 182 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
											java.lang.String className = haxe.lang.Runtime.toString(((haxe.StackItem) (_g.params[0]) ).params[0]);
											//line 184 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
											if (( haxe.lang.Runtime.valEq(className, haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(pos, "className", true))) && haxe.lang.Runtime.valEq(methodName, haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(pos, "methodName", true))) )) 
											{
												//line 185 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
												posIndex = i;
												//line 186 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
												break label1;
											}
											
											//line 183 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
											break;
										}
										
										
										default:
										{
											//line 188 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
											break;
										}
										
									}
									
								}
								else
								{
								}
								
								//line 182 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
								break;
							}
							
							
							default:
							{
								//line 188 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
								break;
							}
							
						}
						
					}
					
				}
				
			}
			
		}
		
		//line 192 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		if (__temp_fromTop27) 
		{
			//line 192 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			return stack.slice(0, ( posIndex + 1 ));
		}
		else
		{
			//line 192 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
			return stack.slice(posIndex, null);
		}
		
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 14 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		return new exception.StackTools(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 14 "/home/alex/Work/HaXe/exception/src/exception/StackTools.hx"
		return new exception.StackTools();
	}
	
	
}


