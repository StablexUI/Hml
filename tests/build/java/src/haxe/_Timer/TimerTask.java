package haxe._Timer;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TimerTask extends java.util.TimerTask
{
	public TimerTask()
	{
		//line 1 "/home/alex/haxelib/hxjava/3,2,0/lib/hxjava-std.jar@java/util/TimerTask.class (<init>)"
		super();
	}
	
	
	public haxe.Timer timer;
	
	@Override public void run()
	{
		//line 184 "/usr/lib/haxe/std/haxe/Timer.hx"
		this.timer.run.__hx_invoke0_o();
	}
	
	
}


