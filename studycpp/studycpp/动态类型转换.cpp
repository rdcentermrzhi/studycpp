#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class Animal
{
public:
	virtual void cry() = 0;
protected:
private:
};

class Dog :public Animal 
{
public:
	virtual void cry() 
	{
		std::cout << "wangwang" << std::endl;
	}

	void doSwin() 
	{
		std::cout << "Cat doSwin" << std::endl;
	}
};

class Cat :public Animal 
{
public:
	virtual void cry() 
	{
		std::cout << "miaomiao" << std::endl;
	}

	void doTree() 
	{
		std::cout << "ÎÒÒªÅÀÊ÷" << std::endl;
	}
};

class Book
{
public:
	void printP() 
	{
		std::cout << pice << std::endl;
	}
protected:
private:
	int pice;
};

void ObjPlay(Animal *base)
{
	base->cry();
	Dog *pdog = dynamic_cast<Dog *>(base);
	if (pdog != NULL)
	{
		pdog->cry();
		pdog->doSwin();
	}

	Cat *pcat = dynamic_cast<Cat *>(base);
	if (pcat != NULL) 
	{
		pcat->cry();
		pcat->doTree();
	}

}
//int main(int argc,char *argv[])
//{
//	Animal *base = NULL;
//	Dog *pdog = static_cast<Dog *>(base);
//
//	//Book *book = static_cast<Book *>(base);
//	
//	Book * book2 = reinterpret_cast<Book *>(base);
//
//	
//	ObjPlay(new Cat());
//
//	system("pause");
//	return 0;
//}