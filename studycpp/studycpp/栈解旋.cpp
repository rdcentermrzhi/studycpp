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
		std::cout << "TestException ���캯��ִ��" << a_ << b_ <<std::endl;
	}

	void printT() 
	{
		std::cout << "a:" << a_ << "b:" << b_ << std::endl;
	}

	~TestException() 
	{
		std::cout << "TestException ��������ִ��" << std::endl;
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
	std::cout << "�����׳��쳣���Ƿ�ᱻջ�����Ƿ�ᱻ�Զ�����" << std::endl;
	
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
		std::cout << "����TestException �쳣" << std::endl;
	}
	catch (...)
	{
		std::cout << "δ֪�쳣" << std::endl;
	}
	
	
	system("pause");
	return 0;
}