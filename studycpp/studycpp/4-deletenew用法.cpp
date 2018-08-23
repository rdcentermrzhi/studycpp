#define _CRT_SECURE_NO_WARNINGS
#include<iostream>


void testNewDelete() 
{
	int *p = new int;
	char *p2 = new char;
	float *p3 = new float;
	int *p4 = new int[4];

	delete p;
	delete p2;
	delete p3;
	delete[] p4;
}

//int main(){
//	
//	testNewDelete();
//	system("pause");
//	return 0;
//}