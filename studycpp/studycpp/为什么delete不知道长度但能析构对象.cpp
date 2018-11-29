#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <crtdbg.h>
//int g = 0;
//struct obj {
//public:
//	~obj() {g++;};
//};
////编译器会储存数组长度  
//int main(int argc,char *argv[])
//{
//
//	struct obj * p = new obj[199];
//	//int *p  = new int[199];
//	size_t *a = reinterpret_cast<size_t*>(p);
//
//	for (int i = -1; i >= -6; i--) {
//		std::cout << i << "\t" << a[i] << std::endl;
//	}
//
//	delete[] p;
//	std::cout << g << std::endl;
//
//	system("pause");
//	return 0;
//}


// 程序B  
class CTextClassA
{
public:
	int m_num;
	CTextClassA() { m_num = 0; };
	//~CTextClassA() { std::cout << "~CTextClassA()" << std::endl; }

	void SetNum(int n) { m_num = n; }
};
int main1233(int argc, char* argv[])
{
	CTextClassA *pa = new CTextClassA;
	CTextClassA *pas = new CTextClassA[5];
	CTextClassA *pas_arr[5];
	for (int i = 0; i < 5; i++)
	{
		pas[i].SetNum(i);
		pas_arr[i] = &pas[i];
		std::cout << "pas" << i << ":" << pas[i].m_num << "\t";
	}
	delete pa;
	delete []pas;
	system("pause");
	_CrtDumpMemoryLeaks();
	return 0;
}