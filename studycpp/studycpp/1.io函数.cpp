#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

void getchar_test() {
	char chr;
	while ((chr = std::cin.get()) != EOF) {
	
		std::cout << chr << std::endl;
	}
	return;
}

void get_test() {
	char a, b, c;
	std::cin.get(a).get(b).get(c);
	std::cout << a << b << c << std::endl;
	std::cout.flush();
	return;
}


void get_line_() {
	char buf[30];


	//第三个参数指分割符
	cin.getline(buf, 256,'a');
	cout << buf << endl;
}

//int main(int argc,char *argv[])
//{
//	
//	//getchar_test();
//	//get_test();
//	get_line_();
//	system("pause");
//	return 0;
//}