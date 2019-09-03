#define _CRT_SECURE_NO_WARNINGS


#include "algosuff.hpp"

using namespace std;

bool bothEvenOrOdd(int elem1, int elem2)
{
	return elem1 % 2 == elem2 % 2;
}

//int
//main(int argc, char**)
//{
//	vector<int> coll1;
//	list<int> coll2;
//
//	INSERT_ELEMENTS(coll1, 1, 7);
//	INSERT_ELEMENTS(coll2, 3, 9);
//
//	PRINT_ELEMENTS(coll1, "coll1:");
//	PRINT_ELEMENTS(coll2, "coll2:");
//
//	if (equal(coll1.begin(), coll1.end(), coll2.begin(), bothEvenOrOdd))
//	{
//		cout << "event and odd elements correspand" << endl;
//	}
//
//
//
//	system("pause");
//	
//	return 0;
//}