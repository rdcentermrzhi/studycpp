#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
typedef int(MyFUNC)(int);

int test(int a) 
{
	return a * a;
}

void f() 
{
	std::cout <<"Call f()"<< std::endl;
}

//int main(int argc,char *argv[])
//{
//	MyFUNC * func = test;
//	std::cout << func(12) << std::endl;
//
//	void(*pfunc)() = &f;
//	pfunc();
//	(*pfunc)();
//	
//	system("pause");
//	return 0;
//}