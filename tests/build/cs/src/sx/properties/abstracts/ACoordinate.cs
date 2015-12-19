
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties.abstracts._ACoordinate {
	public sealed class ACoordinate_Impl_ {
		
		static ACoordinate_Impl_() {
			#line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			global::sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.__pool = new global::sx.ds.ObjectPool<object>();
		}
		#line default
		
		public static global::sx.ds.ObjectPool<object> __pool;
		
		public static global::sx.properties.metric.Coordinate fromFloat(double v) {
			#line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			global::sx.properties.abstracts._ACoordinate.WeakCoordinate weakCoordinate = null;
			#line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			{
				#line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				global::sx.ds.ObjectPool<object> _this = global::sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.__pool;
				#line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				if (( _this.length > 0 )) {
					#line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
					_this.length--;
					#line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
					weakCoordinate = ((global::sx.properties.abstracts._ACoordinate.WeakCoordinate) (_this.__pool[_this.length]) );
				}
				else {
					#line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
					weakCoordinate = null;
				}
				
			}
			
			#line 28 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			if (( weakCoordinate == null )) {
				#line 28 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				weakCoordinate = new global::sx.properties.abstracts._ACoordinate.WeakCoordinate();
			}
			
			#line 29 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			weakCoordinate.weak = true;
			weakCoordinate.set_dip(v);
			#line 32 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ((global::sx.properties.metric.Coordinate) (weakCoordinate) );
		}
		#line default
		
		public static global::sx.properties.metric.Coordinate fromSize(global::sx.properties.metric.Size size) {
			#line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return global::sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.fromFloat(size.get_dip());
		}
		#line default
		
		public static double toFloat(global::sx.properties.metric.Coordinate this1) {
			#line 46 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return this1.get_dip();
		}
		#line default
		
		public static global::sx.properties.metric.Coordinate _new(global::sx.properties.metric.Coordinate coordinate) {
			#line 51 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ((global::sx.properties.metric.Coordinate) (coordinate) );
		}
		#line default
		
		public static double AincB(global::sx.properties.metric.Coordinate a, global::sx.properties.metric.Coordinate b) {
			#line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			{
				#line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				global::sx.properties.metric.Coordinate _g = a;
				#line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				return _g.set_dip(( _g.get_dip() + b.get_dip() ));
			}
			
		}
		#line default
		
		public static double AdecB(global::sx.properties.metric.Coordinate a, global::sx.properties.metric.Coordinate b) {
			#line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			{
				#line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				global::sx.properties.metric.Coordinate _g = a;
				#line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				return _g.set_dip(( _g.get_dip() - b.get_dip() ));
			}
			
		}
		#line default
		
		public static double AmulIncB(global::sx.properties.metric.Coordinate a, global::sx.properties.metric.Coordinate b) {
			#line 60 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			{
				#line 60 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				global::sx.properties.metric.Coordinate _g = a;
				#line 60 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				return _g.set_dip(( _g.get_dip() * b.get_dip() ));
			}
			
		}
		#line default
		
		public static double AdevDecB(global::sx.properties.metric.Coordinate a, global::sx.properties.metric.Coordinate b) {
			#line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			{
				#line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				global::sx.properties.metric.Coordinate _g = a;
				#line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				return _g.set_dip(( _g.get_dip() / b.get_dip() ));
			}
			
		}
		#line default
		
		public static double AplusB(global::sx.properties.metric.Coordinate a, global::sx.properties.metric.Coordinate b) {
			#line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() + b.get_dip() );
		}
		#line default
		
		public static double AminusB(global::sx.properties.metric.Coordinate a, global::sx.properties.metric.Coordinate b) {
			#line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() - b.get_dip() );
		}
		#line default
		
		public static double AmulB(global::sx.properties.metric.Coordinate a, global::sx.properties.metric.Coordinate b) {
			#line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() * b.get_dip() );
		}
		#line default
		
		public static double AdivB(global::sx.properties.metric.Coordinate a, global::sx.properties.metric.Coordinate b) {
			#line 65 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() / b.get_dip() );
		}
		#line default
		
		public static bool AltB(global::sx.properties.metric.Coordinate a, global::sx.properties.metric.Coordinate b) {
			#line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() < b.get_dip() );
		}
		#line default
		
		public static bool AlteB(global::sx.properties.metric.Coordinate a, global::sx.properties.metric.Coordinate b) {
			#line 67 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() <= b.get_dip() );
		}
		#line default
		
		public static bool AneB(global::sx.properties.metric.Coordinate a, global::sx.properties.metric.Coordinate b) {
			#line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() != b.get_dip() );
		}
		#line default
		
		public static bool AgteB(global::sx.properties.metric.Coordinate a, global::sx.properties.metric.Coordinate b) {
			#line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() >= b.get_dip() );
		}
		#line default
		
		public static bool AgtB(global::sx.properties.metric.Coordinate a, global::sx.properties.metric.Coordinate b) {
			#line 70 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() > b.get_dip() );
		}
		#line default
		
		public static bool AeqB(global::sx.properties.metric.Coordinate a, global::sx.properties.metric.Coordinate b) {
			#line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() == b.get_dip() );
		}
		#line default
		
		public static double minusA(global::sx.properties.metric.Coordinate a) {
			#line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return  - (a.get_dip()) ;
		}
		#line default
		
		public static double Ainc(global::sx.properties.metric.Coordinate a) {
			unchecked {
				#line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				{
					#line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
					global::sx.properties.metric.Coordinate _g = a;
					#line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
					double _g1 = _g.get_dip();
					#line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
					_g.set_dip(( _g1 + 1 ));
					#line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
					return _g1;
				}
				
			}
			#line default
		}
		
		
		public static double Bdec(global::sx.properties.metric.Coordinate a) {
			unchecked {
				#line 75 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				{
					#line 75 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
					global::sx.properties.metric.Coordinate _g = a;
					#line 75 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
					double _g1 = _g.get_dip();
					#line 75 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
					_g.set_dip(( _g1 - 1 ));
					#line 75 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
					return _g1;
				}
				
			}
			#line default
		}
		
		
		public static double AincBf(global::sx.properties.metric.Coordinate a, double b) {
			#line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			{
				#line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				global::sx.properties.metric.Coordinate _g = a;
				#line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				return _g.set_dip(( _g.get_dip() + b ));
			}
			
		}
		#line default
		
		public static double AdecBf(global::sx.properties.metric.Coordinate a, double b) {
			#line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			{
				#line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				global::sx.properties.metric.Coordinate _g = a;
				#line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				return _g.set_dip(( _g.get_dip() - b ));
			}
			
		}
		#line default
		
		public static double AmulIncBf(global::sx.properties.metric.Coordinate a, double b) {
			#line 83 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			{
				#line 83 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				global::sx.properties.metric.Coordinate _g = a;
				#line 83 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				return _g.set_dip(( _g.get_dip() * b ));
			}
			
		}
		#line default
		
		public static double AdevDecBf(global::sx.properties.metric.Coordinate a, double b) {
			#line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			{
				#line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				global::sx.properties.metric.Coordinate _g = a;
				#line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				return _g.set_dip(( _g.get_dip() / b ));
			}
			
		}
		#line default
		
		public static double AplusBf(global::sx.properties.metric.Coordinate a, double b) {
			#line 85 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() + b );
		}
		#line default
		
		public static double AminusBf(global::sx.properties.metric.Coordinate a, double b) {
			#line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() - b );
		}
		#line default
		
		public static double AmulBf(global::sx.properties.metric.Coordinate a, double b) {
			#line 87 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() * b );
		}
		#line default
		
		public static double AdivBf(global::sx.properties.metric.Coordinate a, double b) {
			#line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() / b );
		}
		#line default
		
		public static bool AltBf(global::sx.properties.metric.Coordinate a, double b) {
			#line 89 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() < b );
		}
		#line default
		
		public static bool AlteBf(global::sx.properties.metric.Coordinate a, double b) {
			#line 90 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() <= b );
		}
		#line default
		
		public static bool AneBf(global::sx.properties.metric.Coordinate a, double b) {
			#line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() != b );
		}
		#line default
		
		public static bool AgteBf(global::sx.properties.metric.Coordinate a, double b) {
			#line 92 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() >= b );
		}
		#line default
		
		public static bool AgtBf(global::sx.properties.metric.Coordinate a, double b) {
			#line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() > b );
		}
		#line default
		
		public static bool AeqBf(global::sx.properties.metric.Coordinate a, double b) {
			#line 94 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return ( a.get_dip() == b );
		}
		#line default
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.properties.abstracts._ACoordinate {
	public class WeakCoordinate : global::sx.properties.metric.Coordinate {
		
		public WeakCoordinate(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public WeakCoordinate() : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
			#line 113 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			global::sx.properties.abstracts._ACoordinate.WeakCoordinate.__hx_ctor_sx_properties_abstracts__ACoordinate_WeakCoordinate(this);
		}
		#line default
		
		public static void __hx_ctor_sx_properties_abstracts__ACoordinate_WeakCoordinate(global::sx.properties.abstracts._ACoordinate.WeakCoordinate __temp_me151) {
			#line 113 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			global::sx.properties.metric.Coordinate.__hx_ctor_sx_properties_metric_Coordinate(__temp_me151, null);
			__temp_me151.selected = true;
			__temp_me151.onChange = null;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return new global::sx.properties.abstracts._ACoordinate.WeakCoordinate(global::haxe.lang.EmptyObject.EMPTY);
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return new global::sx.properties.abstracts._ACoordinate.WeakCoordinate();
		}
		#line default
		
		public override void dispose() {
			#line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			{
				#line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				global::sx.ds.ObjectPool<object> _this = global::sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.__pool;
				#line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				_this.__pool[_this.length] = this;
				#line 124 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				_this.length++;
			}
			
			#line 126 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			this.weak = false;
		}
		#line default
		
		public override void __invokeOnChange(string previousUnits, double previousValue) {
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				switch (hash) {
					case 1038712487:
					{
						#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "__invokeOnChange", 1038712487)) );
					}
					
					
					case 994869407:
					{
						#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "dispose", 994869407)) );
					}
					
					
					default:
					{
						#line 105 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
	}
}


