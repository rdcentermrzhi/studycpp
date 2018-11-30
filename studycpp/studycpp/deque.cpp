#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<deque>
#include<stack>
#include<queue>
using namespace  std;
class DequeData
{
public:
protected:
private:
};
void deque_constructor() 
{
	deque<int> int_deque;
	deque<float> float_deque;
	deque<DequeData> dequedata_deque;
	deque<DequeData *> dequedata_ptr_deque;
	
	stack<int> int_stack;
	int_stack.push(3);
	
}

void priority_queue_test() {
	priority_queue<int> p1;
	priority_queue<int, vector<int>, greater<int>> p2;

	p1.push(10);
	p1.push(20);
	p1.push(30);

	cout << p1.size() << endl;

	while (p1.size() > 0) {
		cout << p1.top() << endl;
		p1.pop();
	}

	p2.push(10);
	p2.push(20);
	p2.push(30);
	cout << p2.size() << endl;

	while (p2.size() > 0) {
		cout << p2.top() << endl;
		p2.pop();
	}


}
int main_deque(int argc,char *argv[])
{

	//deque_constructor();
	priority_queue_test();
	
	
	system("pause");
	return 0;
}