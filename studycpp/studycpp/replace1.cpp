#define _CRT_SECURE_NO_WARNINGS

#include "algosuff.hpp"

//using namespace std;
//using namespace placeholders;
//
//int
//main(int argc, char** argv)
//{
//
//	//list<int> coll;
//
//	//INSERT_ELEMENTS(coll, 2, 7);
//	//INSERT_ELEMENTS(coll, 4, 9);
//	//PRINT_ELEMENTS(coll, "coll: ");
//
//	//replace(coll.begin(), coll.end(), 6, 42);
//	//PRINT_ELEMENTS(coll, "coll: ");
//
//	//replace_if(coll.begin(), coll.end(), [](int elem) {
//
//	//	return elem < 5;
//	//}, 0);
//
//	//PRINT_ELEMENTS(coll, "coll: ");
//
//	list<int> coll;
//	
//	INSERT_ELEMENTS(coll, 2, 6);
//	INSERT_ELEMENTS(coll, 4, 9);
//	PRINT_ELEMENTS(coll);
//
//	replace_copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "), 5, 99);
//
//	replace_copy_if(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "), bind(less<int>(), _1, 5), 42);
//
//
//
//
//	system("pause");
//	return 0;
//}