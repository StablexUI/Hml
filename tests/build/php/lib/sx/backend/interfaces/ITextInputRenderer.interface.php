<?php

interface sx_backend_interfaces_ITextInputRenderer extends sx_backend_interfaces_IRenderer{
	function onTextChange($callback);
	function onReceiveCursor($callback);
	function onLoseCursor($callback);
	function getText();
	function setText($text);
	function getFormat();
	function setFormat($format);
}
