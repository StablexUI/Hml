<?php

interface sx_backend_interfaces_IBackendManager {
	function setupPointerDevices();
	function setupFrames();
	function getRoot();
	function getPointerPosition($touchId = null);
	function widgetBackend($widget);
	function textRenderer($textField);
	function textInputRenderer($textInput);
	function bitmapRenderer($bmp);
}
