#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class Dog
{
public:
	Dog() 
	{
		parr_ = new int[1024*1024*100];
	}
	~Dog() 
	{
		std::cout << "Dog()����" << std::endl;
	}
protected:
private:
	int *parr_;
};




//int main(int argc,char *argv[])
//{
//	
//	try
//	{
//		Dog *pdog;
//		for (int i = 0; i < 1024; i++)
//		{
//			pdog = new Dog();
//			std::cout << i << "new Dog �ɹ�" << std::endl;
//		}
//	}
//	catch (std::bad_alloc &e) 
//	{
//		std::cout << "new Dog() ʧ��" <<e.what() << std::endl;
//	}
//	
//	
//	
//	system("pause");
//	return 0;
//}