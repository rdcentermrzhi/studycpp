#define _CRT_SECURE_NO_WARNINGS


#include "algosuff.hpp"

//using namespace std;
//
//int
//main(int argc, char** argv)
//{
//
//	vector<int> coll1 = { 1,2,3,4,5,6 };
//	list<int> coll2 = { 1,2,4,8,16,3 };
//
//	PRINT_ELEMENTS(coll1, "coll1:");
//	PRINT_ELEMENTS(coll2, "coll2:");
//
//
//	auto values = mismatch(coll1.cbegin(), coll1.cend(), coll2.cbegin());
//
//	if (values.first == coll1.end())
//	{
//		cout << "no match" << endl;
//	}
//
//	values = mismatch(coll1.cbegin(), coll1.cend(), coll2.cbegin(), less_equal<int>());
//	if (values.first == coll1.end())
//	{
//		cout << "alway less equal" << endl;
//	}
//	else
//	{
//		cout << *values.first << " and " << *values.second << endl;
//	}
//
//	system("pause");
//	
//	return 0;
//}