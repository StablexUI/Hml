package hunit._Match;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public final class Match_Impl_
{
	public static <T> java.lang.Object fromValue(java.lang.Object value)
	{
		//line 24 "/home/alex/Work/HaXe/hunit/src/hunit/Match.hx"
		if (( value == null )) 
		{
			//line 25 "/home/alex/Work/HaXe/hunit/src/hunit/Match.hx"
			return ((java.lang.Object) (hunit._Match.Match_Impl_._new(new hunit.match.AnyMatch<T>(null, null))) );
		}
		else
		{
			//line 27 "/home/alex/Work/HaXe/hunit/src/hunit/Match.hx"
			return ((java.lang.Object) (hunit._Match.Match_Impl_._new(value)) );
		}
		
	}
	
	
	public static <T> java.lang.Object _new(java.lang.Object value)
	{
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/Match.hx"
		java.lang.Object this1 = null;
		//line 37 "/home/alex/Work/HaXe/hunit/src/hunit/Match.hx"
		if (( value instanceof hunit.match.Match )) 
		{
			//line 38 "/home/alex/Work/HaXe/hunit/src/hunit/Match.hx"
			this1 = value;
		}
		else
		{
			//line 40 "/home/alex/Work/HaXe/hunit/src/hunit/Match.hx"
			this1 = new hunit.match.EqualMatch(value, null, null);
		}
		
		//line 36 "/home/alex/Work/HaXe/hunit/src/hunit/Match.hx"
		return ((java.lang.Object) (this1) );
	}
	
	
}


