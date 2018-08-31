#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class Parent
{
public:
	Parent() 
	{
		a_ = 0;
		b_ = 0;
		c_ = 0;
	}

	void setParent(int a, int b, int c) 
	{
		a_ = a;
		b_ = b;
		c_ = c;
	}


public:
	int c_;

protected:
	int b_;

private:
	int a_;
};

class SonA :public Parent 
{
	//无论何种继承方式 派生类都不能直接使用基类的私有成员
public:
	void printSonA() 
	{
		//std::cout << "a_ =" << a_ << std::endl;
		std::cout << "b_ =" << b_ << std::endl;
		std::cout << "c_ =" << c_ << std::endl;
 	}
};

class SonB :protected Parent 
{
public:
	void PrintSonB() 
	{
		//std::cout << "a_ =" << a_ << std::endl;
		std::cout << "b_ =" << b_ << std::endl;
		std::cout << "c_ =" << c_ << std::endl;
	}
};

class SonC :private Parent
{
public:
	void PrintSonC()
	{
		//std::cout << "a_ =" << a_ << std::endl;
		std::cout << "b_ =" << b_ << std::endl;
		std::cout << "c_ =" << c_ << std::endl;
	}
};


//int main(){
//	Parent p;
//	SonA a;
//	SonB b;
//	SonC c;
//
//	p.c_ = 100;
//	a.c_ = 100;
//	//b.c_ = 100;
//	//c.c_ = 100;
//
//	p.setParent(1, 2, 3);
//	a.setParent(1, 2, 3);
//	//b.setParent(1, 2, 3);
//	//c.setParent(1, 2, 3);
//
//	a.printSonA();
//	b.PrintSonB();
//	c.PrintSonC();
//	system("pause");
//	return 0;
//}