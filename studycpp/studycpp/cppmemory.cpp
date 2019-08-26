#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Base
{
public:

	Base(int i) :baseI(i) {};

	int getI() { return baseI; }

	static void countI() {};

	virtual ~Base() {}

	virtual void print(void) { std::cout << "Base::print()"; }



private:

	int baseI;

	static int baseS;
};

typedef void(*print_func_ptr)(void);


void testBase(Base &p);

//int main(int argc,char *argv[])
//{
//	
//
//	//��֤�麯�����λ��
//	//Base b(1000);
//
//	/*int * vptrAddd =  (int*)(&b);
//	std::cout << vptrAddd << std::endl;
//
//	std::cout << *(int*)(&b) << std::endl;
//
//	print_func_ptr vfunc = (print_func_ptr)*((int *)*(int*)(&b));
//	
//	vfunc();*/
//
//	//using namespace std;
//
//
//	//typedef void(*Fun)(void);
//
//	////std::cout << *(int*) << std::_Fnv1a_append_value;
//	//Fun vfunc = (Fun)*((int *)*(int*)(&b) + 1);
//	////cout << "��һ���麯���ĵ�ַ�ǣ�" << (int *)*(int*)(&b) << endl;
//	////cout << "ͨ����ַ�������麯��Base::print()��";
//	//vfunc();
//
//	//��֤�Ǽ̳е�c++ �ڴ�ģ��
//
//
//
//	system("pause");
//	return 0;
//}


