#define _CRT_SECURE_NO_WARNINGS

#include "algosuff.hpp"
#include <iostream>

using namespace  std;


//int
//main(int argc, char**)
//{
//	vector<int> coll;
//
//	int num;
//	INSERT_ELEMENTS(coll, 1, 9);
//
//	PRINT_ELEMENTS(coll, "coll: ");
//
//	num = count(coll.cbegin(), coll.cend(), 4);
//	cout << "number of elements equal to 4:" << num;
//
//	num = count_if(coll.cbegin(), coll.cend(), 
//		[](int elem) {
//		return elem % 2 == 0;
//	});
//
//	cout << "event values" << num << endl;
//
//	num = count_if(coll.cbegin(), coll.cend(), bind(logical_not<bool>(), bind(modulus<int>(), placeholders::_1, 2)));
//	cout << "event values" << num << endl;
//
//	system("pause");
//	
//	return 0;
//}