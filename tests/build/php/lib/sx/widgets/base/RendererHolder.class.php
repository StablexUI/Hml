<?php

class sx_widgets_base_RendererHolder extends sx_widgets_Widget {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__adjustingSize = false;
		$this->__rendererOnResizeIsSet = false;
		parent::__construct();
		$this->__padding = new sx_properties_metric_Padding();
		$this->__padding->ownerWidth = (isset($this->__widthProviderForPadding) ? $this->__widthProviderForPadding: array($this, "__widthProviderForPadding"));
		$this->__padding->ownerHeight = (isset($this->__heightProviderForPadding) ? $this->__heightProviderForPadding: array($this, "__heightProviderForPadding"));
		$this->__padding->onComponentsChange->add((isset($this->__paddingChanged) ? $this->__paddingChanged: array($this, "__paddingChanged")));
		$this->set_autoSize(new sx_properties_AutoSize(true));
		$this->autoSize->onChange->add((isset($this->__autoSizeChanged) ? $this->__autoSizeChanged: array($this, "__autoSizeChanged")));
		$this->__createRenderer();
		{
			$this->get___renderer()->onResize((isset($this->__rendererResized) ? $this->__rendererResized: array($this, "__rendererResized")));
			$this->__rendererOnResizeIsSet = true;
		}
		$rendererWidth = $this->get___renderer()->getWidth();
		$rendererHeight = $this->get___renderer()->getHeight();
		if(!_hx_equal($rendererWidth, 0) || !_hx_equal($rendererHeight, 0) || !sx_tools_PaddingTools::isZero($this->get_padding())) {
			{
				$size = $this->get_width();
				$this->__adjustingSize = true;
				$size->set_px($rendererWidth + sx_tools_PaddingTools::sumPx($this->get_padding(), $size->orientation));
				$this->__adjustingSize = false;
			}
			{
				$size1 = $this->get_height();
				$this->__adjustingSize = true;
				$size1->set_px($rendererHeight + sx_tools_PaddingTools::sumPx($this->get_padding(), $size1->orientation));
				$this->__adjustingSize = false;
			}
		}
		$GLOBALS['%s']->pop();
	}}
	public $autoSize;
	public $__padding;
	public $__rendererOnResizeIsSet;
	public $__adjustingSize;
	public $__helperSize;
	public function dispose($disposeChildren = null) {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::dispose");
		$__hx__spos = $GLOBALS['%s']->length;
		if($disposeChildren === null) {
			$disposeChildren = true;
		}
		parent::dispose($disposeChildren);
		{
			$this->get___renderer()->onResize(null);
			$this->__rendererOnResizeIsSet = false;
		}
		$this->get___renderer()->dispose();
		$GLOBALS['%s']->pop();
	}
	public function __createRenderer() {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::__createRenderer");
		$__hx__spos = $GLOBALS['%s']->length;
		$GLOBALS['%s']->pop();
	}
	public function __autoSizeChanged($widthChanged, $heightChanged) {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::__autoSizeChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__rendererOnResizeIsSet) {
			if($this->autoSize->neither()) {
				$this->get___renderer()->onResize(null);
				$this->__rendererOnResizeIsSet = false;
			}
		} else {
			if($this->autoSize->either()) {
				$this->get___renderer()->onResize((isset($this->__rendererResized) ? $this->__rendererResized: array($this, "__rendererResized")));
				$this->__rendererOnResizeIsSet = true;
			}
		}
		if($widthChanged) {
			if($this->autoSize->get_width()) {
				$size = $this->get_width();
				$rendererSizePx = $this->get___renderer()->getWidth();
				$this->__adjustingSize = true;
				$size->set_px($rendererSizePx + sx_tools_PaddingTools::sumPx($this->get_padding(), $size->orientation));
				$this->__adjustingSize = false;
			} else {
				$this->get___renderer()->setAvailableAreaWidth($this->get_width()->get_px() - sx_tools_PaddingTools::sumPx($this->get_padding(), "horizontal"));
			}
		}
		if($heightChanged) {
			if($this->autoSize->get_height()) {
				$size1 = $this->get_height();
				$rendererSizePx1 = $this->get___renderer()->getHeight();
				$this->__adjustingSize = true;
				$size1->set_px($rendererSizePx1 + sx_tools_PaddingTools::sumPx($this->get_padding(), $size1->orientation));
				$this->__adjustingSize = false;
			} else {
				$this->get___renderer()->setAvailableAreaHeight($this->get_height()->get_px() - sx_tools_PaddingTools::sumPx($this->get_padding(), "vertical"));
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __disableRendererResizeListener() {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::__disableRendererResizeListener");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->get___renderer()->onResize(null);
		$this->__rendererOnResizeIsSet = false;
		$GLOBALS['%s']->pop();
	}
	public function __enableRendererResizeListener() {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::__enableRendererResizeListener");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->get___renderer()->onResize((isset($this->__rendererResized) ? $this->__rendererResized: array($this, "__rendererResized")));
		$this->__rendererOnResizeIsSet = true;
		$GLOBALS['%s']->pop();
	}
	public function __rendererResized($widthPx, $heightPx) {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::__rendererResized");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->autoSize->get_width()) {
			$size = $this->get_width();
			$this->__adjustingSize = true;
			$size->set_px($widthPx + sx_tools_PaddingTools::sumPx($this->get_padding(), $size->orientation));
			$this->__adjustingSize = false;
		}
		if($this->autoSize->get_height()) {
			$size1 = $this->get_height();
			$this->__adjustingSize = true;
			$size1->set_px($heightPx + sx_tools_PaddingTools::sumPx($this->get_padding(), $size1->orientation));
			$this->__adjustingSize = false;
		}
		$GLOBALS['%s']->pop();
	}
	public function __propertyResized($changed, $previousUnits, $previousValue) {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::__propertyResized");
		$__hx__spos = $GLOBALS['%s']->length;
		if(!$this->__adjustingSize) {
			if($changed->orientation === "horizontal") {
				if($this->autoSize->get_width()) {
					$this->autoSize->set_width(false);
				} else {
					$this->get___renderer()->setAvailableAreaWidth($changed->get_px() - sx_tools_PaddingTools::sumPx($this->get_padding(), "horizontal"));
				}
			} else {
				if($this->autoSize->get_height()) {
					$this->autoSize->set_height(false);
				} else {
					$this->get___renderer()->setAvailableAreaHeight($changed->get_px() - sx_tools_PaddingTools::sumPx($this->get_padding(), "vertical"));
				}
			}
		}
		parent::__propertyResized($changed,$previousUnits,$previousValue);
		$GLOBALS['%s']->pop();
	}
	public function __adjustSize($size, $rendererSizePx) {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::__adjustSize");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__adjustingSize = true;
		$size->set_px($rendererSizePx + sx_tools_PaddingTools::sumPx($this->get_padding(), $size->orientation));
		$this->__adjustingSize = false;
		$GLOBALS['%s']->pop();
	}
	public function __paddingChanged($horizontal, $vertical) {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::__paddingChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		if($horizontal) {
			if($this->autoSize->get_width()) {
				$size = $this->get_width();
				$rendererSizePx = $this->get___renderer()->getWidth();
				$this->__adjustingSize = true;
				$size->set_px($rendererSizePx + sx_tools_PaddingTools::sumPx($this->get_padding(), $size->orientation));
				$this->__adjustingSize = false;
			} else {
				$this->get___renderer()->setAvailableAreaWidth($this->get_width()->get_px() - sx_tools_PaddingTools::sumPx($this->get_padding(), "horizontal"));
			}
		}
		if($vertical) {
			if($this->autoSize->get_height()) {
				$size1 = $this->get_height();
				$rendererSizePx1 = $this->get___renderer()->getHeight();
				$this->__adjustingSize = true;
				$size1->set_px($rendererSizePx1 + sx_tools_PaddingTools::sumPx($this->get_padding(), $size1->orientation));
				$this->__adjustingSize = false;
			} else {
				$this->get___renderer()->setAvailableAreaHeight($this->get_height()->get_px() - sx_tools_PaddingTools::sumPx($this->get_padding(), "vertical"));
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __widthProviderForPadding() {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::__widthProviderForPadding");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->autoSize->get_width()) {
			$helperSize = null;
			{
				$paddingSide1 = $this->get_padding()->get_left();
				$paddingSide2 = $this->get_padding()->get_right();
				$rendererSizePx = $this->get___renderer()->getWidth();
				$paddingSide1Px = null;
				{
					$_g = $paddingSide1->units;
					switch($_g) {
					case "pct":{
						$rendererSize = null;
						if($paddingSide1->orientation === "horizontal") {
							$rendererSize = $this->get___renderer()->getWidth();
						} else {
							$rendererSize = $this->get___renderer()->getHeight();
						}
						$holderSize = null;
						{
							$_g1 = $paddingSide2->units;
							switch($_g1) {
							case "pct":{
								$holderSize = $rendererSize / (0.01 * (100 - $paddingSide1->get_pct() - $paddingSide2->get_pct()));
							}break;
							default:{
								$holderSize = ($rendererSize + $paddingSide2->get_px()) / (0.01 * (100 - $paddingSide1->get_pct()));
							}break;
							}
						}
						$paddingSide1Px = $paddingSide1->get_pct() * 0.01 * $holderSize;
					}break;
					default:{
						$paddingSide1Px = $paddingSide1->get_px();
					}break;
					}
				}
				$paddingSide2Px = null;
				{
					$_g2 = $paddingSide2->units;
					switch($_g2) {
					case "pct":{
						$rendererSize1 = null;
						if($paddingSide2->orientation === "horizontal") {
							$rendererSize1 = $this->get___renderer()->getWidth();
						} else {
							$rendererSize1 = $this->get___renderer()->getHeight();
						}
						$holderSize1 = null;
						{
							$_g11 = $paddingSide1->units;
							switch($_g11) {
							case "pct":{
								$holderSize1 = $rendererSize1 / (0.01 * (100 - $paddingSide2->get_pct() - $paddingSide1->get_pct()));
							}break;
							default:{
								$holderSize1 = ($rendererSize1 + $paddingSide1->get_px()) / (0.01 * (100 - $paddingSide2->get_pct()));
							}break;
							}
						}
						$paddingSide2Px = $paddingSide2->get_pct() * 0.01 * $holderSize1;
					}break;
					default:{
						$paddingSide2Px = $paddingSide2->get_px();
					}break;
					}
				}
				$helperSize1 = null;
				{
					if($this->__helperSize === null) {
						$this->__helperSize = new sx_properties_metric_Size(null);
					}
					$helperSize1 = $this->__helperSize;
				}
				$helperSize1->set_px($rendererSizePx + $paddingSide1Px + $paddingSide2Px);
				$helperSize = $this->__helperSize;
			}
			{
				$GLOBALS['%s']->pop();
				return $helperSize;
			}
		} else {
			$tmp = $this->get_width();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function __heightProviderForPadding() {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::__heightProviderForPadding");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->autoSize->get_width()) {
			$helperSize = null;
			{
				$paddingSide1 = $this->get_padding()->get_top();
				$paddingSide2 = $this->get_padding()->get_bottom();
				$rendererSizePx = $this->get___renderer()->getHeight();
				$paddingSide1Px = null;
				{
					$_g = $paddingSide1->units;
					switch($_g) {
					case "pct":{
						$rendererSize = null;
						if($paddingSide1->orientation === "horizontal") {
							$rendererSize = $this->get___renderer()->getWidth();
						} else {
							$rendererSize = $this->get___renderer()->getHeight();
						}
						$holderSize = null;
						{
							$_g1 = $paddingSide2->units;
							switch($_g1) {
							case "pct":{
								$holderSize = $rendererSize / (0.01 * (100 - $paddingSide1->get_pct() - $paddingSide2->get_pct()));
							}break;
							default:{
								$holderSize = ($rendererSize + $paddingSide2->get_px()) / (0.01 * (100 - $paddingSide1->get_pct()));
							}break;
							}
						}
						$paddingSide1Px = $paddingSide1->get_pct() * 0.01 * $holderSize;
					}break;
					default:{
						$paddingSide1Px = $paddingSide1->get_px();
					}break;
					}
				}
				$paddingSide2Px = null;
				{
					$_g2 = $paddingSide2->units;
					switch($_g2) {
					case "pct":{
						$rendererSize1 = null;
						if($paddingSide2->orientation === "horizontal") {
							$rendererSize1 = $this->get___renderer()->getWidth();
						} else {
							$rendererSize1 = $this->get___renderer()->getHeight();
						}
						$holderSize1 = null;
						{
							$_g11 = $paddingSide1->units;
							switch($_g11) {
							case "pct":{
								$holderSize1 = $rendererSize1 / (0.01 * (100 - $paddingSide2->get_pct() - $paddingSide1->get_pct()));
							}break;
							default:{
								$holderSize1 = ($rendererSize1 + $paddingSide1->get_px()) / (0.01 * (100 - $paddingSide2->get_pct()));
							}break;
							}
						}
						$paddingSide2Px = $paddingSide2->get_pct() * 0.01 * $holderSize1;
					}break;
					default:{
						$paddingSide2Px = $paddingSide2->get_px();
					}break;
					}
				}
				$helperSize1 = null;
				{
					if($this->__helperSize === null) {
						$this->__helperSize = new sx_properties_metric_Size(null);
					}
					$helperSize1 = $this->__helperSize;
				}
				$helperSize1->set_px($rendererSizePx + $paddingSide1Px + $paddingSide2Px);
				$helperSize = $this->__helperSize;
			}
			{
				$GLOBALS['%s']->pop();
				return $helperSize;
			}
		} else {
			$tmp = $this->get_width();
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function __getPaddedRendererSize($paddingSide1, $paddingSide2, $rendererSizePx) {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::__getPaddedRendererSize");
		$__hx__spos = $GLOBALS['%s']->length;
		$paddingSide1Px = null;
		{
			$_g = $paddingSide1->units;
			switch($_g) {
			case "pct":{
				$rendererSize = null;
				if($paddingSide1->orientation === "horizontal") {
					$rendererSize = $this->get___renderer()->getWidth();
				} else {
					$rendererSize = $this->get___renderer()->getHeight();
				}
				$holderSize = null;
				{
					$_g1 = $paddingSide2->units;
					switch($_g1) {
					case "pct":{
						$holderSize = $rendererSize / (0.01 * (100 - $paddingSide1->get_pct() - $paddingSide2->get_pct()));
					}break;
					default:{
						$holderSize = ($rendererSize + $paddingSide2->get_px()) / (0.01 * (100 - $paddingSide1->get_pct()));
					}break;
					}
				}
				$paddingSide1Px = $paddingSide1->get_pct() * 0.01 * $holderSize;
			}break;
			default:{
				$paddingSide1Px = $paddingSide1->get_px();
			}break;
			}
		}
		$paddingSide2Px = null;
		{
			$_g2 = $paddingSide2->units;
			switch($_g2) {
			case "pct":{
				$rendererSize1 = null;
				if($paddingSide2->orientation === "horizontal") {
					$rendererSize1 = $this->get___renderer()->getWidth();
				} else {
					$rendererSize1 = $this->get___renderer()->getHeight();
				}
				$holderSize1 = null;
				{
					$_g11 = $paddingSide1->units;
					switch($_g11) {
					case "pct":{
						$holderSize1 = $rendererSize1 / (0.01 * (100 - $paddingSide2->get_pct() - $paddingSide1->get_pct()));
					}break;
					default:{
						$holderSize1 = ($rendererSize1 + $paddingSide1->get_px()) / (0.01 * (100 - $paddingSide2->get_pct()));
					}break;
					}
				}
				$paddingSide2Px = $paddingSide2->get_pct() * 0.01 * $holderSize1;
			}break;
			default:{
				$paddingSide2Px = $paddingSide2->get_px();
			}break;
			}
		}
		$helperSize = null;
		{
			if($this->__helperSize === null) {
				$this->__helperSize = new sx_properties_metric_Size(null);
			}
			$helperSize = $this->__helperSize;
		}
		$helperSize->set_px($rendererSizePx + $paddingSide1Px + $paddingSide2Px);
		{
			$tmp = $this->__helperSize;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function __getPaddingPixels($paddingSide, $oppositeSide) {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::__getPaddingPixels");
		$__hx__spos = $GLOBALS['%s']->length;
		$_g = $paddingSide->units;
		switch($_g) {
		case "pct":{
			$rendererSize = null;
			if($paddingSide->orientation === "horizontal") {
				$rendererSize = $this->get___renderer()->getWidth();
			} else {
				$rendererSize = $this->get___renderer()->getHeight();
			}
			$holderSize = null;
			{
				$_g1 = $oppositeSide->units;
				switch($_g1) {
				case "pct":{
					$holderSize = $rendererSize / (0.01 * (100 - $paddingSide->get_pct() - $oppositeSide->get_pct()));
				}break;
				default:{
					$holderSize = ($rendererSize + $oppositeSide->get_px()) / (0.01 * (100 - $paddingSide->get_pct()));
				}break;
				}
			}
			{
				$tmp = $paddingSide->get_pct() * 0.01 * $holderSize;
				$GLOBALS['%s']->pop();
				return $tmp;
			}
		}break;
		default:{
			$tmp = $paddingSide->get_px();
			$GLOBALS['%s']->pop();
			return $tmp;
		}break;
		}
		$GLOBALS['%s']->pop();
	}
	public function __getHelperSize() {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::__getHelperSize");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__helperSize === null) {
			$this->__helperSize = new sx_properties_metric_Size(null);
		}
		{
			$tmp = $this->__helperSize;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get___renderer() {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::get___renderer");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$GLOBALS['%s']->pop();
			return null;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_autoSize($value) {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::set_autoSize");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->autoSize === null) {
			$this->autoSize = $value;
		} else {
			$this->autoSize->copyValueFrom($value);
		}
		{
			$tmp = $this->autoSize;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function get_padding() {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::get_padding");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->__padding;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_padding($v) {
		$GLOBALS['%s']->push("sx.widgets.base.RendererHolder::set_padding");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__padding->copyValueFrom($v);
		{
			$tmp = $this->__padding;
			$GLOBALS['%s']->pop();
			return $tmp;
		}
		$GLOBALS['%s']->pop();
	}
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->__dynamics[$m]) && is_callable($this->__dynamics[$m]))
			return call_user_func_array($this->__dynamics[$m], $a);
		else if('toString' == $m)
			return $this->__toString();
		else
			throw new HException('Unable to call <'.$m.'>');
	}
	static $__properties__ = array("get___renderer" => "get___renderer","set_padding" => "set_padding","get_padding" => "get_padding","set_autoSize" => "set_autoSize","get_onDispose" => "get_onDispose","get_onInitialize" => "get_onInitialize","get_onPointerOut" => "get_onPointerOut","get_onPointerOver" => "get_onPointerOver","get_onPointerMove" => "get_onPointerMove","get_onClick" => "get_onClick","get_onPointerTap" => "get_onPointerTap","get_onPointerRelease" => "get_onPointerRelease","get_onPointerPress" => "get_onPointerPress","get_onDisable" => "get_onDisable","get_onEnable" => "get_onEnable","get_onParentChanged" => "get_onParentChanged","get_onChildRemoved" => "get_onChildRemoved","get_onChildAdded" => "get_onChildAdded","get_onMove" => "get_onMove","get_onResize" => "get_onResize","get_tween" => "get_tween","set_style" => "set_style","set_enabled" => "set_enabled","set_arrangeable" => "set_arrangeable","set_layout" => "set_layout","get_layout" => "get_layout","set_skin" => "set_skin","get_skin" => "get_skin","set_overflow" => "set_overflow","set_visible" => "set_visible","set_alpha" => "set_alpha","set_rotation" => "set_rotation","set_scaleY" => "set_scaleY","set_scaleX" => "set_scaleX","set_height" => "set_height","get_height" => "get_height","set_width" => "set_width","get_width" => "get_width","get_offset" => "get_offset","get_origin" => "get_origin","set_bottom" => "set_bottom","get_bottom" => "get_bottom","set_top" => "set_top","get_top" => "get_top","set_right" => "set_right","get_right" => "get_right","set_left" => "set_left","get_left" => "get_left","set___parent" => "set___parent","get_parent" => "get_parent");
	function __toString() { return 'sx.widgets.base.RendererHolder'; }
}
