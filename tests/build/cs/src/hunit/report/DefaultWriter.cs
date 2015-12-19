
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hunit.report {
	public class DefaultWriter : global::haxe.lang.HxObject, global::hunit.report.IReportWriter {
		
		public DefaultWriter(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public DefaultWriter(global::haxe.lang.Function printer) {
			#line 29 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			global::hunit.report.DefaultWriter.__hx_ctor_hunit_report_DefaultWriter(this, printer);
		}
		#line default
		
		public static void __hx_ctor_hunit_report_DefaultWriter(global::hunit.report.DefaultWriter __temp_me115, global::haxe.lang.Function printer) {
			#line 20 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			__temp_me115.itemsWriteCounter = 0;
			#line 31 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			__temp_me115.printer = printer;
		}
		#line default
		
		public static new object __hx_createEmpty() {
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			return new global::hunit.report.DefaultWriter(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		#line default
		
		public static new object __hx_create(global::Array arr) {
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			return new global::hunit.report.DefaultWriter(((global::haxe.lang.Function) (arr[0]) ));
		}
		#line default
		
		public int itemsWriteCounter;
		
		public global::haxe.lang.Function printer;
		
		public virtual void write(global::hunit.report.TestReport report) {
			unchecked {
				#line 41 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				if (( report.notices.length > 0 )) {
					#line 42 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					this.printer.__hx_invoke1_o(default(double), "NOTICES:\n\n");
					#line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					{
						#line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						global::Array _g_head = report.notices.h;
						#line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						object _g_val = null;
						#line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						while (( _g_head != null )) {
							#line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
							object notice = null;
							#line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
							object __temp_stmt1 = null;
							#line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
							{
								#line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
								_g_val = _g_head[0];
								#line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
								_g_head = ((global::Array) (_g_head[1]) );
								#line 39 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
								__temp_stmt1 = _g_val;
							}
							
							#line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
							notice = ((object) (__temp_stmt1) );
							this.writeNotice(notice);
						}
						
					}
					
				}
				
				#line 49 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				this.itemsWriteCounter = 0;
				#line 51 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				if (( report.fails.length > 0 )) {
					#line 52 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					this.printer.__hx_invoke1_o(default(double), "FAILURES:\n\n");
					#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					{
						#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						global::Array _g_head1 = report.fails.h;
						#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						object _g_val1 = null;
						#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						while (( _g_head1 != null )) {
							#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
							object fail = null;
							#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
							object __temp_stmt2 = null;
							#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
							{
								#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
								_g_val1 = _g_head1[0];
								#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
								_g_head1 = ((global::Array) (_g_head1[1]) );
								#line 39 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
								__temp_stmt2 = _g_val1;
							}
							
							#line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
							fail = ((object) (__temp_stmt2) );
							this.writeFail(fail);
						}
						
					}
					
				}
				
				#line 59 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				this.itemsWriteCounter = 0;
				#line 61 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				if (( report.warnings.length > 0 )) {
					#line 62 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					this.printer.__hx_invoke1_o(default(double), "WARNINGS:\n\n");
					#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					{
						#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						global::Array _g_head2 = report.warnings.h;
						#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						object _g_val2 = null;
						#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						while (( _g_head2 != null )) {
							#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
							object warning = null;
							#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
							object __temp_stmt3 = null;
							#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
							{
								#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
								_g_val2 = _g_head2[0];
								#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
								_g_head2 = ((global::Array) (_g_head2[1]) );
								#line 39 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
								__temp_stmt3 = _g_val2;
							}
							
							#line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
							warning = ((object) (__temp_stmt3) );
							this.writeWarning(warning);
						}
						
					}
					
				}
				
			}
			#line default
		}
		
		
		public virtual void writeFail(object item) {
			#line 77 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			object pos = ((global::Exception) (global::haxe.lang.Runtime.getField(item, "exception", 1234833487, true)) ).pos;
			string message = ((global::Exception) (global::haxe.lang.Runtime.getField(item, "exception", 1234833487, true)) ).message;
			global::Exception e = ((global::Exception) (global::haxe.lang.Runtime.getField(item, "exception", 1234833487, true)) );
			#line 81 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			if (( e is global::hunit.exceptions.TestFailException )) {
				#line 82 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				if (( e is global::hunit.exceptions.UnexpectedCallException )) {
					#line 83 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					pos = null;
					message = global::haxe.lang.Runtime.concat(message, global::StringTools.replace((((global::Exception) (e) )).stringStack(), "\n", "\n\t"));
				}
				
			}
			else {
				#line 88 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				pos = null;
				#line 90 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				bool customMessage = false;
				if (( e is global::hunit.exceptions.UnexpectedException )) {
					#line 92 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					global::hunit.exceptions.UnexpectedException e1 = null;
					#line 92 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					e1 = ((global::hunit.exceptions.UnexpectedException) (e) );
					customMessage = true;
					#line 95 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					if (( e1.original is global::Exception )) {
						#line 96 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						message = global::haxe.lang.Runtime.concat("ERROR: ", (((global::Exception) (e1.original) )).toString());
					}
					else {
						#line 98 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						message = global::haxe.lang.Runtime.concat("ERROR: ", global::Std.@string(e1));
					}
					
				}
				
				#line 102 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				if ( ! (customMessage) ) {
					#line 103 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					message = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("ERROR: ", e.message), "\n\n"), e.toString());
				}
				
			}
			
			#line 107 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			this.writeItem(global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(item, "caseName", 914347291, true)), global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(item, "testName", 1278343101, true)), message, pos, default(global::haxe.lang.Null<bool>));
		}
		#line default
		
		public virtual void writeWarning(object item) {
			#line 117 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			this.writeItem(global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(item, "caseName", 914347291, true)), global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(item, "testName", 1278343101, true)), ((global::hunit.warnings.Warning) (global::haxe.lang.Runtime.getField(item, "warning", 164354652, true)) ).message, null, default(global::haxe.lang.Null<bool>));
		}
		#line default
		
		public virtual void writeNotice(object item) {
			#line 127 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			this.writeItem(global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(item, "caseName", 914347291, true)), global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(item, "testName", 1278343101, true)), global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(item, "message", 437335495, true)), global::haxe.lang.Runtime.getField(item, "pos", 5594516, true), new global::haxe.lang.Null<bool>(true, true));
		}
		#line default
		
		public virtual void writeItem(string caseName, string test, string message, object pos, global::haxe.lang.Null<bool> addPosToTestName) {
			#line 136 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			bool __temp_addPosToTestName114 = ( ( ! (addPosToTestName.hasValue) ) ? (false) : ((addPosToTestName).@value) );
			this.itemsWriteCounter++;
			#line 139 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			int idx = this.itemsWriteCounter;
			#line 141 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			string posStr = null;
			#line 141 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			if (( pos == null )) {
				#line 141 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				posStr = "";
			}
			else {
				#line 141 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				posStr = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("", global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(pos, "fileName", 1648581351, true))), ":"), global::haxe.lang.Runtime.toString(((int) (global::haxe.lang.Runtime.getField_f(pos, "lineNumber", 1981972957, true)) )));
			}
			
			#line 143 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			this.printer.__hx_invoke1_o(default(double), global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("", global::haxe.lang.Runtime.toString(idx)), ") "), caseName), "::"), test), "()"), (( (__temp_addPosToTestName114) ? (global::haxe.lang.Runtime.concat(" at ", posStr)) : ("") ))), "\n"));
			this.printer.__hx_invoke1_o(default(double), global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("", message), "\n"));
			this.printer.__hx_invoke1_o(default(double), "\n");
			#line 147 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			if (( ( pos != null ) &&  ! (__temp_addPosToTestName114)  )) {
				#line 148 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				this.printer.__hx_invoke1_o(default(double), global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\t", posStr), "\n"));
				this.printer.__hx_invoke1_o(default(double), "\n");
			}
			
		}
		#line default
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				switch (hash) {
					case 586763261:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						this.itemsWriteCounter = ((int) (@value) );
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return @value;
					}
					
					
					default:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				switch (hash) {
					case 70505946:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						this.printer = ((global::haxe.lang.Function) (@value) );
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return @value;
					}
					
					
					case 586763261:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						this.itemsWriteCounter = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return @value;
					}
					
					
					default:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				switch (hash) {
					case 1316206994:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "writeItem", 1316206994)) );
					}
					
					
					case 1186081367:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "writeNotice", 1186081367)) );
					}
					
					
					case 1325039421:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "writeWarning", 1325039421)) );
					}
					
					
					case 1281994333:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "writeFail", 1281994333)) );
					}
					
					
					case 1348037855:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "write", 1348037855)) );
					}
					
					
					case 70505946:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return this.printer;
					}
					
					
					case 586763261:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return this.itemsWriteCounter;
					}
					
					
					default:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				switch (hash) {
					case 586763261:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return ((double) (this.itemsWriteCounter) );
					}
					
					
					default:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
			#line default
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				switch (hash) {
					case 1316206994:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						this.writeItem(global::haxe.lang.Runtime.toString(dynargs[0]), global::haxe.lang.Runtime.toString(dynargs[1]), global::haxe.lang.Runtime.toString(dynargs[2]), dynargs[3], global::haxe.lang.Null<object>.ofDynamic<bool>(dynargs[4]));
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						break;
					}
					
					
					case 1186081367:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						this.writeNotice(dynargs[0]);
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						break;
					}
					
					
					case 1325039421:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						this.writeWarning(dynargs[0]);
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						break;
					}
					
					
					case 1281994333:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						this.writeFail(dynargs[0]);
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						break;
					}
					
					
					case 1348037855:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						this.write(((global::hunit.report.TestReport) (dynargs[0]) ));
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						break;
					}
					
					
					default:
					{
						#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				return null;
			}
			#line default
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			baseArr.push("printer");
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			baseArr.push("itemsWriteCounter");
			#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			{
				#line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				base.__hx_getFields(baseArr);
			}
			
		}
		#line default
		
	}
}


