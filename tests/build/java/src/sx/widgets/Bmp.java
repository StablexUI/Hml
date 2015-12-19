package sx.widgets;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Bmp extends sx.widgets.base.RendererHolder
{
	public Bmp(haxe.lang.EmptyObject empty)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public Bmp()
	{
		//line 47 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 47 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		sx.widgets.Bmp.__hx_ctor_sx_widgets_Bmp(this);
	}
	
	
	public static void __hx_ctor_sx_widgets_Bmp(sx.widgets.Bmp __temp_me156)
	{
		//line 40 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		__temp_me156.__dontUpdateBitmapScaling = false;
		//line 37 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		__temp_me156.smooth = false;
		//line 35 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		__temp_me156.keepAspect = true;
		//line 47 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/base/RendererHolder.hx"
		sx.widgets.base.RendererHolder.__hx_ctor_sx_widgets_base_RendererHolder(__temp_me156);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		return new sx.widgets.Bmp(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		return new sx.widgets.Bmp();
	}
	
	
	public java.lang.Object bitmapData;
	
	public sx.backend.dummy.BitmapRenderer renderer;
	
	public boolean keepAspect;
	
	public boolean smooth;
	
	public boolean __dontUpdateBitmapScaling;
	
	@Override public void __createRenderer()
	{
		//line 48 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		this.renderer = sx.Sx.get_backendManager().bitmapRenderer(this);
	}
	
	
	@Override public void __propertyResized(sx.properties.metric.Size changed, java.lang.String previousUnits, double previousValue)
	{
		//line 57 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		if (this.__dontUpdateBitmapScaling) 
		{
			//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			super.__propertyResized(changed, previousUnits, previousValue);
		}
		else
		{
			//line 60 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			this.__dontUpdateBitmapScaling = true;
			//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			super.__propertyResized(changed, previousUnits, previousValue);
			//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (this.autoSize.both()) 
			{
				//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
			}
			else
			{
				//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (this.autoSize.get_width()) 
				{
					//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					double bitmapHeight = 0.0;
					//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					{
						//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						sx.backend.dummy.BitmapRenderer _this = this.renderer;
						//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( _this.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this.__bitmapData, "height", true) == null ) )) 
						{
							//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapHeight = ((double) (0) );
						}
						else
						{
							//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapHeight = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this.__bitmapData, "height", true))) );
						}
						
					}
					
					//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (( bitmapHeight <= 0 )) 
					{
						//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
					}
					else
					{
						//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (this.keepAspect) 
						{
							//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
						}
						else
						{
							//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderHeight = ( this.get_height().get_px() - sx.tools.PaddingTools.sumPx(this.get_padding(), haxe.lang.Runtime.toString("vertical")) );
							//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( renderHeight <= 0 )) 
							{
								//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else
							{
								//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleY = ( renderHeight / bitmapHeight );
								//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (1) ), scaleY);
							}
							
						}
						
					}
					
				}
				else
				{
					//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (this.autoSize.get_height()) 
					{
						//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapWidth = 0.0;
						//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							sx.backend.dummy.BitmapRenderer _this1 = this.renderer;
							//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this1.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this1.__bitmapData, "width", true) == null ) )) 
							{
								//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth = ((double) (0) );
							}
							else
							{
								//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this1.__bitmapData, "width", true))) );
							}
							
						}
						
						//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( bitmapWidth <= 0 )) 
						{
							//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else
						{
							//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (this.keepAspect) 
							{
								//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
							}
							else
							{
								//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double renderWidth = ( this.get_width().get_px() - sx.tools.PaddingTools.sumPx(this.get_padding(), haxe.lang.Runtime.toString("horizontal")) );
								//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								if (( renderWidth <= 0 )) 
								{
									//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
								}
								else
								{
									//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									double scaleX = ( renderWidth / bitmapWidth );
									//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(scaleX, ((double) (1) ));
								}
								
							}
							
						}
						
					}
					else
					{
						//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapWidth1 = 0.0;
						//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							sx.backend.dummy.BitmapRenderer _this2 = this.renderer;
							//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this2.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this2.__bitmapData, "width", true) == null ) )) 
							{
								//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth1 = ((double) (0) );
							}
							else
							{
								//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth1 = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this2.__bitmapData, "width", true))) );
							}
							
						}
						
						//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapHeight1 = 0.0;
						//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							sx.backend.dummy.BitmapRenderer _this3 = this.renderer;
							//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this3.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this3.__bitmapData, "height", true) == null ) )) 
							{
								//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight1 = ((double) (0) );
							}
							else
							{
								//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight1 = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this3.__bitmapData, "height", true))) );
							}
							
						}
						
						//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( bitmapWidth1 <= 0 ) || ( bitmapHeight1 <= 0 ) )) 
						{
							//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else
						{
							//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderWidth1 = ( ( this.get_width().get_px() - this.get_padding().get_left().get_px() ) - this.get_padding().get_right().get_px() );
							//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderHeight1 = ( ( this.get_height().get_px() - this.get_padding().get_top().get_px() ) - this.get_padding().get_bottom().get_px() );
							//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( renderWidth1 <= 0 ) || ( renderHeight1 <= 0 ) )) 
							{
								//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else
							{
								//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleX1 = ( renderWidth1 / bitmapWidth1 );
								//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleY1 = ( renderHeight1 / bitmapHeight1 );
								//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								if (this.keepAspect) 
								{
									//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									if (( scaleX1 < scaleY1 )) 
									{
										//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
										this.renderer.setBitmapScale(scaleX1, scaleX1);
									}
									else
									{
										//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
										this.renderer.setBitmapScale(scaleY1, scaleY1);
									}
									
								}
								else
								{
									//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(scaleX1, scaleY1);
								}
								
							}
							
						}
						
					}
					
				}
				
			}
			
			//line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			this.__dontUpdateBitmapScaling = false;
		}
		
	}
	
	
	@Override public void __paddingChanged(boolean horizontal, boolean vertical)
	{
		//line 73 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		if (this.__dontUpdateBitmapScaling) 
		{
			//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			super.__paddingChanged(horizontal, vertical);
		}
		else
		{
			//line 76 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			this.__dontUpdateBitmapScaling = true;
			//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (this.autoSize.both()) 
			{
				//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
			}
			else
			{
				//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (this.autoSize.get_width()) 
				{
					//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					double bitmapHeight = 0.0;
					//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					{
						//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						sx.backend.dummy.BitmapRenderer _this = this.renderer;
						//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( _this.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this.__bitmapData, "height", true) == null ) )) 
						{
							//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapHeight = ((double) (0) );
						}
						else
						{
							//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapHeight = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this.__bitmapData, "height", true))) );
						}
						
					}
					
					//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (( bitmapHeight <= 0 )) 
					{
						//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
					}
					else
					{
						//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (this.keepAspect) 
						{
							//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
						}
						else
						{
							//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderHeight = ( this.get_height().get_px() - sx.tools.PaddingTools.sumPx(this.get_padding(), haxe.lang.Runtime.toString("vertical")) );
							//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( renderHeight <= 0 )) 
							{
								//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else
							{
								//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleY = ( renderHeight / bitmapHeight );
								//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (1) ), scaleY);
							}
							
						}
						
					}
					
				}
				else
				{
					//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (this.autoSize.get_height()) 
					{
						//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapWidth = 0.0;
						//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							sx.backend.dummy.BitmapRenderer _this1 = this.renderer;
							//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this1.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this1.__bitmapData, "width", true) == null ) )) 
							{
								//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth = ((double) (0) );
							}
							else
							{
								//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this1.__bitmapData, "width", true))) );
							}
							
						}
						
						//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( bitmapWidth <= 0 )) 
						{
							//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else
						{
							//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (this.keepAspect) 
							{
								//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
							}
							else
							{
								//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double renderWidth = ( this.get_width().get_px() - sx.tools.PaddingTools.sumPx(this.get_padding(), haxe.lang.Runtime.toString("horizontal")) );
								//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								if (( renderWidth <= 0 )) 
								{
									//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
								}
								else
								{
									//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									double scaleX = ( renderWidth / bitmapWidth );
									//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(scaleX, ((double) (1) ));
								}
								
							}
							
						}
						
					}
					else
					{
						//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapWidth1 = 0.0;
						//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							sx.backend.dummy.BitmapRenderer _this2 = this.renderer;
							//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this2.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this2.__bitmapData, "width", true) == null ) )) 
							{
								//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth1 = ((double) (0) );
							}
							else
							{
								//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth1 = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this2.__bitmapData, "width", true))) );
							}
							
						}
						
						//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapHeight1 = 0.0;
						//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							sx.backend.dummy.BitmapRenderer _this3 = this.renderer;
							//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this3.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this3.__bitmapData, "height", true) == null ) )) 
							{
								//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight1 = ((double) (0) );
							}
							else
							{
								//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight1 = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this3.__bitmapData, "height", true))) );
							}
							
						}
						
						//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( bitmapWidth1 <= 0 ) || ( bitmapHeight1 <= 0 ) )) 
						{
							//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else
						{
							//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderWidth1 = ( ( this.get_width().get_px() - this.get_padding().get_left().get_px() ) - this.get_padding().get_right().get_px() );
							//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderHeight1 = ( ( this.get_height().get_px() - this.get_padding().get_top().get_px() ) - this.get_padding().get_bottom().get_px() );
							//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( renderWidth1 <= 0 ) || ( renderHeight1 <= 0 ) )) 
							{
								//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else
							{
								//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleX1 = ( renderWidth1 / bitmapWidth1 );
								//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleY1 = ( renderHeight1 / bitmapHeight1 );
								//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								if (this.keepAspect) 
								{
									//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									if (( scaleX1 < scaleY1 )) 
									{
										//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
										this.renderer.setBitmapScale(scaleX1, scaleX1);
									}
									else
									{
										//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
										this.renderer.setBitmapScale(scaleY1, scaleY1);
									}
									
								}
								else
								{
									//line 77 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(scaleX1, scaleY1);
								}
								
							}
							
						}
						
					}
					
				}
				
			}
			
			//line 78 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			super.__paddingChanged(horizontal, vertical);
			//line 79 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			this.__dontUpdateBitmapScaling = false;
		}
		
	}
	
	
	@Override public void __autoSizeChanged(boolean widthChanged, boolean heightChanged)
	{
		//line 89 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		if (this.__dontUpdateBitmapScaling) 
		{
			//line 90 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			super.__paddingChanged(widthChanged, heightChanged);
		}
		else
		{
			//line 92 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			this.__dontUpdateBitmapScaling = true;
			//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (this.autoSize.both()) 
			{
				//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
			}
			else
			{
				//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (this.autoSize.get_width()) 
				{
					//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					double bitmapHeight = 0.0;
					//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					{
						//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						sx.backend.dummy.BitmapRenderer _this = this.renderer;
						//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( _this.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this.__bitmapData, "height", true) == null ) )) 
						{
							//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapHeight = ((double) (0) );
						}
						else
						{
							//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapHeight = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this.__bitmapData, "height", true))) );
						}
						
					}
					
					//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (( bitmapHeight <= 0 )) 
					{
						//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
					}
					else
					{
						//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (this.keepAspect) 
						{
							//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
						}
						else
						{
							//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderHeight = ( this.get_height().get_px() - sx.tools.PaddingTools.sumPx(this.get_padding(), haxe.lang.Runtime.toString("vertical")) );
							//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( renderHeight <= 0 )) 
							{
								//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else
							{
								//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleY = ( renderHeight / bitmapHeight );
								//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (1) ), scaleY);
							}
							
						}
						
					}
					
				}
				else
				{
					//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (this.autoSize.get_height()) 
					{
						//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapWidth = 0.0;
						//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							sx.backend.dummy.BitmapRenderer _this1 = this.renderer;
							//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this1.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this1.__bitmapData, "width", true) == null ) )) 
							{
								//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth = ((double) (0) );
							}
							else
							{
								//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this1.__bitmapData, "width", true))) );
							}
							
						}
						
						//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( bitmapWidth <= 0 )) 
						{
							//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else
						{
							//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (this.keepAspect) 
							{
								//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
							}
							else
							{
								//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double renderWidth = ( this.get_width().get_px() - sx.tools.PaddingTools.sumPx(this.get_padding(), haxe.lang.Runtime.toString("horizontal")) );
								//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								if (( renderWidth <= 0 )) 
								{
									//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
								}
								else
								{
									//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									double scaleX = ( renderWidth / bitmapWidth );
									//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(scaleX, ((double) (1) ));
								}
								
							}
							
						}
						
					}
					else
					{
						//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapWidth1 = 0.0;
						//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							sx.backend.dummy.BitmapRenderer _this2 = this.renderer;
							//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this2.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this2.__bitmapData, "width", true) == null ) )) 
							{
								//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth1 = ((double) (0) );
							}
							else
							{
								//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth1 = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this2.__bitmapData, "width", true))) );
							}
							
						}
						
						//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapHeight1 = 0.0;
						//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							sx.backend.dummy.BitmapRenderer _this3 = this.renderer;
							//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this3.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this3.__bitmapData, "height", true) == null ) )) 
							{
								//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight1 = ((double) (0) );
							}
							else
							{
								//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight1 = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this3.__bitmapData, "height", true))) );
							}
							
						}
						
						//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( bitmapWidth1 <= 0 ) || ( bitmapHeight1 <= 0 ) )) 
						{
							//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else
						{
							//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderWidth1 = ( ( this.get_width().get_px() - this.get_padding().get_left().get_px() ) - this.get_padding().get_right().get_px() );
							//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderHeight1 = ( ( this.get_height().get_px() - this.get_padding().get_top().get_px() ) - this.get_padding().get_bottom().get_px() );
							//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( renderWidth1 <= 0 ) || ( renderHeight1 <= 0 ) )) 
							{
								//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else
							{
								//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleX1 = ( renderWidth1 / bitmapWidth1 );
								//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleY1 = ( renderHeight1 / bitmapHeight1 );
								//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								if (this.keepAspect) 
								{
									//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									if (( scaleX1 < scaleY1 )) 
									{
										//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
										this.renderer.setBitmapScale(scaleX1, scaleX1);
									}
									else
									{
										//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
										this.renderer.setBitmapScale(scaleY1, scaleY1);
									}
									
								}
								else
								{
									//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(scaleX1, scaleY1);
								}
								
							}
							
						}
						
					}
					
				}
				
			}
			
			//line 94 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			super.__paddingChanged(widthChanged, heightChanged);
			//line 95 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			this.__dontUpdateBitmapScaling = false;
		}
		
	}
	
	
	public final void __updateBitmapScaling()
	{
		//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		if (this.autoSize.both()) 
		{
			//line 106 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
		}
		else
		{
			//line 107 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (this.autoSize.get_width()) 
			{
				//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				double bitmapHeight = 0.0;
				//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				{
					//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					sx.backend.dummy.BitmapRenderer _this = this.renderer;
					//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (( ( _this.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this.__bitmapData, "height", true) == null ) )) 
					{
						//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						bitmapHeight = ((double) (0) );
					}
					else
					{
						//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						bitmapHeight = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this.__bitmapData, "height", true))) );
					}
					
				}
				
				//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (( bitmapHeight <= 0 )) 
				{
					//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
				}
				else
				{
					//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (this.keepAspect) 
					{
						//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
					}
					else
					{
						//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double renderHeight = ( this.get_height().get_px() - sx.tools.PaddingTools.sumPx(this.get_padding(), haxe.lang.Runtime.toString("vertical")) );
						//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( renderHeight <= 0 )) 
						{
							//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else
						{
							//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double scaleY = ( renderHeight / bitmapHeight );
							//line 108 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (1) ), scaleY);
						}
						
					}
					
				}
				
			}
			else
			{
				//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (this.autoSize.get_height()) 
				{
					//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					double bitmapWidth = 0.0;
					//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					{
						//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						sx.backend.dummy.BitmapRenderer _this1 = this.renderer;
						//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( _this1.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this1.__bitmapData, "width", true) == null ) )) 
						{
							//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapWidth = ((double) (0) );
						}
						else
						{
							//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapWidth = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this1.__bitmapData, "width", true))) );
						}
						
					}
					
					//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (( bitmapWidth <= 0 )) 
					{
						//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
					}
					else
					{
						//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (this.keepAspect) 
						{
							//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
						}
						else
						{
							//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderWidth = ( this.get_width().get_px() - sx.tools.PaddingTools.sumPx(this.get_padding(), haxe.lang.Runtime.toString("horizontal")) );
							//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( renderWidth <= 0 )) 
							{
								//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else
							{
								//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleX = ( renderWidth / bitmapWidth );
								//line 110 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(scaleX, ((double) (1) ));
							}
							
						}
						
					}
					
				}
				else
				{
					//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					double bitmapWidth1 = 0.0;
					//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					{
						//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						sx.backend.dummy.BitmapRenderer _this2 = this.renderer;
						//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( _this2.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this2.__bitmapData, "width", true) == null ) )) 
						{
							//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapWidth1 = ((double) (0) );
						}
						else
						{
							//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapWidth1 = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this2.__bitmapData, "width", true))) );
						}
						
					}
					
					//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					double bitmapHeight1 = 0.0;
					//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					{
						//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						sx.backend.dummy.BitmapRenderer _this3 = this.renderer;
						//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( _this3.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this3.__bitmapData, "height", true) == null ) )) 
						{
							//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapHeight1 = ((double) (0) );
						}
						else
						{
							//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapHeight1 = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this3.__bitmapData, "height", true))) );
						}
						
					}
					
					//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (( ( bitmapWidth1 <= 0 ) || ( bitmapHeight1 <= 0 ) )) 
					{
						//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
					}
					else
					{
						//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double renderWidth1 = ( ( this.get_width().get_px() - this.get_padding().get_left().get_px() ) - this.get_padding().get_right().get_px() );
						//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double renderHeight1 = ( ( this.get_height().get_px() - this.get_padding().get_top().get_px() ) - this.get_padding().get_bottom().get_px() );
						//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( renderWidth1 <= 0 ) || ( renderHeight1 <= 0 ) )) 
						{
							//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else
						{
							//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double scaleX1 = ( renderWidth1 / bitmapWidth1 );
							//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double scaleY1 = ( renderHeight1 / bitmapHeight1 );
							//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (this.keepAspect) 
							{
								//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								if (( scaleX1 < scaleY1 )) 
								{
									//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(scaleX1, scaleX1);
								}
								else
								{
									//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(scaleY1, scaleY1);
								}
								
							}
							else
							{
								//line 112 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(scaleX1, scaleY1);
							}
							
						}
						
					}
					
				}
				
			}
			
		}
		
	}
	
	
	public final void __scaleBitmapHeight()
	{
		//line 122 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		double bitmapHeight = 0.0;
		//line 122 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		{
			//line 122 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			sx.backend.dummy.BitmapRenderer _this = this.renderer;
			//line 122 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (( ( _this.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this.__bitmapData, "height", true) == null ) )) 
			{
				//line 122 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				bitmapHeight = ((double) (0) );
			}
			else
			{
				//line 122 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				bitmapHeight = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this.__bitmapData, "height", true))) );
			}
			
		}
		
		//line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		if (( bitmapHeight <= 0 )) 
		{
			//line 125 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
		}
		else
		{
			//line 128 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (this.keepAspect) 
			{
				//line 129 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
			}
			else
			{
				//line 132 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				double renderHeight = ( this.get_height().get_px() - sx.tools.PaddingTools.sumPx(this.get_padding(), haxe.lang.Runtime.toString("vertical")) );
				//line 133 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (( renderHeight <= 0 )) 
				{
					//line 134 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
				}
				else
				{
					//line 136 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					double scaleY = ( renderHeight / bitmapHeight );
					//line 137 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					this.renderer.setBitmapScale(((double) (1) ), scaleY);
				}
				
			}
			
		}
		
	}
	
	
	public final void __scaleBitmapWidth()
	{
		//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		double bitmapWidth = 0.0;
		//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		{
			//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			sx.backend.dummy.BitmapRenderer _this = this.renderer;
			//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (( ( _this.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this.__bitmapData, "width", true) == null ) )) 
			{
				//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				bitmapWidth = ((double) (0) );
			}
			else
			{
				//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				bitmapWidth = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this.__bitmapData, "width", true))) );
			}
			
		}
		
		//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		if (( bitmapWidth <= 0 )) 
		{
			//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
		}
		else
		{
			//line 155 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (this.keepAspect) 
			{
				//line 156 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
			}
			else
			{
				//line 159 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				double renderWidth = ( this.get_width().get_px() - sx.tools.PaddingTools.sumPx(this.get_padding(), haxe.lang.Runtime.toString("horizontal")) );
				//line 160 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (( renderWidth <= 0 )) 
				{
					//line 161 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
				}
				else
				{
					//line 163 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					double scaleX = ( renderWidth / bitmapWidth );
					//line 164 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					this.renderer.setBitmapScale(scaleX, ((double) (1) ));
				}
				
			}
			
		}
		
	}
	
	
	public final void __scaleBitmapBoth()
	{
		//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		double bitmapWidth = 0.0;
		//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		{
			//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			sx.backend.dummy.BitmapRenderer _this = this.renderer;
			//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (( ( _this.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this.__bitmapData, "width", true) == null ) )) 
			{
				//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				bitmapWidth = ((double) (0) );
			}
			else
			{
				//line 176 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				bitmapWidth = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this.__bitmapData, "width", true))) );
			}
			
		}
		
		//line 177 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		double bitmapHeight = 0.0;
		//line 177 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		{
			//line 177 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			sx.backend.dummy.BitmapRenderer _this1 = this.renderer;
			//line 177 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (( ( _this1.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this1.__bitmapData, "height", true) == null ) )) 
			{
				//line 177 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				bitmapHeight = ((double) (0) );
			}
			else
			{
				//line 177 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				bitmapHeight = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this1.__bitmapData, "height", true))) );
			}
			
		}
		
		//line 179 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		if (( ( bitmapWidth <= 0 ) || ( bitmapHeight <= 0 ) )) 
		{
			//line 180 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
		}
		else
		{
			//line 183 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			double renderWidth = ( ( this.get_width().get_px() - this.get_padding().get_left().get_px() ) - this.get_padding().get_right().get_px() );
			//line 184 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			double renderHeight = ( ( this.get_height().get_px() - this.get_padding().get_top().get_px() ) - this.get_padding().get_bottom().get_px() );
			//line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (( ( renderWidth <= 0 ) || ( renderHeight <= 0 ) )) 
			{
				//line 187 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
			}
			else
			{
				//line 190 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				double scaleX = ( renderWidth / bitmapWidth );
				//line 191 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				double scaleY = ( renderHeight / bitmapHeight );
				//line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (this.keepAspect) 
				{
					//line 194 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (( scaleX < scaleY )) 
					{
						//line 195 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(scaleX, scaleX);
					}
					else
					{
						//line 197 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(scaleY, scaleY);
					}
					
				}
				else
				{
					//line 200 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					this.renderer.setBitmapScale(scaleX, scaleY);
				}
				
			}
			
		}
		
	}
	
	
	public java.lang.Object set_bitmapData(java.lang.Object value)
	{
		//line 212 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		this.bitmapData = value;
		//line 213 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		this.renderer.setBitmapData(this.bitmapData);
		//line 215 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		return value;
	}
	
	
	public boolean set_keepAspect(boolean value)
	{
		//line 224 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		if (( this.keepAspect != value )) 
		{
			//line 225 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			this.keepAspect = value;
			//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (this.autoSize.both()) 
			{
				//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
			}
			else
			{
				//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				if (this.autoSize.get_width()) 
				{
					//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					double bitmapHeight = 0.0;
					//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					{
						//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						sx.backend.dummy.BitmapRenderer _this = this.renderer;
						//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( _this.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this.__bitmapData, "height", true) == null ) )) 
						{
							//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapHeight = ((double) (0) );
						}
						else
						{
							//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							bitmapHeight = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this.__bitmapData, "height", true))) );
						}
						
					}
					
					//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (( bitmapHeight <= 0 )) 
					{
						//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
					}
					else
					{
						//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (this.keepAspect) 
						{
							//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
						}
						else
						{
							//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderHeight = ( this.get_height().get_px() - sx.tools.PaddingTools.sumPx(this.get_padding(), haxe.lang.Runtime.toString("vertical")) );
							//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( renderHeight <= 0 )) 
							{
								//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else
							{
								//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleY = ( renderHeight / bitmapHeight );
								//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (1) ), scaleY);
							}
							
						}
						
					}
					
				}
				else
				{
					//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (this.autoSize.get_height()) 
					{
						//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapWidth = 0.0;
						//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							sx.backend.dummy.BitmapRenderer _this1 = this.renderer;
							//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this1.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this1.__bitmapData, "width", true) == null ) )) 
							{
								//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth = ((double) (0) );
							}
							else
							{
								//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this1.__bitmapData, "width", true))) );
							}
							
						}
						
						//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( bitmapWidth <= 0 )) 
						{
							//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else
						{
							//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (this.keepAspect) 
							{
								//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (1) ), ((double) (1) ));
							}
							else
							{
								//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double renderWidth = ( this.get_width().get_px() - sx.tools.PaddingTools.sumPx(this.get_padding(), haxe.lang.Runtime.toString("horizontal")) );
								//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								if (( renderWidth <= 0 )) 
								{
									//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
								}
								else
								{
									//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									double scaleX = ( renderWidth / bitmapWidth );
									//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(scaleX, ((double) (1) ));
								}
								
							}
							
						}
						
					}
					else
					{
						//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapWidth1 = 0.0;
						//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							sx.backend.dummy.BitmapRenderer _this2 = this.renderer;
							//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this2.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this2.__bitmapData, "width", true) == null ) )) 
							{
								//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth1 = ((double) (0) );
							}
							else
							{
								//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapWidth1 = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this2.__bitmapData, "width", true))) );
							}
							
						}
						
						//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						double bitmapHeight1 = 0.0;
						//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						{
							//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							sx.backend.dummy.BitmapRenderer _this3 = this.renderer;
							//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( _this3.__bitmapData == null ) || ( haxe.lang.Runtime.getField(_this3.__bitmapData, "height", true) == null ) )) 
							{
								//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight1 = ((double) (0) );
							}
							else
							{
								//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								bitmapHeight1 = ((double) (haxe.lang.Runtime.toDouble(haxe.lang.Runtime.getField(_this3.__bitmapData, "height", true))) );
							}
							
						}
						
						//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (( ( bitmapWidth1 <= 0 ) || ( bitmapHeight1 <= 0 ) )) 
						{
							//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
						}
						else
						{
							//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderWidth1 = ( ( this.get_width().get_px() - this.get_padding().get_left().get_px() ) - this.get_padding().get_right().get_px() );
							//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							double renderHeight1 = ( ( this.get_height().get_px() - this.get_padding().get_top().get_px() ) - this.get_padding().get_bottom().get_px() );
							//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							if (( ( renderWidth1 <= 0 ) || ( renderHeight1 <= 0 ) )) 
							{
								//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								this.renderer.setBitmapScale(((double) (0) ), ((double) (0) ));
							}
							else
							{
								//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleX1 = ( renderWidth1 / bitmapWidth1 );
								//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								double scaleY1 = ( renderHeight1 / bitmapHeight1 );
								//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
								if (this.keepAspect) 
								{
									//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									if (( scaleX1 < scaleY1 )) 
									{
										//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
										this.renderer.setBitmapScale(scaleX1, scaleX1);
									}
									else
									{
										//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
										this.renderer.setBitmapScale(scaleY1, scaleY1);
									}
									
								}
								else
								{
									//line 226 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
									this.renderer.setBitmapScale(scaleX1, scaleY1);
								}
								
							}
							
						}
						
					}
					
				}
				
			}
			
		}
		
		//line 229 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		return value;
	}
	
	
	public boolean set_smooth(boolean value)
	{
		//line 238 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		if (( this.smooth != value )) 
		{
			//line 239 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			this.smooth = value;
			//line 240 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			this.renderer.setBitmapSmoothing(this.smooth);
		}
		
		//line 243 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		return value;
	}
	
	
	@Override public sx.backend.interfaces.IRenderer get___renderer()
	{
		//line 248 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		return this.renderer;
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			switch (field.hashCode())
			{
				case -1743837831:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("bitmapData")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (handleProperties) 
						{
							//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.set_bitmapData(value);
							//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							return value;
						}
						else
						{
							//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.bitmapData = ((java.lang.Object) (value) );
							//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							return value;
						}
						
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			switch (field.hashCode())
			{
				case -285749794:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("__dontUpdateBitmapScaling")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.__dontUpdateBitmapScaling = haxe.lang.Runtime.toBool(value);
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case -1743837831:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("bitmapData")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (handleProperties) 
						{
							//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.set_bitmapData(value);
							//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							return value;
						}
						else
						{
							//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.bitmapData = ((java.lang.Object) (value) );
							//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							return value;
						}
						
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case -898533970:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("smooth")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (handleProperties) 
						{
							//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.set_smooth(haxe.lang.Runtime.toBool(value));
							//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							return value;
						}
						else
						{
							//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.smooth = haxe.lang.Runtime.toBool(value);
							//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							return value;
						}
						
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case -494845757:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("renderer")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.renderer = ((sx.backend.dummy.BitmapRenderer) (value) );
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return value;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case 800502845:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("keepAspect")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						if (handleProperties) 
						{
							//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.set_keepAspect(haxe.lang.Runtime.toBool(value));
							//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							return value;
						}
						else
						{
							//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							this.keepAspect = haxe.lang.Runtime.toBool(value);
							//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
							return value;
						}
						
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			switch (field.hashCode())
			{
				case 1181901100:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("get___renderer")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get___renderer")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case -1743837831:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("bitmapData")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return this.bitmapData;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case -1176017877:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("set_smooth")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_smooth")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case -494845757:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("renderer")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return this.renderer;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case 2103909434:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("set_keepAspect")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_keepAspect")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case 800502845:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("keepAspect")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return this.keepAspect;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case -440431242:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("set_bitmapData")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_bitmapData")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case -898533970:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("smooth")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return this.smooth;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case -969770406:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("__scaleBitmapBoth")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__scaleBitmapBoth")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case -285749794:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("__dontUpdateBitmapScaling")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return this.__dontUpdateBitmapScaling;
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case 21088781:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("__scaleBitmapWidth")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__scaleBitmapWidth")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case 655117759:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("__createRenderer")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__createRenderer")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case 220757440:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("__scaleBitmapHeight")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__scaleBitmapHeight")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case -982310213:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("__propertyResized")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__propertyResized")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case 86682927:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("__updateBitmapScaling")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__updateBitmapScaling")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case -1420165821:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("__paddingChanged")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__paddingChanged")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case 898660:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("__autoSizeChanged")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__autoSizeChanged")) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			switch (field.hashCode())
			{
				case -1743837831:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("bitmapData")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return ((double) (haxe.lang.Runtime.toDouble(this.bitmapData)) );
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			int __temp_hash2 = field.hashCode();
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			boolean __temp_executeDef1 = true;
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			switch (__temp_hash2)
			{
				case 1181901100:
				case 898660:
				case -1420165821:
				case -982310213:
				case 655117759:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (( (( ( __temp_hash2 == 1181901100 ) && field.equals("get___renderer") )) || ( (( ( __temp_hash2 == 898660 ) && field.equals("__autoSizeChanged") )) || ( (( ( __temp_hash2 == -1420165821 ) && field.equals("__paddingChanged") )) || ( (( ( __temp_hash2 == -982310213 ) && field.equals("__propertyResized") )) || field.equals("__createRenderer") ) ) ) )) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case 86682927:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("__updateBitmapScaling")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.__updateBitmapScaling();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case -1176017877:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("set_smooth")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return this.set_smooth(haxe.lang.Runtime.toBool(dynargs.__get(0)));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case 220757440:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("__scaleBitmapHeight")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.__scaleBitmapHeight();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case 2103909434:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("set_keepAspect")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return this.set_keepAspect(haxe.lang.Runtime.toBool(dynargs.__get(0)));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case 21088781:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("__scaleBitmapWidth")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.__scaleBitmapWidth();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case -440431242:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("set_bitmapData")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						return this.set_bitmapData(dynargs.__get(0));
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
				case -969770406:
				{
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					if (field.equals("__scaleBitmapBoth")) 
					{
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						__temp_executeDef1 = false;
						//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
						this.__scaleBitmapBoth();
					}
					
					//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
					break;
				}
				
				
			}
			
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			if (__temp_executeDef1) 
			{
				//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		baseArr.push("__dontUpdateBitmapScaling");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		baseArr.push("smooth");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		baseArr.push("keepAspect");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		baseArr.push("renderer");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		baseArr.push("bitmapData");
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
		{
			//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/Bmp.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


