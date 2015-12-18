StablexUI backend for HML
=========================

Installation
----------------
```
haxelib git hml https://github.com/profelis/hml.git
haxelib git stablexui-hml https://github.com/StablexUI/Hml master
```

Usage with `hxml` project files
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

-lib someLib
-lib anotherLib
-swf bin/app.swf
```
And run it with `haxe hml.hxml` before `haxe build.hxml`.


Usage with OpenFL and NME
-------------------------
Add to yor project configuration file this section:
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
See [usage example](https://github.com/StablexUI/Examples/tree/master/hml/)