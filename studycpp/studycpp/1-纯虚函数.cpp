#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class InterfaceMy
{
public:
	virtual void print() = 0;
};

class MyImpl :public InterfaceMy 
{
public:
	void print() 
	{
		printf("adc");
	}
};




//int main(int argc,char *argv[])
//{
//	//InterfaceMy inter;
//
//	MyImpl d;
//	d.print();
//	
//	system("pause");
//	return 0;
//}