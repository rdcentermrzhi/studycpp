#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "Sales_item.h"
int main_152(int argc,char *argv[])
{

	Sales_item total;
	if (std::cin >> total)
	{
		Sales_item trans;
		while (std::cin >>trans)
		{
			if (total.isbn == trans.isbn) 
			{
				total += trans;
			}
			else 
			{
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl;
	}
	else 
	{
		std::cout << "no data " << std::endl;
		return -1;
	}
	
	system("pause");
	return 0;
}