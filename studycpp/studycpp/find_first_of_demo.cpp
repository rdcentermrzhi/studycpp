#define _CRT_SECURE_NO_WARNINGS


#include "algosuff.hpp"

using namespace std;

bool lessx(int less, int greate)
{
	return less < greate;
}

int
main(int argc, char**)
{
	vector<int> coll;
	list<int> searchcoll;

	INSERT_ELEMENTS(coll, 1, 11);
	INSERT_ELEMENTS(searchcoll, 4, 5);

	searchcoll.push_front(2);
	searchcoll.push_front(2);


	PRINT_ELEMENTS(coll, "coll: ");
	PRINT_ELEMENTS(searchcoll, "searchcoll: ");

	vector<int>::iterator pos;
	pos = find_first_of(coll.begin(), coll.end(), searchcoll.begin(), searchcoll.end());

	cout << *pos << endl;

	vector<int>::reverse_iterator rpos;
	rpos = find_first_of(coll.rbegin(), coll.rend(), searchcoll.begin(), searchcoll.end());

	cout << *rpos << endl;

	pos = find_first_of(coll.begin(), coll.end(), searchcoll.begin(), searchcoll.end(), greater<int>());

	cout << *pos << endl;

	list<int>::iterator xpos;
	xpos = adjacent_find(searchcoll.begin(), searchcoll.end());

	cout << *xpos << endl;
	system("pause");


	
	
	return 0;
}