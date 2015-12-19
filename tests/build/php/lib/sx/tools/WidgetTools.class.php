<?php

class sx_tools_WidgetTools {
	public function __construct(){}
	static function sizeDependsOnParent($widget) {
		$GLOBALS['%s']->push("sx.tools.WidgetTools::sizeDependsOnParent");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $widget->get_width()->units === "pct" || $widget->get_height()->units === "pct";
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function positionDependsOnParent($widget) {
		$GLOBALS['%s']->push("sx.tools.WidgetTools::positionDependsOnParent");
		$__hx__spos = $GLOBALS['%s']->length;
		$left = $widget->get_left();
		if($left->selected && $left->units === "pct") {
			$GLOBALS['%s']->pop();
			return true;
		}
		if($widget->get_right()->selected) {
			$GLOBALS['%s']->pop();
			return true;
		}
		$top = $widget->get_top();
		if($top->selected && $top->units === "pct") {
			$GLOBALS['%s']->pop();
			return true;
		}
		if($widget->get_bottom()->selected) {
			$GLOBALS['%s']->pop();
			return true;
		}
		{
			$GLOBALS['%s']->pop();
			return false;
		}
		$GLOBALS['%s']->pop();
	}
	static function positionDependsOnSize($widget) {
		$GLOBALS['%s']->push("sx.tools.WidgetTools::positionDependsOnSize");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $widget->get_bottom()->selected || $widget->get_right()->selected;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function coordinate($widget, $side) {
		$GLOBALS['%s']->push("sx.tools.WidgetTools::coordinate");
		$__hx__spos = $GLOBALS['%s']->length;
		switch($side) {
		case "left":{
			$tmp = $widget->get_left();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "right":{
			$tmp = $widget->get_right();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "top":{
			$tmp = $widget->get_top();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "bottom":{
			$tmp = $widget->get_bottom();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		}
		$GLOBALS['%s']->pop();
	}
	static function selectedCoordinate($widget, $orientation) {
		$GLOBALS['%s']->push("sx.tools.WidgetTools::selectedCoordinate");
		$__hx__spos = $GLOBALS['%s']->length;
		switch($orientation) {
		case "horizontal":{
			if($widget->get_left()->selected) {
				$tmp = $widget->get_left();
				$GLOBALS['%s']->pop();
				return $tmp;
			} else {
				$tmp = $widget->get_right();
				$GLOBALS['%s']->pop();
				return $tmp;
			}
		}break;
		case "vertical":{
			if($widget->get_top()->selected) {
				$tmp = $widget->get_top();
				$GLOBALS['%s']->pop();
				return $tmp;
			} else {
				$tmp = $widget->get_bottom();
				$GLOBALS['%s']->pop();
				return $tmp;
			}
		}break;
		}
		$GLOBALS['%s']->pop();
	}
	static function selectedSide($widget, $orientation) {
		$GLOBALS['%s']->push("sx.tools.WidgetTools::selectedSide");
		$__hx__spos = $GLOBALS['%s']->length;
		switch($orientation) {
		case "horizontal":{
			if($widget->get_left()->selected) {
				$tmp = "left";
				$GLOBALS['%s']->pop();
				return $tmp;
			} else {
				$tmp = "right";
				$GLOBALS['%s']->pop();
				return $tmp;
			}
		}break;
		case "vertical":{
			if($widget->get_top()->selected) {
				$tmp = "top";
				$GLOBALS['%s']->pop();
				return $tmp;
			} else {
				$tmp = "bottom";
				$GLOBALS['%s']->pop();
				return $tmp;
			}
		}break;
		}
		$GLOBALS['%s']->pop();
	}
	static function size($widget, $orientation) {
		$GLOBALS['%s']->push("sx.tools.WidgetTools::size");
		$__hx__spos = $GLOBALS['%s']->length;
		switch($orientation) {
		case "horizontal":{
			$tmp = $widget->get_width();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		case "vertical":{
			$tmp = $widget->get_height();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		}
		$GLOBALS['%s']->pop();
	}
	static function findEnabled($widget) {
		$GLOBALS['%s']->push("sx.tools.WidgetTools::findEnabled");
		$__hx__spos = $GLOBALS['%s']->length;
		$current = $widget;
		$useNextEnabled = false;
		while($current !== null) {
			if($useNextEnabled) {
				if($current->enabled) {
					$widget = $current;
					$useNextEnabled = false;
					break;
				}
			} else {
				if(!$current->enabled) {
					$useNextEnabled = true;
				}
			}
			$current = $current->get_parent();
		}
		if($useNextEnabled) {
			$widget = null;
		}
		{
			$GLOBALS['%s']->pop();
			return $widget;
		}
		$GLOBALS['%s']->pop();
	}
	static function hasOrigin($widget) {
		$GLOBALS['%s']->push("sx.tools.WidgetTools::hasOrigin");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $widget->__origin !== null;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function hasOffset($widget) {
		$GLOBALS['%s']->push("sx.tools.WidgetTools::hasOffset");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $widget->__offset !== null;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function isArrangeable($widget) {
		$GLOBALS['%s']->push("sx.tools.WidgetTools::isArrangeable");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $widget->arrangeable && $widget->visible;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'sx.tools.WidgetTools'; }
}
