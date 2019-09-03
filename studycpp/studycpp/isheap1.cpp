#define _CRT_SECURE_NO_WARNINGS


#include "algosuff.hpp"
using namespace std;

//int
//main(int argc, char** argv)
//{
//
//	vector<int> coll1 = { 9,8,7,7,7,5,4,2,1 };
//	vector<int> coll2 = { 5, 3, 2, 1, 4, 7, 9, 8, 6};
//	PRINT_ELEMENTS(coll1, "coll1: ");
//	PRINT_ELEMENTS(coll2, "coll2: ");
//
//	cout << boolalpha << "coll1 is heap: "
//		<< is_heap(coll1.cbegin(), coll1.cend()) << endl;
//	cout << "coll2 is heap: "
//		<< is_heap(coll2.cbegin(), coll2.cend()) << endl;
//
//	auto pos = is_heap_until(coll2.cbegin(), coll2.cend());
//	if (pos != coll2.cend())
//	{
//		cout << "first non-heap element: " << *pos << endl;
//	}
//
//
//	system("pause");
//	
//	return 0;
//}