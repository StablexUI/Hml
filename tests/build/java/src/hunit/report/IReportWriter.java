package hunit.report;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public interface IReportWriter extends haxe.lang.IHxObject
{
	void write(hunit.report.TestReport report);
	
}


