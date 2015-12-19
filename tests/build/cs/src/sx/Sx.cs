
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx {
	public class Sx : global::haxe.lang.HxObject {
		
		static Sx() {
			#line 24 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			global::sx.Sx.dipFactor = ((double) (((int) (1) )) );
			#line 26 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			global::sx.Sx.pixelSnapping = false;
			#line 53 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			global::sx.Sx.__skins = new global::haxe.ds.StringMap<object>();
			#line 55 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			global::sx.Sx.__initTasks = new global::Array<object>(new object[]{});
		}
		#line default
		
		public Sx(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Sx() {
			#line 251 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			global::sx.Sx.__hx_ctor_sx_Sx(this);
		}
		#line default
		
		public static void __hx_ctor_sx_Sx(global::sx.Sx __temp_me125) {
		}
		
		
		public static double dipFactor;
		
		public static bool pixelSnapping;
		
		
		
		public static global::sx.backend.dummy.BackendManager __backendManager;
		
		public static global::sx.themes.Theme theme;
		
		
		
		public static global::sx.widgets.Widget __root;
		
		
		
		public static global::sx.signals.Signal<object> __onFrame;
		
		
		
		
		
		public static global::haxe.ds.StringMap<object> __skins;
		
		public static global::Array<object> __initTasks;
		
		public static global::haxe.lang.Function __readyCallback;
		
		public static double toDip(double px) {
			#line 65 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			return ( px / global::sx.Sx.dipFactor );
		}
		#line default
		
		public static double toPx(double dip) {
			#line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			return ( dip * global::sx.Sx.dipFactor );
		}
		#line default
		
		public static double snap(double @value) {
			#line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			if (global::sx.Sx.pixelSnapping) {
				#line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				@value = ((double) (global::Math.round(@value)) );
			}
			
			#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			return @value;
		}
		#line default
		
		public static void setBackendManger(global::sx.backend.dummy.BackendManager manager) {
			unchecked {
				#line 96 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				if (( global::sx.Sx.__backendManager != null )) {
					#line 97 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
					throw global::haxe.lang.HaxeException.wrap(new global::sx.exceptions.InvalidBackendException("Backend manager is already set.", new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"setBackendManger", "sx.Sx", "Sx.hx"}, new int[]{1981972957}, new double[]{((double) (97) )})));
				}
				
				#line 100 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				global::sx.Sx.__backendManager = manager;
			}
			#line default
		}
		
		
		public static void registerSkin(string name, global::haxe.lang.Function factory) {
			#line 109 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			global::sx.Sx.__skins.@set(name, factory);
		}
		#line default
		
		public static void addInitTask(global::haxe.lang.Function task) {
			#line 120 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			global::sx.Sx.__initTasks.push(task);
		}
		#line default
		
		public static void init(global::haxe.lang.Function readyCallback) {
			#line 131 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			global::sx.Sx.__readyCallback = readyCallback;
			#line 133 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			if (( global::sx.Sx.__backendManager == null )) {
				#line 134 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				global::sx.Sx.__backendManager = new global::sx.backend.dummy.BackendManager();
			}
			
			#line 137 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			if (( global::sx.Sx.__initTasks.length == 0 )) {
				#line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				global::sx.tween.Tweener.__time = ( ((double) (global::sx.tween.Tweener.getTime.__hx_invoke0_f()) ) - global::sx.tween.Tweener.__totalPausedTime );
				#line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				global::sx.Sx.__backendManager.setupPointerDevices();
				#line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				global::sx.Sx.__backendManager.setupFrames();
				#line 138 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				global::sx.Sx.__readyCallback.__hx_invoke0_o();
			}
			else {
				#line 140 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				global::Array<object> tasks = global::sx.Sx.__initTasks.copy();
				{
					#line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
					int _g = 0;
					#line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
					while (( _g < tasks.length )) {
						#line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
						global::haxe.lang.Function task = ((global::haxe.lang.Function) (tasks[_g]) );
						#line 141 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
						 ++ _g;
						global::haxe.lang.Function __temp_stmt1 = null;
						#line 142 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
						{
							#line 142 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
							global::haxe.lang.Function a1 = task;
							#line 142 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
							__temp_stmt1 = new global::sx.Sx_init_142__Fun(a1);
						}
						
						#line 142 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
						task.__hx_invoke1_o(default(double), __temp_stmt1);
					}
					
				}
				
			}
			
		}
		#line default
		
		public static global::sx.skins.@base.SkinBase skin(string name) {
			#line 155 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			global::haxe.lang.Function factory = ((global::haxe.lang.Function) ((global::sx.Sx.__skins.@get(((string) (name) ))).@value) );
			#line 157 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			if (( factory == null )) {
				#line 157 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				return null;
			}
			else {
				#line 157 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				return ((global::sx.skins.@base.SkinBase) (factory.__hx_invoke0_o()) );
			}
			
		}
		#line default
		
		public static void dropSkins() {
			#line 166 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			global::sx.Sx.__skins = new global::haxe.ds.StringMap<object>();
		}
		#line default
		
		public static void frame() {
			#line 146 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
			if (( ( global::sx.Sx.__onFrame != null ) && ( global::sx.Sx.__onFrame.__listeners.length > 0 ) )) {
				#line 147 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
				if (global::sx.Sx.__onFrame.__listenersInUse) {
					#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					{
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g = 0;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g1 = global::sx.Sx.__onFrame.__listeners;
						#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g < _g1.length )) {
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener = ((global::haxe.lang.Function) (_g1[_g]) );
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g;
							#line 148 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener.__hx_invoke0_o();
						}
						
					}
					
					#line 149 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					bool __temp_expr1 = false;
				}
				else {
					#line 151 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					global::sx.Sx.__onFrame.__listenersInUse = true;
					{
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						int _g2 = 0;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						global::Array<object> _g11 = global::sx.Sx.__onFrame.__listeners;
						#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
						while (( _g2 < _g11.length )) {
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							global::haxe.lang.Function listener1 = ((global::haxe.lang.Function) (_g11[_g2]) );
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							 ++ _g2;
							#line 152 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
							listener1.__hx_invoke0_o();
						}
						
					}
					
					#line 153 "/home/alex/Work/HaXe/sx2-core/src/sx/signals/Signal.hx"
					global::sx.Sx.__onFrame.__listenersInUse = false;
				}
				
			}
			
			#line 177 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			global::sx.tween.Tweener.update();
		}
		#line default
		
		public static void __doneInitTask(global::haxe.lang.Function task) {
			unchecked {
				#line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				{
					#line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
					int _g1 = 0;
					#line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
					int _g = global::sx.Sx.__initTasks.length;
					#line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
					while (( _g1 < _g )) {
						#line 186 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
						int i = _g1++;
						if (global::Reflect.compareMethods(((global::haxe.lang.Function) (global::sx.Sx.__initTasks[i]) ), task)) {
							#line 188 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
							global::sx.Sx.__initTasks.splice(i, 1);
							break;
						}
						
					}
					
				}
				
				#line 193 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				if (( global::sx.Sx.__initTasks.length == 0 )) {
					#line 194 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
					global::sx.tween.Tweener.__time = ( ((double) (global::sx.tween.Tweener.getTime.__hx_invoke0_f()) ) - global::sx.tween.Tweener.__totalPausedTime );
					#line 194 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
					global::sx.Sx.__backendManager.setupPointerDevices();
					#line 194 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
					global::sx.Sx.__backendManager.setupFrames();
					#line 194 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
					global::sx.Sx.__readyCallback.__hx_invoke0_o();
				}
				
			}
			#line default
		}
		
		
		public static void __initializationFinished() {
			#line 205 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			global::sx.tween.Tweener.__time = ( ((double) (global::sx.tween.Tweener.getTime.__hx_invoke0_f()) ) - global::sx.tween.Tweener.__totalPausedTime );
			global::sx.Sx.__backendManager.setupPointerDevices();
			global::sx.Sx.__backendManager.setupFrames();
			#line 209 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			global::sx.Sx.__readyCallback.__hx_invoke0_o();
		}
		#line default
		
		public static global::sx.backend.dummy.BackendManager get_backendManager() {
			#line 218 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			if (( global::sx.Sx.__backendManager == null )) {
				#line 219 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				global::sx.Sx.__backendManager = new global::sx.backend.dummy.BackendManager();
			}
			
			#line 222 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			return global::sx.Sx.__backendManager;
		}
		#line default
		
		public static global::sx.widgets.Widget get_root() {
			#line 231 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			if (( global::sx.Sx.__root == null )) {
				#line 231 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				return global::sx.Sx.get_backendManager().getRoot();
			}
			else {
				#line 231 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				return global::sx.Sx.__root;
			}
			
		}
		#line default
		
		public static global::sx.widgets.Widget set_root(global::sx.widgets.Widget @value) {
			#line 240 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			return global::sx.Sx.__root = @value;
		}
		#line default
		
		public static global::sx.properties.metric.Size get_stageWidth() {
			#line 245 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			return global::sx.Sx.get_backendManager().getRoot().get_width();
		}
		#line default
		
		public static global::sx.properties.metric.Size get_stageHeight() {
			#line 246 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			return global::sx.Sx.get_backendManager().getRoot().get_height();
		}
		#line default
		
		public static global::sx.signals.Signal<object> get_onFrame() {
			#line 249 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			if (( global::sx.Sx.__onFrame == null )) {
				#line 249 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				return global::sx.Sx.__onFrame = new global::sx.signals.Signal<object>();
			}
			else {
				#line 249 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
				return global::sx.Sx.__onFrame;
			}
			
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			return new global::sx.Sx(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 21 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			return new global::sx.Sx();
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx {
	public class Sx_init_142__Fun : global::haxe.lang.Function {
		
		public Sx_init_142__Fun(global::haxe.lang.Function a1) : base(0, 0) {
			#line 142 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			this.a1 = a1;
		}
		#line default
		
		public override object __hx_invoke0_o() {
			#line 142 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			global::sx.Sx.__doneInitTask(this.a1);
			#line 142 "/home/alex/Work/HaXe/sx2-core/src/sx/Sx.hx"
			return null;
		}
		#line default
		
		public global::haxe.lang.Function a1;
		
	}
}


