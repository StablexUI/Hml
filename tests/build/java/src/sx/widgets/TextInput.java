package sx.widgets;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TextInput extends sx.widgets.base.RendererHolder
{
	public TextInput(haxe.lang.EmptyObject empty)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public TextInput()
	{
		//line 40 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 40 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		sx.widgets.TextInput.__hx_ctor_sx_widgets_TextInput(this);
	}
	
	
	public static void __hx_ctor_sx_widgets_TextInput(sx.widgets.TextInput __temp_me158)
	{
		//line 32 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		__temp_me158.__hasCursor = false;
		//line 23 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		__temp_me158.__invitation = "";
		//line 20 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		__temp_me158.__text = "";
		//line 40 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		sx.widgets.base.RendererHolder.__hx_ctor_sx_widgets_base_RendererHolder(__temp_me158);
		//line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		__temp_me158.get_width().set_dip(((double) (100) ));
		//line 42 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		__temp_me158.renderer.onTextChange(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me158, "__rendererTextChanged")) ));
		//line 43 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		__temp_me158.renderer.onReceiveCursor(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me158, "__rendererReceiveCursor")) ));
		//line 44 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		__temp_me158.renderer.onLoseCursor(((haxe.lang.Function) (new haxe.lang.Closure(__temp_me158, "__rendererLoseCursor")) ));
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		return new sx.widgets.TextInput(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		return new sx.widgets.TextInput();
	}
	
	
	
	
	public java.lang.String __text;
	
	
	
	public java.lang.String __invitation;
	
	public sx.backend.dummy.TextInputRenderer renderer;
	
	
	
	public sx.signals.Signal<haxe.lang.Function> __onChange;
	
	public boolean __hasCursor;
	
	public java.lang.Object getTextFormat()
	{
		//line 53 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		return this.renderer.getFormat();
	}
	
	
	public void setTextFormat(java.lang.Object format)
	{
		//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		this.renderer.setFormat(format);
		//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		return ;
	}
	
	
	@Override public void __createRenderer()
	{
		//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		this.renderer = sx.Sx.get_backendManager().textInputRenderer(this);
	}
	
	
	public java.lang.String set_text(java.lang.String value)
	{
		//line 80 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		this.__text = value;
		//line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		if (( this.__hasCursor || ( this.get_text().length() > 0 ) )) 
		{
			//line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			this.renderer.setText(this.get_text());
		}
		else
		{
			//line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			this.renderer.setText(this.get_invitation());
		}
		
		//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (( ( this.__onChange != null ) && ( this.__onChange.__listeners.length > 0 ) )) 
		{
			//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (this.__onChange.__listenersInUse) 
			{
				//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g = 0;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g1 = this.__onChange.__listeners;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g < _g1.length ))
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener = _g1.__get(_g);
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener.__hx_invoke1_o(0.0, this);
					}
					
				}
				
				//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				boolean __temp_expr1 = false;
			}
			else
			{
				//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__onChange.__listenersInUse = true;
				//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g2 = 0;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g11 = this.__onChange.__listeners;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g2 < _g11.length ))
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener1 = _g11.__get(_g2);
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g2;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener1.__hx_invoke1_o(0.0, this);
					}
					
				}
				
				//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__onChange.__listenersInUse = false;
			}
			
		}
		
		//line 85 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		return value;
	}
	
	
	public void __rendererTextChanged(java.lang.String newText)
	{
		//line 94 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		this.__text = newText;
		//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (( ( this.__onChange != null ) && ( this.__onChange.__listeners.length > 0 ) )) 
		{
			//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (this.__onChange.__listenersInUse) 
			{
				//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g = 0;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g1 = this.__onChange.__listeners;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g < _g1.length ))
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener = _g1.__get(_g);
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener.__hx_invoke1_o(0.0, this);
					}
					
				}
				
				//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				boolean __temp_expr1 = false;
			}
			else
			{
				//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__onChange.__listenersInUse = true;
				//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g2 = 0;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g11 = this.__onChange.__listeners;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g2 < _g11.length ))
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener1 = _g11.__get(_g2);
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g2;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener1.__hx_invoke1_o(0.0, this);
					}
					
				}
				
				//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				this.__onChange.__listenersInUse = false;
			}
			
		}
		
	}
	
	
	public void __rendererReceiveCursor()
	{
		//line 104 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		this.__hasCursor = true;
		//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		if (( this.__hasCursor || ( this.get_text().length() > 0 ) )) 
		{
			//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			this.renderer.setText(this.get_text());
		}
		else
		{
			//line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			this.renderer.setText(this.get_invitation());
		}
		
	}
	
	
	public void __rendererLoseCursor()
	{
		//line 114 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		this.__hasCursor = false;
		//line 115 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		if (( this.__hasCursor || ( this.get_text().length() > 0 ) )) 
		{
			//line 115 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			this.renderer.setText(this.get_text());
		}
		else
		{
			//line 115 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			this.renderer.setText(this.get_invitation());
		}
		
	}
	
	
	public final void __updateRendererContent()
	{
		//line 125 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		if (( this.__hasCursor || ( this.get_text().length() > 0 ) )) 
		{
			//line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			this.renderer.setText(this.get_text());
		}
		else
		{
			//line 128 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			this.renderer.setText(this.get_invitation());
		}
		
	}
	
	
	public java.lang.String set_invitation(java.lang.String value)
	{
		//line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		this.__invitation = value;
		//line 139 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		if (( this.__hasCursor || ( this.get_text().length() > 0 ) )) 
		{
			//line 139 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			this.renderer.setText(this.get_text());
		}
		else
		{
			//line 139 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			this.renderer.setText(this.get_invitation());
		}
		
		//line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		return value;
	}
	
	
	public java.lang.String get_invitation()
	{
		//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		return this.__invitation;
	}
	
	
	public java.lang.String get_text()
	{
		//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		return this.__text;
	}
	
	
	@Override public sx.backend.interfaces.IRenderer get___renderer()
	{
		//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		return this.renderer;
	}
	
	
	public sx.signals.Signal<haxe.lang.Function> get_onChange()
	{
		//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		if (( this.__onChange == null )) 
		{
			//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			return this.__onChange = new sx.signals.Signal<haxe.lang.Function>();
		}
		else
		{
			//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			return this.__onChange;
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		{
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			switch (field.hashCode())
			{
				case -1129970000:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("__hasCursor")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.__hasCursor = haxe.lang.Runtime.toBool(value);
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 3556653:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("text")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.set_text(haxe.lang.Runtime.toString(value));
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case -361621937:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("__onChange")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.__onChange = ((sx.signals.Signal<haxe.lang.Function>) (value) );
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case -1483906803:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("__text")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.__text = haxe.lang.Runtime.toString(value);
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case -494845757:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("renderer")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.renderer = ((sx.backend.dummy.TextInputRenderer) (value) );
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 1195341721:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("invitation")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.set_invitation(haxe.lang.Runtime.toString(value));
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 1661610873:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("__invitation")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.__invitation = haxe.lang.Runtime.toString(value);
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return value;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		{
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			switch (field.hashCode())
			{
				case -886280904:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("get_onChange")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_onChange")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 3556653:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("text")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.get_text();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 1181901100:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("get___renderer")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get___renderer")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case -1483906803:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("__text")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.__text;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 1976669302:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("get_text")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_text")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 1195341721:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("invitation")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.get_invitation();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case -24482782:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("get_invitation")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_invitation")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 1661610873:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("__invitation")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.__invitation;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case -1796218986:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("set_invitation")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_invitation")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case -494845757:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("renderer")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.renderer;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 817270349:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("__updateRendererContent")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__updateRendererContent")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 1036773999:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("onChange")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.get_onChange();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 618625998:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("__rendererLoseCursor")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__rendererLoseCursor")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case -361621937:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("__onChange")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.__onChange;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 1470439478:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("__rendererReceiveCursor")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__rendererReceiveCursor")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case -1129970000:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("__hasCursor")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.__hasCursor;
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 2008940580:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("__rendererTextChanged")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__rendererTextChanged")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 1177324410:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("getTextFormat")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getTextFormat")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 1415556842:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("set_text")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_text")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 1951455622:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("setTextFormat")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "setTextFormat")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 655117759:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("__createRenderer")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "__createRenderer")) );
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		{
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			int __temp_hash2 = field.hashCode();
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			boolean __temp_executeDef1 = true;
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			switch (__temp_hash2)
			{
				case 1181901100:
				case 655117759:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (( (( ( __temp_hash2 == 1181901100 ) && field.equals("get___renderer") )) || field.equals("__createRenderer") )) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return haxe.lang.Runtime.slowCallField(this, field, dynargs);
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 1177324410:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("getTextFormat")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.getTextFormat();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case -886280904:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("get_onChange")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.get_onChange();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 1951455622:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("setTextFormat")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.setTextFormat(dynargs.__get(0));
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 1976669302:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("get_text")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.get_text();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 1415556842:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("set_text")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.set_text(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case -24482782:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("get_invitation")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.get_invitation();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 2008940580:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("__rendererTextChanged")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.__rendererTextChanged(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case -1796218986:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("set_invitation")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						return this.set_invitation(haxe.lang.Runtime.toString(dynargs.__get(0)));
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 1470439478:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("__rendererReceiveCursor")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.__rendererReceiveCursor();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 817270349:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("__updateRendererContent")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.__updateRendererContent();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
				case 618625998:
				{
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					if (field.equals("__rendererLoseCursor")) 
					{
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						__temp_executeDef1 = false;
						//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
						this.__rendererLoseCursor();
					}
					
					//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
					break;
				}
				
				
			}
			
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			if (__temp_executeDef1) 
			{
				//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		baseArr.push("__hasCursor");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		baseArr.push("__onChange");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		baseArr.push("onChange");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		baseArr.push("renderer");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		baseArr.push("__invitation");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		baseArr.push("invitation");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		baseArr.push("__text");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		baseArr.push("text");
		//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
		{
			//line 15 "/home/alex/Work/HaXe/sx2-core/src/sx/widgets/TextInput.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


