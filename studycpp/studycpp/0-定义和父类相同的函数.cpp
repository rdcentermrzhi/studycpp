#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class Parent05 
{
public:
	virtual void print() 
	{
		std::cout << "Parent05 print()" << std::endl;
	}

	void out() 
	{
		std::cout << "out" << std::endl;
	}
};


class Child05: public Parent05
{
public:
	virtual void print()
	{
		std::cout << "Child05 print()" << std::endl;
	}

	void out(int a) 
	{
		std::cout << "out" << a << std::endl;
	}
};


class Test 
{
public:
	virtual void out() 
	{
		std::cout << "Test()" << std::endl;
	}
};

//int main(int argc,char *argv[])
//{
//	
//	//c++ ��һ���麯������ά���麯��
//	std::cout << sizeof(Test) << std::endl;
//
//	Child05 ch;
//	Parent05 p = ch;
//	Parent05 *pr = &ch;
//	//����Ḳ�Ǹ���ͬ������ ��������
//	ch.out(121);
//	p.print();
//	//ֻ����ָ��������ֶ�̬
//	pr->print();
//	system("pause");
//	return 0;
//}