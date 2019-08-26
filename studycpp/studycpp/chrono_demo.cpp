#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <chrono>


class A
{
public:
	A(int a)
	{
		std::cout << "A" << std::endl;
	}

};


//int main(int argc,char *argv[])
//{
//
//	auto s = std::chrono::system_clock::now();
//
//	auto e = s + std::chrono::minutes(100);
//
//	A(0);
//	
//	system("pause");
//	return 0;
//}