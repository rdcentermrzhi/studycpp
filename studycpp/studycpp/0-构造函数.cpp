#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
class Test {
private:
	int m_a;
	int m_b;
	char *m_p;

public:
	Test(int a, int b)
	{
		m_a = a;
		m_b = b;
	}

	Test(int a)
	{
		m_a = a;
	}

	Test()
	{
		m_a = 10;
		m_p = (char*)malloc(100);
		strcpy(m_p, "123456");
		std::cout << "执行构造函数" << std::endl;
	}

	void printP() {
		std::cout << m_p << std::endl;
	}
	//copy构造函数
	Test(const Test &obj)
	{
	}

	~Test()
	{
		free(m_p);
		m_p = NULL;
		std::cout << "执行析构函数完成" << std::endl;
		//std::cout << p << std::endl;
	}


};
void testT() {
  //	Test  t1;

  //	t1.printP();
	//Test t(0, 4);
	//t.printP();
	//Test t = (1,4);
	//Test t = Test(1, 4);
	Test t = { 1,4 };
}



//int main(){
//	testT();
//	
//
//	//Test t(1, 4);
//
//	//不可以打印空指针会报异常
//	//char *p = NULL;
//	//std::cout << p << std::endl;
//	printf("hello world");
//	system("pause");
//	return 0;
//}