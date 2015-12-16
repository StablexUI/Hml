package test.base;



/**
 * Base class for generated test.Test
 *
 */
class Person
{

    /** name */
    public var name : Name;
    /** Age */
    public var age : Int = 0;
    /** Favorite numbers */
    public var favoriteNumbers : Array<Int>;


    /**
     * Constructor
     */
    public function new () : Void
    {
        name = new Name();
        favoriteNumbers = [];
    }

}//class Test