#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
int main(int argc,char *argv[])
{

	std::pair<int, int> a = {1,3};


	std::cout << a.first << std::endl;

	std::cout << std::numeric_limits<uint32_t>::max() << std::endl;
	
	system("pause");
	return 0;
}