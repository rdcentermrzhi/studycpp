#include <stdio.h>
#include <string.h>
#include <iostream>
void
dump_native_bits_storage_layout(unsigned char *p, int bytes_num)
{

	union flag_t {
		unsigned char c;
		struct base_flag_t {
			unsigned int p7 : 1,
				p6 : 1,
				p5 : 1,
				p4 : 1,
				p3 : 1,
				p2 : 1,
				p1 : 1,
				p0 : 1;
		} base;
	} f;

	for (int i = 0; i < bytes_num; i++) {
		f.c = *(p + i);
		printf("%d%d%d%d %d%d%d%d ",
			f.base.p7,
			f.base.p6,
			f.base.p5,
			f.base.p4,
			f.base.p3,
			f.base.p2,
			f.base.p1,
			f.base.p0);
	}
	printf("\n");
}

struct short_flag_t {
	unsigned short a : 2,
		b : 3;
};

struct bit_order {
	unsigned char a : 2,
		b : 3,
		c : 3;
};


//int main()
//{
//	struct short_flag_t s;
//	memset(&s, 0, sizeof(s));
//	s.a = 2; /* 10 */
//	s.b = 4; /* 100 */
//
//	dump_native_bits_storage_layout((unsigned char*)&s, sizeof(s));
//
//	unsigned char ch = 0x79;
//	struct bit_order *ptr = (struct bit_order *)&ch;
//
//	dump_native_bits_storage_layout((unsigned char*)&ch, sizeof(ch));
//
//	printf("bit_order->a : %u\n", ptr->a);
//	printf("bit_order->b : %u\n", ptr->b);
//	printf("bit_order->c : %u\n", ptr->c);
//	
//
//	std::cout << sizeof(char *) << std::endl;
//
//	system("pause");
//}
