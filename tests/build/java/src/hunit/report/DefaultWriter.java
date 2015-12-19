package hunit.report;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class DefaultWriter extends haxe.lang.HxObject implements hunit.report.IReportWriter
{
	public DefaultWriter(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public DefaultWriter(haxe.lang.Function printer)
	{
		//line 29 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		hunit.report.DefaultWriter.__hx_ctor_hunit_report_DefaultWriter(this, printer);
	}
	
	
	public static void __hx_ctor_hunit_report_DefaultWriter(hunit.report.DefaultWriter __temp_me92, haxe.lang.Function printer)
	{
		//line 20 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		__temp_me92.itemsWriteCounter = 0;
		//line 31 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		__temp_me92.printer = printer;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		return new hunit.report.DefaultWriter(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		return new hunit.report.DefaultWriter(((haxe.lang.Function) (arr.__get(0)) ));
	}
	
	
	public int itemsWriteCounter;
	
	public haxe.lang.Function printer;
	
	public void write(hunit.report.TestReport report)
	{
		//line 41 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		if (( report.notices.length > 0 )) 
		{
			//line 42 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			this.printer.__hx_invoke1_o(0.0, "NOTICES:\n\n");
			//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			{
				//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				haxe.root.Array _g_head = report.notices.h;
				//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				java.lang.Object _g_val = null;
				//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				while (( _g_head != null ))
				{
					//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					java.lang.Object notice = null;
					//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					java.lang.Object __temp_stmt1 = null;
					//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					{
						//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						_g_val = _g_head.__get(0);
						//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						_g_head = ((haxe.root.Array) (_g_head.__get(1)) );
						//line 39 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_stmt1 = _g_val;
					}
					
					//line 44 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					notice = ((java.lang.Object) (__temp_stmt1) );
					//line 45 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					this.writeNotice(notice);
				}
				
			}
			
		}
		
		//line 49 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		this.itemsWriteCounter = 0;
		//line 51 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		if (( report.fails.length > 0 )) 
		{
			//line 52 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			this.printer.__hx_invoke1_o(0.0, "FAILURES:\n\n");
			//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			{
				//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				haxe.root.Array _g_head1 = report.fails.h;
				//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				java.lang.Object _g_val1 = null;
				//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				while (( _g_head1 != null ))
				{
					//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					java.lang.Object fail = null;
					//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					java.lang.Object __temp_stmt2 = null;
					//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					{
						//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						_g_val1 = _g_head1.__get(0);
						//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						_g_head1 = ((haxe.root.Array) (_g_head1.__get(1)) );
						//line 39 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_stmt2 = _g_val1;
					}
					
					//line 54 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					fail = ((java.lang.Object) (__temp_stmt2) );
					//line 55 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					this.writeFail(fail);
				}
				
			}
			
		}
		
		//line 59 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		this.itemsWriteCounter = 0;
		//line 61 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		if (( report.warnings.length > 0 )) 
		{
			//line 62 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			this.printer.__hx_invoke1_o(0.0, "WARNINGS:\n\n");
			//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			{
				//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				haxe.root.Array _g_head2 = report.warnings.h;
				//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				java.lang.Object _g_val2 = null;
				//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				while (( _g_head2 != null ))
				{
					//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					java.lang.Object warning = null;
					//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					java.lang.Object __temp_stmt3 = null;
					//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					{
						//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						_g_val2 = _g_head2.__get(0);
						//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						_g_head2 = ((haxe.root.Array) (_g_head2.__get(1)) );
						//line 39 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_stmt3 = _g_val2;
					}
					
					//line 64 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					warning = ((java.lang.Object) (__temp_stmt3) );
					//line 65 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					this.writeWarning(warning);
				}
				
			}
			
		}
		
	}
	
	
	public void writeFail(java.lang.Object item)
	{
		//line 77 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		java.lang.Object pos = ((haxe.root.Exception) (haxe.lang.Runtime.getField(item, "exception", true)) ).pos;
		//line 78 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		java.lang.String message = ((haxe.root.Exception) (haxe.lang.Runtime.getField(item, "exception", true)) ).message;
		//line 79 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		haxe.root.Exception e = ((haxe.root.Exception) (haxe.lang.Runtime.getField(item, "exception", true)) );
		//line 81 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		if (( e instanceof hunit.exceptions.TestFailException )) 
		{
			//line 82 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			if (( e instanceof hunit.exceptions.UnexpectedCallException )) 
			{
				//line 83 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				pos = null;
				//line 84 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				message += haxe.root.StringTools.replace((((haxe.root.Exception) (e) )).stringStack(), "\n", "\n\t");
			}
			
		}
		else
		{
			//line 88 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			pos = null;
			//line 90 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			boolean customMessage = false;
			//line 91 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			if (( e instanceof hunit.exceptions.UnexpectedException )) 
			{
				//line 92 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				hunit.exceptions.UnexpectedException e1 = null;
				//line 92 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				e1 = ((hunit.exceptions.UnexpectedException) (e) );
				//line 93 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				customMessage = true;
				//line 95 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				if (( e1.original instanceof haxe.root.Exception )) 
				{
					//line 96 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					message = ( "ERROR: " + (((haxe.root.Exception) (e1.original) )).toString() );
				}
				else
				{
					//line 98 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					message = ( "ERROR: " + haxe.root.Std.string(e1) );
				}
				
			}
			
			//line 102 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			if ( ! (customMessage) ) 
			{
				//line 103 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				message = ( ( ( "ERROR: " + e.message ) + "\n\n" ) + e.toString() );
			}
			
		}
		
		//line 107 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		this.writeItem(haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(item, "caseName", true)), haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(item, "testName", true)), message, pos, null);
	}
	
	
	public void writeWarning(java.lang.Object item)
	{
		//line 117 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		this.writeItem(haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(item, "caseName", true)), haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(item, "testName", true)), ((hunit.warnings.Warning) (haxe.lang.Runtime.getField(item, "warning", true)) ).message, null, null);
	}
	
	
	public void writeNotice(java.lang.Object item)
	{
		//line 127 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		this.writeItem(haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(item, "caseName", true)), haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(item, "testName", true)), haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(item, "message", true)), haxe.lang.Runtime.getField(item, "pos", true), true);
	}
	
	
	public void writeItem(java.lang.String caseName, java.lang.String test, java.lang.String message, java.lang.Object pos, java.lang.Object addPosToTestName)
	{
		//line 136 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		boolean __temp_addPosToTestName91 = ( (haxe.lang.Runtime.eq(addPosToTestName, null)) ? (false) : (haxe.lang.Runtime.toBool(addPosToTestName)) );
		//line 137 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		this.itemsWriteCounter++;
		//line 139 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		int idx = this.itemsWriteCounter;
		//line 141 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		java.lang.String posStr = null;
		//line 141 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		if (( pos == null )) 
		{
			//line 141 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			posStr = "";
		}
		else
		{
			//line 141 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			posStr = ( ( ( "" + haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(pos, "fileName", true)) ) + ":" ) + ((int) (haxe.lang.Runtime.getField_f(pos, "lineNumber", true)) ) );
		}
		
		//line 143 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		this.printer.__hx_invoke1_o(0.0, ( ( ( ( ( ( ( ( "" + idx ) + ") " ) + caseName ) + "::" ) + test ) + "()" ) + (( (__temp_addPosToTestName91) ? (( " at " + posStr )) : ("") )) ) + "\n" ));
		//line 144 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		this.printer.__hx_invoke1_o(0.0, ( ( "" + message ) + "\n" ));
		//line 145 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		this.printer.__hx_invoke1_o(0.0, "\n");
		//line 147 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		if (( ( ! (( pos == null )) ) &&  ! (__temp_addPosToTestName91)  )) 
		{
			//line 148 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			this.printer.__hx_invoke1_o(0.0, ( ( "\t" + posStr ) + "\n" ));
			//line 149 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			this.printer.__hx_invoke1_o(0.0, "\n");
		}
		
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		{
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			boolean __temp_executeDef1 = true;
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			switch (field.hashCode())
			{
				case -199268099:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					if (field.equals("itemsWriteCounter")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						this.itemsWriteCounter = ((int) (value) );
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return value;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					break;
				}
				
				
			}
			
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			if (__temp_executeDef1) 
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		{
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			boolean __temp_executeDef1 = true;
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			switch (field.hashCode())
			{
				case -314718182:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					if (field.equals("printer")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						this.printer = ((haxe.lang.Function) (value) );
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return value;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					break;
				}
				
				
				case -199268099:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					if (field.equals("itemsWriteCounter")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						this.itemsWriteCounter = ((int) (haxe.lang.Runtime.toInt(value)) );
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return value;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					break;
				}
				
				
			}
			
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			if (__temp_executeDef1) 
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		{
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			boolean __temp_executeDef1 = true;
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			switch (field.hashCode())
			{
				case -1406648430:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					if (field.equals("writeItem")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "writeItem")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					break;
				}
				
				
				case -199268099:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					if (field.equals("itemsWriteCounter")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return this.itemsWriteCounter;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					break;
				}
				
				
				case 1264531351:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					if (field.equals("writeNotice")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "writeNotice")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					break;
				}
				
				
				case -314718182:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					if (field.equals("printer")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return this.printer;
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					break;
				}
				
				
				case -459135299:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					if (field.equals("writeWarning")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "writeWarning")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					break;
				}
				
				
				case 113399775:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					if (field.equals("write")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "write")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					break;
				}
				
				
				case -1406755939:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					if (field.equals("writeFail")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "writeFail")) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					break;
				}
				
				
			}
			
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			if (__temp_executeDef1) 
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		{
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			boolean __temp_executeDef1 = true;
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			switch (field.hashCode())
			{
				case -199268099:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					if (field.equals("itemsWriteCounter")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						return ((double) (this.itemsWriteCounter) );
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					break;
				}
				
				
			}
			
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			if (__temp_executeDef1) 
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		{
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			boolean __temp_executeDef1 = true;
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			switch (field.hashCode())
			{
				case -1406648430:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					if (field.equals("writeItem")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						this.writeItem(haxe.lang.Runtime.toString(dynargs.__get(0)), haxe.lang.Runtime.toString(dynargs.__get(1)), haxe.lang.Runtime.toString(dynargs.__get(2)), dynargs.__get(3), dynargs.__get(4));
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					break;
				}
				
				
				case 113399775:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					if (field.equals("write")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						this.write(((hunit.report.TestReport) (dynargs.__get(0)) ));
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					break;
				}
				
				
				case 1264531351:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					if (field.equals("writeNotice")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						this.writeNotice(dynargs.__get(0));
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					break;
				}
				
				
				case -1406755939:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					if (field.equals("writeFail")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						this.writeFail(dynargs.__get(0));
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					break;
				}
				
				
				case -459135299:
				{
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					if (field.equals("writeWarning")) 
					{
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						__temp_executeDef1 = false;
						//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
						this.writeWarning(dynargs.__get(0));
					}
					
					//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
					break;
				}
				
				
			}
			
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			if (__temp_executeDef1) 
			{
				//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		baseArr.push("printer");
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		baseArr.push("itemsWriteCounter");
		//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
		{
			//line 17 "/home/alex/Work/HaXe/hunit/src/hunit/report/DefaultWriter.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


