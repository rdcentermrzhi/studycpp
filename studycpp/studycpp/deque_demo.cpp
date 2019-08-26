#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <deque>
#include <string>
#include <iterator>
//int
//main(int argc, char**)
//{
//	using namespace std;
//
//	deque<string> coll;
//
//	coll.assign(3, string("string"));
//	coll.push_back("last string");
//	coll.push_front("first string");
//	
//	copy(coll.cbegin(), coll.cend(), ostream_iterator< string >(cout, "\n"));
//
//	cout << endl;
//
//	coll.pop_back();
//	coll.pop_front();
//
//	for (unsigned i = 1; i < coll.size(); i++)
//	{
//		coll[i] = "another " + coll[i];
//	}
//
//	coll.resize(4, "resize string");
//
//	copy(coll.cbegin(), coll.cend(), ostream_iterator<string>(cout, "\n"));
//
//	system("pause");
//	
//	return 0;
//}