#define _CRT_SECURE_NO_WARNINGS


#include "algosuff.hpp"
using namespace std;

int
main(int argc, char** argv)
{

	vector<int> coll;
	vector<int>::iterator pos;

	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	auto isEven = [](int elem)
	{
		return elem % 2 == 0;
	};

	cout << boolalpha << "all even?: "
		<< all_of(coll.cbegin(), coll.cend(), isEven) << endl;

	cout << boolalpha << "any even?: "
		<< any_of(coll.cbegin(), coll.cend(), isEven) << endl;

	cout << "none even?: "
		<< none_of(coll.cbegin(), coll.cend(), isEven);

	system("pause");
	
	return 0;
}