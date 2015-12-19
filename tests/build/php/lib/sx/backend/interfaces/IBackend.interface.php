<?php

interface sx_backend_interfaces_IBackend {
	function addWidget($child);
	function addWidgetAt($child, $index);
	function removeWidget($child);
	function removeWidgetAt($index);
	function getWidgetIndex($child);
	function setWidgetIndex($child, $index);
	function getWidgetAt($index);
	function swapWidgets($child1, $child2);
	function swapWidgetsAt($index1, $index2);
	function widgetGlobalToLocal($point);
	function widgetLocalToGlobal($point);
	function widgetOriginChanged();
	function widgetOffsetChanged();
	function widgetResized();
	function widgetMoved();
	function widgetRotated();
	function widgetScaledX();
	function widgetScaledY();
	function widgetAlphaChanged();
	function widgetVisibilityChanged();
	function widgetOverflowChanged();
	function widgetSkinChanged();
	function widgetDisposed();
}
