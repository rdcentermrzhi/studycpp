#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
//1��C++������еĳ�Ա�����ͳ�Ա�����Ƿֿ��洢��
//��Ա������
//��ͨ��Ա�������洢�ڶ����У���struct��������ͬ���ڴ沼�ֺ��ֽڶ��뷽ʽ
//��̬��Ա�������洢��ȫ����������
//��Ա�������洢�ڴ�����С�
//��������ˣ��ܶ������һ����룿������������־��������ǣ�
//���仰˵��int getK() const { return k; }��������������֣�����obj1��obj2��obj3�����kֵ��
//2��C++����������ͨ��Ա�������ڲ�����
//
//C++�Ὣclass�еĳ�Ա������ȡ��������ջ����һ��ͬ����struct���棬����Ա������ȡ�������ڴ�������ͬʱ�������һЩ�޸ģ�����Ĭ�����һ��thisָ��Ĳ����������ھ��������õ�ʱ����a.getI�����ͻὫthis���ݹ�ȥ����ע��ÿһ����Ķ��󶼻�Ĭ�ϰ���һ��thisָ��ĳ�Ա�������������������ֵ�������һ������ȥ������ĳ�Ա������
//1��C++������еĳ�Ա�����ͳ�Ա�����Ƿֿ��洢�ġ�C�����е��ڴ�����ģ����Ȼ��Ч��
//2��C++�������ͨ��Ա��������ʽ����һ��ָ��ǰ�����thisָ�롣
//3����̬��Ա��������Ա����������
//��̬��Ա��������ͨ��Ա����������
//��̬��Ա����������ָ���������ָ��
//��ͨ��Ա��������һ��ָ���������ָ��
class C1 
{
public:
	int i;
	int j;
	int k;
protected:
private:
};

class C2
{
public:
	int i = 1;
	int j = 2;
	int k = 3;
	static int m;

public:
	//�Ǿ�̬��Ա���������const���ӵ��ǳ�Ա������̬��Ա��������������󣩣���ʾ��Ա�������������thisָ��Ϊconstָ�룬�������ڸó�Ա�����У������޸������ڵ���ĳ�Ա�Ĳ������ǲ�����ģ���Ϊ�����˶�thisָ���const���ã���Ψһ�������Ƕ���mutable���εĳ�Ա������const�ĳ�Ա�������Ա���const�����const������ã�������const�ĳ�Ա����ֻ�ܱ���const�������
	//����Ա���� ���ܸı��Ա������ֵ   ���Ե�����������Ա���� �����ܵ��÷ǳ���Ա���� 
	int getK() const
	{
		return this->k;
	}
	//const�ؼ��ֿ������ڶ����غ���������
	int getsum() const
	{
		return i + j;
	}

	int getSum() 
	{
		return i * j;
	}

	void setK(int _k) 
	{
		k = _k;
	}
protected:
private:

};

struct S1 
{
	int i;
	int j;
	int k;
};


struct S2 
{
	int i;
	int j;
	int k;
	static int m;
};



//int main() {
//
//
//	C2 t;
//	const C2 t2;
//
//	std::cout << t.getsum() << std::endl;
//	std::cout << t2.getsum() << std::endl;
//
//
//	std::cout << "C1:" << sizeof(C1) << std::endl;
//	std::cout << "C2:" << sizeof(C2) << std::endl;
//	std::cout << "S1:" << sizeof(S1) << std::endl;
//	std::cout << "S2:" << sizeof(S2) << std::endl;
//	system("pause");
//	return 0;
//}