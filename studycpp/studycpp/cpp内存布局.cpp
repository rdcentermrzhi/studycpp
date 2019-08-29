#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Base
{
public:

	Base(int i) :baseI(i) {};

	int getI() { return baseI; }

	static void countI() {};

	virtual ~Base() {}

	virtual void print(void) { cout << "Base::print()";  }

	void setBase(int a) 
	{
		baseI = a;
	}

private:

	int baseI;

	static int baseS;
};


class Derive : public Base
{
public:
	Derive(int d) :Base(1000), DeriveI(d) {};
	
	virtual ~Derive() {}
	//overwrite�����麯��
	virtual void print(void) { cout << "Drive::print()"; }
	// Derive�������µ��麯��
	virtual void Drive_print()
	{ 

		cout << "Drive::Drive_print()";  
		int a;
		a = DeriveI * 2;
		cout << a;
	}
	
private:
	int DeriveI;
};



class Base_2
{
public:
	Base_2(int i) :base2I(i) {};

	virtual ~Base_2() {}

	int getI() { return base2I; }

	static void countI() {};

	virtual void print(void) { cout << "Base_2::print()"; }

private:

	int base2I;

	static int base2S;
};

class Drive_multyBase :public Base, public Base_2
{
public:

	Drive_multyBase(int d) :Base(1000), Base_2(2000), Drive_multyBaseI(d) {};

	virtual void print(void) { cout << "Drive_multyBase::print"; }

	virtual void Drive_print() { cout << "Drive_multyBase::Drive_print"; }

private:
	int Drive_multyBaseI;
};


typedef void(*Fun)();
typedef void(*FunX)(Derive* const);
typedef void(Derive::*Func)(void);

//����һ��̳� ������ڴ沼��
void test_extend_1() 
{
	Derive d(2000);
	//Derive d2(1000);
	////��Ķ�����һ������麯���� 
	//std::cout << "d�麯����ַ" << *(int*)((int**)(&d))[0]  << "   " << *(int*)((int**)(&d2))[0] << std::endl ;
	//std::cout << ((int**)&d)[0] << "  " << ((int**)&d2)[0];
	////Fun f = (Fun)*(int*)((int**)(&d))[0];
	

	//����� ���������Ḳ�Ǹ������������ ������麯��˳�������  �麯�����˳��
	printf("[0 %p] Base::vfptr\n", (&d));
	printf("\t[0 %p]\tdstor not call\n", ((int**)&d)[0]);
	printf("\t[1 %p]\t", *(((int**)&d)[0] + 1));
	Fun f = (Fun)*((((int**)(&d))[0])+1) ;
	f();
	cout << endl;

	//��Ա����ָ���ַ������
	//printf("%p\n", &Derive::print);
	//printf("%p\n", &Base::print);


	//Func x = &Derive::print;
	//(d.*x)();

	//x();

	printf("\t[2 %p]\t", ((int**)&d)[0] + 2);
	FunX fx = (FunX)*((((int**)(&d))[0]) + 2);
	fx(&d);
	cout << endl;

	printf("[1 %p]Base::baseI = %d\n", ((int**)&d) + 1, (int)((int**)&d)[1]);
	printf("[2 %p]Drive::DeriveI = %d\n", ((int**)&d) + 2 , (int)((int**)&d)[2]);

	std::cout << "win32 size:" << sizeof(d) << std::endl;

}

//���Զ�̳еĶ����ڴ�ģ��  ��������麯�� �����ڵ�һ��������麯������  
//void test_extends_2()
//{
//	Drive_multyBase d(500);
//	printf("[0 %p] Base::vfptr\n", (&d));
//	printf("\t[0 %p]\tdstor not call\n", ((int**)&d)[0]);
//	printf("\t[1 %p]\t", ((int**)&d)[0] + 1);
//	Fun f = (Fun)*((((int**)(&d))[0]) + 1);
//	f();
//	cout << endl;
//
//	printf("\t[2 %p]\t", ((int**)&d)[0] + 2);
//	f = (Fun)*((((int**)(&d))[0]) + 2);
//	f();
//	cout << endl;
//	
//
//	printf("[1 %p]Base::baseI = %d\n", ((int**)&d) + 1, (int)((int**)&d)[1]);
//	printf("[2 %p]Base2::vfptr\n", ((int**)&d) + 2);
//	printf("\t[0 %p]\tdstor not call\n", ((int**)&d)[2]);
//	printf("\t[1 %p]\t", ((int**)&d)[2] + 1);
//	f = (Fun)*((((int**)(&d))[2]) + 1);
//	f();
//	cout << endl;
//
//	printf("[3 %p]Base2::base2I = %d\n", ((int**)&d) + 3, (int)((int**)&d)[3]);
//	printf("[4 %p]Drive_multyBase::Drive_multyBaseI = %d\n", ((int**)&d) + 4, (int)((int**)&d)[4]);
//	std::cout << "win32 size:" << sizeof(d) << std::endl;
//}

//int main(int argc,char *argv[])
//{
//	Derive x(100);
//
//	Derive *p = &x;
//	p->setBase(11);
//
//	Base* b = p;
//
//	b->print();
//
//	b->Base::print();
//
//
//	test_extend_1();
//	//test_extends_2();
//	system("pause");
//	return 0;
//}