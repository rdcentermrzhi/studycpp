#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class NAME 
{
public:
	NAME(const char * name) 
	{
		size = strlen(name);
		pName = (char *)malloc(size + 1);
		strcpy(pName, name);
	}

	NAME(const NAME &obj) 
	{
		//��obj ����ʼ��
		//pName = (char *)malloc();
		//c++ ����java �������η�����ͬ���� c++ ������ڲ�ͬ���� �������Ƕ��� ��
		//���Կ��������Ա�����з���˽�г�Ա
		//std::cout << obj.pName << std::endl;

		pName = (char *)malloc(obj.size + 1);
		strcpy(pName, obj.pName);
		size = obj.size;
	}

	~NAME() 
	{
		std::cout << "��ʼִ������" << std::endl;
		if (pName != NULL) 
		{
			free(pName);
			pName = NULL;
			size = 0;
		}
		std::cout << "�������" << std::endl;
	}

	void operator=(const NAME &obj) 
	{
		if (pName != NULL) 
		{
			free(pName);
			pName = NULL;
			size = 0;
		}

		std::cout << "��д�����" << std::endl;
		
		pName = (char *)malloc(obj.size + 1);
		strcpy(pName, obj.pName);
		size = obj.size;

	}



private:
	char * pName;
	int size;

};

void playObj() 
{
	NAME obj("obj1....");
	NAME obj2 = obj;
	NAME obj3("obj3....");
	obj2 = obj3;

}

int main(){
	
	//NAME t("abc");
	//NAME t2(t);
	
	//std::cout << t2.size << std::endl;

	playObj();
	
	system("pause");
	return 0;
}