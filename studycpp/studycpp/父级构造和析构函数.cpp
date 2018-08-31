#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class Parent03 
{
public:
	Parent03(const char * p) 
	{
		std::cout << "Parent02" << p << std::endl;
	}

	~Parent03() 
	{
		std::cout << "Parent03" << std::endl;
	}

};


class Child03:public Parent03 
{
public:
	Child03(const char * p);

	~Child03() 
	{
		std::cout << "Child03" << std::endl;
	}
private :
	int a_;

};

Child03::Child03(const char * p) :Parent03("Parameter from Child"), a_(2)
{
	std::cout << "Child03" << std::endl;
}
void run() 
{
	Child03 ch("Child03");
}


//int main(int argc,char *argv[]){//int main(int argc,char **argv){
//	
//	run();
//	std::cout << argc << "\t" << argv[0] << std::endl;
//	system("pause");
//	return 0;
//}