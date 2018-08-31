#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class Base 
{
public:
	int a = 2, b = 2;
	void print() 
	{
		printf("%d\n", 12);
	}
};

class Derived :public Base 
{
public:
	int b = 3, c =4;
	void print() 
	{
		printf("%d\n",90);
	}
};



//int main(int argc,char *argv[])
//{
//	Derived d;
//
//	std::cout << d.Base::b << "\t" << d.b << std::endl;
//
//	d.print();
//	d.Base::print();
//	system("pause");
//	return 0;
//}