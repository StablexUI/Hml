<?php

class hunit_match_similar_SimilarMapMatch extends hunit_match_Match {
	public function __construct($root, $processedObjects, $expected, $previous = null, $chainLogic = null) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.match.similar.SimilarMapMatch::new");
		$__hx__spos = $GLOBALS['%s']->length;
		if(!Std::is($expected, _hx_qtype("haxe.IMap"))) {
			throw new HException(new hunit_exceptions_InvalidTestException("`expected` value should be an `haxe.Constraints.IMap` instance.", _hx_anonymous(array("fileName" => "SimilarMapMatch.hx", "lineNumber" => 36, "className" => "hunit.match.similar.SimilarMapMatch", "methodName" => "new"))));
		}
		parent::__construct($previous,$chainLogic);
		$this->root = $root;
		$this->expected = $this->getMatchMap($expected, $processedObjects);
		$GLOBALS['%s']->pop();
	}}
	public $expected;
	public $root;
	public function checkMatch($value) {
		$GLOBALS['%s']->push("hunit.match.similar.SimilarMapMatch::checkMatch");
		$__hx__spos = $GLOBALS['%s']->length;
		if(!Std::is($value, _hx_qtype("haxe.IMap"))) {
			$GLOBALS['%s']->pop();
			return false;
		}
		$value1 = $value;
		$cnt = 0;
		if(null == $value1) throw new HException('null iterable');
		$__hx__it = $value1->keys();
		while($__hx__it->hasNext()) {
			unset($k);
			$k = $__hx__it->next();
			$cnt++;
		}
		{
			$_g = 0;
			$_g1 = $this->expected->keys();
			while($_g < $_g1->length) {
				$k1 = $_g1[$_g];
				++$_g;
				$cnt--;
				unset($k1);
			}
		}
		if($cnt !== 0) {
			$GLOBALS['%s']->pop();
			return false;
		}
		$actual = null;
		$match = null;
		{
			$_g2 = 0;
			$_g11 = $this->expected->keys();
			while($_g2 < $_g11->length) {
				$key = $_g11[$_g2];
				++$_g2;
				$actual = $value1->get($key);
				$match = $this->expected->get($key);
				if(Std::is($match, _hx_qtype("hunit.match.SimilarMatch"))) {
					if($this->root->checkedObjects->indexOf($actual, null) >= 0) {
						continue;
					}
				}
				if(!$match->match($actual)) {
					$GLOBALS['%s']->pop();
					return false;
				}
				unset($key);
			}
		}
		{
			$GLOBALS['%s']->pop();
			return true;
		}
		$GLOBALS['%s']->pop();
	}
	public function shortCode() {
		$GLOBALS['%s']->push("hunit.match.similar.SimilarMapMatch::shortCode");
		$__hx__spos = $GLOBALS['%s']->length;
		$parts = (new _hx_array(array()));
		{
			$_g = 0;
			$_g1 = $this->expected->keys();
			while($_g < $_g1->length) {
				$key = $_g1[$_g];
				++$_g;
				$parts->push(Std::string($key) . "=>" . _hx_string_or_null($this->expected->get($key)->toString()));
				unset($key);
			}
		}
		$str = "[" . _hx_string_or_null($parts->join(", ")) . "]";
		if(strlen($str) === strlen(hunit_Utils::shortenString($str))) {
			$GLOBALS['%s']->pop();
			return $str;
		} else {
			$str = hunit_Utils::shortenString($str);
			{
				$tmp = _hx_string_or_null(_hx_substr($str, 0, strlen($str) - 6)) . "<...>]";
				$GLOBALS['%s']->pop();
				return $tmp;
			}
		}
		$GLOBALS['%s']->pop();
	}
	public function getMatchMap($expected, $processedObjects) {
		$GLOBALS['%s']->push("hunit.match.similar.SimilarMapMatch::getMatchMap");
		$__hx__spos = $GLOBALS['%s']->length;
		$map = new hunit_match_similar__SimilarMapMatch_DynamicMatchMap();
		if(null == $expected) throw new HException('null iterable');
		$__hx__it = $expected->keys();
		while($__hx__it->hasNext()) {
			unset($key);
			$key = $__hx__it->next();
			$map->set($key, $this->root->createMatcherForValue($expected->get($key), $processedObjects));
		}
		{
			$GLOBALS['%s']->pop();
			return $map;
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
	static $__properties__ = array("get_or" => "get_or","get_and" => "get_and");
	function __toString() { return 'hunit.match.similar.SimilarMapMatch'; }
}
