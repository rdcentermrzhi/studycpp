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


//�����붨�徲̬���ݳ�Ա
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