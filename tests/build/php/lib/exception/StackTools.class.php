<?php

class exception_StackTools {
	public function __construct(){}
	static function truncate($stack, $pos, $fromTop = null) {
		$GLOBALS['%s']->push("exception.StackTools::truncate");
		$__hx__spos = $GLOBALS['%s']->length;
		if($fromTop === null) {
			$fromTop = false;
		}
		{
			$tmp = exception_StackTools::phpTruncate($stack, $pos, $fromTop);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	static function phpTruncate($stack, $pos, $fromTop = null) {
		$GLOBALS['%s']->push("exception.StackTools::phpTruncate");
		$__hx__spos = $GLOBALS['%s']->length;
		if($fromTop === null) {
			$fromTop = false;
		}
		$posIndex = 0;
		$from = null;
		if($fromTop) {
			$from = $stack->length - 1;
		} else {
			$from = 0;
		}
		$till = null;
		if($fromTop) {
			$till = -1;
		} else {
			$till = $stack->length;
		}
		{
			$_g_current = 0;
			$_g_till = 0;
			$_g_current1 = $from;
			$_g_till1 = $till;
			while($_g_current1 !== $_g_till1) {
				$i = null;
				if($_g_current1 < $_g_till1) {
					$i = $_g_current1++;
				} else {
					$i = $_g_current1--;
				}
				{
					$_g = $stack[$i];
					switch($_g->index) {
					case 3:{
						$methodName = _hx_deref($_g)->params[1];
						$className = _hx_deref($_g)->params[0];
						if($className === $pos->className && $methodName === $pos->methodName) {
							$posIndex = $i;
							break 2;
						}
					}break;
					default:{}break;
					}
					unset($_g);
				}
				unset($i);
			}
		}
		if($fromTop) {
			$tmp = $stack->slice(0, $posIndex + 1);
			$GLOBALS['%s']->pop();
			return $tmp;
		} else {
			$tmp = $stack->slice($posIndex, null);
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	function __toString() { return 'exception.StackTools'; }
}
