/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: liel berniker
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
#include <string>
using namespace std;
using namespace ariel;


TEST_CASE("Good snowman code") {

// test hat 1
// _===_
//\(O.O)/
// ( : ) 
// (" ")
    CHECK(snowman(12332212) == " _===_\n\\(O.O)/\n ( : )\n (" ")");
// test hat 2
//  ___
// .....
// (o,O)
//<(   )>
// (___)
	CHECK(snowman(21231143) == "  ___\n .....\n (o,O)/\n<(   )>\n (___)");
// test hat 3
//   _ 
//  /_\
//\(- O)
// (] [)\
// ( : )
	CHECK(snowman(3443232) == "   _\n /_\\\n\\(- O)\n (] [)\\\n ( : )");
// test hat 4
// ___
//(_*_)
//(o_o)
//(> <)
//(   )
	CHECK(snowman(43224432) == " ___\n(_*_)\n(o_o)/\n(> <)\n(   )");
// test nose 1
//  ___
// (_*_)
// (-,-)
//<(   )\
// (" ")
	CHECK(snowman(41441342) == "  ___\n (_*_)\n (-,-)\n<(   )\\\n (" ")");
// test nose 2
//   _
//  /_\
//\(o.O)
// (] [)>
// (   )
	CHECK(snowman(32232124) == "   _\n  /_\\\n\\(o.O)\n (] [)>\n (   )");
// test nose 3
// _===_
// (._.)
///( : )\
// ( : )
	CHECK(snowman(13113311) == " _===_\n (._.)/\n/( : )\\\n ( : )");
// test nose 4
//   _
//  /_\
// (- .)
//<(   )
// (___)
	CHECK(snowman(34411443) == "   _\n  /_\\\n (- .)\n<(   )\n (___)");
// test eyes 1
//  ___
// (_*_)
// (.,.)
//<(   )\
// (" ")
	CHECK(snowman(41111342) == "  ___\n (.*.)\n (-,-)\n<(   )\\\n (" ")");
// test eyes 2
//   _
//  /_\
//\(o_o)
// (] [)>
// (   )
	CHECK(snowman(33222124) == "   _\n  /_\\\n\\(o_o)\n (] [)>\n (   )");
// test eyes 3
//  ___
// .....
// (O,O)
//<(   )>
// (___)
	CHECK(snowman(21331143) == "  ___\n .....\n (O,O)\n<(   )>\n (___)");
// test eyes 4
// _===_
//\(-.-)/
// ( : ) 
// (" ")
    CHECK(snowman(12442212) == " _===_\n\\(-.-)/\n ( : )\n (" ")");
// test hands 1
//  ___
// .....
// (o,O)
//<(   )>
// (___)
	CHECK(snowman(21231143) == "  ___\n .....\n (o,O)/\n<(   )>\n (___)");
// test hands 2
//   _ 
//  /_\
//\(- O)/
// (] [)
// ( : )
	CHECK(snowman(34432221) == "   _\n /_\\\n\\(- O)/\n (] [)\n ( : )");
// test hands 3
//  ___
// .....
// (o,O)
///(   )\
// (___)
	CHECK(snowman(21233343) == "  ___\n .....\n (o,O)\n/(   )\\\n (___)");
// test hands 4
// ___
//(_*_)
//(o_o)
//(> <)
//(   )
	CHECK(snowman(43224432) == " ___\n(_*_)\n(o_o)/\n(> <)\n(   )");
// test torso 1
//_===_
//(.,.)
//( : )
//( : )
    CHECK(snowman(11114411) == "_===_\n(.,.)\n( : )\n( : )");
// test torso 2
//   _
//  /_\
// (- .)
//<(] [)
// (___)
	CHECK(snowman(34411423) == "   _\n  /_\\\n (- .)\n<(] [)\n (___)");
// test torso 3
// _===_
//\(O.O)/
// (> <) 
// (" ")
    CHECK(snowman(12332232) == " _===_\n\\(O.O)/\n (> <)\n (" ")");
// test torso 4
//   _
//  /_\
// (- .)
//<(   )
// (___)
	CHECK(snowman(34411443) == "   _\n  /_\\\n (- .)\n<(   )\n (___)");
// test base 1
//   _ 
//  /_\
//\(- O)/
// (] [)
// ( : )
	CHECK(snowman(34432221) == "   _\n /_\\\n\\(- O)/\n (] [)\n ( : )");
// test base 2
//  ___
// (_*_)
// (.,.)
//<(   )\
// (" ")
	CHECK(snowman(41111342) == "  ___\n (.*.)\n (-,-)\n<(   )\\\n (" ")");
// test base 3
//  ___
// .....
// (o,O)
//<(   )>
// (___)
	CHECK(snowman(21231143) == "  ___\n .....\n (o,O)/\n<(   )>\n (___)");
// test base 4
//   _
//  /_\
//\(o.O)
// (] [)>
// (   )
	CHECK(snowman(32232124) == "   _\n  /_\\\n\\(o.O)\n (] [)>\n (   )");

}

TEST_CASE("Bad snowman code") {

	//check wrong number of digits 1 (9 digits)
    CHECK_THROWS(snowman(123243234));

	//check wrong number of digits 2 (10 digits)
    CHECK_THROWS(snowman(2112433232));

	//check wrong number of digits 3 (6 digits)
    CHECK_THROWS(snowman(122234));

	//check wrong number of digits 4 (1 digit)
    CHECK_THROWS(snowman(1));

	//check wrong digits 1 (one of the digit is 5)
    CHECK_THROWS(snowman(12354334));

	//check wrong digits 2 (two of the digits is 9)
    CHECK_THROWS(snowman(12334399));

	//check wrong digits 3 (all of the digits not 1-4)
    CHECK_THROWS(snowman(76897788));

   
}



