
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sx.backend.interfaces {
	public interface IBackend : global::haxe.lang.IHxObject {
		
		void addWidget(global::sx.widgets.Widget child);
		
		void addWidgetAt(global::sx.widgets.Widget child, int index);
		
		void removeWidget(global::sx.widgets.Widget child);
		
		global::sx.widgets.Widget removeWidgetAt(int index);
		
		int getWidgetIndex(global::sx.widgets.Widget child);
		
		int setWidgetIndex(global::sx.widgets.Widget child, int index);
		
		global::sx.widgets.Widget getWidgetAt(int index);
		
		void swapWidgets(global::sx.widgets.Widget child1, global::sx.widgets.Widget child2);
		
		void swapWidgetsAt(int index1, int index2);
		
		global::sx.backend.dummy.Point widgetGlobalToLocal(global::sx.backend.dummy.Point point);
		
		global::sx.backend.dummy.Point widgetLocalToGlobal(global::sx.backend.dummy.Point point);
		
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
}


