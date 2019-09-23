#define _CRT_SECURE_NO_WARNINGS

#include "algosuff.hpp"

using namespace std;

int
main(int argc, char** argv)
{
	vector<int> coll;

	INSERT_ELEMENTS(coll, 3, 7);
	INSERT_ELEMENTS(coll, 5, 9);
	INSERT_ELEMENTS(coll, 1, 4);

	PRINT_ELEMENTS(coll, "on entry: ");

	make_heap(coll.begin(), coll.end());
	PRINT_ELEMENTS(coll, "after make_heap: ");

	pop_heap(coll.begin(), coll.end());
	coll.pop_back();

	PRINT_ELEMENTS(coll, "after pop_heap: ");

	coll.push_back(17);
	push_heap(coll.begin(), coll.end());
	PRINT_ELEMENTS(coll, "after push_heap: ");


	system("pause");
	return 0;
}