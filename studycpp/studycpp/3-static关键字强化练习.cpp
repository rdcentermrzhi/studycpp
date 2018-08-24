#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
class Goods 
{
public:
	Goods(int _weight) 
	{
		weight = _weight;
		total_weight += weight;
	}

	~Goods() 
	{
		total_weight -= weight;
	}

	int get_weight()
	{
		return weight;
	}

	static int get_total_weight() 
	{
		return total_weight;
	}

	Goods * next;
protected:
private:
	int weight;
	static int total_weight;
};

int Goods::total_weight = 0;

void purchase(Goods* &f, Goods* &r, int w) 
{
	Goods *p = new Goods(w);
	p->next = NULL;
	
	if (f == NULL) 
	{
		f = r = p;
	}
	else 
	{
		r->next = p;
		r = r->next;
	}

}

void sale(Goods* &f, Goods* &r) 
{
	
	if (f == NULL) 
	{
		std::cout << "No any goods" << std::endl;
		return;
	}
	
	Goods *q = f;
	f = f->next;
	delete q;
	std::cout << "sale\n" << std::endl;
}

//int main(){
//	Goods *front = NULL, *rear = NULL;
//	int weight; 
//	int choice;
//	do 
//	{
//		std::cout << "enter choice :";
//		std::cout << "Key in 1 purchase,Key in 2 saled 0 is over \n";
//		std::cin >> choice;
//		switch (choice)
//		{
//		case 1:
//		{
//			std::cout << "enter weight:";
//			std::cin >> weight;
//			purchase(front,rear,weight);
//			break;
//		}
//		
//		case 2:
//			sale(front, rear);
//			break;
//		case 0:
//			break;
//		
//		}
//
//		std::cout << "Now totalweight " << Goods::get_total_weight() << std::endl;
//	} while (choice);
//
//
//
//	system("pause");
//	return 0;
//}