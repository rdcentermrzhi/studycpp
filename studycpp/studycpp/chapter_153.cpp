#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
std::string global_str;
int global_int;
int main(int argc,char *argv[])
{
	std::string local_str;
	int local_int;

	std::cout << global_str << std::endl;
	_CrtDumpMemoryLeaks();
	system("pause");
	return 0;
}