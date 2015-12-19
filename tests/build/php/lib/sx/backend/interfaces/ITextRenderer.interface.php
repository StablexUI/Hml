<?php

interface sx_backend_interfaces_ITextRenderer extends sx_backend_interfaces_IRenderer{
	function setText($text);
	function getFormat();
	function setFormat($format);
}
