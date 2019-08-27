#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <map>
#include <string>
#include <iomanip>

//using namespace std;
//
//int
//main(int argc, char**)
//{
//	typedef map<string, float> sfmap;
//
//	sfmap stocks;
//
//	stocks["BASF"] = 345.4;
//	stocks["VW"] = 413.50;
//	stocks["Daimler"] = 819.00;
//	stocks["BMW"] = 842.20;
//	stocks["Siemens"] = 843.30;
//
//	sfmap::iterator pos;
//	cout << left;
//	
//	for (pos = stocks.begin(); pos != stocks.end(); ++pos)
//	{
//		cout << "stocks" << setw(12) << pos->first
//			<< "price: " << pos->second << endl;
//	}
//
//	for (pos = stocks.begin(); pos != stocks.end(); ++pos)
//	{
//		pos->second *= 2;
//	}
//
//	cout << endl;
//
//	for (pos = stocks.begin(); pos != stocks.end(); ++pos)
//	{
//		cout << "stocks" << setw(12) << pos->first
//			<< "price: " << pos->second << endl;
//	}
//
//	stocks["Volkswagen"] = stocks["VW"];
//	stocks.erase("VW");
//
//	cout << endl;
//
//	for (pos = stocks.begin(); pos != stocks.end(); ++pos)
//	{
//		cout << "stocks" << setw(12) << pos->first
//			<< "price: " << pos->second << endl;
//	}
//
//	system("pause");
//	
//	return 0;
//}