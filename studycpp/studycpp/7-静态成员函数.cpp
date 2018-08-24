#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class BBC
{
public:
	static int getSm() 
	{
		return Sm;
	}


protected:
private:
	int mem;
	static int Sm;
};

int BBC::Sm = 10;


//int main(){
//	int r = BBC::getSm();
//	std::cout << r << std::endl;
//	system("pause");
//	return 0;
//}