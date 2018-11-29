#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector <string> v;
char ch;
//vector.clear 操作并不会释放内存， 可以通过 vector<T>().swap(v)  交换释放占用的内存空间
int main1212121(int argc,char *argv[])
{
	vector<string> v;
	for (int i = 0; i < 1000000; i++)
		v.push_back("abcdefghijklmn");
	cout << "a" << endl;
	cin >> ch;
	// 此时检查内存情况 占用54M

	v.clear();
	cin >> ch;
	// 此时再次检查， 仍然占用54M

	cout << "Vector 的 容量为" << v.capacity() << endl;
	// 此时容量为 1048576

	vector<string>().swap(v);

	cout << "Vector 的 容量为" << v.capacity() << endl;
	// 此时容量为0
	cin >> ch;
	// 检查内存，释放了 10M+ 即为数据内存   
	system("pause");
	return 0;
}

