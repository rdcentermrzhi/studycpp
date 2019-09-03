#define _CRT_SECURE_NO_WARNINGS


#include "algosuff.hpp"
using namespace std;


//int
//main(int argc, char** argv)
//{
//
//	vector<int> coll = { 5, 3, 9, 1, 3, 4, 8, 2, 6};
//	PRINT_ELEMENTS(coll, "coll: ");
//
//	auto isOdd = [](int elem)
//	{
//		return elem % 2 == 1;
//	};
//
//	if (is_partitioned(coll.cbegin(), coll.cend(), isOdd))
//	{
//		cout << "coll is partitioned " << endl;
//
//		auto pos = partition_point(coll.cbegin(), coll.cend(), isOdd);
//		cout << "first event element" << *pos << endl;
//	}
//
//	system("pause");
//	
//	return 0;
//}