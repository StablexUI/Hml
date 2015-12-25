StablexUI backend for HML [![Build Status](https://travis-ci.org/StablexUI/Hml.svg)](https://travis-ci.org/StablexUI/Hml)
=========================

Installation
----------------
```
haxelib git hml https://github.com/profelis/hml.git
haxelib git stablexui-hml https://github.com/StablexUI/Hml master
```

Special cases
-------------
* Values for metric properties can be specified with units (DIPS by default):
```xml
<Widget left="20%" top="100px" height="200dip" width="300" />
```
* StablexUI enums are imported automatically, so you can use them without fully qualified names:
```
<Box align="Right & Bottom" orientation="Horizontal" />
```
* Signal handlers
    * If you dont need to use signal arguments
    ```xml
    <Button onTrigger="trace('Button triggered!');" />
    ```
    * If you need to use signal arguments, then you must define a closure with the same amount of arguments
    ```xml
    <Button name="'myButton'" onTrigger=" function(btn) trace(btn.name + ' triggered'); " />
    ```
    * If you need to define multiple handlers for the same signal
    ```xml
    <Button>
        <onTrigger>trace('first handler');</onTrigger>
        <onTrigger>trace('second handler');</onTrigger>
    </Button>
    ```
* `destroyHml()` will be automatically called when you `dispose()` widget created via xml


Using with `hxml` project files
-------------------------------
Put your xml files in `<project_root>/hml/xml`.
Generated files will be written to `<preject_root>/hml/gen`. Add it to your classpaths.

Now if your `build.hxml` looks like this:
```
-main Main

-cp hml/gen
-lib someLib
-lib anotherLib
-swf bin/app.swf
```
You need to create `hml.hxml` like this:
```
-main sx.hml.Generator
--no-output
-lib stablexui-hml

-cp hml/gen
-lib someLib
-lib anotherLib
-swf bin/app.swf
```
And run it with `haxe hml.hxml` before `haxe build.hxml`.


Using with OpenFL and NME
-------------------------
Add to your project configuration file this section:
```xml
<source path="hml/gen" />
<section if="hml">
    <haxelib name="stablexui-hml" />
    <app main="sx.hml.Generator"/>
    <haxeflag name="--no-output"/>
</section>
```
And run `openfl build <platform> -Dhml` before `openfl build <platform>`.


Example
-----------
See [example](https://github.com/StablexUI/Examples/tree/master/hml/)
