#define _CRT_SECURE_NO_WARNINGS

#include "algosuff.hpp"

using namespace std;

//int
//main(int argc, char** argv)
//{
//	vector<int> coll1;
//	deque<int> coll2;
//
//	INSERT_ELEMENTS(coll1, 1, 9);
//	INSERT_ELEMENTS(coll2, 11, 23);
//
//	PRINT_ELEMENTS(coll1, "coll1: ");
//	PRINT_ELEMENTS(coll2, "coll2: ");
//
//	deque<int>::iterator pos;
//	pos = swap_ranges(coll1.begin(), coll1.end(), coll2.begin());
//
//	PRINT_ELEMENTS(coll1, "\ncoll1: ");
//	PRINT_ELEMENTS(coll2, "coll2: ");
//	if (pos != coll2.end())
//	{
//		cout << "first element not modified " << *pos << endl;
//	}
//
//	swap_ranges(coll2.begin(), coll2.begin() + 3, coll2.rbegin());
//	PRINT_ELEMENTS(coll2, "\ncoll2: ");
//
//
//	//fill fill_n;
//
//	fill(coll2.begin(), coll2.end(), 0);
//	PRINT_ELEMENTS(coll2, "coll2:");
//
//	fill_n(coll2.begin(), 4, 100);
//	PRINT_ELEMENTS(coll2, "coll2:");
//
//	//generate
//	list<int> coll3;
//	generate_n(back_inserter(coll3), 5, rand);
//	PRINT_ELEMENTS(coll3, "coll3: ");
//
//	generate(coll3.begin(), coll3.end(), rand);
//	PRINT_ELEMENTS(coll3, "coll3: ");
//
//	//iota assign increment value
//
//	array<int, 10> coll4;
//
//	iota(coll4.begin(), coll4.end(), 42);
//	PRINT_ELEMENTS(coll4, "coll4: ");
//
//	system("pause");
//	return 0;
//}