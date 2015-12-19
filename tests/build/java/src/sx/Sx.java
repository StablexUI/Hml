package sx;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Sx extends haxe.lang.HxObject
{
	static
	{
		//line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		sx.Sx.dipFactor = ((double) (((int) (1.0) )) );
		//line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		sx.Sx.pixelSnapping = false;
		//line 53 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		sx.Sx.__skins = new haxe.ds.StringMap<haxe.lang.Function>();
		//line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		sx.Sx.__initTasks = new haxe.root.Array<haxe.lang.Function>(new haxe.lang.Function[]{});
	}
	
	public Sx(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Sx()
	{
		//line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		sx.Sx.__hx_ctor_sx_Sx(this);
	}
	
	
	public static void __hx_ctor_sx_Sx(sx.Sx __temp_me108)
	{
	}
	
	
	public static double dipFactor;
	
	public static boolean pixelSnapping;
	
	
	
	public static sx.backend.dummy.BackendManager __backendManager;
	
	public static sx.themes.Theme theme;
	
	
	
	public static sx.widgets.Widget __root;
	
	
	
	public static sx.signals.Signal<haxe.lang.Function> __onFrame;
	
	
	
	
	
	public static haxe.ds.StringMap<haxe.lang.Function> __skins;
	
	public static haxe.root.Array<haxe.lang.Function> __initTasks;
	
	public static haxe.lang.Function __readyCallback;
	
	public static double toDip(double px)
	{
		//line 65 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		return ( px / sx.Sx.dipFactor );
	}
	
	
	public static double toPx(double dip)
	{
		//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		return ( dip * sx.Sx.dipFactor );
	}
	
	
	public static double snap(double value)
	{
		//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		if (sx.Sx.pixelSnapping) 
		{
			//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			value = ((double) (((int) (java.lang.Math.round(value)) )) );
		}
		
		//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		return value;
	}
	
	
	public static void setBackendManger(sx.backend.dummy.BackendManager manager)
	{
		//line 96 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		if (( sx.Sx.__backendManager != null )) 
		{
			//line 97 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			throw haxe.lang.HaxeException.wrap(new sx.exceptions.InvalidBackendException("Backend manager is already set.", new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"sx.Sx", "Sx.hx", "setBackendManger"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (97) )) )})));
		}
		
		//line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		sx.Sx.__backendManager = manager;
	}
	
	
	public static void registerSkin(java.lang.String name, haxe.lang.Function factory)
	{
		//line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		sx.Sx.__skins.set(name, factory);
	}
	
	
	public static void addInitTask(haxe.lang.Function task)
	{
		//line 120 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		sx.Sx.__initTasks.push(task);
	}
	
	
	public static void init(haxe.lang.Function readyCallback)
	{
		//line 131 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		sx.Sx.__readyCallback = readyCallback;
		//line 133 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		if (( sx.Sx.__backendManager == null )) 
		{
			//line 134 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			sx.Sx.__backendManager = new sx.backend.dummy.BackendManager();
		}
		
		//line 137 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		if (( sx.Sx.__initTasks.length == 0 )) 
		{
			//line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			sx.tween.Tweener.__time = ( ((double) (sx.tween.Tweener.getTime.__hx_invoke0_f()) ) - sx.tween.Tweener.__totalPausedTime );
			//line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			sx.Sx.__backendManager.setupPointerDevices();
			//line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			sx.Sx.__backendManager.setupFrames();
			//line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			sx.Sx.__readyCallback.__hx_invoke0_o();
		}
		else
		{
			//line 140 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			haxe.root.Array<haxe.lang.Function> tasks = sx.Sx.__initTasks.copy();
			//line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			{
				//line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				int _g = 0;
				//line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				while (( _g < tasks.length ))
				{
					//line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
					haxe.lang.Function task = tasks.__get(_g);
					//line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
					 ++ _g;
					//line 142 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
					haxe.lang.Function __temp_stmt1 = null;
					//line 142 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
					{
						//line 142 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
						haxe.lang.Function a1 = task;
						//line 142 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
						__temp_stmt1 = new sx.Sx_init_142__Fun(a1);
					}
					
					//line 142 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
					task.__hx_invoke1_o(0.0, __temp_stmt1);
				}
				
			}
			
		}
		
	}
	
	
	public static sx.skins.base.SkinBase skin(java.lang.String name)
	{
		//line 155 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		haxe.lang.Function factory = ((haxe.lang.Function) (sx.Sx.__skins.get(name)) );
		//line 157 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		if (( factory == null )) 
		{
			//line 157 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			return null;
		}
		else
		{
			//line 157 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			return ((sx.skins.base.SkinBase) (factory.__hx_invoke0_o()) );
		}
		
	}
	
	
	public static void dropSkins()
	{
		//line 166 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		sx.Sx.__skins = new haxe.ds.StringMap<haxe.lang.Function>();
	}
	
	
	public static void frame()
	{
		//line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
		if (( ( sx.Sx.__onFrame != null ) && ( sx.Sx.__onFrame.__listeners.length > 0 ) )) 
		{
			//line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (sx.Sx.__onFrame.__listenersInUse) 
			{
				//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g = 0;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g1 = sx.Sx.__onFrame.__listeners;
					//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g < _g1.length ))
					{
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener = _g1.__get(_g);
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g;
						//line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener.__hx_invoke0_o();
					}
					
				}
				
				//line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				boolean __temp_expr1 = false;
			}
			else
			{
				//line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				sx.Sx.__onFrame.__listenersInUse = true;
				//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				{
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					int _g2 = 0;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					haxe.root.Array<haxe.lang.Function> _g11 = sx.Sx.__onFrame.__listeners;
					//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					while (( _g2 < _g11.length ))
					{
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						haxe.lang.Function listener1 = _g11.__get(_g2);
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						 ++ _g2;
						//line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						listener1.__hx_invoke0_o();
					}
					
				}
				
				//line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				sx.Sx.__onFrame.__listenersInUse = false;
			}
			
		}
		
		//line 177 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		sx.tween.Tweener.update();
	}
	
	
	public static void __doneInitTask(haxe.lang.Function task)
	{
		//line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		{
			//line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			int _g1 = 0;
			//line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			int _g = sx.Sx.__initTasks.length;
			//line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			while (( _g1 < _g ))
			{
				//line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				int i = _g1++;
				//line 187 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				if (haxe.root.Reflect.compareMethods(sx.Sx.__initTasks.__get(i), task)) 
				{
					//line 188 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
					sx.Sx.__initTasks.splice(i, 1);
					//line 189 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
					break;
				}
				
			}
			
		}
		
		//line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		if (( sx.Sx.__initTasks.length == 0 )) 
		{
			//line 194 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			sx.tween.Tweener.__time = ( ((double) (sx.tween.Tweener.getTime.__hx_invoke0_f()) ) - sx.tween.Tweener.__totalPausedTime );
			//line 194 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			sx.Sx.__backendManager.setupPointerDevices();
			//line 194 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			sx.Sx.__backendManager.setupFrames();
			//line 194 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			sx.Sx.__readyCallback.__hx_invoke0_o();
		}
		
	}
	
	
	public static void __initializationFinished()
	{
		//line 205 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		sx.tween.Tweener.__time = ( ((double) (sx.tween.Tweener.getTime.__hx_invoke0_f()) ) - sx.tween.Tweener.__totalPausedTime );
		//line 206 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		sx.Sx.__backendManager.setupPointerDevices();
		//line 207 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		sx.Sx.__backendManager.setupFrames();
		//line 209 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		sx.Sx.__readyCallback.__hx_invoke0_o();
	}
	
	
	public static sx.backend.dummy.BackendManager get_backendManager()
	{
		//line 218 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		if (( sx.Sx.__backendManager == null )) 
		{
			//line 219 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			sx.Sx.__backendManager = new sx.backend.dummy.BackendManager();
		}
		
		//line 222 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		return sx.Sx.__backendManager;
	}
	
	
	public static sx.widgets.Widget get_root()
	{
		//line 231 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		if (( sx.Sx.__root == null )) 
		{
			//line 231 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			return sx.Sx.get_backendManager().getRoot();
		}
		else
		{
			//line 231 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			return sx.Sx.__root;
		}
		
	}
	
	
	public static sx.widgets.Widget set_root(sx.widgets.Widget value)
	{
		//line 240 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		return sx.Sx.__root = value;
	}
	
	
	public static sx.properties.metric.Size get_stageWidth()
	{
		//line 245 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		return sx.Sx.get_backendManager().getRoot().get_width();
	}
	
	
	public static sx.properties.metric.Size get_stageHeight()
	{
		//line 246 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		return sx.Sx.get_backendManager().getRoot().get_height();
	}
	
	
	public static sx.signals.Signal<haxe.lang.Function> get_onFrame()
	{
		//line 249 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		if (( sx.Sx.__onFrame == null )) 
		{
			//line 249 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			return sx.Sx.__onFrame = new sx.signals.Signal<haxe.lang.Function>();
		}
		else
		{
			//line 249 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			return sx.Sx.__onFrame;
		}
		
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		return new sx.Sx(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
		return new sx.Sx();
	}
	
	
}


