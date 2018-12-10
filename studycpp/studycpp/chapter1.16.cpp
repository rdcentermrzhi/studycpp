#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
void pp_add();
int main_ch1_16(int argc,char *argv[])
{
	/*int i =0,total = 0;
	std::cout << "请输入数据计算" << std::endl;

	while (std::cin >> i)
	{
		total += i;
	}

	std::cout << "输入数据之和是:" << total << std::endl;*/

	pp_add();
	system("pause");

	return 0;
}



void pp_add()
{
	//char * pchar = new char[10]{'a','b','c','\0'};

	////std::cout << (int)pchar << "  "  << (int)(pchar + 1) << std::endl;	
	//int * pint = new int[10]{ 1,2,3,0 };   

	//std::cout << *pint << " " << *(pint + 1) << std::endl;

	//int * arrintp[10];

	////int * a = arrintp[0];



	//std::cout << pint << " " << &pint <<  " " << &pint + 1  <<  std::endl;

	//std::cout << arrintp  << " " << arrintp +1 << " "  << &arrintp << std::endl;

	//int **parr = &pint;

	//std::cout <<**parr << " " << parr + 1 << std::endl;

	//int (*arr)[3] = new int[3][3] ;

	//std::cout << arr << " " << (arr + 1)<<  " " << (int)(arr + 1) - (int)arr << std::endl;

	//std::cout << &arr << std::endl;



	//int arrp[2][3];
	//std::cout << arrp << " " << arrp + 1 << std::endl;
}