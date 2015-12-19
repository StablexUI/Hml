<?php

class sx_widgets_Bmp extends sx_widgets_base_RendererHolder {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("sx.widgets.Bmp::new");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->__dontUpdateBitmapScaling = false;
		$this->smooth = false;
		$this->keepAspect = true;
		parent::__construct();
		$GLOBALS['%s']->pop();
	}}
	public $bitmapData;
	public $renderer;
	public $keepAspect;
	public $smooth;
	public $__dontUpdateBitmapScaling;
	public function __createRenderer() {
		$GLOBALS['%s']->push("sx.widgets.Bmp::__createRenderer");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->renderer = sx_Sx::get_backendManager()->bitmapRenderer($this);
		$GLOBALS['%s']->pop();
	}
	public function __propertyResized($changed, $previousUnits, $previousValue) {
		$GLOBALS['%s']->push("sx.widgets.Bmp::__propertyResized");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__dontUpdateBitmapScaling) {
			parent::__propertyResized($changed,$previousUnits,$previousValue);
		} else {
			$this->__dontUpdateBitmapScaling = true;
			parent::__propertyResized($changed,$previousUnits,$previousValue);
			if($this->autoSize->both()) {
				$this->renderer->setBitmapScale(1, 1);
			} else {
				if($this->autoSize->get_width()) {
					$bitmapHeight = null;
					{
						$_this = $this->renderer;
						if(_hx_field($_this, "__bitmapData") === null || _hx_field($_this->__bitmapData, "height") === null) {
							$bitmapHeight = 0;
						} else {
							$bitmapHeight = $_this->__bitmapData->height;
						}
					}
					if($bitmapHeight <= 0) {
						$this->renderer->setBitmapScale(0, 0);
					} else {
						if($this->keepAspect) {
							$this->renderer->setBitmapScale(1, 1);
						} else {
							$renderHeight = $this->get_height()->get_px() - sx_tools_PaddingTools::sumPx($this->get_padding(), "vertical");
							if($renderHeight <= 0) {
								$this->renderer->setBitmapScale(0, 0);
							} else {
								$scaleY = $renderHeight / $bitmapHeight;
								$this->renderer->setBitmapScale(1, $scaleY);
							}
						}
					}
				} else {
					if($this->autoSize->get_height()) {
						$bitmapWidth = null;
						{
							$_this1 = $this->renderer;
							if(_hx_field($_this1, "__bitmapData") === null || _hx_field($_this1->__bitmapData, "width") === null) {
								$bitmapWidth = 0;
							} else {
								$bitmapWidth = $_this1->__bitmapData->width;
							}
						}
						if($bitmapWidth <= 0) {
							$this->renderer->setBitmapScale(0, 0);
						} else {
							if($this->keepAspect) {
								$this->renderer->setBitmapScale(1, 1);
							} else {
								$renderWidth = $this->get_width()->get_px() - sx_tools_PaddingTools::sumPx($this->get_padding(), "horizontal");
								if($renderWidth <= 0) {
									$this->renderer->setBitmapScale(0, 0);
								} else {
									$scaleX = $renderWidth / $bitmapWidth;
									$this->renderer->setBitmapScale($scaleX, 1);
								}
							}
						}
					} else {
						$bitmapWidth1 = null;
						{
							$_this2 = $this->renderer;
							if(_hx_field($_this2, "__bitmapData") === null || _hx_field($_this2->__bitmapData, "width") === null) {
								$bitmapWidth1 = 0;
							} else {
								$bitmapWidth1 = $_this2->__bitmapData->width;
							}
						}
						$bitmapHeight1 = null;
						{
							$_this3 = $this->renderer;
							if(_hx_field($_this3, "__bitmapData") === null || _hx_field($_this3->__bitmapData, "height") === null) {
								$bitmapHeight1 = 0;
							} else {
								$bitmapHeight1 = $_this3->__bitmapData->height;
							}
						}
						if($bitmapWidth1 <= 0 || $bitmapHeight1 <= 0) {
							$this->renderer->setBitmapScale(0, 0);
						} else {
							$renderWidth1 = $this->get_width()->get_px() - $this->get_padding()->get_left()->get_px() - $this->get_padding()->get_right()->get_px();
							$renderHeight1 = $this->get_height()->get_px() - $this->get_padding()->get_top()->get_px() - $this->get_padding()->get_bottom()->get_px();
							if($renderWidth1 <= 0 || $renderHeight1 <= 0) {
								$this->renderer->setBitmapScale(0, 0);
							} else {
								$scaleX1 = $renderWidth1 / $bitmapWidth1;
								$scaleY1 = $renderHeight1 / $bitmapHeight1;
								if($this->keepAspect) {
									if($scaleX1 < $scaleY1) {
										$this->renderer->setBitmapScale($scaleX1, $scaleX1);
									} else {
										$this->renderer->setBitmapScale($scaleY1, $scaleY1);
									}
								} else {
									$this->renderer->setBitmapScale($scaleX1, $scaleY1);
								}
							}
						}
					}
				}
			}
			$this->__dontUpdateBitmapScaling = false;
		}
		$GLOBALS['%s']->pop();
	}
	public function __paddingChanged($horizontal, $vertical) {
		$GLOBALS['%s']->push("sx.widgets.Bmp::__paddingChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__dontUpdateBitmapScaling) {
			parent::__paddingChanged($horizontal,$vertical);
		} else {
			$this->__dontUpdateBitmapScaling = true;
			if($this->autoSize->both()) {
				$this->renderer->setBitmapScale(1, 1);
			} else {
				if($this->autoSize->get_width()) {
					$bitmapHeight = null;
					{
						$_this = $this->renderer;
						if(_hx_field($_this, "__bitmapData") === null || _hx_field($_this->__bitmapData, "height") === null) {
							$bitmapHeight = 0;
						} else {
							$bitmapHeight = $_this->__bitmapData->height;
						}
					}
					if($bitmapHeight <= 0) {
						$this->renderer->setBitmapScale(0, 0);
					} else {
						if($this->keepAspect) {
							$this->renderer->setBitmapScale(1, 1);
						} else {
							$renderHeight = $this->get_height()->get_px() - sx_tools_PaddingTools::sumPx($this->get_padding(), "vertical");
							if($renderHeight <= 0) {
								$this->renderer->setBitmapScale(0, 0);
							} else {
								$scaleY = $renderHeight / $bitmapHeight;
								$this->renderer->setBitmapScale(1, $scaleY);
							}
						}
					}
				} else {
					if($this->autoSize->get_height()) {
						$bitmapWidth = null;
						{
							$_this1 = $this->renderer;
							if(_hx_field($_this1, "__bitmapData") === null || _hx_field($_this1->__bitmapData, "width") === null) {
								$bitmapWidth = 0;
							} else {
								$bitmapWidth = $_this1->__bitmapData->width;
							}
						}
						if($bitmapWidth <= 0) {
							$this->renderer->setBitmapScale(0, 0);
						} else {
							if($this->keepAspect) {
								$this->renderer->setBitmapScale(1, 1);
							} else {
								$renderWidth = $this->get_width()->get_px() - sx_tools_PaddingTools::sumPx($this->get_padding(), "horizontal");
								if($renderWidth <= 0) {
									$this->renderer->setBitmapScale(0, 0);
								} else {
									$scaleX = $renderWidth / $bitmapWidth;
									$this->renderer->setBitmapScale($scaleX, 1);
								}
							}
						}
					} else {
						$bitmapWidth1 = null;
						{
							$_this2 = $this->renderer;
							if(_hx_field($_this2, "__bitmapData") === null || _hx_field($_this2->__bitmapData, "width") === null) {
								$bitmapWidth1 = 0;
							} else {
								$bitmapWidth1 = $_this2->__bitmapData->width;
							}
						}
						$bitmapHeight1 = null;
						{
							$_this3 = $this->renderer;
							if(_hx_field($_this3, "__bitmapData") === null || _hx_field($_this3->__bitmapData, "height") === null) {
								$bitmapHeight1 = 0;
							} else {
								$bitmapHeight1 = $_this3->__bitmapData->height;
							}
						}
						if($bitmapWidth1 <= 0 || $bitmapHeight1 <= 0) {
							$this->renderer->setBitmapScale(0, 0);
						} else {
							$renderWidth1 = $this->get_width()->get_px() - $this->get_padding()->get_left()->get_px() - $this->get_padding()->get_right()->get_px();
							$renderHeight1 = $this->get_height()->get_px() - $this->get_padding()->get_top()->get_px() - $this->get_padding()->get_bottom()->get_px();
							if($renderWidth1 <= 0 || $renderHeight1 <= 0) {
								$this->renderer->setBitmapScale(0, 0);
							} else {
								$scaleX1 = $renderWidth1 / $bitmapWidth1;
								$scaleY1 = $renderHeight1 / $bitmapHeight1;
								if($this->keepAspect) {
									if($scaleX1 < $scaleY1) {
										$this->renderer->setBitmapScale($scaleX1, $scaleX1);
									} else {
										$this->renderer->setBitmapScale($scaleY1, $scaleY1);
									}
								} else {
									$this->renderer->setBitmapScale($scaleX1, $scaleY1);
								}
							}
						}
					}
				}
			}
			parent::__paddingChanged($horizontal,$vertical);
			$this->__dontUpdateBitmapScaling = false;
		}
		$GLOBALS['%s']->pop();
	}
	public function __autoSizeChanged($widthChanged, $heightChanged) {
		$GLOBALS['%s']->push("sx.widgets.Bmp::__autoSizeChanged");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->__dontUpdateBitmapScaling) {
			parent::__paddingChanged($widthChanged,$heightChanged);
		} else {
			$this->__dontUpdateBitmapScaling = true;
			if($this->autoSize->both()) {
				$this->renderer->setBitmapScale(1, 1);
			} else {
				if($this->autoSize->get_width()) {
					$bitmapHeight = null;
					{
						$_this = $this->renderer;
						if(_hx_field($_this, "__bitmapData") === null || _hx_field($_this->__bitmapData, "height") === null) {
							$bitmapHeight = 0;
						} else {
							$bitmapHeight = $_this->__bitmapData->height;
						}
					}
					if($bitmapHeight <= 0) {
						$this->renderer->setBitmapScale(0, 0);
					} else {
						if($this->keepAspect) {
							$this->renderer->setBitmapScale(1, 1);
						} else {
							$renderHeight = $this->get_height()->get_px() - sx_tools_PaddingTools::sumPx($this->get_padding(), "vertical");
							if($renderHeight <= 0) {
								$this->renderer->setBitmapScale(0, 0);
							} else {
								$scaleY = $renderHeight / $bitmapHeight;
								$this->renderer->setBitmapScale(1, $scaleY);
							}
						}
					}
				} else {
					if($this->autoSize->get_height()) {
						$bitmapWidth = null;
						{
							$_this1 = $this->renderer;
							if(_hx_field($_this1, "__bitmapData") === null || _hx_field($_this1->__bitmapData, "width") === null) {
								$bitmapWidth = 0;
							} else {
								$bitmapWidth = $_this1->__bitmapData->width;
							}
						}
						if($bitmapWidth <= 0) {
							$this->renderer->setBitmapScale(0, 0);
						} else {
							if($this->keepAspect) {
								$this->renderer->setBitmapScale(1, 1);
							} else {
								$renderWidth = $this->get_width()->get_px() - sx_tools_PaddingTools::sumPx($this->get_padding(), "horizontal");
								if($renderWidth <= 0) {
									$this->renderer->setBitmapScale(0, 0);
								} else {
									$scaleX = $renderWidth / $bitmapWidth;
									$this->renderer->setBitmapScale($scaleX, 1);
								}
							}
						}
					} else {
						$bitmapWidth1 = null;
						{
							$_this2 = $this->renderer;
							if(_hx_field($_this2, "__bitmapData") === null || _hx_field($_this2->__bitmapData, "width") === null) {
								$bitmapWidth1 = 0;
							} else {
								$bitmapWidth1 = $_this2->__bitmapData->width;
							}
						}
						$bitmapHeight1 = null;
						{
							$_this3 = $this->renderer;
							if(_hx_field($_this3, "__bitmapData") === null || _hx_field($_this3->__bitmapData, "height") === null) {
								$bitmapHeight1 = 0;
							} else {
								$bitmapHeight1 = $_this3->__bitmapData->height;
							}
						}
						if($bitmapWidth1 <= 0 || $bitmapHeight1 <= 0) {
							$this->renderer->setBitmapScale(0, 0);
						} else {
							$renderWidth1 = $this->get_width()->get_px() - $this->get_padding()->get_left()->get_px() - $this->get_padding()->get_right()->get_px();
							$renderHeight1 = $this->get_height()->get_px() - $this->get_padding()->get_top()->get_px() - $this->get_padding()->get_bottom()->get_px();
							if($renderWidth1 <= 0 || $renderHeight1 <= 0) {
								$this->renderer->setBitmapScale(0, 0);
							} else {
								$scaleX1 = $renderWidth1 / $bitmapWidth1;
								$scaleY1 = $renderHeight1 / $bitmapHeight1;
								if($this->keepAspect) {
									if($scaleX1 < $scaleY1) {
										$this->renderer->setBitmapScale($scaleX1, $scaleX1);
									} else {
										$this->renderer->setBitmapScale($scaleY1, $scaleY1);
									}
								} else {
									$this->renderer->setBitmapScale($scaleX1, $scaleY1);
								}
							}
						}
					}
				}
			}
			parent::__paddingChanged($widthChanged,$heightChanged);
			$this->__dontUpdateBitmapScaling = false;
		}
		$GLOBALS['%s']->pop();
	}
	public function __updateBitmapScaling() {
		$GLOBALS['%s']->push("sx.widgets.Bmp::__updateBitmapScaling");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->autoSize->both()) {
			$this->renderer->setBitmapScale(1, 1);
		} else {
			if($this->autoSize->get_width()) {
				$bitmapHeight = null;
				{
					$_this = $this->renderer;
					if(_hx_field($_this, "__bitmapData") === null || _hx_field($_this->__bitmapData, "height") === null) {
						$bitmapHeight = 0;
					} else {
						$bitmapHeight = $_this->__bitmapData->height;
					}
				}
				if($bitmapHeight <= 0) {
					$this->renderer->setBitmapScale(0, 0);
				} else {
					if($this->keepAspect) {
						$this->renderer->setBitmapScale(1, 1);
					} else {
						$renderHeight = $this->get_height()->get_px() - sx_tools_PaddingTools::sumPx($this->get_padding(), "vertical");
						if($renderHeight <= 0) {
							$this->renderer->setBitmapScale(0, 0);
						} else {
							$scaleY = $renderHeight / $bitmapHeight;
							$this->renderer->setBitmapScale(1, $scaleY);
						}
					}
				}
			} else {
				if($this->autoSize->get_height()) {
					$bitmapWidth = null;
					{
						$_this1 = $this->renderer;
						if(_hx_field($_this1, "__bitmapData") === null || _hx_field($_this1->__bitmapData, "width") === null) {
							$bitmapWidth = 0;
						} else {
							$bitmapWidth = $_this1->__bitmapData->width;
						}
					}
					if($bitmapWidth <= 0) {
						$this->renderer->setBitmapScale(0, 0);
					} else {
						if($this->keepAspect) {
							$this->renderer->setBitmapScale(1, 1);
						} else {
							$renderWidth = $this->get_width()->get_px() - sx_tools_PaddingTools::sumPx($this->get_padding(), "horizontal");
							if($renderWidth <= 0) {
								$this->renderer->setBitmapScale(0, 0);
							} else {
								$scaleX = $renderWidth / $bitmapWidth;
								$this->renderer->setBitmapScale($scaleX, 1);
							}
						}
					}
				} else {
					$bitmapWidth1 = null;
					{
						$_this2 = $this->renderer;
						if(_hx_field($_this2, "__bitmapData") === null || _hx_field($_this2->__bitmapData, "width") === null) {
							$bitmapWidth1 = 0;
						} else {
							$bitmapWidth1 = $_this2->__bitmapData->width;
						}
					}
					$bitmapHeight1 = null;
					{
						$_this3 = $this->renderer;
						if(_hx_field($_this3, "__bitmapData") === null || _hx_field($_this3->__bitmapData, "height") === null) {
							$bitmapHeight1 = 0;
						} else {
							$bitmapHeight1 = $_this3->__bitmapData->height;
						}
					}
					if($bitmapWidth1 <= 0 || $bitmapHeight1 <= 0) {
						$this->renderer->setBitmapScale(0, 0);
					} else {
						$renderWidth1 = $this->get_width()->get_px() - $this->get_padding()->get_left()->get_px() - $this->get_padding()->get_right()->get_px();
						$renderHeight1 = $this->get_height()->get_px() - $this->get_padding()->get_top()->get_px() - $this->get_padding()->get_bottom()->get_px();
						if($renderWidth1 <= 0 || $renderHeight1 <= 0) {
							$this->renderer->setBitmapScale(0, 0);
						} else {
							$scaleX1 = $renderWidth1 / $bitmapWidth1;
							$scaleY1 = $renderHeight1 / $bitmapHeight1;
							if($this->keepAspect) {
								if($scaleX1 < $scaleY1) {
									$this->renderer->setBitmapScale($scaleX1, $scaleX1);
								} else {
									$this->renderer->setBitmapScale($scaleY1, $scaleY1);
								}
							} else {
								$this->renderer->setBitmapScale($scaleX1, $scaleY1);
							}
						}
					}
				}
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __scaleBitmapHeight() {
		$GLOBALS['%s']->push("sx.widgets.Bmp::__scaleBitmapHeight");
		$__hx__spos = $GLOBALS['%s']->length;
		$bitmapHeight = null;
		{
			$_this = $this->renderer;
			if(_hx_field($_this, "__bitmapData") === null || _hx_field($_this->__bitmapData, "height") === null) {
				$bitmapHeight = 0;
			} else {
				$bitmapHeight = $_this->__bitmapData->height;
			}
		}
		if($bitmapHeight <= 0) {
			$this->renderer->setBitmapScale(0, 0);
		} else {
			if($this->keepAspect) {
				$this->renderer->setBitmapScale(1, 1);
			} else {
				$renderHeight = $this->get_height()->get_px() - sx_tools_PaddingTools::sumPx($this->get_padding(), "vertical");
				if($renderHeight <= 0) {
					$this->renderer->setBitmapScale(0, 0);
				} else {
					$scaleY = $renderHeight / $bitmapHeight;
					$this->renderer->setBitmapScale(1, $scaleY);
				}
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __scaleBitmapWidth() {
		$GLOBALS['%s']->push("sx.widgets.Bmp::__scaleBitmapWidth");
		$__hx__spos = $GLOBALS['%s']->length;
		$bitmapWidth = null;
		{
			$_this = $this->renderer;
			if(_hx_field($_this, "__bitmapData") === null || _hx_field($_this->__bitmapData, "width") === null) {
				$bitmapWidth = 0;
			} else {
				$bitmapWidth = $_this->__bitmapData->width;
			}
		}
		if($bitmapWidth <= 0) {
			$this->renderer->setBitmapScale(0, 0);
		} else {
			if($this->keepAspect) {
				$this->renderer->setBitmapScale(1, 1);
			} else {
				$renderWidth = $this->get_width()->get_px() - sx_tools_PaddingTools::sumPx($this->get_padding(), "horizontal");
				if($renderWidth <= 0) {
					$this->renderer->setBitmapScale(0, 0);
				} else {
					$scaleX = $renderWidth / $bitmapWidth;
					$this->renderer->setBitmapScale($scaleX, 1);
				}
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function __scaleBitmapBoth() {
		$GLOBALS['%s']->push("sx.widgets.Bmp::__scaleBitmapBoth");
		$__hx__spos = $GLOBALS['%s']->length;
		$bitmapWidth = null;
		{
			$_this = $this->renderer;
			if(_hx_field($_this, "__bitmapData") === null || _hx_field($_this->__bitmapData, "width") === null) {
				$bitmapWidth = 0;
			} else {
				$bitmapWidth = $_this->__bitmapData->width;
			}
		}
		$bitmapHeight = null;
		{
			$_this1 = $this->renderer;
			if(_hx_field($_this1, "__bitmapData") === null || _hx_field($_this1->__bitmapData, "height") === null) {
				$bitmapHeight = 0;
			} else {
				$bitmapHeight = $_this1->__bitmapData->height;
			}
		}
		if($bitmapWidth <= 0 || $bitmapHeight <= 0) {
			$this->renderer->setBitmapScale(0, 0);
		} else {
			$renderWidth = $this->get_width()->get_px() - $this->get_padding()->get_left()->get_px() - $this->get_padding()->get_right()->get_px();
			$renderHeight = $this->get_height()->get_px() - $this->get_padding()->get_top()->get_px() - $this->get_padding()->get_bottom()->get_px();
			if($renderWidth <= 0 || $renderHeight <= 0) {
				$this->renderer->setBitmapScale(0, 0);
			} else {
				$scaleX = $renderWidth / $bitmapWidth;
				$scaleY = $renderHeight / $bitmapHeight;
				if($this->keepAspect) {
					if($scaleX < $scaleY) {
						$this->renderer->setBitmapScale($scaleX, $scaleX);
					} else {
						$this->renderer->setBitmapScale($scaleY, $scaleY);
					}
				} else {
					$this->renderer->setBitmapScale($scaleX, $scaleY);
				}
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function set_bitmapData($value) {
		$GLOBALS['%s']->push("sx.widgets.Bmp::set_bitmapData");
		$__hx__spos = $GLOBALS['%s']->length;
		$this->bitmapData = $value;
		$this->renderer->setBitmapData($this->bitmapData);
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_keepAspect($value) {
		$GLOBALS['%s']->push("sx.widgets.Bmp::set_keepAspect");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->keepAspect !== $value) {
			$this->keepAspect = $value;
			if($this->autoSize->both()) {
				$this->renderer->setBitmapScale(1, 1);
			} else {
				if($this->autoSize->get_width()) {
					$bitmapHeight = null;
					{
						$_this = $this->renderer;
						if(_hx_field($_this, "__bitmapData") === null || _hx_field($_this->__bitmapData, "height") === null) {
							$bitmapHeight = 0;
						} else {
							$bitmapHeight = $_this->__bitmapData->height;
						}
					}
					if($bitmapHeight <= 0) {
						$this->renderer->setBitmapScale(0, 0);
					} else {
						if($this->keepAspect) {
							$this->renderer->setBitmapScale(1, 1);
						} else {
							$renderHeight = $this->get_height()->get_px() - sx_tools_PaddingTools::sumPx($this->get_padding(), "vertical");
							if($renderHeight <= 0) {
								$this->renderer->setBitmapScale(0, 0);
							} else {
								$scaleY = $renderHeight / $bitmapHeight;
								$this->renderer->setBitmapScale(1, $scaleY);
							}
						}
					}
				} else {
					if($this->autoSize->get_height()) {
						$bitmapWidth = null;
						{
							$_this1 = $this->renderer;
							if(_hx_field($_this1, "__bitmapData") === null || _hx_field($_this1->__bitmapData, "width") === null) {
								$bitmapWidth = 0;
							} else {
								$bitmapWidth = $_this1->__bitmapData->width;
							}
						}
						if($bitmapWidth <= 0) {
							$this->renderer->setBitmapScale(0, 0);
						} else {
							if($this->keepAspect) {
								$this->renderer->setBitmapScale(1, 1);
							} else {
								$renderWidth = $this->get_width()->get_px() - sx_tools_PaddingTools::sumPx($this->get_padding(), "horizontal");
								if($renderWidth <= 0) {
									$this->renderer->setBitmapScale(0, 0);
								} else {
									$scaleX = $renderWidth / $bitmapWidth;
									$this->renderer->setBitmapScale($scaleX, 1);
								}
							}
						}
					} else {
						$bitmapWidth1 = null;
						{
							$_this2 = $this->renderer;
							if(_hx_field($_this2, "__bitmapData") === null || _hx_field($_this2->__bitmapData, "width") === null) {
								$bitmapWidth1 = 0;
							} else {
								$bitmapWidth1 = $_this2->__bitmapData->width;
							}
						}
						$bitmapHeight1 = null;
						{
							$_this3 = $this->renderer;
							if(_hx_field($_this3, "__bitmapData") === null || _hx_field($_this3->__bitmapData, "height") === null) {
								$bitmapHeight1 = 0;
							} else {
								$bitmapHeight1 = $_this3->__bitmapData->height;
							}
						}
						if($bitmapWidth1 <= 0 || $bitmapHeight1 <= 0) {
							$this->renderer->setBitmapScale(0, 0);
						} else {
							$renderWidth1 = $this->get_width()->get_px() - $this->get_padding()->get_left()->get_px() - $this->get_padding()->get_right()->get_px();
							$renderHeight1 = $this->get_height()->get_px() - $this->get_padding()->get_top()->get_px() - $this->get_padding()->get_bottom()->get_px();
							if($renderWidth1 <= 0 || $renderHeight1 <= 0) {
								$this->renderer->setBitmapScale(0, 0);
							} else {
								$scaleX1 = $renderWidth1 / $bitmapWidth1;
								$scaleY1 = $renderHeight1 / $bitmapHeight1;
								if($this->keepAspect) {
									if($scaleX1 < $scaleY1) {
										$this->renderer->setBitmapScale($scaleX1, $scaleX1);
									} else {
										$this->renderer->setBitmapScale($scaleY1, $scaleY1);
									}
								} else {
									$this->renderer->setBitmapScale($scaleX1, $scaleY1);
								}
							}
						}
					}
				}
			}
		}
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function set_smooth($value) {
		$GLOBALS['%s']->push("sx.widgets.Bmp::set_smooth");
		$__hx__spos = $GLOBALS['%s']->length;
		if($this->smooth !== $value) {
			$this->smooth = $value;
			$this->renderer->setBitmapSmoothing($this->smooth);
		}
		{
			$GLOBALS['%s']->pop();
			return $value;
		}
		$GLOBALS['%s']->pop();
	}
	public function get___renderer() {
		$GLOBALS['%s']->push("sx.widgets.Bmp::get___renderer");
		$__hx__spos = $GLOBALS['%s']->length;
		{
			$tmp = $this->renderer;
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
	static $__properties__ = array("set_smooth" => "set_smooth","set_keepAspect" => "set_keepAspect","set_bitmapData" => "set_bitmapData","get___renderer" => "get___renderer","set_padding" => "set_padding","get_padding" => "get_padding","set_autoSize" => "set_autoSize","get_onDispose" => "get_onDispose","get_onInitialize" => "get_onInitialize","get_onPointerOut" => "get_onPointerOut","get_onPointerOver" => "get_onPointerOver","get_onPointerMove" => "get_onPointerMove","get_onClick" => "get_onClick","get_onPointerTap" => "get_onPointerTap","get_onPointerRelease" => "get_onPointerRelease","get_onPointerPress" => "get_onPointerPress","get_onDisable" => "get_onDisable","get_onEnable" => "get_onEnable","get_onParentChanged" => "get_onParentChanged","get_onChildRemoved" => "get_onChildRemoved","get_onChildAdded" => "get_onChildAdded","get_onMove" => "get_onMove","get_onResize" => "get_onResize","get_tween" => "get_tween","set_style" => "set_style","set_enabled" => "set_enabled","set_arrangeable" => "set_arrangeable","set_layout" => "set_layout","get_layout" => "get_layout","set_skin" => "set_skin","get_skin" => "get_skin","set_overflow" => "set_overflow","set_visible" => "set_visible","set_alpha" => "set_alpha","set_rotation" => "set_rotation","set_scaleY" => "set_scaleY","set_scaleX" => "set_scaleX","set_height" => "set_height","get_height" => "get_height","set_width" => "set_width","get_width" => "get_width","get_offset" => "get_offset","get_origin" => "get_origin","set_bottom" => "set_bottom","get_bottom" => "get_bottom","set_top" => "set_top","get_top" => "get_top","set_right" => "set_right","get_right" => "get_right","set_left" => "set_left","get_left" => "get_left","set___parent" => "set___parent","get_parent" => "get_parent");
	function __toString() { return 'sx.widgets.Bmp'; }
}
