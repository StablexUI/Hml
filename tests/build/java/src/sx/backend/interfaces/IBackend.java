package sx.backend.interfaces;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public interface IBackend extends haxe.lang.IHxObject
{
	void addWidget(sx.widgets.Widget child);
	
	void addWidgetAt(sx.widgets.Widget child, int index);
	
	void removeWidget(sx.widgets.Widget child);
	
	sx.widgets.Widget removeWidgetAt(int index);
	
	int getWidgetIndex(sx.widgets.Widget child);
	
	int setWidgetIndex(sx.widgets.Widget child, int index);
	
	sx.widgets.Widget getWidgetAt(int index);
	
	void swapWidgets(sx.widgets.Widget child1, sx.widgets.Widget child2);
	
	void swapWidgetsAt(int index1, int index2);
	
	sx.backend.dummy.Point widgetGlobalToLocal(sx.backend.dummy.Point point);
	
	sx.backend.dummy.Point widgetLocalToGlobal(sx.backend.dummy.Point point);
	
	void widgetOriginChanged();
	
	void widgetOffsetChanged();
	
	void widgetResized();
	
	void widgetMoved();
	
	void widgetRotated();
	
	void widgetScaledX();
	
	void widgetScaledY();
	
	void widgetAlphaChanged();
	
	void widgetVisibilityChanged();
	
	void widgetOverflowChanged();
	
	void widgetSkinChanged();
	
	void widgetDisposed();
	
}


