#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class counter 
{
public:
	counter(int m) 
	{
		mem = m;
	}
	int mem;
	static int Smem;

protected:
private:


};

int counter::Smem = 1;

//int main(){
//	
//	counter c(5);
//	int i;
//	for (i = 0; i < 5; i++) 
//	{
//		counter::Smem += i;
//		std::cout << counter::Smem << "\t";
//	}
//	std::cout << std::endl;
//	std::cout << "c.Smem=" << c.Smem << std::endl;
//	std::cout << "c.mem " << c.mem << std::endl;
//	system("pause");
//	return 0;
//}