#include<iostream>
using namespace std;

void swap(int &a, int &b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
void cal(int *a, int first, int length) {
	if (first == length) {
		for (int i = 0; i <= length; i++) {
			cout << a[i] << ' ';
		}
		cout << endl;
	}
	else {
		for (int i = first; i <= length; i++) {
			//ѭ������ʹ�õ�ǰλ�ú�ߵ�ÿһ��Ԫ�ض��͵�ǰ��ȵĵ�һ��Ԫ�ؽ���һ��
			swap(a[first], a[i]);//ʹ�����һ��Ԫ�ؽ���
			cal(a, first + 1, length);//����ݹ飬��ʱ��ȷ��ǰ�ߵ�Ԫ�أ������������е�ȫ������ʽ��
			swap(a[first], a[i]);//�ָ�����֮ǰ��״̬
		}

	}
}
int main() {
	int a[5] = { 1,2,3 ,5,0};
	cal(a, 0, 2);
	system("pause");
	return 0;
}