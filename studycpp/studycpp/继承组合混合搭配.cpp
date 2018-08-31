#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class Object 
{
public:
	Object(const char *p) 
	{
		std::cout << "Object():" << p <<std::endl;
	}

	~Object() 
	{
		std::cout << "~Object()" << std::endl;
	}
};

class Parent04:public Object 
{
public:
	Parent04(const char *p):Object(p)
	{
		std::cout << "Parent()" << p << std::endl;
	}
	~Parent04()
	{
		std::cout << "~Parent() " << std::endl;
	}
};

class Child04 :public Parent04 
{
public:
	Child04(const char *p) :o1("o1"), o2("o2"),Parent04("parameter from Child")
	{
		std::cout << "Child04()" << std::endl;
	}

	~Child04() 
	{
		std::cout << "~Child04()" << std::endl;
	}

protected:
	Object o1;
	Object o2;

};

void runTest() 
{
	Child04 ch("Child04");
}


//int main(int argc,char *argv[]){
//	runTest();
//	
//	system("pause");
//	return 0;
//}