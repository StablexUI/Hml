package sx.widgets.base;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class RendererHolder extends sx.widgets.Widget
{
	public RendererHolder(haxe.lang.EmptyObject empty)
	{
		//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public RendererHolder()
	{
		//line 49 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 49 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		sx.widgets.base.RendererHolder.__hx_ctor_sx_widgets_base_RendererHolder(this);
	}
	
	
	public static void __hx_ctor_sx_widgets_base_RendererHolder(sx.widgets.base.RendererHolder __temp_me155)
	{
		//line 39 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		__temp_me155.__adjustingSize = false;
		//line 37 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		__temp_me155.__rendererOnResizeIsSet = false;
		//line 49 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		sx.widgets.Widget.__hx_ctor_sx_widgets_Widget(__temp_me155);
		//line 51 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		__temp_me155.__padding = new sx.properties.metric.Padding();
		//line 52 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		__temp_me155.__padding.ownerWidth = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me155, "__widthProviderForPadding")) );
		//line 53 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		__temp_me155.__padding.ownerHeight = ((haxe.lang.Function) (new haxe.lang.Closure(__temp_me155, "__heightProviderForPadding")) );
		//line 54 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		__temp_me155.__padding.onComponentsChange.add(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me155, "__paddingChanged")) ));
		//line 56 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		__temp_me155.set_autoSize(new sx.properties.AutoSize(((java.lang.Object) (true) )));
		//line 57 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		__temp_me155.autoSize.onChange.add(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me155, "__autoSizeChanged")) ));
		//line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		__temp_me155.__createRenderer();
		//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		{
			//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			__temp_me155.get___renderer().onResize(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me155, "__rendererResized")) ));
			//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			__temp_me155.__rendererOnResizeIsSet = true;
		}
		
		//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		double rendererWidth = __temp_me155.get___renderer().getWidth();
		//line 65 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		double rendererHeight = __temp_me155.get___renderer().getHeight();
		//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		if (( ( ( rendererWidth != 0 ) || ( rendererHeight != 0 ) ) ||  ! (sx.tools.PaddingTools.isZero(__temp_me155.get_padding()))  )) 
		{
			//line 67 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			{
				//line 67 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				sx.properties.metric.Size size = __temp_me155.get_width();
				//line 67 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				__temp_me155.__adjustingSize = true;
				//line 67 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				size.set_px(( rendererWidth + sx.tools.PaddingTools.sumPx(__temp_me155.get_padding(), size.orientation) ));
				//line 67 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				__temp_me155.__adjustingSize = false;
			}
			
			//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			{
				//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				sx.properties.metric.Size size1 = __temp_me155.get_height();
				//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				__temp_me155.__adjustingSize = true;
				//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				size1.set_px(( rendererHeight + sx.tools.PaddingTools.sumPx(__temp_me155.get_padding(), size1.orientation) ));
				//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				__temp_me155.__adjustingSize = false;
			}
			
		}
		
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		return new sx.widgets.base.RendererHolder(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		return new sx.widgets.base.RendererHolder();
	}
	
	
	public sx.properties.AutoSize autoSize;
	
	
	
	public sx.properties.metric.Padding __padding;
	
	
	
	public boolean __rendererOnResizeIsSet;
	
	public boolean __adjustingSize;
	
	public sx.properties.metric.Size __helperSize;
	
	@Override public void dispose(java.lang.Object disposeChildren)
	{
		//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		boolean __temp_disposeChildren154 = ( (haxe.lang.Runtime.eq(disposeChildren, null)) ? (true) : (haxe.lang.Runtime.toBool(disposeChildren)) );
		//line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		super.dispose(__temp_disposeChildren154);
		//line 80 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		{
			//line 80 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			this.get___renderer().onResize(null);
			//line 80 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			this.__rendererOnResizeIsSet = false;
		}
		
		//line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		this.get___renderer().dispose();
	}
	
	
	public void __createRenderer()
	{
	}
	
	
	public void __autoSizeChanged(boolean widthChanged, boolean heightChanged)
	{
		//line 101 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		if (this.__rendererOnResizeIsSet) 
		{
			//line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (this.autoSize.neither()) 
			{
				//line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.get___renderer().onResize(null);
				//line 102 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__rendererOnResizeIsSet = false;
			}
			
		}
		else
		{
			//line 104 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (this.autoSize.either()) 
			{
				//line 104 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.get___renderer().onResize(((haxe.lang.Function) (new haxe.lang.Closure(this, "__rendererResized")) ));
				//line 104 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__rendererOnResizeIsSet = true;
			}
			
		}
		
		//line 107 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		if (widthChanged) 
		{
			//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (this.autoSize.get_width()) 
			{
				//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				sx.properties.metric.Size size = this.get_width();
				//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				double rendererSizePx = this.get___renderer().getWidth();
				//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__adjustingSize = true;
				//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				size.set_px(( rendererSizePx + sx.tools.PaddingTools.sumPx(this.get_padding(), size.orientation) ));
				//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__adjustingSize = false;
			}
			else
			{
				//line 111 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.get___renderer().setAvailableAreaWidth(( this.get_width().get_px() - sx.tools.PaddingTools.sumPx(this.get_padding(), haxe.lang.Runtime.toString("horizontal")) ));
			}
			
		}
		
		//line 114 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		if (heightChanged) 
		{
			//line 115 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (this.autoSize.get_height()) 
			{
				//line 116 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				sx.properties.metric.Size size1 = this.get_height();
				//line 116 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				double rendererSizePx1 = this.get___renderer().getHeight();
				//line 116 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__adjustingSize = true;
				//line 116 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				size1.set_px(( rendererSizePx1 + sx.tools.PaddingTools.sumPx(this.get_padding(), size1.orientation) ));
				//line 116 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__adjustingSize = false;
			}
			else
			{
				//line 118 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.get___renderer().setAvailableAreaHeight(( this.get_height().get_px() - sx.tools.PaddingTools.sumPx(this.get_padding(), haxe.lang.Runtime.toString("vertical")) ));
			}
			
		}
		
	}
	
	
	public final void __disableRendererResizeListener()
	{
		//line 129 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		this.get___renderer().onResize(null);
		//line 130 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		this.__rendererOnResizeIsSet = false;
	}
	
	
	public final void __enableRendererResizeListener()
	{
		//line 139 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		this.get___renderer().onResize(((haxe.lang.Function) (new haxe.lang.Closure(this, "__rendererResized")) ));
		//line 140 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		this.__rendererOnResizeIsSet = true;
	}
	
	
	public void __rendererResized(double widthPx, double heightPx)
	{
		//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		if (this.autoSize.get_width()) 
		{
			//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			sx.properties.metric.Size size = this.get_width();
			//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			this.__adjustingSize = true;
			//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			size.set_px(( widthPx + sx.tools.PaddingTools.sumPx(this.get_padding(), size.orientation) ));
			//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			this.__adjustingSize = false;
		}
		
		//line 150 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		if (this.autoSize.get_height()) 
		{
			//line 150 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			sx.properties.metric.Size size1 = this.get_height();
			//line 150 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			this.__adjustingSize = true;
			//line 150 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			size1.set_px(( heightPx + sx.tools.PaddingTools.sumPx(this.get_padding(), size1.orientation) ));
			//line 150 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			this.__adjustingSize = false;
		}
		
	}
	
	
	@Override public void __propertyResized(sx.properties.metric.Size changed, java.lang.String previousUnits, double previousValue)
	{
		//line 159 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		if ( ! (this.__adjustingSize) ) 
		{
			//line 160 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (haxe.lang.Runtime.valEq(changed.orientation, haxe.lang.Runtime.toString("horizontal"))) 
			{
				//line 161 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				if (this.autoSize.get_width()) 
				{
					//line 163 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.autoSize.set_width(false);
				}
				else
				{
					//line 165 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.get___renderer().setAvailableAreaWidth(( changed.get_px() - sx.tools.PaddingTools.sumPx(this.get_padding(), haxe.lang.Runtime.toString("horizontal")) ));
				}
				
			}
			else
			{
				//line 168 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				if (this.autoSize.get_height()) 
				{
					//line 170 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.autoSize.set_height(false);
				}
				else
				{
					//line 172 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					this.get___renderer().setAvailableAreaHeight(( changed.get_px() - sx.tools.PaddingTools.sumPx(this.get_padding(), haxe.lang.Runtime.toString("vertical")) ));
				}
				
			}
			
		}
		
		//line 177 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		super.__propertyResized(changed, previousUnits, previousValue);
	}
	
	
	public final void __adjustSize(sx.properties.metric.Size size, double rendererSizePx)
	{
		//line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		this.__adjustingSize = true;
		//line 187 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		size.set_px(( rendererSizePx + sx.tools.PaddingTools.sumPx(this.get_padding(), size.orientation) ));
		//line 188 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		this.__adjustingSize = false;
	}
	
	
	public void __paddingChanged(boolean horizontal, boolean vertical)
	{
		//line 197 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		if (horizontal) 
		{
			//line 198 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (this.autoSize.get_width()) 
			{
				//line 199 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				sx.properties.metric.Size size = this.get_width();
				//line 199 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				double rendererSizePx = this.get___renderer().getWidth();
				//line 199 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__adjustingSize = true;
				//line 199 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				size.set_px(( rendererSizePx + sx.tools.PaddingTools.sumPx(this.get_padding(), size.orientation) ));
				//line 199 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__adjustingSize = false;
			}
			else
			{
				//line 201 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.get___renderer().setAvailableAreaWidth(( this.get_width().get_px() - sx.tools.PaddingTools.sumPx(this.get_padding(), haxe.lang.Runtime.toString("horizontal")) ));
			}
			
		}
		
		//line 204 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		if (vertical) 
		{
			//line 205 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (this.autoSize.get_height()) 
			{
				//line 206 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				sx.properties.metric.Size size1 = this.get_height();
				//line 206 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				double rendererSizePx1 = this.get___renderer().getHeight();
				//line 206 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__adjustingSize = true;
				//line 206 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				size1.set_px(( rendererSizePx1 + sx.tools.PaddingTools.sumPx(this.get_padding(), size1.orientation) ));
				//line 206 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__adjustingSize = false;
			}
			else
			{
				//line 208 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.get___renderer().setAvailableAreaHeight(( this.get_height().get_px() - sx.tools.PaddingTools.sumPx(this.get_padding(), haxe.lang.Runtime.toString("vertical")) ));
			}
			
		}
		
	}
	
	
	public sx.properties.metric.Size __widthProviderForPadding()
	{
		//line 219 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		if (this.autoSize.get_width()) 
		{
			//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			sx.properties.metric.Size helperSize = null;
			//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			{
				//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				sx.properties.metric.Size paddingSide1 = this.get_padding().get_left();
				//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				sx.properties.metric.Size paddingSide2 = this.get_padding().get_right();
				//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				double rendererSizePx = this.get___renderer().getWidth();
				//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				double paddingSide1Px = 0.0;
				//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				{
					//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					java.lang.String _g = paddingSide1.units;
					//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					{
						//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						java.lang.String __temp_svar3 = (_g);
						//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						boolean __temp_executeDef4 = true;
						//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						switch (__temp_svar3.hashCode())
						{
							case 110817:
							{
								//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								if (__temp_svar3.equals("pct")) 
								{
									//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									__temp_executeDef4 = false;
									//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									double rendererSize = 0.0;
									//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									if (haxe.lang.Runtime.valEq(paddingSide1.orientation, haxe.lang.Runtime.toString("horizontal"))) 
									{
										//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										rendererSize = this.get___renderer().getWidth();
									}
									else
									{
										//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										rendererSize = this.get___renderer().getHeight();
									}
									
									//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									double holderSize = 0.0;
									//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									{
										//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										java.lang.String _g1 = paddingSide2.units;
										//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										{
											//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											java.lang.String __temp_svar1 = (_g1);
											//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											boolean __temp_executeDef2 = true;
											//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											switch (__temp_svar1.hashCode())
											{
												case 110817:
												{
													//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
													if (__temp_svar1.equals("pct")) 
													{
														//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
														__temp_executeDef2 = false;
														//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
														holderSize = ( rendererSize / (( 0.01 * (( ( 100 - paddingSide1.get_pct() ) - paddingSide2.get_pct() )) )) );
													}
													
													//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
													break;
												}
												
												
											}
											
											//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											if (__temp_executeDef2) 
											{
												//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												holderSize = ( (( rendererSize + paddingSide2.get_px() )) / (( 0.01 * (( 100 - paddingSide1.get_pct() )) )) );
											}
											
										}
										
									}
									
									//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									paddingSide1Px = ( ( paddingSide1.get_pct() * 0.01 ) * holderSize );
								}
								
								//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								break;
							}
							
							
						}
						
						//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						if (__temp_executeDef4) 
						{
							//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							paddingSide1Px = paddingSide1.get_px();
						}
						
					}
					
				}
				
				//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				double paddingSide2Px = 0.0;
				//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				{
					//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					java.lang.String _g2 = paddingSide2.units;
					//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					{
						//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						java.lang.String __temp_svar7 = (_g2);
						//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						boolean __temp_executeDef8 = true;
						//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						switch (__temp_svar7.hashCode())
						{
							case 110817:
							{
								//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								if (__temp_svar7.equals("pct")) 
								{
									//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									__temp_executeDef8 = false;
									//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									double rendererSize1 = 0.0;
									//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									if (haxe.lang.Runtime.valEq(paddingSide2.orientation, haxe.lang.Runtime.toString("horizontal"))) 
									{
										//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										rendererSize1 = this.get___renderer().getWidth();
									}
									else
									{
										//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										rendererSize1 = this.get___renderer().getHeight();
									}
									
									//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									double holderSize1 = 0.0;
									//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									{
										//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										java.lang.String _g11 = paddingSide1.units;
										//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										{
											//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											java.lang.String __temp_svar5 = (_g11);
											//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											boolean __temp_executeDef6 = true;
											//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											switch (__temp_svar5.hashCode())
											{
												case 110817:
												{
													//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
													if (__temp_svar5.equals("pct")) 
													{
														//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
														__temp_executeDef6 = false;
														//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
														holderSize1 = ( rendererSize1 / (( 0.01 * (( ( 100 - paddingSide2.get_pct() ) - paddingSide1.get_pct() )) )) );
													}
													
													//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
													break;
												}
												
												
											}
											
											//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											if (__temp_executeDef6) 
											{
												//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												holderSize1 = ( (( rendererSize1 + paddingSide1.get_px() )) / (( 0.01 * (( 100 - paddingSide2.get_pct() )) )) );
											}
											
										}
										
									}
									
									//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									paddingSide2Px = ( ( paddingSide2.get_pct() * 0.01 ) * holderSize1 );
								}
								
								//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								break;
							}
							
							
						}
						
						//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						if (__temp_executeDef8) 
						{
							//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							paddingSide2Px = paddingSide2.get_px();
						}
						
					}
					
				}
				
				//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				sx.properties.metric.Size helperSize1 = null;
				//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				{
					//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (( this.__helperSize == null )) 
					{
						//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__helperSize = new sx.properties.metric.Size(haxe.lang.Runtime.toString(null));
					}
					
					//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					helperSize1 = this.__helperSize;
				}
				
				//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				helperSize1.set_px(( ( rendererSizePx + paddingSide1Px ) + paddingSide2Px ));
				//line 220 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				helperSize = this.__helperSize;
			}
			
			//line 222 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			return helperSize;
		}
		else
		{
			//line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			return this.get_width();
		}
		
	}
	
	
	public sx.properties.metric.Size __heightProviderForPadding()
	{
		//line 235 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		if (this.autoSize.get_width()) 
		{
			//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			sx.properties.metric.Size helperSize = null;
			//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			{
				//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				sx.properties.metric.Size paddingSide1 = this.get_padding().get_top();
				//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				sx.properties.metric.Size paddingSide2 = this.get_padding().get_bottom();
				//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				double rendererSizePx = this.get___renderer().getHeight();
				//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				double paddingSide1Px = 0.0;
				//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				{
					//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					java.lang.String _g = paddingSide1.units;
					//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					{
						//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						java.lang.String __temp_svar3 = (_g);
						//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						boolean __temp_executeDef4 = true;
						//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						switch (__temp_svar3.hashCode())
						{
							case 110817:
							{
								//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								if (__temp_svar3.equals("pct")) 
								{
									//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									__temp_executeDef4 = false;
									//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									double rendererSize = 0.0;
									//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									if (haxe.lang.Runtime.valEq(paddingSide1.orientation, haxe.lang.Runtime.toString("horizontal"))) 
									{
										//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										rendererSize = this.get___renderer().getWidth();
									}
									else
									{
										//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										rendererSize = this.get___renderer().getHeight();
									}
									
									//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									double holderSize = 0.0;
									//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									{
										//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										java.lang.String _g1 = paddingSide2.units;
										//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										{
											//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											java.lang.String __temp_svar1 = (_g1);
											//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											boolean __temp_executeDef2 = true;
											//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											switch (__temp_svar1.hashCode())
											{
												case 110817:
												{
													//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
													if (__temp_svar1.equals("pct")) 
													{
														//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
														__temp_executeDef2 = false;
														//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
														holderSize = ( rendererSize / (( 0.01 * (( ( 100 - paddingSide1.get_pct() ) - paddingSide2.get_pct() )) )) );
													}
													
													//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
													break;
												}
												
												
											}
											
											//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											if (__temp_executeDef2) 
											{
												//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												holderSize = ( (( rendererSize + paddingSide2.get_px() )) / (( 0.01 * (( 100 - paddingSide1.get_pct() )) )) );
											}
											
										}
										
									}
									
									//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									paddingSide1Px = ( ( paddingSide1.get_pct() * 0.01 ) * holderSize );
								}
								
								//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								break;
							}
							
							
						}
						
						//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						if (__temp_executeDef4) 
						{
							//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							paddingSide1Px = paddingSide1.get_px();
						}
						
					}
					
				}
				
				//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				double paddingSide2Px = 0.0;
				//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				{
					//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					java.lang.String _g2 = paddingSide2.units;
					//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					{
						//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						java.lang.String __temp_svar7 = (_g2);
						//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						boolean __temp_executeDef8 = true;
						//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						switch (__temp_svar7.hashCode())
						{
							case 110817:
							{
								//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								if (__temp_svar7.equals("pct")) 
								{
									//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									__temp_executeDef8 = false;
									//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									double rendererSize1 = 0.0;
									//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									if (haxe.lang.Runtime.valEq(paddingSide2.orientation, haxe.lang.Runtime.toString("horizontal"))) 
									{
										//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										rendererSize1 = this.get___renderer().getWidth();
									}
									else
									{
										//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										rendererSize1 = this.get___renderer().getHeight();
									}
									
									//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									double holderSize1 = 0.0;
									//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									{
										//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										java.lang.String _g11 = paddingSide1.units;
										//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										{
											//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											java.lang.String __temp_svar5 = (_g11);
											//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											boolean __temp_executeDef6 = true;
											//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											switch (__temp_svar5.hashCode())
											{
												case 110817:
												{
													//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
													if (__temp_svar5.equals("pct")) 
													{
														//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
														__temp_executeDef6 = false;
														//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
														holderSize1 = ( rendererSize1 / (( 0.01 * (( ( 100 - paddingSide2.get_pct() ) - paddingSide1.get_pct() )) )) );
													}
													
													//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
													break;
												}
												
												
											}
											
											//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											if (__temp_executeDef6) 
											{
												//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												holderSize1 = ( (( rendererSize1 + paddingSide1.get_px() )) / (( 0.01 * (( 100 - paddingSide2.get_pct() )) )) );
											}
											
										}
										
									}
									
									//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									paddingSide2Px = ( ( paddingSide2.get_pct() * 0.01 ) * holderSize1 );
								}
								
								//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								break;
							}
							
							
						}
						
						//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						if (__temp_executeDef8) 
						{
							//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							paddingSide2Px = paddingSide2.get_px();
						}
						
					}
					
				}
				
				//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				sx.properties.metric.Size helperSize1 = null;
				//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				{
					//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (( this.__helperSize == null )) 
					{
						//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__helperSize = new sx.properties.metric.Size(haxe.lang.Runtime.toString(null));
					}
					
					//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					helperSize1 = this.__helperSize;
				}
				
				//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				helperSize1.set_px(( ( rendererSizePx + paddingSide1Px ) + paddingSide2Px ));
				//line 236 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				helperSize = this.__helperSize;
			}
			
			//line 238 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			return helperSize;
		}
		else
		{
			//line 241 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			return this.get_width();
		}
		
	}
	
	
	public final sx.properties.metric.Size __getPaddedRendererSize(sx.properties.metric.Size paddingSide1, sx.properties.metric.Size paddingSide2, double rendererSizePx)
	{
		//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		double paddingSide1Px = 0.0;
		//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		{
			//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			java.lang.String _g = paddingSide1.units;
			//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			{
				//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				java.lang.String __temp_svar3 = (_g);
				//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				boolean __temp_executeDef4 = true;
				//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				switch (__temp_svar3.hashCode())
				{
					case 110817:
					{
						//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						if (__temp_svar3.equals("pct")) 
						{
							//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							__temp_executeDef4 = false;
							//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							double rendererSize = 0.0;
							//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							if (haxe.lang.Runtime.valEq(paddingSide1.orientation, haxe.lang.Runtime.toString("horizontal"))) 
							{
								//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								rendererSize = this.get___renderer().getWidth();
							}
							else
							{
								//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								rendererSize = this.get___renderer().getHeight();
							}
							
							//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							double holderSize = 0.0;
							//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							{
								//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								java.lang.String _g1 = paddingSide2.units;
								//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								{
									//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									java.lang.String __temp_svar1 = (_g1);
									//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									boolean __temp_executeDef2 = true;
									//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									switch (__temp_svar1.hashCode())
									{
										case 110817:
										{
											//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											if (__temp_svar1.equals("pct")) 
											{
												//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												__temp_executeDef2 = false;
												//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												holderSize = ( rendererSize / (( 0.01 * (( ( 100 - paddingSide1.get_pct() ) - paddingSide2.get_pct() )) )) );
											}
											
											//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											break;
										}
										
										
									}
									
									//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									if (__temp_executeDef2) 
									{
										//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										holderSize = ( (( rendererSize + paddingSide2.get_px() )) / (( 0.01 * (( 100 - paddingSide1.get_pct() )) )) );
									}
									
								}
								
							}
							
							//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							paddingSide1Px = ( ( paddingSide1.get_pct() * 0.01 ) * holderSize );
						}
						
						//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						break;
					}
					
					
				}
				
				//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				if (__temp_executeDef4) 
				{
					//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					paddingSide1Px = paddingSide1.get_px();
				}
				
			}
			
		}
		
		//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		double paddingSide2Px = 0.0;
		//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		{
			//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			java.lang.String _g2 = paddingSide2.units;
			//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			{
				//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				java.lang.String __temp_svar7 = (_g2);
				//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				boolean __temp_executeDef8 = true;
				//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				switch (__temp_svar7.hashCode())
				{
					case 110817:
					{
						//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						if (__temp_svar7.equals("pct")) 
						{
							//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							__temp_executeDef8 = false;
							//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							double rendererSize1 = 0.0;
							//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							if (haxe.lang.Runtime.valEq(paddingSide2.orientation, haxe.lang.Runtime.toString("horizontal"))) 
							{
								//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								rendererSize1 = this.get___renderer().getWidth();
							}
							else
							{
								//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								rendererSize1 = this.get___renderer().getHeight();
							}
							
							//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							double holderSize1 = 0.0;
							//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							{
								//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								java.lang.String _g11 = paddingSide1.units;
								//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								{
									//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									java.lang.String __temp_svar5 = (_g11);
									//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									boolean __temp_executeDef6 = true;
									//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									switch (__temp_svar5.hashCode())
									{
										case 110817:
										{
											//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											if (__temp_svar5.equals("pct")) 
											{
												//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												__temp_executeDef6 = false;
												//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
												holderSize1 = ( rendererSize1 / (( 0.01 * (( ( 100 - paddingSide2.get_pct() ) - paddingSide1.get_pct() )) )) );
											}
											
											//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											break;
										}
										
										
									}
									
									//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									if (__temp_executeDef6) 
									{
										//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										holderSize1 = ( (( rendererSize1 + paddingSide1.get_px() )) / (( 0.01 * (( 100 - paddingSide2.get_pct() )) )) );
									}
									
								}
								
							}
							
							//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							paddingSide2Px = ( ( paddingSide2.get_pct() * 0.01 ) * holderSize1 );
						}
						
						//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						break;
					}
					
					
				}
				
				//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				if (__temp_executeDef8) 
				{
					//line 252 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					paddingSide2Px = paddingSide2.get_px();
				}
				
			}
			
		}
		
		//line 254 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		sx.properties.metric.Size helperSize = null;
		//line 254 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		{
			//line 254 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (( this.__helperSize == null )) 
			{
				//line 254 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				this.__helperSize = new sx.properties.metric.Size(haxe.lang.Runtime.toString(null));
			}
			
			//line 254 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			helperSize = this.__helperSize;
		}
		
		//line 255 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		helperSize.set_px(( ( rendererSizePx + paddingSide1Px ) + paddingSide2Px ));
		//line 257 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		return this.__helperSize;
	}
	
	
	public final double __getPaddingPixels(sx.properties.metric.Size paddingSide, sx.properties.metric.Size oppositeSide)
	{
		//line 266 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		java.lang.String _g = paddingSide.units;
		//line 266 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		{
			//line 266 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			java.lang.String __temp_svar3 = (_g);
			//line 266 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			boolean __temp_executeDef4 = true;
			//line 266 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			switch (__temp_svar3.hashCode())
			{
				case 110817:
				{
					//line 266 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (__temp_svar3.equals("pct")) 
					{
						//line 266 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef4 = false;
						//line 268 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						double rendererSize = 0.0;
						//line 268 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						if (haxe.lang.Runtime.valEq(paddingSide.orientation, haxe.lang.Runtime.toString("horizontal"))) 
						{
							//line 268 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							rendererSize = this.get___renderer().getWidth();
						}
						else
						{
							//line 268 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							rendererSize = this.get___renderer().getHeight();
						}
						
						//line 269 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						double holderSize = 0.0;
						//line 269 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						{
							//line 269 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							java.lang.String _g1 = oppositeSide.units;
							//line 269 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							{
								//line 269 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								java.lang.String __temp_svar1 = (_g1);
								//line 269 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								boolean __temp_executeDef2 = true;
								//line 269 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								switch (__temp_svar1.hashCode())
								{
									case 110817:
									{
										//line 269 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										if (__temp_svar1.equals("pct")) 
										{
											//line 269 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											__temp_executeDef2 = false;
											//line 270 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
											holderSize = ( rendererSize / (( 0.01 * (( ( 100 - paddingSide.get_pct() ) - oppositeSide.get_pct() )) )) );
										}
										
										//line 269 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
										break;
									}
									
									
								}
								
								//line 271 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
								if (__temp_executeDef2) 
								{
									//line 271 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
									holderSize = ( (( rendererSize + oppositeSide.get_px() )) / (( 0.01 * (( 100 - paddingSide.get_pct() )) )) );
								}
								
							}
							
						}
						
						//line 274 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ( ( paddingSide.get_pct() * 0.01 ) * holderSize );
					}
					
					//line 266 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
			}
			
			//line 277 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (__temp_executeDef4) 
			{
				//line 277 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				return paddingSide.get_px();
			}
			else
			{
				//line 277 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				throw null;
			}
			
		}
		
	}
	
	
	public final sx.properties.metric.Size __getHelperSize()
	{
		//line 287 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		if (( this.__helperSize == null )) 
		{
			//line 287 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			this.__helperSize = new sx.properties.metric.Size(haxe.lang.Runtime.toString(null));
		}
		
		//line 289 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		return this.__helperSize;
	}
	
	
	public sx.backend.interfaces.IRenderer get___renderer()
	{
		//line 300 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		return null;
	}
	
	
	public sx.properties.AutoSize set_autoSize(sx.properties.AutoSize value)
	{
		//line 309 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		if (( this.autoSize == null )) 
		{
			//line 310 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			this.autoSize = value;
		}
		else
		{
			//line 312 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			((sx.properties.AutoSize) (this.autoSize) ).copyValueFrom(value);
		}
		
		//line 315 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		return this.autoSize;
	}
	
	
	public sx.properties.metric.Padding get_padding()
	{
		//line 320 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		return this.__padding;
	}
	
	
	public sx.properties.metric.Padding set_padding(sx.properties.metric.Size v)
	{
		//line 323 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		{
			//line 323 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			this.__padding.copyValueFrom(v);
			//line 323 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			return this.__padding;
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		{
			//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			boolean __temp_executeDef1 = true;
			//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			switch (field.hashCode())
			{
				case -2095017809:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__helperSize")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__helperSize = ((sx.properties.metric.Size) (value) );
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return value;
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 1438696016:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("autoSize")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						if (handleProperties) 
						{
							//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							this.set_autoSize(((sx.properties.AutoSize) (value) ));
							//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							return value;
						}
						else
						{
							//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							this.autoSize = ((sx.properties.AutoSize) (value) );
							//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
							return value;
						}
						
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -138189644:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__adjustingSize")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__adjustingSize = haxe.lang.Runtime.toBool(value);
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return value;
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -806339567:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("padding")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.set_padding(((sx.properties.metric.Size) (value) ));
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return value;
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 14917442:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__rendererOnResizeIsSet")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__rendererOnResizeIsSet = haxe.lang.Runtime.toBool(value);
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return value;
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 1642402865:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__padding")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__padding = ((sx.properties.metric.Padding) (value) );
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return value;
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
			}
			
			//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (__temp_executeDef1) 
			{
				//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		{
			//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			boolean __temp_executeDef1 = true;
			//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			switch (field.hashCode())
			{
				case -818406092:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("set_padding")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_padding")) );
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 1438696016:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("autoSize")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.autoSize;
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -729826264:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("get_padding")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_padding")) );
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -806339567:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("padding")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.get_padding();
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 1064633741:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("set_autoSize")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_autoSize")) );
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 1642402865:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__padding")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.__padding;
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 1181901100:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("get___renderer")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get___renderer")) );
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -1893241693:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__renderer")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.get___renderer();
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 2136003813:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__getHelperSize")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__getHelperSize")) );
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 14917442:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__rendererOnResizeIsSet")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.__rendererOnResizeIsSet;
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -1037263288:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__getPaddingPixels")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__getPaddingPixels")) );
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -138189644:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__adjustingSize")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.__adjustingSize;
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -360472534:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__getPaddedRendererSize")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__getPaddedRendererSize")) );
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -2095017809:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__helperSize")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.__helperSize;
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 822036800:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__heightProviderForPadding")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__heightProviderForPadding")) );
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 1671767583:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("dispose")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "dispose")) );
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -292108193:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__widthProviderForPadding")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__widthProviderForPadding")) );
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 655117759:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__createRenderer")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__createRenderer")) );
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -1420165821:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__paddingChanged")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__paddingChanged")) );
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 898660:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__autoSizeChanged")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__autoSizeChanged")) );
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -1852383216:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__adjustSize")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__adjustSize")) );
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 789249619:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__disableRendererResizeListener")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__disableRendererResizeListener")) );
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -982310213:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__propertyResized")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__propertyResized")) );
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -1136671122:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__enableRendererResizeListener")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__enableRendererResizeListener")) );
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 786774029:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__rendererResized")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__rendererResized")) );
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
			}
			
			//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (__temp_executeDef1) 
			{
				//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		{
			//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			int __temp_hash2 = field.hashCode();
			//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			boolean __temp_executeDef1 = true;
			//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			switch (__temp_hash2)
			{
				case -982310213:
				case 1671767583:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (( (( ( __temp_hash2 == -982310213 ) && field.equals("__propertyResized") )) || field.equals("dispose") )) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 655117759:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__createRenderer")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__createRenderer();
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -818406092:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("set_padding")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.set_padding(((sx.properties.metric.Size) (dynargs.__get(0)) ));
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 898660:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__autoSizeChanged")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__autoSizeChanged(haxe.lang.Runtime.toBool(dynargs.__get(0)), haxe.lang.Runtime.toBool(dynargs.__get(1)));
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -729826264:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("get_padding")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.get_padding();
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 789249619:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__disableRendererResizeListener")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__disableRendererResizeListener();
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 1064633741:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("set_autoSize")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.set_autoSize(((sx.properties.AutoSize) (dynargs.__get(0)) ));
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -1136671122:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__enableRendererResizeListener")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__enableRendererResizeListener();
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 1181901100:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("get___renderer")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.get___renderer();
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 786774029:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__rendererResized")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__rendererResized(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(1))) ));
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 2136003813:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__getHelperSize")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.__getHelperSize();
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -1852383216:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__adjustSize")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__adjustSize(((sx.properties.metric.Size) (dynargs.__get(0)) ), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(1))) ));
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -1037263288:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__getPaddingPixels")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.__getPaddingPixels(((sx.properties.metric.Size) (dynargs.__get(0)) ), ((sx.properties.metric.Size) (dynargs.__get(1)) ));
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -1420165821:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__paddingChanged")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						this.__paddingChanged(haxe.lang.Runtime.toBool(dynargs.__get(0)), haxe.lang.Runtime.toBool(dynargs.__get(1)));
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -360472534:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__getPaddedRendererSize")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.__getPaddedRendererSize(((sx.properties.metric.Size) (dynargs.__get(0)) ), ((sx.properties.metric.Size) (dynargs.__get(1)) ), ((double) (haxe.lang.Runtime.toDouble(dynargs.__get(2))) ));
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case -292108193:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__widthProviderForPadding")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.__widthProviderForPadding();
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
				case 822036800:
				{
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					if (field.equals("__heightProviderForPadding")) 
					{
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						__temp_executeDef1 = false;
						//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
						return this.__heightProviderForPadding();
					}
					
					//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
					break;
				}
				
				
			}
			
			//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			if (__temp_executeDef1) 
			{
				//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		baseArr.push("__helperSize");
		//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		baseArr.push("__adjustingSize");
		//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		baseArr.push("__rendererOnResizeIsSet");
		//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		baseArr.push("__renderer");
		//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		baseArr.push("__padding");
		//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		baseArr.push("padding");
		//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		baseArr.push("autoSize");
		//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		{
			//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


