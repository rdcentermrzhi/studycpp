#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
class VectorData
{
public:
	char *p_;
	VectorData(const VectorData & data) {
		int size = strlen(data.p_);
		p_ = new char[size + 1];
		memset(p_, 0, size);
		strcpy(p_, data.p_);
		cout << "构造VVectorData:" << p_ << endl;
	}


	VectorData(const char *p) {
		int size = strlen(p);
		p_ = new char[size + 1];
		memset(p_, 0, size);
		strcpy(p_, p);
	}

	~VectorData() {
		cout << "析构VectorData:" << p_ << endl;
		delete [] p_;
	}

protected:
private:
};
void test() {
	//vector<VectorData> myvector;
	//VectorData a("abc");
	//VectorData b("123");
	//VectorData c("456");
	//myvector.push_back(a);
	//myvector.push_back(b);
	//myvector.push_back(c);




	//vector<VectorData *> vec;
	//VectorData *a = new VectorData("111");
	//VectorData *b = new VectorData("222");
	//VectorData *c = new VectorData("333");
	//vec.push_back(a);
	//vec.push_back(b);
	//vec.push_back(c);

	//for (vector<VectorData *>::iterator it = vec.begin(); it !=  vec.end(); it++) //需要自己析构分配的空间
	//{
	//	if (NULL != *it) {
	//		delete *it;
	//		*it = NULL;
	//	}
	//}
	//vec.clear();



}
//重新设置长度
void test2() {
	
	int arr[3] = {1,2,3};
	vector<int> vecInt(arr,arr+3);
	vector<int>::iterator it;
	

	vecInt.resize(10, 4);
	vecInt.resize(2);
	for (it = vecInt.begin(); it != vecInt.end(); it++) {
		cout << *it << endl;
	}

	


}

void test3() {
	int arr[] = { 1,3,4 };
	vector<int> vect(arr, arr + 3);
	vector<int>::iterator it;
	vector<int>::reverse_iterator rit;
	vector<int>::const_iterator const_it;

	//正向访问
	for (it = vect.begin(); it != vect.end(); ++it) {
		cout << *it << endl;
	}

	//for (it = vect.end() + 1; it != vect.begin(); it--) {
	//	cout << *it << endl;
	//}
	//逆向访问
	for (rit = vect.rbegin(); rit != vect.rend(); ++rit) {
	
		cout << *rit << endl;
	}
	//Effective stl 不建议使用
	//for (const_it = vect.begin(); const_it != vect.end(); const_it++)
	//{
	//	cout << *const_it << endl;
	//}
	//*const_it = 1; 只读迭代器 不可修改 

}

int main_vector(int argc,char *argv[])
{
	test3();
	//_CrtSetBreakAlloc(170); //98500
	//int i = 0;
	//vector<int>::iterator it;
	//vector<int> vecIntA(3);
	//vector<int> vecIntB(3, 9); //包含3个9i
	//vector<int> vecIntC(vecIntB);//复制B 到C
	//int iArray[] = {1,3,4};
	//vector<int> vectorD(iArray,iArray+3); //采用指针加法处理[a,b)


	///*for (int i = 0; i < vectorD.size(); i++) {
	//	cout << vectorD[i] << endl;
	//}*/

	//for (vector<int>::iterator it = vectorD.begin(); it != vectorD.end(); ++it) { //end 指向尾指针的下一个位置指针
	//	cout << *it << endl;
	//}

	/*vector<int> vectora(3, 4);
	vectora.push_back(12);
	vectora.push_back(13);
	vectora[0] = 12333;
	int & a = vectora.at(0);
	a =1111;
	*(vectora.begin() + 1) = 1333;*/


	//algorithm.erase(algorithm.begin() + 4); //删除某个
	//algorithm.erase(algorithm.begin(), algorithm.begin() + 4);//删除从什么到什么
	//algorithm.pop_back();

	/*algorithm.assign(1, 3);



	for (vector<int>::iterator it = algorithm.begin(); it != algorithm.end(); it++) {
		cout << *it << endl;
	}


*/
	
	
	system("pause");
	_CrtDumpMemoryLeaks();
	return 0;
}




