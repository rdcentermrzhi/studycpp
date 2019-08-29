#define _CRT_SECURE_NO_WARNINGS

#include "algosuff.hpp"
using namespace std;


//bool checkEvent(int elem, bool even)
//{
//	if (even)
//	{
//		return elem % 2 == 0;
//	}
//	else 
//	{
//		return elem % 2 == 1;
//	}
//
//}
//
//int
//main(int argc, char**)
//{
//	deque<int> coll;
//	list<int> subcoll;
//
//	INSERT_ELEMENTS(coll, 1, 7);
//	INSERT_ELEMENTS(coll, 1, 7);
//	INSERT_ELEMENTS(subcoll, 3, 6);
//
//	PRINT_ELEMENTS(coll, "coll: ");
//	PRINT_ELEMENTS(subcoll, "subcoll: ");
//
//	deque<int>::iterator pos;
//
//	pos = search(coll.begin(), coll.end(), subcoll.begin(), subcoll.end());
//
//	while (pos != coll.end())
//	{
//		cout << "sub" << distance(coll.begin(), pos) + 1 << endl;
//
//		++pos;
//		pos = search(pos, coll.end(), subcoll.begin(), subcoll.end());
//	}
//
//
//	vector<int> xcoll;
//
//	INSERT_ELEMENTS(xcoll, 1, 9);
//	PRINT_ELEMENTS(xcoll);
//
//	bool checkEventArgs[3] = { true, false, true };
//
//	vector<int>::iterator posx;
//
//	posx = search(xcoll.begin(), xcoll.end(), checkEventArgs, checkEventArgs + 3, checkEvent);
//
//
//	cout << *posx << endl;
//
//	posx = find_end(xcoll.begin(), xcoll.end(), checkEventArgs, checkEventArgs + 3);
//	cout << "end"<< *posx << endl;
//
//	//find last match 
//	posx = find_end(xcoll.begin(), xcoll.end(), checkEventArgs, checkEventArgs + 3, checkEvent);
//	cout << *posx << endl;
//
//	system("pause");
//	
//	return 0;
//}