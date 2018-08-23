#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class NAME 
{
public:
	NAME(const char * name) 
	{
		size = strlen(name);
		pName = (char *)malloc(size + 1);
		strcpy(pName, name);
	}

	NAME(const NAME &obj) 
	{
		//用obj 来初始化
		//pName = (char *)malloc();
		//c++ 中与java 访问修饰符区别不同的是 c++ 是针对于不同的类 ，而不是对象 ，
		//所以可以在类成员函数中访问私有成员
		//std::cout << obj.pName << std::endl;

		pName = (char *)malloc(obj.size + 1);
		strcpy(pName, obj.pName);
		size = obj.size;
	}

	~NAME() 
	{
		std::cout << "开始执行析构" << std::endl;
		if (pName != NULL) 
		{
			free(pName);
			pName = NULL;
			size = 0;
		}
		std::cout << "析构完成" << std::endl;
	}

	void operator=(const NAME &obj) 
	{
		if (pName != NULL) 
		{
			free(pName);
			pName = NULL;
			size = 0;
		}

		std::cout << "覆写运算符" << std::endl;
		
		pName = (char *)malloc(obj.size + 1);
		strcpy(pName, obj.pName);
		size = obj.size;

	}



private:
	char * pName;
	int size;

};

void playObj() 
{
	NAME obj("obj1....");
	NAME obj2 = obj;
	NAME obj3("obj3....");
	obj2 = obj3;

}

int main(){
	
	//NAME t("abc");
	//NAME t2(t);
	
	//std::cout << t2.size << std::endl;

	playObj();
	
	system("pause");
	return 0;
}