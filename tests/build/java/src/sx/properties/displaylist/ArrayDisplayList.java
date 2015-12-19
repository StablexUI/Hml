package sx.properties.displaylist;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class ArrayDisplayList extends haxe.lang.HxObject
{
	public ArrayDisplayList(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public ArrayDisplayList(sx.widgets.Widget widget)
	{
		//line 29 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		sx.properties.displaylist.ArrayDisplayList.__hx_ctor_sx_properties_displaylist_ArrayDisplayList(this, widget);
	}
	
	
	public static void __hx_ctor_sx_properties_displaylist_ArrayDisplayList(sx.properties.displaylist.ArrayDisplayList __temp_me142, sx.widgets.Widget widget)
	{
		//line 31 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		__temp_me142.widget = widget;
		//line 32 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		__temp_me142.children = new haxe.root.Array<sx.properties.displaylist.ArrayDisplayList>(new sx.properties.displaylist.ArrayDisplayList[]{});
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		return new sx.properties.displaylist.ArrayDisplayList(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		return new sx.properties.displaylist.ArrayDisplayList(((sx.widgets.Widget) (arr.__get(0)) ));
	}
	
	
	public sx.widgets.Widget widget;
	
	public sx.properties.displaylist.ArrayDisplayList parent;
	
	
	
	public haxe.root.Array<sx.properties.displaylist.ArrayDisplayList> children;
	
	public final sx.properties.displaylist.ArrayDisplayList addChild(sx.properties.displaylist.ArrayDisplayList child)
	{
		//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( child.parent != null )) 
		{
			//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			sx.properties.displaylist.ArrayDisplayList _this = child.parent;
			//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			if (( child.parent == _this )) 
			{
				//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				_this.children.remove(child);
				//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				child.parent = null;
				//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				sx.properties.displaylist.ArrayDisplayList __temp_expr2 = child;
			}
			else
			{
				//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				sx.properties.displaylist.ArrayDisplayList __temp_expr1 = null;
			}
			
		}
		
		//line 45 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		this.children.push(child);
		//line 46 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		child.parent = this;
		//line 48 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		return child;
	}
	
	
	public final sx.properties.displaylist.ArrayDisplayList addChildAt(sx.properties.displaylist.ArrayDisplayList child, int index)
	{
		//line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( child.parent != null )) 
		{
			//line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			sx.properties.displaylist.ArrayDisplayList _this = child.parent;
			//line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			if (( child.parent == _this )) 
			{
				//line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				_this.children.remove(child);
				//line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				child.parent = null;
				//line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				sx.properties.displaylist.ArrayDisplayList __temp_expr2 = child;
			}
			else
			{
				//line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				sx.properties.displaylist.ArrayDisplayList __temp_expr1 = null;
			}
			
		}
		
		//line 65 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		this.children.insert(index, child);
		//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		child.parent = this;
		//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		return child;
	}
	
	
	public final sx.properties.displaylist.ArrayDisplayList removeChild(sx.properties.displaylist.ArrayDisplayList child)
	{
		//line 80 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( child.parent == this )) 
		{
			//line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			this.children.remove(child);
			//line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			child.parent = null;
			//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			return child;
		}
		else
		{
			//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			return null;
		}
		
	}
	
	
	public final sx.properties.displaylist.ArrayDisplayList removeChildAt(int index)
	{
		//line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( index < 0 )) 
		{
			//line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			index = ( this.children.length + index );
		}
		
		//line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( ( index < 0 ) || ( index >= this.children.length ) )) 
		{
			//line 104 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			return null;
		}
		else
		{
			//line 107 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			sx.properties.displaylist.ArrayDisplayList removed = this.children.splice(index, 1).__get(0);
			//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			removed.parent = null;
			//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			return removed;
		}
		
	}
	
	
	public final int removeChildren(java.lang.Object beginIndex, java.lang.Object endIndex)
	{
		//line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		int __temp_endIndex141 = ( (haxe.lang.Runtime.eq(endIndex, null)) ? (-1) : (((int) (haxe.lang.Runtime.toInt(endIndex)) )) );
		//line 123 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		int __temp_beginIndex140 = ( (haxe.lang.Runtime.eq(beginIndex, null)) ? (0) : (((int) (haxe.lang.Runtime.toInt(beginIndex)) )) );
		//line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( __temp_beginIndex140 < 0 )) 
		{
			//line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			__temp_beginIndex140 = ( this.children.length + __temp_beginIndex140 );
		}
		
		//line 125 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( __temp_beginIndex140 < 0 )) 
		{
			//line 125 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			__temp_beginIndex140 = 0;
		}
		
		//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( __temp_endIndex141 < 0 )) 
		{
			//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			__temp_endIndex141 = ( this.children.length + __temp_endIndex141 );
		}
		
		//line 128 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( ( __temp_beginIndex140 >= this.children.length ) || ( __temp_endIndex141 < __temp_beginIndex140 ) )) 
		{
			//line 128 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			return 0;
		}
		
		//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		haxe.root.Array<sx.properties.displaylist.ArrayDisplayList> removed = this.children.splice(__temp_beginIndex140, ( ( __temp_endIndex141 - __temp_beginIndex140 ) + 1 ));
		//line 131 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		{
			//line 131 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			int _g = 0;
			//line 131 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			while (( _g < removed.length ))
			{
				//line 131 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				sx.properties.displaylist.ArrayDisplayList node = removed.__get(_g);
				//line 131 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				 ++ _g;
				//line 132 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				node.parent = null;
			}
			
		}
		
		//line 135 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		return removed.length;
	}
	
	
	public final boolean contains(sx.properties.displaylist.ArrayDisplayList child)
	{
		//line 144 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		boolean found = false;
		//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		while (( child != null ))
		{
			//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			if (( child == this )) 
			{
				//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				found = true;
				//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				break;
			}
			
			//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			child = child.parent;
		}
		
		//line 154 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		return found;
	}
	
	
	public final int getChildIndex(sx.properties.displaylist.ArrayDisplayList child)
	{
		//line 165 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		int index = this.children.indexOf(child, null);
		//line 166 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( index < 0 )) 
		{
			//line 166 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			throw haxe.lang.HaxeException.wrap(new sx.exceptions.NotChildException(null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.properties.displaylist.ArrayDisplayList", "ArrayDisplayList.hx", "getChildIndex"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (166) )) )})));
		}
		
		//line 168 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		return index;
	}
	
	
	public final int setChildIndex(sx.properties.displaylist.ArrayDisplayList child, int index)
	{
		//line 185 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		int currentIndex = this.children.indexOf(child, null);
		//line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( currentIndex < 0 )) 
		{
			//line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			throw haxe.lang.HaxeException.wrap(new sx.exceptions.NotChildException(null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.properties.displaylist.ArrayDisplayList", "ArrayDisplayList.hx", "setChildIndex"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (186) )) )})));
		}
		
		//line 188 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( index < 0 )) 
		{
			//line 188 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			index = ( this.children.length + index );
		}
		
		//line 189 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( index < 0 )) 
		{
			//line 190 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			index = 0;
		}
		else
		{
			//line 191 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			if (( index >= this.children.length )) 
			{
				//line 192 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				index = ( this.children.length - 1 );
			}
			
		}
		
		//line 195 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( index != currentIndex )) 
		{
			//line 196 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			this.children.remove(child);
			//line 197 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			this.children.insert(index, child);
			//line 199 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			return index;
		}
		else
		{
			//line 201 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			return currentIndex;
		}
		
	}
	
	
	public final sx.properties.displaylist.ArrayDisplayList getChildAt(int index)
	{
		//line 215 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( index < 0 )) 
		{
			//line 215 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			index = ( this.children.length + index );
		}
		
		//line 217 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( ( index < 0 ) || ( index >= this.children.length ) )) 
		{
			//line 218 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			return null;
		}
		else
		{
			//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			return this.children.__get(index);
		}
		
	}
	
	
	public final void swapChildren(sx.properties.displaylist.ArrayDisplayList child1, sx.properties.displaylist.ArrayDisplayList child2)
	{
		//line 232 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		int index1 = this.children.indexOf(child1, null);
		//line 233 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		int index2 = this.children.indexOf(child2, null);
		//line 235 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( ( index1 < 0 ) || ( index2 < 0 ) )) 
		{
			//line 235 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			throw haxe.lang.HaxeException.wrap(new sx.exceptions.NotChildException(null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.properties.displaylist.ArrayDisplayList", "ArrayDisplayList.hx", "swapChildren"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (235) )) )})));
		}
		
		//line 237 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		this.children.__set(index1, child2);
		//line 238 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		this.children.__set(index2, child1);
	}
	
	
	public final void swapChildrenAt(int index1, int index2)
	{
		//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( index1 < 0 )) 
		{
			//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			index1 = ( this.children.length + index1 );
		}
		
		//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( index2 < 0 )) 
		{
			//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			index2 = ( this.children.length + index2 );
		}
		
		//line 254 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		if (( ( ( ( index1 < 0 ) || ( index1 >= this.children.length ) ) || ( index2 < 0 ) ) || ( index2 > this.children.length ) )) 
		{
			//line 255 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			throw haxe.lang.HaxeException.wrap(new sx.exceptions.OutOfBoundsException("Provided index does not exist in display list of this widget.", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.properties.displaylist.ArrayDisplayList", "ArrayDisplayList.hx", "swapChildrenAt"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (255) )) )})));
		}
		
		//line 258 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		sx.properties.displaylist.ArrayDisplayList child = this.children.__get(index1);
		//line 259 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		this.children.__set(index1, this.children.__get(index2));
		//line 260 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		this.children.__set(index2, child);
	}
	
	
	public final int get_numChildren()
	{
		//line 265 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		return this.children.length;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			switch (field.hashCode())
			{
				case 1659526655:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("children")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						this.children = ((haxe.root.Array<sx.properties.displaylist.ArrayDisplayList>) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case -788047292:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("widget")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						this.widget = ((sx.widgets.Widget) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case -995424086:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("parent")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						this.parent = ((sx.properties.displaylist.ArrayDisplayList) (value) );
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return value;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			switch (field.hashCode())
			{
				case 1506878524:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("get_numChildren")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_numChildren")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case -788047292:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("widget")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.widget;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case 746861701:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("swapChildrenAt")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "swapChildrenAt")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case -995424086:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("parent")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.parent;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case 2141556914:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("swapChildren")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "swapChildren")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case 666732453:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("numChildren")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.get_numChildren();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case 1783128633:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("getChildAt")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getChildAt")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case 1659526655:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("children")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.children;
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case 1811028760:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("setChildIndex")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setChildIndex")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case -1262040837:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("addChild")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addChild")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case 1036897548:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("getChildIndex")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getChildIndex")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case -1640464754:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("addChildAt")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addChildAt")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case -567445985:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("contains")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "contains")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case -319766792:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("removeChild")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "removeChild")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case 65074851:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("removeChildren")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "removeChildren")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case 1941760331:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("removeChildAt")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "removeChildAt")) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			switch (field.hashCode())
			{
				case 666732453:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("numChildren")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return ((double) (this.get_numChildren()) );
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			switch (field.hashCode())
			{
				case 1506878524:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("get_numChildren")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.get_numChildren();
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case -1262040837:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("addChild")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.addChild(((sx.properties.displaylist.ArrayDisplayList) (dynargs.__get(0)) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case 746861701:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("swapChildrenAt")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						this.swapChildrenAt(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ), ((int) (haxe.lang.Runtime.toInt(dynargs.__get(1))) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case -1640464754:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("addChildAt")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.addChildAt(((sx.properties.displaylist.ArrayDisplayList) (dynargs.__get(0)) ), ((int) (haxe.lang.Runtime.toInt(dynargs.__get(1))) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case 2141556914:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("swapChildren")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						this.swapChildren(((sx.properties.displaylist.ArrayDisplayList) (dynargs.__get(0)) ), ((sx.properties.displaylist.ArrayDisplayList) (dynargs.__get(1)) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case -319766792:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("removeChild")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.removeChild(((sx.properties.displaylist.ArrayDisplayList) (dynargs.__get(0)) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case 1783128633:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("getChildAt")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.getChildAt(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case 1941760331:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("removeChildAt")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.removeChildAt(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case 1811028760:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("setChildIndex")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.setChildIndex(((sx.properties.displaylist.ArrayDisplayList) (dynargs.__get(0)) ), ((int) (haxe.lang.Runtime.toInt(dynargs.__get(1))) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case 65074851:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("removeChildren")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.removeChildren(dynargs.__get(0), dynargs.__get(1));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case 1036897548:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("getChildIndex")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.getChildIndex(((sx.properties.displaylist.ArrayDisplayList) (dynargs.__get(0)) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
				case -567445985:
				{
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					if (field.equals("contains")) 
					{
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						__temp_executeDef1 = false;
						//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
						return this.contains(((sx.properties.displaylist.ArrayDisplayList) (dynargs.__get(0)) ));
					}
					
					//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
					break;
				}
				
				
			}
			
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		baseArr.push("children");
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		baseArr.push("numChildren");
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		baseArr.push("parent");
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		baseArr.push("widget");
		//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
		{
			//line 13 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/displaylist/ArrayDisplayList.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


