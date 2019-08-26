#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <string>
#include <forward_list>
#include <iterator>

using namespace std;
void print_list(const string& s, const forward_list<int>& l1, const forward_list<int>& l2)
{
	cout << s << endl;
	cout << "list1:";
	copy(l1.cbegin(), l1.cend(), ostream_iterator<int>(cout, " "));
	cout << endl << "list2:";
	copy(l2.cbegin(), l2.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;
}





//int
//main(int argc, char**)
//{
//	forward_list<int> l1 = { 1,2,3,4 };
//	forward_list<int> l2 = { 77,88,99 };
//
//	print_list("inital", l1, l2);
//
//	l2.insert_after(l2.before_begin(), 99);
//	l2.push_front(10);
//	l2.insert_after(l2.before_begin(), { 10, 11, 12, 13 });
//	print_list("6 new elems", l1, l2);
//
//	l1.insert_after(l1.before_begin(), l2.begin(), l2.end());
//	print_list("l2 insert l1", l1, l2);
//
//	l2.erase_after(l2.begin()); //remove one elems
//	l2.erase_after(find(l2.begin(), l2.end(), 99), l2.end());
//	print_list("delete 2nd and 99", l1, l2);
//
//	l1.sort();
//	l2 = l1;
//
//	l2.unique();
//	print_list("sort unqiue",l1, l2);
//	
//	l1.merge(l2);
//	print_list("merage",l1, l2);
//	system("pause");
//	
//	return 0;
//}