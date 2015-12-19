<?php

interface sx_backend_interfaces_IBitmapRenderer extends sx_backend_interfaces_IRenderer{
	function setBitmapData($bitmapData);
	function getBitmapDataWidth();
	function getBitmapDataHeight();
	function setBitmapScale($scaleX, $scaleY);
	function setBitmapSmoothing($smoothing);
}
