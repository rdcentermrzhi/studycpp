#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

//using namespace std;
//
//class B
//
//{
//
//public:
//
//	int ib;
//
//public:
//
//	B(int i = 1) :ib(i) {}
//
//	virtual void f() { cout << "B::f()" << endl; }
//
//	virtual void Bf() { cout << "B::Bf()" << endl; }
//
//};
//
//class B1 : public B
//
//{
//
//public:
//
//	int ib;
//
//public:
//
//	B1(int i = 100) :ib(i) {}
//
//	virtual void f() { cout << "B1::f()" << endl; }
//
//	virtual void f1() { cout << "B1::f1()" << endl; }
//
//	virtual void Bf1() { cout << "B1::Bf1()" << endl; }
//
//
//
//};
//
//class B2 : public B
//
//{
//
//public:
//
//	int ib2;
//
//public:
//
//	B2(int i = 1000) :ib2(i) {}
//
//	virtual void f() { cout << "B2::f()" << endl; }
//
//	virtual void f2() { cout << "B2::f2()" << endl; }
//
//	virtual void Bf2() { cout << "B2::Bf2()" << endl; }
//
//};
//
//
//class D : public B1, public B2
//
//{
//
//public:
//
//	int id;
//
//
//
//public:
//
//	D(int i = 10000) :id(i) {}
//
//	virtual void f() { cout << "D::f()" << endl; }
//
//	virtual void f1() { cout << "D::f1()" << endl; }
//
//	virtual void f2() { cout << "D::f2()" << endl; }
//
//	virtual void Df() { cout << "D::Df()" << endl; }
//
//};
//
//
//typedef void(*Fun)(void);
//
//void test_extends_2()
//{
//	D d(500);
//	printf("[0 %p] B1::vfptr\n", (&d));
//	
//	printf("\t[0 %p]\t", ((int**)&d)[0]);
//	Fun f = (Fun)*((((int**)(&d))[0]));
//	f();
//	
//
//	printf("\t[1 %p]\t", ((int**)&d)[0] + 1);
//	f = (Fun)*((((int**)(&d))[0]) + 1);
//	f();
//	
//
//	printf("\t[2 %p]\t", ((int**)&d)[0] + 2);
//	f = (Fun)*((((int**)(&d))[0]) + 2);
//	f();
//	
//
//	printf("\t[3 %p]\t", ((int**)&d)[0] + 3);
//	f = (Fun)*((((int**)(&d))[0]) + 3);
//	f();
//	
//
//	printf("\t[4 %p]\t", ((int**)&d)[0] + 4);
//	f = (Fun)*((((int**)(&d))[0]) + 4);
//	f();
//
//
//	printf("[1 %p]B::ib = %d\n", ((int**)&d) + 1, (int)((int**)&d)[1]);
//
//	printf("[2 %p]B::ib1 = %d\n", ((int**)&d) + 2, (int)((int**)&d)[2]);
//
//
//
//	printf("[3 %p] B2::vfptr\n", (&d));
//
//	printf("\t[0 %p]\t", ((int**)&d)[3]);
//	f = (Fun)*((((int**)(&d))[3]));
//	f();
//
//
//	printf("\t[1 %p]\t", ((int**)&d)[3] + 1);
//	f = (Fun)*((((int**)(&d))[3]) + 1);
//	f();
//
//
//	printf("\t[2 %p]\t", ((int**)&d)[3] + 2);
//	f = (Fun)*((((int**)(&d))[3]) + 2);
//	f();
//
//
//	printf("\t[3 %p]\t", ((int**)&d)[3] + 3);
//	f = (Fun)*((((int**)(&d))[3]) + 3);
//	f();
//
//	printf("[4 %p]B2::ib = %d\n", ((int**)&d) + 4, (int)((int**)&d)[4]);
//
//	printf("[5 %p]B2::ib1 = %d\n", ((int**)&d) + 5, (int)((int**)&d)[5]);
//	printf("[6 %p]D::id = %d\n", ((int**)&d) + 6, (int)((int**)&d)[6]);
//	
//	std::cout << "win32 size:" << sizeof(d) << std::endl;
//}
//
//
//int main(int argc,char *argv[])
//{
//	test_extends_2();
//	
//	system("pause");
//	return 0;
//}