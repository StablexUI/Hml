
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.report {
	public class TestReport : global::haxe.lang.HxObject {
		
		public TestReport(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public TestReport(global::hunit.report.IReportWriter writer) {
			#line 52 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			global::hunit.report.TestReport.__hx_ctor_hunit_report_TestReport(this, writer);
		}
		#line default
		
		public static void __hx_ctor_hunit_report_TestReport(global::hunit.report.TestReport __temp_me116, global::hunit.report.IReportWriter writer) {
			#line 45 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			__temp_me116.assertionCount = 0;
			#line 26 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			__temp_me116.spentTime = ((double) (((int) (0) )) );
			#line 24 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			__temp_me116.endTime = ((double) (((int) (0) )) );
			#line 22 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			__temp_me116.startTime = ((double) (((int) (0) )) );
			#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			__temp_me116.cases = new global::List<object>();
			__temp_me116.fails = new global::List<object>();
			__temp_me116.warnings = new global::List<object>();
			__temp_me116.successful = new global::List<object>();
			__temp_me116.skipped = new global::List<object>();
			__temp_me116.notices = new global::List<object>();
			#line 61 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			__temp_me116.writer = writer;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			return new global::hunit.report.TestReport(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			return new global::hunit.report.TestReport(((global::hunit.report.IReportWriter) (arr[0]) ));
		}
		#line default
		
		public double startTime;
		
		public double endTime;
		
		public double spentTime;
		
		public global::hunit.report.IReportWriter writer;
		
		public global::List<object> cases;
		
		public global::List<object> fails;
		
		public global::List<object> warnings;
		
		public global::List<object> successful;
		
		public global::List<object> skipped;
		
		public global::List<object> notices;
		
		
		
		public int assertionCount;
		
		public virtual void addFail(global::hunit.TestCase testCase, string test, global::Exception e) {
			#line 71 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			object __temp_stmt2 = null;
			#line 71 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			{
				#line 72 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				string __temp_odecl1 = global::Type.getClassName(global::Type.getClass<object>(testCase));
				#line 71 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				__temp_stmt2 = new global::haxe.lang.DynamicObject(new int[]{914347291, 1234833487, 1278343101}, new object[]{__temp_odecl1, e, test}, new int[]{}, new double[]{});
			}
			
			#line 71 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			this.fails.@add(__temp_stmt2);
		}
		#line default
		
		public virtual void addSuccess(global::hunit.TestCase testCase, string test) {
			#line 85 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			object __temp_stmt2 = null;
			#line 85 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			{
				#line 86 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				string __temp_odecl1 = global::Type.getClassName(global::Type.getClass<object>(testCase));
				#line 85 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				__temp_stmt2 = new global::haxe.lang.DynamicObject(new int[]{914347291, 1278343101}, new object[]{__temp_odecl1, test}, new int[]{}, new double[]{});
			}
			
			#line 85 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			this.successful.@add(__temp_stmt2);
		}
		#line default
		
		public virtual void addWarning(global::hunit.TestCase testCase, string test, global::hunit.warnings.Warning warning) {
			#line 98 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			object __temp_stmt2 = null;
			#line 98 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			{
				#line 99 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				string __temp_odecl1 = global::Type.getClassName(global::Type.getClass<object>(testCase));
				#line 98 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				__temp_stmt2 = new global::haxe.lang.DynamicObject(new int[]{164354652, 914347291, 1278343101}, new object[]{warning, __temp_odecl1, test}, new int[]{}, new double[]{});
			}
			
			#line 98 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			this.warnings.@add(__temp_stmt2);
		}
		#line default
		
		public virtual void addSkip(global::hunit.TestCase testCase, string test, global::Array<object> depends) {
			#line 112 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			object __temp_stmt2 = null;
			#line 112 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			{
				#line 113 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				string __temp_odecl1 = global::Type.getClassName(global::Type.getClass<object>(testCase));
				#line 112 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				__temp_stmt2 = new global::haxe.lang.DynamicObject(new int[]{914347291, 1278343101, 1617242503}, new object[]{__temp_odecl1, test, depends}, new int[]{}, new double[]{});
			}
			
			#line 112 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			this.skipped.@add(__temp_stmt2);
		}
		#line default
		
		public virtual void addNotice(global::hunit.TestCase testCase, string test, string message, object pos) {
			#line 126 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			object __temp_stmt2 = null;
			#line 126 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			{
				#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				string __temp_odecl1 = global::Type.getClassName(global::Type.getClass<object>(testCase));
				#line 126 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				__temp_stmt2 = new global::haxe.lang.DynamicObject(new int[]{5594516, 437335495, 914347291, 1278343101}, new object[]{pos, message, __temp_odecl1, test}, new int[]{}, new double[]{});
			}
			
			#line 126 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			this.notices.@add(__temp_stmt2);
		}
		#line default
		
		public virtual void output() {
			#line 141 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			this.writer.write(this);
		}
		#line default
		
		public virtual string getSummary() {
			unchecked {
				#line 151 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				int failed = this.fails.length;
				int warned = this.warnings.length;
				int passed = ( warned + this.successful.length );
				int total = ( failed + passed );
				#line 156 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				string failedMsg = null;
				#line 156 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				if (( failed == 0 )) {
					#line 156 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					failedMsg = "";
				}
				else {
					#line 156 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					failedMsg = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(", ", global::haxe.lang.Runtime.toString(failed)), " failure"), (( (( failed == 1 )) ? ("") : ("s") )));
				}
				
				#line 157 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				string warnedMsg = null;
				#line 157 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				if (( warned == 0 )) {
					#line 157 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					warnedMsg = "";
				}
				else {
					#line 157 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					warnedMsg = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(", ", global::haxe.lang.Runtime.toString(warned)), " warning"), (( (( warned == 1 )) ? ("") : ("s") )));
				}
				
				#line 158 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				string skippedMsg = null;
				#line 158 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				if (( this.skipped.length == 0 )) {
					#line 158 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					skippedMsg = "";
				}
				else {
					#line 158 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					skippedMsg = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(", ", global::haxe.lang.Runtime.toString(this.skipped.length)), " skipped");
				}
				
				#line 160 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				string summary = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Time: ", global::haxe.lang.Runtime.toString(this.spentTime)), " seconds.\n\n");
				if (( ( ( this.fails.length == 0 ) && ( this.warnings.length == 0 ) ) && ( this.skipped.length == 0 ) )) {
					#line 162 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					summary = global::haxe.lang.Runtime.concat(summary, global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("OK (", global::haxe.lang.Runtime.toString(total)), " tests, "), global::haxe.lang.Runtime.toString(this.assertionCount)), " assertions)"));
				}
				else if (( this.fails.length == 0 )) {
					#line 164 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					summary = global::haxe.lang.Runtime.concat(summary, global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("OK, but with risky tests! (", global::haxe.lang.Runtime.toString(total)), " tests, "), global::haxe.lang.Runtime.toString(this.assertionCount)), " assertions"), warnedMsg), skippedMsg), ")"));
				}
				else {
					#line 166 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
					summary = global::haxe.lang.Runtime.concat(summary, global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("FAILURES! (", global::haxe.lang.Runtime.toString(total)), " tests"), failedMsg), warnedMsg), skippedMsg), ")"));
				}
				
				#line 169 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				return summary;
			}
			#line default
		}
		
		
		public virtual double set_endTime(double endTime) {
			unchecked {
				#line 179 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				this.spentTime = ( ((double) (global::Math.round(( (( endTime - this.startTime )) * 1000 ))) ) / 1000 );
				#line 181 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				return this.endTime = endTime;
			}
			#line default
		}
		
		
		public virtual int get_testCount() {
			#line 191 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			return ( ( ( this.successful.length + this.warnings.length ) + this.fails.length ) + this.skipped.length );
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				switch (hash) {
					case 113389229:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.assertionCount = ((int) (@value) );
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return @value;
					}
					
					
					case 772728475:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.spentTime = ((double) (@value) );
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return @value;
					}
					
					
					case 790726024:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						if (handleProperties) {
							#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
							this.set_endTime(@value);
							#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
							return @value;
						}
						else {
							#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
							this.endTime = ((double) (@value) );
							#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
							return @value;
						}
						
					}
					
					
					case 99632527:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.startTime = ((double) (@value) );
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return @value;
					}
					
					
					default:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				switch (hash) {
					case 113389229:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.assertionCount = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return @value;
					}
					
					
					case 1342455131:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.notices = ((global::List<object>) (global::List<object>.__hx_cast<object>(((global::List) (@value) ))) );
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return @value;
					}
					
					
					case 902043568:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.skipped = ((global::List<object>) (global::List<object>.__hx_cast<object>(((global::List) (@value) ))) );
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return @value;
					}
					
					
					case 1653170778:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.successful = ((global::List<object>) (global::List<object>.__hx_cast<object>(((global::List) (@value) ))) );
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return @value;
					}
					
					
					case 143865495:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.warnings = ((global::List<object>) (global::List<object>.__hx_cast<object>(((global::List) (@value) ))) );
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return @value;
					}
					
					
					case 2068637909:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.fails = ((global::List<object>) (global::List<object>.__hx_cast<object>(((global::List) (@value) ))) );
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return @value;
					}
					
					
					case 1092664259:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.cases = ((global::List<object>) (global::List<object>.__hx_cast<object>(((global::List) (@value) ))) );
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return @value;
					}
					
					
					case 2112214707:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.writer = ((global::hunit.report.IReportWriter) (@value) );
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return @value;
					}
					
					
					case 772728475:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.spentTime = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return @value;
					}
					
					
					case 790726024:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						if (handleProperties) {
							#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
							this.set_endTime(((double) (global::haxe.lang.Runtime.toDouble(@value)) ));
							#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
							return @value;
						}
						else {
							#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
							this.endTime = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
							#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
							return @value;
						}
						
					}
					
					
					case 99632527:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.startTime = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return @value;
					}
					
					
					default:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				switch (hash) {
					case 1422481140:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "get_testCount", 1422481140)) );
					}
					
					
					case 1065938091:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "set_endTime", 1065938091)) );
					}
					
					
					case 1347064112:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "getSummary", 1347064112)) );
					}
					
					
					case 209784577:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "output", 209784577)) );
					}
					
					
					case 1776094489:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "addNotice", 1776094489)) );
					}
					
					
					case 143808832:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "addSkip", 143808832)) );
					}
					
					
					case 1901463099:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "addWarning", 1901463099)) );
					}
					
					
					case 534270370:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "addSuccess", 534270370)) );
					}
					
					
					case 2146630815:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "addFail", 2146630815)) );
					}
					
					
					case 113389229:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.assertionCount;
					}
					
					
					case 325419805:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.get_testCount();
					}
					
					
					case 1342455131:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.notices;
					}
					
					
					case 902043568:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.skipped;
					}
					
					
					case 1653170778:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.successful;
					}
					
					
					case 143865495:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.warnings;
					}
					
					
					case 2068637909:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.fails;
					}
					
					
					case 1092664259:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.cases;
					}
					
					
					case 2112214707:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.writer;
					}
					
					
					case 772728475:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.spentTime;
					}
					
					
					case 790726024:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.endTime;
					}
					
					
					case 99632527:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.startTime;
					}
					
					
					default:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				switch (hash) {
					case 113389229:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((double) (this.assertionCount) );
					}
					
					
					case 325419805:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return ((double) (this.get_testCount()) );
					}
					
					
					case 772728475:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.spentTime;
					}
					
					
					case 790726024:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.endTime;
					}
					
					
					case 99632527:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.startTime;
					}
					
					
					default:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				switch (hash) {
					case 1422481140:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.get_testCount();
					}
					
					
					case 1065938091:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.set_endTime(((double) (global::haxe.lang.Runtime.toDouble(dynargs[0])) ));
					}
					
					
					case 1347064112:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return this.getSummary();
					}
					
					
					case 209784577:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.output();
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						break;
					}
					
					
					case 1776094489:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.addNotice(((global::hunit.TestCase) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]), global::haxe.lang.Runtime.toString(dynargs[2]), dynargs[3]);
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						break;
					}
					
					
					case 143808832:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.addSkip(((global::hunit.TestCase) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]), ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (dynargs[2]) ))) ));
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						break;
					}
					
					
					case 1901463099:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.addWarning(((global::hunit.TestCase) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]), ((global::hunit.warnings.Warning) (dynargs[2]) ));
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						break;
					}
					
					
					case 534270370:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.addSuccess(((global::hunit.TestCase) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]));
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						break;
					}
					
					
					case 2146630815:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						this.addFail(((global::hunit.TestCase) (dynargs[0]) ), global::haxe.lang.Runtime.toString(dynargs[1]), ((global::Exception) (dynargs[2]) ));
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						break;
					}
					
					
					default:
					{
						#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			baseArr.push("assertionCount");
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			baseArr.push("testCount");
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			baseArr.push("notices");
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			baseArr.push("skipped");
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			baseArr.push("successful");
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			baseArr.push("warnings");
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			baseArr.push("fails");
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			baseArr.push("cases");
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			baseArr.push("writer");
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			baseArr.push("spentTime");
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			baseArr.push("endTime");
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			baseArr.push("startTime");
			#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
			{
				#line 19 "/home/alex/Work/HaXe/hunit/src/hunit/report/TestReport.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


