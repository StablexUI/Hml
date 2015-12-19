package sx.properties.abstracts._ACoordinate;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public final class ACoordinate_Impl_
{
	static
	{
		//line 18 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.__pool = new sx.ds.ObjectPool<sx.properties.abstracts._ACoordinate.WeakCoordinate>();
	}
	
	public static sx.ds.ObjectPool<sx.properties.abstracts._ACoordinate.WeakCoordinate> __pool;
	
	public static sx.properties.metric.Coordinate fromFloat(double v)
	{
		//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		sx.properties.abstracts._ACoordinate.WeakCoordinate weakCoordinate = null;
		//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		{
			//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			sx.ds.ObjectPool<sx.properties.abstracts._ACoordinate.WeakCoordinate> _this = sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.__pool;
			//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			if (( _this.length > 0 )) 
			{
				//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				_this.length--;
				//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				weakCoordinate = _this.__pool.__get(_this.length);
			}
			else
			{
				//line 27 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
				weakCoordinate = null;
			}
			
		}
		
		//line 28 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		if (( weakCoordinate == null )) 
		{
			//line 28 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			weakCoordinate = new sx.properties.abstracts._ACoordinate.WeakCoordinate();
		}
		
		//line 29 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		weakCoordinate.weak = true;
		//line 30 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		weakCoordinate.set_dip(v);
		//line 32 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ((sx.properties.metric.Coordinate) (weakCoordinate) );
	}
	
	
	public static sx.properties.metric.Coordinate fromSize(sx.properties.metric.Size size)
	{
		//line 41 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return sx.properties.abstracts._ACoordinate.ACoordinate_Impl_.fromFloat(size.get_dip());
	}
	
	
	public static double toFloat(sx.properties.metric.Coordinate this1)
	{
		//line 46 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return this1.get_dip();
	}
	
	
	public static sx.properties.metric.Coordinate _new(sx.properties.metric.Coordinate coordinate)
	{
		//line 51 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ((sx.properties.metric.Coordinate) (coordinate) );
	}
	
	
	public static double AincB(sx.properties.metric.Coordinate a, sx.properties.metric.Coordinate b)
	{
		//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		{
			//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			sx.properties.metric.Coordinate _g = a;
			//line 58 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return _g.set_dip(( _g.get_dip() + b.get_dip() ));
		}
		
	}
	
	
	public static double AdecB(sx.properties.metric.Coordinate a, sx.properties.metric.Coordinate b)
	{
		//line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		{
			//line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			sx.properties.metric.Coordinate _g = a;
			//line 59 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return _g.set_dip(( _g.get_dip() - b.get_dip() ));
		}
		
	}
	
	
	public static double AmulIncB(sx.properties.metric.Coordinate a, sx.properties.metric.Coordinate b)
	{
		//line 60 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		{
			//line 60 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			sx.properties.metric.Coordinate _g = a;
			//line 60 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return _g.set_dip(( _g.get_dip() * b.get_dip() ));
		}
		
	}
	
	
	public static double AdevDecB(sx.properties.metric.Coordinate a, sx.properties.metric.Coordinate b)
	{
		//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		{
			//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			sx.properties.metric.Coordinate _g = a;
			//line 61 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return _g.set_dip(( _g.get_dip() / b.get_dip() ));
		}
		
	}
	
	
	public static double AplusB(sx.properties.metric.Coordinate a, sx.properties.metric.Coordinate b)
	{
		//line 62 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() + b.get_dip() );
	}
	
	
	public static double AminusB(sx.properties.metric.Coordinate a, sx.properties.metric.Coordinate b)
	{
		//line 63 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() - b.get_dip() );
	}
	
	
	public static double AmulB(sx.properties.metric.Coordinate a, sx.properties.metric.Coordinate b)
	{
		//line 64 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() * b.get_dip() );
	}
	
	
	public static double AdivB(sx.properties.metric.Coordinate a, sx.properties.metric.Coordinate b)
	{
		//line 65 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() / b.get_dip() );
	}
	
	
	public static boolean AltB(sx.properties.metric.Coordinate a, sx.properties.metric.Coordinate b)
	{
		//line 66 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() < b.get_dip() );
	}
	
	
	public static boolean AlteB(sx.properties.metric.Coordinate a, sx.properties.metric.Coordinate b)
	{
		//line 67 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() <= b.get_dip() );
	}
	
	
	public static boolean AneB(sx.properties.metric.Coordinate a, sx.properties.metric.Coordinate b)
	{
		//line 68 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() != b.get_dip() );
	}
	
	
	public static boolean AgteB(sx.properties.metric.Coordinate a, sx.properties.metric.Coordinate b)
	{
		//line 69 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() >= b.get_dip() );
	}
	
	
	public static boolean AgtB(sx.properties.metric.Coordinate a, sx.properties.metric.Coordinate b)
	{
		//line 70 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() > b.get_dip() );
	}
	
	
	public static boolean AeqB(sx.properties.metric.Coordinate a, sx.properties.metric.Coordinate b)
	{
		//line 71 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() == b.get_dip() );
	}
	
	
	public static double minusA(sx.properties.metric.Coordinate a)
	{
		//line 72 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return  - (a.get_dip()) ;
	}
	
	
	public static double Ainc(sx.properties.metric.Coordinate a)
	{
		//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		{
			//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			sx.properties.metric.Coordinate _g = a;
			//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			double _g1 = _g.get_dip();
			//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			_g.set_dip(( _g1 + 1 ));
			//line 74 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return _g1;
		}
		
	}
	
	
	public static double Bdec(sx.properties.metric.Coordinate a)
	{
		//line 75 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		{
			//line 75 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			sx.properties.metric.Coordinate _g = a;
			//line 75 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			double _g1 = _g.get_dip();
			//line 75 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			_g.set_dip(( _g1 - 1 ));
			//line 75 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return _g1;
		}
		
	}
	
	
	public static double AincBf(sx.properties.metric.Coordinate a, double b)
	{
		//line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		{
			//line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			sx.properties.metric.Coordinate _g = a;
			//line 81 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return _g.set_dip(( _g.get_dip() + b ));
		}
		
	}
	
	
	public static double AdecBf(sx.properties.metric.Coordinate a, double b)
	{
		//line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		{
			//line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			sx.properties.metric.Coordinate _g = a;
			//line 82 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return _g.set_dip(( _g.get_dip() - b ));
		}
		
	}
	
	
	public static double AmulIncBf(sx.properties.metric.Coordinate a, double b)
	{
		//line 83 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		{
			//line 83 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			sx.properties.metric.Coordinate _g = a;
			//line 83 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return _g.set_dip(( _g.get_dip() * b ));
		}
		
	}
	
	
	public static double AdevDecBf(sx.properties.metric.Coordinate a, double b)
	{
		//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		{
			//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			sx.properties.metric.Coordinate _g = a;
			//line 84 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
			return _g.set_dip(( _g.get_dip() / b ));
		}
		
	}
	
	
	public static double AplusBf(sx.properties.metric.Coordinate a, double b)
	{
		//line 85 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() + b );
	}
	
	
	public static double AminusBf(sx.properties.metric.Coordinate a, double b)
	{
		//line 86 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() - b );
	}
	
	
	public static double AmulBf(sx.properties.metric.Coordinate a, double b)
	{
		//line 87 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() * b );
	}
	
	
	public static double AdivBf(sx.properties.metric.Coordinate a, double b)
	{
		//line 88 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() / b );
	}
	
	
	public static boolean AltBf(sx.properties.metric.Coordinate a, double b)
	{
		//line 89 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() < b );
	}
	
	
	public static boolean AlteBf(sx.properties.metric.Coordinate a, double b)
	{
		//line 90 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() <= b );
	}
	
	
	public static boolean AneBf(sx.properties.metric.Coordinate a, double b)
	{
		//line 91 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() != b );
	}
	
	
	public static boolean AgteBf(sx.properties.metric.Coordinate a, double b)
	{
		//line 92 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() >= b );
	}
	
	
	public static boolean AgtBf(sx.properties.metric.Coordinate a, double b)
	{
		//line 93 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() > b );
	}
	
	
	public static boolean AeqBf(sx.properties.metric.Coordinate a, double b)
	{
		//line 94 "/home/alex/Work/HaXe/sx2-core/src/sx/properties/abstracts/ACoordinate.hx"
		return ( a.get_dip() == b );
	}
	
	
}


