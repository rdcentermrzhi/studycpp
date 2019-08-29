#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <numeric>
#include <iomanip>
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

template <typename T1, typename T2>
std::ostream& operator << (std::ostream& strm, const std::pair<T1, T2>& p)
{
	return strm << "[" << p.first << "." << p.second << "]";
}

template <typename T>
void printHashTableState(const T& cont)
{
	cout << left;
	cout << "size:" << cont.size() << "\n";
	cout << "buckets:" << cont.bucket_count() << "\n";
	cout << "load factor" << cont.load_factor() << "\n";
	cout << "max load factor " << cont.max_load_factor() << "\n";

	if (typeid(typename std::iterator_traits<typename T::iterator>::iterator_category) == typeid(std::bidirectional_iterator_tag))
	{
		cout << "chaining style: double linked\n";
	}
	else
	{
		cout << "chaining style: single linked\n";
	}

	cout << "data:" << "\n";
	for (auto idx = 0; idx != cont.bucket_count(); ++idx)
	{
		cout << "b[" << setw(2) << idx << "]: ";
		for (auto pos = cont.begin(idx); pos != cont.end(idx); ++pos)
		{
			cout << *pos << " ";
		}

		cout << "\n";
	}

	cout << "\n";
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
//	printHashTableState(coll);
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