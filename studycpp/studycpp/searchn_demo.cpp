#define _CRT_SECURE_NO_WARNINGS

#include "algosuff.hpp"
#include <iostream>

using namespace std;


//int
//main(int argc, char**)
//{
//	deque<int> coll;
//
//	coll = {1, 2, 7, 7, 6, 3, 9, 5, 7, 7, 7, 3, 6};
//	PRINT_ELEMENTS(coll);
//
//	deque<int>::iterator pos;
//	pos = search_n(coll.begin(), coll.end(), 3, 7);
//
//	if (pos != coll.end())
//	{
//		cout << "3 7 start with" << distance(coll.begin(), pos) + 1 << endl;
//	}
//	else
//	{
//		cout << "no found repead 3 7";
//	}
//
//	pos = search_n(coll.begin(), coll.end(), 4, 0,
//		[](int elem, int value)
//		{
//		return elem % 2 == 1;
//	});
//
//	if (pos != coll.end())
//	{
//		for (int i = 0; i < 4; ++i, ++pos)
//		{
//			cout << *pos << ' ';
//		}
//	}
//
//
//	system("pause");
//	
//	return 0;
//}