#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
void OpOf(const char *p) 
{
	std::cout << p << std::endl;
	char *p2 = const_cast<char *>(p);
	p2[0] = 'b';
	std::cout << p << std::endl;
}

//int main(int argc,char *argv[])
//{
//	
//	const char * p1 = "1111111111";
//	char *p3 = const_cast<char *>(p1);
//	char buf[100] = "1212100";
//	OpOf(buf);
//
//	//OpOf("ddddddsdssdsda");
//	
//	system("pause");
//	return 0;
//}