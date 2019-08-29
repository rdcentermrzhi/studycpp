#define _CRT_SECURE_NO_WARNINGS


#include "algosuff.hpp"
#include <iostream>

using namespace std;

//int
//main(int argc, char**)
//{
//	list<int> coll;
//
//	INSERT_ELEMENTS(coll, 1, 9);
//	//INSERT_ELEMENTS(coll, 1, 9);
//
//	PRINT_ELEMENTS(coll, "coll: ");
//
//	list<int>::iterator pos1;
//	pos1 = find(coll.begin(), coll.end(), 4);
//
//	list<int>::iterator pos2;
//	if (pos1 != coll.end())
//	{
//		pos2 = find(++pos1, coll.end(), 4);
//	}
//
//	if (pos1 != coll.end() && pos2 != coll.end())
//	{
//		copy(--pos1, ++pos2, ostream_iterator<int>(cout, " "));
//		cout << endl;
//	}
//
//	using namespace placeholders;
//
//	list<int>::iterator pos;
//	pos = find_if(coll.begin(), coll.end(), bind(greater<int>(), _1, 3));
//
//	cout << "the" << distance(coll.begin(), pos) + 1 << ". elements is the first greater than3" << endl;
//
//	pos = find_if(coll.begin(), coll.end(), 
//		[](int elem) {
//			return elem % 3 == 0;		
//	});
//
//	cout << "the " << distance(coll.begin(), pos) + 1 << endl;
//
//	pos = find_if(coll.begin(), coll.end(), bind(less<int>(), _1, 5));
//
//	cout << "first < 5 " << *pos << endl;
//
//	system("pause");
//	
//	return 0;
//}