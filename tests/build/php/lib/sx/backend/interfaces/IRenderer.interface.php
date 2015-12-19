<?php

interface sx_backend_interfaces_IRenderer {
	function getWidth();
	function getHeight();
	function onResize($callback);
	function setAvailableAreaWidth($width);
	function setAvailableAreaHeight($height);
	function dispose();
}
