#define _CRT_SECURE_NO_WARNINGS

#include "algosuff.hpp"

//using namespace std;
//using namespace std::placeholders;
//int
//main(int argc, char** argv)
//{
//	vector<int> coll1;
//	list<int>  coll2;
//
//	INSERT_ELEMENTS(coll1, 1, 9);
//	PRINT_ELEMENTS(coll1, "coll1: ");
//
//	transform(coll1.cbegin(), coll1.cend(), coll1.begin(), negate<int>());
//	PRINT_ELEMENTS(coll1, "negated: ");
//
//	transform(coll1.cbegin(), coll1.cend(), back_inserter(coll2), bind(multiplies<int>(), _1, 10));
//	PRINT_ELEMENTS(coll2, "coll2:");
//
//	transform(coll2.cbegin(), coll2.cend(), ostream_iterator<int>(cout, " "), [](int elem)
//	{
//		return -elem;
//	});
//	cout << endl;
//
//
//	transform(coll2.cbegin(), coll2.cend(), coll2.cbegin(), ostream_iterator<int>(cout, ""), minus<int>());
//
//
//	system("pause");
//	return 0;
//}