#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector <string> v;
char ch;
//vector.clear �����������ͷ��ڴ棬 ����ͨ�� vector<T>().swap(v)  �����ͷ�ռ�õ��ڴ�ռ�
int main1212121(int argc,char *argv[])
{
	vector<string> v;
	for (int i = 0; i < 1000000; i++)
		v.push_back("abcdefghijklmn");
	cout << "a" << endl;
	cin >> ch;
	// ��ʱ����ڴ���� ռ��54M

	v.clear();
	cin >> ch;
	// ��ʱ�ٴμ�飬 ��Ȼռ��54M

	cout << "Vector �� ����Ϊ" << v.capacity() << endl;
	// ��ʱ����Ϊ 1048576

	vector<string>().swap(v);

	cout << "Vector �� ����Ϊ" << v.capacity() << endl;
	// ��ʱ����Ϊ0
	cin >> ch;
	// ����ڴ棬�ͷ��� 10M+ ��Ϊ�����ڴ�   
	system("pause");
	return 0;
}

