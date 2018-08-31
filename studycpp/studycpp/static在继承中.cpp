#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class Ba
{
public:
	static int i;
	static void add()
	{
		i++;
	}

	void out() 
	{
		std::cout << "static i = " << i << std::endl;
 	}

protected:
private:
};

int Ba::i = 0;

class Da:public Ba
{
public:
	void f() 
	{
		i = 5;
		add();
		Ba::i++;
		Ba::add();
	}
protected:
private:
};


//int main(int argc,char *argv[])
//{
//	Ba x; Da y;
//	x.add();
//	x.out();
//
//	y.f();
//	
//	std::cout << "static i = " << Ba::i << std::endl;
//	std::cout << "static i = " << x.i << std::endl;
//	std::cout << "static i = " << y.i << std::endl;
//		system("pause");
//	return 0;
//}