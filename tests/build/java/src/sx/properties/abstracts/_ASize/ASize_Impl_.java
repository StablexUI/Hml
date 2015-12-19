package sx.properties.abstracts._ASize;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public final class ASize_Impl_
{
	static
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		sx.properties.abstracts._ASize.ASize_Impl_.__pool = new sx.ds.ObjectPool<sx.properties.abstracts._ASize.WeakSize>();
	}
	
	public static sx.ds.ObjectPool<sx.properties.abstracts._ASize.WeakSize> __pool;
	
	public static sx.properties.metric.Size fromFloat(double v)
	{
		//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		sx.properties.abstracts._ASize.WeakSize weakSize = null;
		//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		{
			//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			sx.ds.ObjectPool<sx.properties.abstracts._ASize.WeakSize> _this = sx.properties.abstracts._ASize.ASize_Impl_.__pool;
			//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			if (( _this.length > 0 )) 
			{
				//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
				_this.length--;
				//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
				weakSize = _this.__pool.__get(_this.length);
			}
			else
			{
				//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
				weakSize = null;
			}
			
		}
		
		//line 28 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		if (( weakSize == null )) 
		{
			//line 28 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			weakSize = new sx.properties.abstracts._ASize.WeakSize();
		}
		
		//line 29 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		weakSize.weak = true;
		//line 30 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		weakSize.set_dip(v);
		//line 32 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ((sx.properties.metric.Size) (weakSize) );
	}
	
	
	public static sx.properties.metric.Size fromSize(sx.properties.metric.Coordinate coordinate)
	{
		//line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return sx.properties.abstracts._ASize.ASize_Impl_.fromFloat(coordinate.get_dip());
	}
	
	
	public static double toFloat(sx.properties.metric.Size this1)
	{
		//line 46 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return this1.get_dip();
	}
	
	
	public static sx.properties.metric.Size _new(sx.properties.metric.Size size)
	{
		//line 51 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ((sx.properties.metric.Size) (size) );
	}
	
	
	public static double AincB(sx.properties.metric.Size a, sx.properties.metric.Size b)
	{
		//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		{
			//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			sx.properties.metric.Size _g = a;
			//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			return _g.set_dip(( _g.get_dip() + b.get_dip() ));
		}
		
	}
	
	
	public static double AdecB(sx.properties.metric.Size a, sx.properties.metric.Size b)
	{
		//line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		{
			//line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			sx.properties.metric.Size _g = a;
			//line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			return _g.set_dip(( _g.get_dip() - b.get_dip() ));
		}
		
	}
	
	
	public static double AmulIncB(sx.properties.metric.Size a, sx.properties.metric.Size b)
	{
		//line 60 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		{
			//line 60 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			sx.properties.metric.Size _g = a;
			//line 60 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			return _g.set_dip(( _g.get_dip() * b.get_dip() ));
		}
		
	}
	
	
	public static double AdevDecB(sx.properties.metric.Size a, sx.properties.metric.Size b)
	{
		//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		{
			//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			sx.properties.metric.Size _g = a;
			//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			return _g.set_dip(( _g.get_dip() / b.get_dip() ));
		}
		
	}
	
	
	public static double AplusB(sx.properties.metric.Size a, sx.properties.metric.Size b)
	{
		//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() + b.get_dip() );
	}
	
	
	public static double AminusB(sx.properties.metric.Size a, sx.properties.metric.Size b)
	{
		//line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() - b.get_dip() );
	}
	
	
	public static double AmulB(sx.properties.metric.Size a, sx.properties.metric.Size b)
	{
		//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() * b.get_dip() );
	}
	
	
	public static double AdivB(sx.properties.metric.Size a, sx.properties.metric.Size b)
	{
		//line 65 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() / b.get_dip() );
	}
	
	
	public static boolean AltB(sx.properties.metric.Size a, sx.properties.metric.Size b)
	{
		//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() < b.get_dip() );
	}
	
	
	public static boolean AlteB(sx.properties.metric.Size a, sx.properties.metric.Size b)
	{
		//line 67 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() <= b.get_dip() );
	}
	
	
	public static boolean AneB(sx.properties.metric.Size a, sx.properties.metric.Size b)
	{
		//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() != b.get_dip() );
	}
	
	
	public static boolean AgteB(sx.properties.metric.Size a, sx.properties.metric.Size b)
	{
		//line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() >= b.get_dip() );
	}
	
	
	public static boolean AgtB(sx.properties.metric.Size a, sx.properties.metric.Size b)
	{
		//line 70 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() > b.get_dip() );
	}
	
	
	public static boolean AeqB(sx.properties.metric.Size a, sx.properties.metric.Size b)
	{
		//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() == b.get_dip() );
	}
	
	
	public static double minusA(sx.properties.metric.Size a)
	{
		//line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return  - (a.get_dip()) ;
	}
	
	
	public static double Ainc(sx.properties.metric.Size a)
	{
		//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		{
			//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			sx.properties.metric.Size _g = a;
			//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			double _g1 = _g.get_dip();
			//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			_g.set_dip(( _g1 + 1 ));
			//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			return _g1;
		}
		
	}
	
	
	public static double Bdec(sx.properties.metric.Size a)
	{
		//line 75 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		{
			//line 75 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			sx.properties.metric.Size _g = a;
			//line 75 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			double _g1 = _g.get_dip();
			//line 75 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			_g.set_dip(( _g1 - 1 ));
			//line 75 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			return _g1;
		}
		
	}
	
	
	public static double AincBf(sx.properties.metric.Size a, double b)
	{
		//line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		{
			//line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			sx.properties.metric.Size _g = a;
			//line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			return _g.set_dip(( _g.get_dip() + b ));
		}
		
	}
	
	
	public static double AdecBf(sx.properties.metric.Size a, double b)
	{
		//line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		{
			//line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			sx.properties.metric.Size _g = a;
			//line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			return _g.set_dip(( _g.get_dip() - b ));
		}
		
	}
	
	
	public static double AmulIncBf(sx.properties.metric.Size a, double b)
	{
		//line 83 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		{
			//line 83 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			sx.properties.metric.Size _g = a;
			//line 83 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			return _g.set_dip(( _g.get_dip() * b ));
		}
		
	}
	
	
	public static double AdevDecBf(sx.properties.metric.Size a, double b)
	{
		//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		{
			//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			sx.properties.metric.Size _g = a;
			//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
			return _g.set_dip(( _g.get_dip() / b ));
		}
		
	}
	
	
	public static double AplusBf(sx.properties.metric.Size a, double b)
	{
		//line 85 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() + b );
	}
	
	
	public static double AminusBf(sx.properties.metric.Size a, double b)
	{
		//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() - b );
	}
	
	
	public static double AmulBf(sx.properties.metric.Size a, double b)
	{
		//line 87 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() * b );
	}
	
	
	public static double AdivBf(sx.properties.metric.Size a, double b)
	{
		//line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() / b );
	}
	
	
	public static boolean AltBf(sx.properties.metric.Size a, double b)
	{
		//line 89 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() < b );
	}
	
	
	public static boolean AlteBf(sx.properties.metric.Size a, double b)
	{
		//line 90 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() <= b );
	}
	
	
	public static boolean AneBf(sx.properties.metric.Size a, double b)
	{
		//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() != b );
	}
	
	
	public static boolean AgteBf(sx.properties.metric.Size a, double b)
	{
		//line 92 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() >= b );
	}
	
	
	public static boolean AgtBf(sx.properties.metric.Size a, double b)
	{
		//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() > b );
	}
	
	
	public static boolean AeqBf(sx.properties.metric.Size a, double b)
	{
		//line 94 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ASize.hx"
		return ( a.get_dip() == b );
	}
	
	
}


