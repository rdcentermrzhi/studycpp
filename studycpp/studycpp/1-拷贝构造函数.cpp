#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

class Test {
private:
	int m_a;
	int m_b;
	char *m_p;

public:
	Test(int a, int b)
	{
		m_a = a;
		m_b = b;
	}

	Test(int a)
	{
		m_a = a;
	}

	Test()
	{
		m_a = 10;
		//m_p = (char*)malloc(100);
		//strcpy(m_p, "123456");
		std::cout << "ִ�й��캯��" << std::endl;
	}

	void printP() {
		std::cout << m_p << std::endl;
	}
	//copy���캯��
	Test(const Test &obj)
	{
		std::cout << "���ǿ������캯��" << std::endl;
	

	}

	~Test()
	{
		//free(m_p);
		m_p = NULL;
		std::cout << "ִ�������������" << std::endl;
		//std::cout << p << std::endl;
	}

	


};

//����һ����������
Test g() {
	Test t;
	return t;
}


int main()
{
	//Test t(1, 4);
	//Test t1(2, 5);

	//���ø�ֵ���캯��
	//Test t2 = t1;

	// = �������ṩ��ǳ����
	//t2 = t1;

	//������������ֵ����������ᱻ����
	Test t3;
	t3 = g();

	//�������������ʼ��  �������󲻻ᱻ������ת�����µĶ���
	//Test t3 = g();


	system("pause");

}