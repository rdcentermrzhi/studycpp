#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class Bv
{
public:
	int b;
	Bv() 
	{
		std::cout << "Bv" << std::endl;
	}
};

class B1 :virtual public Bv
{
private:
	int b1;
};
//����virtual Bv ����ֻ��һ�� ���캯������һ��
class B2 :virtual public Bv
{
private:
	int b2;
};

class C:public B1,public B2
{
private:
	int c;
};

//int main(int argc,char *argv[])
//{
//	C c;
//	c.B1::b;
//	c.B2::b;
//	
//	
//	system("pause");
//	return 0;
//}