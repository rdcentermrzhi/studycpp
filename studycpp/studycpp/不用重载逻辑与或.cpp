#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class Test
{
public:
	Test(int i) 
	{
		i_ = i;
	}

	Test operator+(const Test &obj) 
	{
		Test t(0);
		std::cout << "����+" << std::endl;
		t.i_ = i_ + obj.i_;
		return t;
	}

	bool operator&&(const Test &obj) 
	{
		std::cout << "����&&" << std::endl;
		return i_ && obj.i_;
	}

protected:
private:
	int i_;
};

//c++�в�Ҫ���� && || �����
// &&��||�����˶�·ʵ��
// �����������ǿ���������ʵ�ֵ�
//��������Ϊ������������
//c++ �����������ᱻ��ֵ ���޷�ʵ�ֶ�·����
//int main()
//{
//	int a1 = 0;
//	int a2 = 1;
//	std::cout << "ע���߼� &&����� �Ǵ�������" << std::endl;
//
//	if (a1 && (a1 + a2)) 
//	{
//		std::cout << "�����һ���ǼپͲ���ִ��" << std::endl;
//	}
//	
//	Test t1 = 0;
//	Test t2 = 1;
//	if (t1 && (t1 + t2)) 
//	{
//		std::cout << "������������ִ���ˣ�������ִ���� operator+" << std::endl;
//	}
//
//
//
//	system("pause");
//	return 0;
//}