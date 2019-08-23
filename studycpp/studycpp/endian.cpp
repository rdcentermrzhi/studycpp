#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#pragma comment(lib,"ws2_32.lib")

//union TestUnionEndian
//{
//	short a;
//	char buf[2];
//};
//
//
//int main(int argc,char *argv[])
//{
//	short a = 0x01;
//
//	TestUnionEndian un;
//
//	short big_endian = htons(a);
//
//	memcpy(un.buf, &big_endian, sizeof(a));
//	printf("%d\n", big_endian);
//
//	printf("%d\n", un.a);
//	
//
//	printf("%x, %d\n", *(char*)&a, a);
//
//	
//	//Ð¡¶Ë·¨
//	system("pause");
//	return 0;
//}
//

struct bit_order {
	unsigned char a : 2,
		b : 3,
		c : 3;
};

//int main(int argc, char *argv[])
//{
//	unsigned char ch = 0x79;
//	struct bit_order *ptr = (struct bit_order *)&ch;
//
//	printf("bit_order->a : %u\n", ptr->a);
//	printf("bit_order->b : %u\n", ptr->b);
//	printf("bit_order->c : %u\n", ptr->c);
//
//	system("pause");
//
//	return 0;
//}
