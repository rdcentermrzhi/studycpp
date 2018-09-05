#include <iostream>

using namespace std;

template<class T> class Test;

template<class T> ostream & operator<<(ostream & out, const Test<T> &obj);
template<class T> class Test {
private:
	int num;
public:
	Test(int n = 0) { num = n; }
	Test(const Test <T> &copy) { num = copy.num; }
	//注意在“<<”后加上“<>”表示这是一个函数模板
	friend ostream& operator<< <> (ostream & out, const Test<T> &obj);
};
template<class T> ostream& operator<<(ostream & out, const Test<T> &obj) {
	out << obj.num;
	return out;
}
//int main() {
//	Test<int> t(2);
//	cout << t;
//	system("pause");
//	return 0;
//}
