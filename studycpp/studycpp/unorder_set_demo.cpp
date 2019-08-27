#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <numeric>
using namespace std;

template <class T>
void print_element(const T& c)
{
	for (const auto& elem : c)
	{
		cout << elem << " ";
	}
	cout << endl;
}

//int
//main(int argc, char**)
//{
//	unordered_set<int> coll = { 1,2, 3, 5, 7, 11, 13, 17, 19, 77 };
//
//	coll.insert({ -7, 17, 33, -11, 17, 19, 1, 13 });
//	print_element(coll);
//
//	coll.erase(33);
//	print_element(coll);
//
//	coll.insert(accumulate(coll.begin(), coll.end(), 0));
//	print_element(coll);
//
//	if (coll.find(19) != coll.end())
//	{
//		cout << "19 avaliable\n";
//	}
//
//	unordered_set<int>::iterator pos;
//	for (pos = coll.begin(); pos != coll.end();)
//	{
//		if (*pos < 0) 
//		{
//			pos = coll.erase(pos);
//		}
//		else 
//		{
//			++pos;
//		}
//	}
//
//	print_element(coll);
//	system("pause");
//	
//	return 0;
//}