#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class A
{
private:
	int x_;
public:
	A()
	{
		x_ = 99;
	}

	//
	A(int x)
	{
		std::cout << "Call A(x)" << std::endl;
		x_ = 80;
	}
	//������û�ж��帳ֵ��������س�Ա����ʱ��ע�⣬��δ�����β���������Ϊ�������͵ĸ�ֵ��������س�Ա����ʱ�����������Զ����ɼ��룩
	//��ô���Ѹ�ֵ���������Ϊ�����Ա�������ڳ�����ִ�������ĸ�ֵ���ʱ������ͻ��������ì�ܵ�ѡ��
	//�����ǲ�������ì�ܲ�ȷ��ѡ��ģ����Ե���ֵ���������Ϊ�����Ԫ����ʱ���������ͻ���ʾ����

	A& operator=(const A& a)
	{
		std::cout << "����=" << std::endl;
		x_ = a.x_;
		return *this;
	}

};


//int main(){
//	
//	A a;
//	a = 7;
//	system("pause");
//	return 0;
//}