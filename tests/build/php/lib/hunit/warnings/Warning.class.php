<?php

class hunit_warnings_Warning {
	public function __construct($message) {
		if(!php_Boot::$skip_constructor) {
		$GLOBALS['%s']->push("hunit.warnings.Warning::new");
		$__hx__spos = $GLOBALS['%s']->length;
		if($message === null || strlen(trim($message)) === 0) {
			$message = $this->defaultMessage();
		}
		$this->message = $message;
		$GLOBALS['%s']->pop();
	}}
	public $message;
	public function defaultMessage() {
		$GLOBALS['%s']->push("hunit.warnings.Warning::defaultMessage");
		$__hx__spos = $GLOBALS['%s']->length;
		$className = _hx_explode(".", Type::getClassName(Type::getClass($this)))->pop();
		$words = (new _hx_array(array()));
		$wordStart = -1;
		{
			$_g1 = 0;
			$_g = strlen($className);
			while($_g1 < $_g) {
				$i = $_g1++;
				$char = _hx_char_at($className, $i);
				if(strtoupper($char) === $char) {
					if($wordStart >= 0) {
						$word = _hx_substring($className, $wordStart, $i);
						if($wordStart > 0) {
							$word = strtolower($word);
						}
						$words->push($word);
						unset($word);
					}
					$wordStart = $i;
				}
				unset($i,$char);
			}
		}
		if($wordStart >= 0) {
			$words->push(strtolower(_hx_substr($className, $wordStart, null)));
		}
		{
			$tmp = $words->join(" ");
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
	function __toString() { return 'hunit.warnings.Warning'; }
}
