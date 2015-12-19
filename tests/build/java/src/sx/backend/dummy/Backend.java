package sx.backend.dummy;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Backend extends haxe.lang.HxObject implements sx.backend.interfaces.IBackend
{
	public Backend(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Backend(sx.widgets.Widget widget)
	{
		//line 23 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		sx.backend.dummy.Backend.__hx_ctor_sx_backend_dummy_Backend(this, widget);
	}
	
	
	public static void __hx_ctor_sx_backend_dummy_Backend(sx.backend.dummy.Backend __temp_me109, sx.widgets.Widget widget)
	{
		//line 25 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		__temp_me109.__node = new sx.properties.displaylist.ArrayDisplayList(((sx.widgets.Widget) (widget) ));
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		return new sx.backend.dummy.Backend(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		return new sx.backend.dummy.Backend(((sx.widgets.Widget) (arr.__get(0)) ));
	}
	
	
	public sx.properties.displaylist.ArrayDisplayList __node;
	
	public void addWidget(sx.widgets.Widget child)
	{
		//line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		sx.properties.displaylist.ArrayDisplayList _this = this.__node;
		//line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		sx.properties.displaylist.ArrayDisplayList child1 = child.backend.__node;
		//line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		if (( child1.parent != null )) 
		{
			//line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			sx.properties.displaylist.ArrayDisplayList _this1 = child1.parent;
			//line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			if (( child1.parent == _this1 )) 
			{
				//line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				_this1.children.remove(child1);
				//line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				child1.parent = null;
				//line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				sx.properties.displaylist.ArrayDisplayList __temp_expr2 = child1;
			}
			else
			{
				//line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				sx.properties.displaylist.ArrayDisplayList __temp_expr1 = null;
			}
			
		}
		
		//line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		_this.children.push(child1);
		//line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		child1.parent = _this;
		//line 34 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		sx.properties.displaylist.ArrayDisplayList __temp_expr3 = child1;
	}
	
	
	public void addWidgetAt(sx.widgets.Widget child, int index)
	{
		//line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		sx.properties.displaylist.ArrayDisplayList _this = this.__node;
		//line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		sx.properties.displaylist.ArrayDisplayList child1 = child.backend.__node;
		//line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		if (( child1.parent != null )) 
		{
			//line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			sx.properties.displaylist.ArrayDisplayList _this1 = child1.parent;
			//line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			if (( child1.parent == _this1 )) 
			{
				//line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				_this1.children.remove(child1);
				//line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				child1.parent = null;
				//line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				sx.properties.displaylist.ArrayDisplayList __temp_expr2 = child1;
			}
			else
			{
				//line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				sx.properties.displaylist.ArrayDisplayList __temp_expr1 = null;
			}
			
		}
		
		//line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		_this.children.insert(index, child1);
		//line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		child1.parent = _this;
		//line 47 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		sx.properties.displaylist.ArrayDisplayList __temp_expr3 = child1;
	}
	
	
	public void removeWidget(sx.widgets.Widget child)
	{
		//line 56 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		sx.properties.displaylist.ArrayDisplayList _this = this.__node;
		//line 56 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		sx.properties.displaylist.ArrayDisplayList child1 = child.backend.__node;
		//line 56 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		if (( child1.parent == _this )) 
		{
			//line 56 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			_this.children.remove(child1);
			//line 56 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			child1.parent = null;
			//line 56 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			sx.properties.displaylist.ArrayDisplayList __temp_expr2 = child1;
		}
		else
		{
			//line 56 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			sx.properties.displaylist.ArrayDisplayList __temp_expr1 = null;
		}
		
	}
	
	
	public sx.widgets.Widget removeWidgetAt(int index)
	{
		//line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		sx.properties.displaylist.ArrayDisplayList removed = null;
		//line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		{
			//line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			sx.properties.displaylist.ArrayDisplayList _this = this.__node;
			//line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			int index1 = index;
			//line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			if (( index1 < 0 )) 
			{
				//line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				index1 = ( _this.children.length + index1 );
			}
			
			//line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			if (( ( index1 < 0 ) || ( index1 >= _this.children.length ) )) 
			{
				//line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				removed = null;
			}
			else
			{
				//line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				sx.properties.displaylist.ArrayDisplayList removed1 = _this.children.splice(index1, 1).__get(0);
				//line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				removed1.parent = null;
				//line 69 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				removed = removed1;
			}
			
		}
		
		//line 71 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		if (( removed == null )) 
		{
			//line 71 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			return null;
		}
		else
		{
			//line 71 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			return removed.widget;
		}
		
	}
	
	
	public int getWidgetIndex(sx.widgets.Widget child)
	{
		//line 80 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		{
			//line 80 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			int index = this.__node.children.indexOf(child.backend.__node, null);
			//line 80 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			if (( index < 0 )) 
			{
				//line 80 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				throw haxe.lang.HaxeException.wrap(new sx.exceptions.NotChildException(null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.properties.displaylist.ArrayDisplayList", "ArrayDisplayList.hx", "getChildIndex"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (166) )) )})));
			}
			
			//line 80 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			return index;
		}
		
	}
	
	
	public int setWidgetIndex(sx.widgets.Widget child, int index)
	{
		//line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		{
			//line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			sx.properties.displaylist.ArrayDisplayList _this = this.__node;
			//line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			sx.properties.displaylist.ArrayDisplayList child1 = child.backend.__node;
			//line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			int index1 = index;
			//line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			int currentIndex = _this.children.indexOf(child1, null);
			//line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			if (( currentIndex < 0 )) 
			{
				//line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				throw haxe.lang.HaxeException.wrap(new sx.exceptions.NotChildException(null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.properties.displaylist.ArrayDisplayList", "ArrayDisplayList.hx", "setChildIndex"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (186) )) )})));
			}
			
			//line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			if (( index1 < 0 )) 
			{
				//line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				index1 = ( _this.children.length + index1 );
			}
			
			//line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			if (( index1 < 0 )) 
			{
				//line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				index1 = 0;
			}
			else
			{
				//line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				if (( index1 >= _this.children.length )) 
				{
					//line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					index1 = ( _this.children.length - 1 );
				}
				
			}
			
			//line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			if (( index1 != currentIndex )) 
			{
				//line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				_this.children.remove(child1);
				//line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				_this.children.insert(index1, child1);
				//line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				return index1;
			}
			else
			{
				//line 95 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				return currentIndex;
			}
			
		}
		
	}
	
	
	public sx.widgets.Widget getWidgetAt(int index)
	{
		//line 108 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		sx.properties.displaylist.ArrayDisplayList childNode = null;
		//line 108 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		{
			//line 108 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			sx.properties.displaylist.ArrayDisplayList _this = this.__node;
			//line 108 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			int index1 = index;
			//line 108 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			if (( index1 < 0 )) 
			{
				//line 108 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				index1 = ( _this.children.length + index1 );
			}
			
			//line 108 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			if (( ( index1 < 0 ) || ( index1 >= _this.children.length ) )) 
			{
				//line 108 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				childNode = null;
			}
			else
			{
				//line 108 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				childNode = _this.children.__get(index1);
			}
			
		}
		
		//line 110 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		if (( childNode == null )) 
		{
			//line 110 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			return null;
		}
		else
		{
			//line 110 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			return childNode.widget;
		}
		
	}
	
	
	public void swapWidgets(sx.widgets.Widget child1, sx.widgets.Widget child2)
	{
		//line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		sx.properties.displaylist.ArrayDisplayList _this = this.__node;
		//line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		sx.properties.displaylist.ArrayDisplayList child11 = child1.backend.__node;
		//line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		sx.properties.displaylist.ArrayDisplayList child21 = child2.backend.__node;
		//line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		int index1 = _this.children.indexOf(child11, null);
		//line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		int index2 = _this.children.indexOf(child21, null);
		//line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		if (( ( index1 < 0 ) || ( index2 < 0 ) )) 
		{
			//line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			throw haxe.lang.HaxeException.wrap(new sx.exceptions.NotChildException(null, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.properties.displaylist.ArrayDisplayList", "ArrayDisplayList.hx", "swapChildren"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (235) )) )})));
		}
		
		//line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		_this.children.__set(index1, child21);
		//line 119 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		_this.children.__set(index2, child11);
	}
	
	
	public void swapWidgetsAt(int index1, int index2)
	{
		//line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		sx.properties.displaylist.ArrayDisplayList _this = this.__node;
		//line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		int index11 = index1;
		//line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		int index21 = index2;
		//line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		if (( index11 < 0 )) 
		{
			//line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			index11 = ( _this.children.length + index11 );
		}
		
		//line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		if (( index21 < 0 )) 
		{
			//line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			index21 = ( _this.children.length + index21 );
		}
		
		//line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		if (( ( ( ( index11 < 0 ) || ( index11 >= _this.children.length ) ) || ( index21 < 0 ) ) || ( index21 > _this.children.length ) )) 
		{
			//line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			throw haxe.lang.HaxeException.wrap(new sx.exceptions.OutOfBoundsException("Provided index does not exist in display list of this widget.", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.properties.displaylist.ArrayDisplayList", "ArrayDisplayList.hx", "swapChildrenAt"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (255) )) )})));
		}
		
		//line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		sx.properties.displaylist.ArrayDisplayList child = _this.children.__get(index11);
		//line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		_this.children.__set(index11, _this.children.__get(index21));
		//line 130 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		_this.children.__set(index21, child);
	}
	
	
	public sx.backend.dummy.Point widgetGlobalToLocal(sx.backend.dummy.Point point)
	{
		//line 139 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		return new sx.backend.dummy.Point(null, null);
	}
	
	
	public sx.backend.dummy.Point widgetLocalToGlobal(sx.backend.dummy.Point point)
	{
		//line 148 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		return new sx.backend.dummy.Point(null, null);
	}
	
	
	public void widgetOriginChanged()
	{
	}
	
	
	public void widgetOffsetChanged()
	{
	}
	
	
	public void widgetResized()
	{
	}
	
	
	public void widgetMoved()
	{
	}
	
	
	public void widgetRotated()
	{
	}
	
	
	public void widgetScaledX()
	{
	}
	
	
	public void widgetScaledY()
	{
	}
	
	
	public void widgetAlphaChanged()
	{
	}
	
	
	public void widgetVisibilityChanged()
	{
	}
	
	
	public void widgetOverflowChanged()
	{
	}
	
	
	public void widgetSkinChanged()
	{
	}
	
	
	public void widgetDisposed()
	{
		//line 255 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		this.__node = null;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		{
			//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			boolean __temp_executeDef1 = true;
			//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			switch (field.hashCode())
			{
				case -1484076574:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("__node")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.__node = ((sx.properties.displaylist.ArrayDisplayList) (value) );
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return value;
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
			}
			
			//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			if (__temp_executeDef1) 
			{
				//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		{
			//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			boolean __temp_executeDef1 = true;
			//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			switch (field.hashCode())
			{
				case 1611978889:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetDisposed")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "widgetDisposed")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -1484076574:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("__node")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return this.__node;
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -153396845:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetSkinChanged")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "widgetSkinChanged")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case 104792645:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("addWidget")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addWidget")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case 894250350:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetOverflowChanged")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "widgetOverflowChanged")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case 1921486168:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("addWidgetAt")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addWidgetAt")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -304507554:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetVisibilityChanged")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "widgetVisibilityChanged")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -749483032:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("removeWidget")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "removeWidget")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -1246164006:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetAlphaChanged")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "widgetAlphaChanged")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case 1301314107:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("removeWidgetAt")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "removeWidgetAt")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -540158885:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetScaledY")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "widgetScaledY")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -1583812680:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("getWidgetIndex")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getWidgetIndex")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -540158886:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetScaledX")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "widgetScaledX")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case 939418412:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("setWidgetIndex")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setWidgetIndex")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -1066879099:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetRotated")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "widgetRotated")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case 678698765:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("getWidgetAt")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getWidgetAt")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -939802929:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetMoved")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "widgetMoved")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -999417444:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("swapWidgets")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "swapWidgets")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -1353850036:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetResized")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "widgetResized")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case 1632512751:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("swapWidgetsAt")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "swapWidgetsAt")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case 633634493:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetOffsetChanged")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "widgetOffsetChanged")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -520544087:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetGlobalToLocal")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "widgetGlobalToLocal")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -1356875574:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetOriginChanged")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "widgetOriginChanged")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -1522974043:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetLocalToGlobal")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "widgetLocalToGlobal")) );
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
			}
			
			//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			if (__temp_executeDef1) 
			{
				//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		{
			//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			boolean __temp_executeDef1 = true;
			//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			switch (field.hashCode())
			{
				case 1611978889:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetDisposed")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetDisposed();
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case 104792645:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("addWidget")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.addWidget(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -153396845:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetSkinChanged")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetSkinChanged();
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case 1921486168:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("addWidgetAt")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.addWidgetAt(((sx.widgets.Widget) (dynargs.__get(0)) ), ((int) (haxe.lang.Runtime.toInt(dynargs.__get(1))) ));
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case 894250350:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetOverflowChanged")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetOverflowChanged();
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -749483032:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("removeWidget")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.removeWidget(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -304507554:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetVisibilityChanged")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetVisibilityChanged();
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case 1301314107:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("removeWidgetAt")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return this.removeWidgetAt(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ));
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -1246164006:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetAlphaChanged")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetAlphaChanged();
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -1583812680:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("getWidgetIndex")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return this.getWidgetIndex(((sx.widgets.Widget) (dynargs.__get(0)) ));
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -540158885:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetScaledY")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetScaledY();
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case 939418412:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("setWidgetIndex")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return this.setWidgetIndex(((sx.widgets.Widget) (dynargs.__get(0)) ), ((int) (haxe.lang.Runtime.toInt(dynargs.__get(1))) ));
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -540158886:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetScaledX")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetScaledX();
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case 678698765:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("getWidgetAt")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return this.getWidgetAt(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ));
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -1066879099:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetRotated")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetRotated();
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -999417444:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("swapWidgets")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.swapWidgets(((sx.widgets.Widget) (dynargs.__get(0)) ), ((sx.widgets.Widget) (dynargs.__get(1)) ));
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -939802929:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetMoved")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetMoved();
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case 1632512751:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("swapWidgetsAt")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.swapWidgetsAt(((int) (haxe.lang.Runtime.toInt(dynargs.__get(0))) ), ((int) (haxe.lang.Runtime.toInt(dynargs.__get(1))) ));
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -1353850036:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetResized")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetResized();
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -520544087:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetGlobalToLocal")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return this.widgetGlobalToLocal(((sx.backend.dummy.Point) (dynargs.__get(0)) ));
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case 633634493:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetOffsetChanged")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetOffsetChanged();
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -1522974043:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetLocalToGlobal")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						return this.widgetLocalToGlobal(((sx.backend.dummy.Point) (dynargs.__get(0)) ));
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
				case -1356875574:
				{
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					if (field.equals("widgetOriginChanged")) 
					{
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						__temp_executeDef1 = false;
						//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
						this.widgetOriginChanged();
					}
					
					//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
					break;
				}
				
				
			}
			
			//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			if (__temp_executeDef1) 
			{
				//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		baseArr.push("__node");
		//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
		{
			//line 14 "/home/alex/Work/HaXe/sx2-dummy/src/sx/backend/dummy/Backend.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


