#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class Parent05 
{
public:
	virtual void print() 
	{
		std::cout << "Parent05 print()" << std::endl;
	}
};


class Child05: public Parent05
{
public:
	virtual void print() 
	{
		std::cout << "Child05 print()" << std::endl;
	}
};

int main(int argc,char *argv[])
{
	
	Child05 ch;
	Parent05 p = ch;
	Parent05 *pr = &ch;
	p.print();
	pr->print();
	system("pause");
	return 0;
}