#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>

using namespace std;

//int
//main(int argc, char**)
//{
//	set<int, greater<int>> coll1;
//
//	coll1.insert({ 4,3,5,1,6,2 });
//	coll1.insert(5);
//
//	for (int elem : coll1)
//	{
//		cout << elem << ' ';
//	}
//	cout << endl;
//
//	auto status = coll1.insert(4);
//	if (status.second)
//	{
//		cout << "4 insert as elemt" << distance(coll1.begin(), status.first) + 1 << endl;
//	}
//	else
//	{
//		cout << "already exists" << endl;
//	}
//
//	set<int> coll2(coll1.cbegin(), coll1.cend());
//	copy(coll2.cbegin(), coll2.cend(), ostream_iterator<int>(cout, " "));
//	cout << endl;
//
//	coll2.erase(coll2.begin(), coll2.find(3));
//
//	int num = 0;
//	num = coll2.erase(5);
//
//	cout << num << endl;
//
//	system("pause");
//	
//	return 0;
//}