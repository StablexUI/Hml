package hunit.report;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TestReport extends haxe.lang.HxObject
{
	public TestReport(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public TestReport(hunit.report.IReportWriter writer)
	{
		//line 52 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		hunit.report.TestReport.__hx_ctor_hunit_report_TestReport(this, writer);
	}
	
	
	public static void __hx_ctor_hunit_report_TestReport(hunit.report.TestReport __temp_me93, hunit.report.IReportWriter writer)
	{
		//line 45 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		__temp_me93.assertionCount = 0;
		//line 26 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		__temp_me93.spentTime = ((double) (((int) (0.0) )) );
		//line 24 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		__temp_me93.endTime = ((double) (((int) (0.0) )) );
		//line 22 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		__temp_me93.startTime = ((double) (((int) (0.0) )) );
		//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		__temp_me93.cases = new haxe.root.List<hunit.TestCase>();
		//line 55 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		__temp_me93.fails = new haxe.root.List<java.lang.Object>();
		//line 56 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		__temp_me93.warnings = new haxe.root.List<java.lang.Object>();
		//line 57 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		__temp_me93.successful = new haxe.root.List<java.lang.Object>();
		//line 58 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		__temp_me93.skipped = new haxe.root.List<java.lang.Object>();
		//line 59 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		__temp_me93.notices = new haxe.root.List<java.lang.Object>();
		//line 61 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		__temp_me93.writer = writer;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		return new hunit.report.TestReport(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		return new hunit.report.TestReport(((hunit.report.IReportWriter) (arr.__get(0)) ));
	}
	
	
	public double startTime;
	
	public double endTime;
	
	public double spentTime;
	
	public hunit.report.IReportWriter writer;
	
	public haxe.root.List<hunit.TestCase> cases;
	
	public haxe.root.List<java.lang.Object> fails;
	
	public haxe.root.List<java.lang.Object> warnings;
	
	public haxe.root.List<java.lang.Object> successful;
	
	public haxe.root.List<java.lang.Object> skipped;
	
	public haxe.root.List<java.lang.Object> notices;
	
	
	
	public int assertionCount;
	
	public void addFail(hunit.TestCase testCase, java.lang.String test, haxe.root.Exception e)
	{
		//line 71 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		java.lang.Object __temp_stmt2 = null;
		//line 71 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		{
			//line 72 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			java.lang.String __temp_odecl1 = haxe.root.Type.getClassName(((java.lang.Class) (haxe.root.Type.getClass(testCase)) ));
			//line 71 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			__temp_stmt2 = new haxe.lang.DynamicObject(new java.lang.String[]{"caseName", "exception", "testName"}, new java.lang.Object[]{__temp_odecl1, e, test}, new java.lang.String[]{}, new double[]{});
		}
		
		//line 71 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		this.fails.add(__temp_stmt2);
	}
	
	
	public void addSuccess(hunit.TestCase testCase, java.lang.String test)
	{
		//line 85 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		java.lang.Object __temp_stmt2 = null;
		//line 85 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		{
			//line 86 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			java.lang.String __temp_odecl1 = haxe.root.Type.getClassName(((java.lang.Class) (haxe.root.Type.getClass(testCase)) ));
			//line 85 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			__temp_stmt2 = new haxe.lang.DynamicObject(new java.lang.String[]{"caseName", "testName"}, new java.lang.Object[]{__temp_odecl1, test}, new java.lang.String[]{}, new double[]{});
		}
		
		//line 85 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		this.successful.add(__temp_stmt2);
	}
	
	
	public void addWarning(hunit.TestCase testCase, java.lang.String test, hunit.warnings.Warning warning)
	{
		//line 98 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		java.lang.Object __temp_stmt2 = null;
		//line 98 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		{
			//line 99 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			java.lang.String __temp_odecl1 = haxe.root.Type.getClassName(((java.lang.Class) (haxe.root.Type.getClass(testCase)) ));
			//line 98 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			__temp_stmt2 = new haxe.lang.DynamicObject(new java.lang.String[]{"caseName", "testName", "warning"}, new java.lang.Object[]{__temp_odecl1, test, warning}, new java.lang.String[]{}, new double[]{});
		}
		
		//line 98 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		this.warnings.add(__temp_stmt2);
	}
	
	
	public void addSkip(hunit.TestCase testCase, java.lang.String test, haxe.root.Array<java.lang.String> depends)
	{
		//line 112 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		java.lang.Object __temp_stmt2 = null;
		//line 112 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		{
			//line 113 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			java.lang.String __temp_odecl1 = haxe.root.Type.getClassName(((java.lang.Class) (haxe.root.Type.getClass(testCase)) ));
			//line 112 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			__temp_stmt2 = new haxe.lang.DynamicObject(new java.lang.String[]{"caseName", "depends", "testName"}, new java.lang.Object[]{__temp_odecl1, depends, test}, new java.lang.String[]{}, new double[]{});
		}
		
		//line 112 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		this.skipped.add(__temp_stmt2);
	}
	
	
	public void addNotice(hunit.TestCase testCase, java.lang.String test, java.lang.String message, java.lang.Object pos)
	{
		//line 126 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		java.lang.Object __temp_stmt2 = null;
		//line 126 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		{
			//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			java.lang.String __temp_odecl1 = haxe.root.Type.getClassName(((java.lang.Class) (haxe.root.Type.getClass(testCase)) ));
			//line 126 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			__temp_stmt2 = new haxe.lang.DynamicObject(new java.lang.String[]{"caseName", "message", "pos", "testName"}, new java.lang.Object[]{__temp_odecl1, message, pos, test}, new java.lang.String[]{}, new double[]{});
		}
		
		//line 126 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		this.notices.add(__temp_stmt2);
	}
	
	
	public void output()
	{
		//line 141 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		this.writer.write(this);
	}
	
	
	public java.lang.String getSummary()
	{
		//line 151 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		int failed = this.fails.length;
		//line 152 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		int warned = this.warnings.length;
		//line 153 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		int passed = ( warned + this.successful.length );
		//line 154 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		int total = ( failed + passed );
		//line 156 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		java.lang.String failedMsg = null;
		//line 156 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		if (( failed == 0 )) 
		{
			//line 156 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			failedMsg = "";
		}
		else
		{
			//line 156 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			failedMsg = ( ( ( ", " + failed ) + " failure" ) + (( (( failed == 1 )) ? ("") : ("s") )) );
		}
		
		//line 157 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		java.lang.String warnedMsg = null;
		//line 157 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		if (( warned == 0 )) 
		{
			//line 157 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			warnedMsg = "";
		}
		else
		{
			//line 157 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			warnedMsg = ( ( ( ", " + warned ) + " warning" ) + (( (( warned == 1 )) ? ("") : ("s") )) );
		}
		
		//line 158 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		java.lang.String skippedMsg = null;
		//line 158 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		if (( this.skipped.length == 0 )) 
		{
			//line 158 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			skippedMsg = "";
		}
		else
		{
			//line 158 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			skippedMsg = ( ( ", " + this.skipped.length ) + " skipped" );
		}
		
		//line 160 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		java.lang.String summary = ( ( "Time: " + haxe.lang.Runtime.toString(this.spentTime) ) + " seconds.\n\n" );
		//line 161 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		if (( ( ( this.fails.length == 0 ) && ( this.warnings.length == 0 ) ) && ( this.skipped.length == 0 ) )) 
		{
			//line 162 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			summary += ( ( ( ( "OK (" + total ) + " tests, " ) + this.assertionCount ) + " assertions)" );
		}
		else
		{
			//line 163 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			if (( this.fails.length == 0 )) 
			{
				//line 164 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				summary += ( ( ( ( ( ( ( "OK, but with risky tests! (" + total ) + " tests, " ) + this.assertionCount ) + " assertions" ) + warnedMsg ) + skippedMsg ) + ")" );
			}
			else
			{
				//line 166 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				summary += ( ( ( ( ( ( "FAILURES! (" + total ) + " tests" ) + failedMsg ) + warnedMsg ) + skippedMsg ) + ")" );
			}
			
		}
		
		//line 169 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		return summary;
	}
	
	
	public double set_endTime(double endTime)
	{
		//line 179 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		this.spentTime = ( ((double) (((int) (java.lang.Math.round(( (( endTime - this.startTime )) * 1000 ))) )) ) / 1000 );
		//line 181 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		return this.endTime = endTime;
	}
	
	
	public int get_testCount()
	{
		//line 191 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		return ( ( ( this.successful.length + this.warnings.length ) + this.fails.length ) + this.skipped.length );
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		{
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			boolean __temp_executeDef1 = true;
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			switch (field.hashCode())
			{
				case 795630381:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("assertionCount")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.assertionCount = ((int) (value) );
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -2129294769:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("startTime")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.startTime = ((double) (value) );
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1370070693:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("spentTime")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.spentTime = ((double) (value) );
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1607243192:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("endTime")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						if (handleProperties) 
						{
							//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
							this.set_endTime(value);
							//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
							return value;
						}
						else
						{
							//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
							this.endTime = ((double) (value) );
							//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
							return value;
						}
						
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
			}
			
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			if (__temp_executeDef1) 
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		{
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			boolean __temp_executeDef1 = true;
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			switch (field.hashCode())
			{
				case 795630381:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("assertionCount")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.assertionCount = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -2129294769:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("startTime")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.startTime = ((double) (haxe.lang.Runtime.toDouble(value)) );
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case 2129347739:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("notices")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.notices = ((haxe.root.List<java.lang.Object>) (value) );
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1607243192:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("endTime")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						if (handleProperties) 
						{
							//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
							this.set_endTime(((double) (haxe.lang.Runtime.toDouble(value)) ));
							//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
							return value;
						}
						else
						{
							//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
							this.endTime = ((double) (haxe.lang.Runtime.toDouble(value)) );
							//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
							return value;
						}
						
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case 2147444528:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("skipped")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.skipped = ((haxe.root.List<java.lang.Object>) (value) );
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1370070693:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("spentTime")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.spentTime = ((double) (haxe.lang.Runtime.toDouble(value)) );
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -733631846:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("successful")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.successful = ((haxe.root.List<java.lang.Object>) (value) );
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -779574157:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("writer")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.writer = ((hunit.report.IReportWriter) (value) );
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case 498091095:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("warnings")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.warnings = ((haxe.root.List<java.lang.Object>) (value) );
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case 94432067:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("cases")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.cases = ((haxe.root.List<hunit.TestCase>) (value) );
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case 97193237:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("fails")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.fails = ((haxe.root.List<java.lang.Object>) (value) );
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return value;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
			}
			
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			if (__temp_executeDef1) 
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		{
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			boolean __temp_executeDef1 = true;
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			switch (field.hashCode())
			{
				case -691274252:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("get_testCount")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_testCount")) );
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -2129294769:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("startTime")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.startTime;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1619309717:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("set_endTime")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_endTime")) );
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1607243192:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("endTime")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.endTime;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -820780176:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("getSummary")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "getSummary")) );
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1370070693:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("spentTime")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.spentTime;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1005512447:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("output")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "output")) );
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -779574157:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("writer")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.writer;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -146850087:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("addNotice")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addNotice")) );
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case 94432067:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("cases")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.cases;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1148610112:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("addSkip")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addSkip")) );
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case 97193237:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("fails")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.fails;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1262286917:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("addWarning")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addWarning")) );
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case 498091095:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("warnings")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.warnings;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case 41064482:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("addSuccess")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addSuccess")) );
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -733631846:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("successful")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.successful;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1149007009:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("addFail")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "addFail")) );
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case 2147444528:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("skipped")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.skipped;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case 795630381:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("assertionCount")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.assertionCount;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case 2129347739:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("notices")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.notices;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1206114403:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("testCount")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.get_testCount();
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
			}
			
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			if (__temp_executeDef1) 
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		{
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			boolean __temp_executeDef1 = true;
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			switch (field.hashCode())
			{
				case 795630381:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("assertionCount")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((double) (this.assertionCount) );
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -2129294769:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("startTime")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.startTime;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1206114403:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("testCount")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((double) (this.get_testCount()) );
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1607243192:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("endTime")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.endTime;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1370070693:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("spentTime")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.spentTime;
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
			}
			
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			if (__temp_executeDef1) 
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		{
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			boolean __temp_executeDef1 = true;
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			switch (field.hashCode())
			{
				case -691274252:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("get_testCount")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.get_testCount();
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1149007009:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("addFail")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.addFail(((hunit.TestCase) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)), ((haxe.root.Exception) (dynargs.__get(2)) ));
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1619309717:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("set_endTime")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.set_endTime(((double) (haxe.lang.Runtime.toDouble(dynargs.__get(0))) ));
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case 41064482:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("addSuccess")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.addSuccess(((hunit.TestCase) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)));
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -820780176:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("getSummary")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.getSummary();
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1262286917:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("addWarning")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.addWarning(((hunit.TestCase) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)), ((hunit.warnings.Warning) (dynargs.__get(2)) ));
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1005512447:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("output")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.output();
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -1148610112:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("addSkip")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.addSkip(((hunit.TestCase) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)), ((haxe.root.Array<java.lang.String>) (dynargs.__get(2)) ));
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
				case -146850087:
				{
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					if (field.equals("addNotice")) 
					{
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						__temp_executeDef1 = false;
						//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.addNotice(((hunit.TestCase) (dynargs.__get(0)) ), haxe.lang.Runtime.toString(dynargs.__get(1)), haxe.lang.Runtime.toString(dynargs.__get(2)), dynargs.__get(3));
					}
					
					//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					break;
				}
				
				
			}
			
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			if (__temp_executeDef1) 
			{
				//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		baseArr.push("assertionCount");
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		baseArr.push("testCount");
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		baseArr.push("notices");
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		baseArr.push("skipped");
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		baseArr.push("successful");
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		baseArr.push("warnings");
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		baseArr.push("fails");
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		baseArr.push("cases");
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		baseArr.push("writer");
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		baseArr.push("spentTime");
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		baseArr.push("endTime");
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		baseArr.push("startTime");
		//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
		{
			//line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


