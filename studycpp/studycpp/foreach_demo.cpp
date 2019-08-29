#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "algosuff.hpp"


using namespace std;


//class MeanValue
//{
//public:
//	MeanValue() : num(0), sum(0)
//	{
//	}
//
//	void operator()(int elem)
//	{
//		num++;
//		sum += elem;
//	}
//
//	operator double()
//	{
//		return static_cast<double>(sum) / static_cast<double>(num);
//	}
//private:
//	long num;
//	long sum;
//
//};
//
//int
//main(int argc, char**)
//{
//
//	vector<int> coll;
//
//	INSERT_ELEMENTS(coll, 1, 9);
//
//
//	double mv = for_each(coll.begin(), coll.end(), MeanValue());
//	std::cout << "Mean value:" << mv << endl;
//
//	for_each(coll.cbegin(), coll.cend(), 
//		[](int elem)
//		{
//		cout << elem << ' ';
//		});
//
//	cout << endl;
//
//	for_each(coll.begin(), coll.end(), 
//		[](int &elem) {
//		elem += 10;
//	});
//	PRINT_ELEMENTS(coll);
//
//	for_each(coll.begin(), coll.end(),
//		[=](int& elem) {
//		elem += *coll.begin();
//	});
//
//	PRINT_ELEMENTS(coll);
//
//	system("pause");
//	
//	return 0;
//}