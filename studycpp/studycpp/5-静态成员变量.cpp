#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

class counter 
{
	static int num;
public:
	void setnum(int i) 
	{
		num = i;
	}

	void showsum() 
	{
		std::cout << num << std::endl;
	}

};


//声明与定义静态数据成员
int counter::num = 0;

void testStatic() 
{
	counter a, b;
	
	a.showsum();
	b.showsum();
	a.setnum(10);

	a.showsum();
	b.showsum();

}

//int main(){
//	
//	testStatic();
//	system("pause");
//	return 0;
//}