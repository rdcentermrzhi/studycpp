#define _CRT_SECURE_NO_WARNINGS


#include "algosuff.hpp"
using namespace std;

bool bothEventOrOdd2(int elem1, int elem2)
{
	return elem1 % 2 == elem2 % 2;
}

//int
//main(int argc, char**)
//{
//	vector<int> coll1;
//	list<int> coll2;
//	deque<int> coll3;
//
//	coll1 = { 1, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	coll2 = { 1, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	coll3 = { 11, 12, 13, 14, 15, 16, 17, 16, 15, 14, 11 };
//
//	PRINT_ELEMENTS(coll1, "coll1:");
//	PRINT_ELEMENTS(coll2, "coll2:");
//	PRINT_ELEMENTS(coll3, "coll3:");
//
//	if (is_permutation(coll1.cbegin(), coll1.cend(), coll2.cbegin()))
//	{
//		cout << "coll1 and coll2 have equal elements" << endl;
//	}
//
//	if (is_permutation(coll1.cbegin(), coll1.cend(), coll3.cbegin(), bothEventOrOdd2))
//	{
//		cout << "coll1 and coll3 even and odd elemt" << endl;
//	}
//
//
//
//
//	system("pause");
//	
//	return 0;
//}