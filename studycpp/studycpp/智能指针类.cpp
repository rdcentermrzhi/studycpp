#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class Test2 
{
public:
	Test2() 
	{
		a_ = 10;
	}

	void printT() 
	{
		std::cout << a_ << std::endl;
	}

private:
	int a_;

};
class MyPointer 
{
public:
	MyPointer()
	{
		p_ = NULL;
	}

	MyPointer(Test2 *p) 
	{
		p_ = p;
	}

	~MyPointer() 
	{
		delete p_;
		p_ = NULL;
	}

	/*��׼�涨��д����������ֵ��������ָ��û��ʲô��ϵ��
	����������ǣ�������صĲ���һ��ָ�����һ�������˼�ͷ���������������ô�ֻ���ø������ļ�ͷ��������
	ֱ��ĳ����ͷ���������ص���һ��rawָ�룬��Ը�ָ��ȡ���ݲ����г�Ա���ʣ�������̿�������Ƕ�ף������ơ�
	���������һ��������ȥ��û���ҵ�����һ��rawָ��ļ�ͷ��������ᱨ�����緵����һ��û�����ؼ�ͷ������������󣬻���int֮���ֵ*/

	Test2* operator->() 
	{
		return p_;
	}

	Test2& operator*() 
	{
		return *p_;
	}

protected:
	Test2 * p_;
};



//int main(){
//	MyPointer mp = new Test2;
//	mp->printT();
//	
//	system("pause");
//	return 0;
//}