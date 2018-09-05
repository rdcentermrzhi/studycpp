#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class MyException {};

class TestException
{
public:
	TestException(int a = 0, int b = 0) 
	{
		a_ = a;
		b_ = b;
		std::cout << "TestException 构造函数执行" << a_ << b_ <<std::endl;
	}

	void printT() 
	{
		std::cout << "a:" << a_ << "b:" << b_ << std::endl;
	}

	~TestException() 
	{
		std::cout << "TestException 析构函数执行" << std::endl;
	}
protected:
private:
	int a_;
	int b_;
};

void myFunc() throw (MyException)
{
	TestException t1;
	TestException t2;
	std::cout << "测试抛出异常后是否会被栈变量是否会被自动析构" << std::endl;
	
	throw MyException();
}

int main(int argc,char *argv[])
{
	try
	{
		myFunc();
	}
	catch (MyException)
	{
		std::cout << "接受TestException 异常" << std::endl;
	}
	catch (...)
	{
		std::cout << "未知异常" << std::endl;
	}
	
	
	system("pause");
	return 0;
}