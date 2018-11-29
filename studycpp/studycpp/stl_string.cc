#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
int main11111(int argc, char *argv[])
{
	// c 类型的字符串 \0结尾
	//string str;
	//string str2(str);
	//string str3("abc");
	//string str4(6, 'a');
	//str4.append("ddddd");

	//std::cout << str4 << std::endl;

	//string str5;
	/*while (cin >> str5) {
		cout << str5 << endl;
	}*/

	//if (str.empty()) {
	//	cout << "结果是空串" <<  endl;
	//	cout << str.size() << endl;

	//}

	//if (str == "") {
	//	cout << "str 是空" << endl;
	//}


	//cout << str4.length() <<str3[1] << endl;

	//while (getline(cin, str5,'a')) {
	//	cout << str5 << endl;
	//}

	//if (!str3.empty()) {
	//
	//	for (string::size_type i = 0; i < str3.size(); i++) { //string::size_type size() 返回值    string 定义的unsigned 
	//		
	//		cout << str3[i];
	//		
	//	}
	//	
	//}
	//

	//string  stlstr = ",a1 0012";
	//
	//cout << isalnum(stlstr[0]) << endl; // is num or alphabet
	//cout << isalpha(stlstr[0]) << endl; //is alphabet
	//cout << iscntrl(stlstr[1]) << endl; //is control
	//cout << isdigit(stlstr[1]) << endl; //is decimal digit  
	//cout << isgraph(stlstr[2]) << endl; // not space or controll
	//cout << ispunct(stlstr[0]) << endl; // is punctuation 
	//cout << toupper(stlstr[1]) << endl;
	//cout << stlstr.at(stlstr.size()) << endl; //at []  区别在于对于 \0 的处理上 at 会发生数组越界
	//const char * pchar = stlstr.c_str();
	//cout << pchar << endl;
	////string str = "abc";
	////str.insert(0, "a");

	//char * mchar_ = new char[100]{0};
	//stlstr.copy(mchar_, stlstr.size()+2,8);
	//cout << mchar_ << endl;
	//delete mchar_;
	//string  str("abc");
	//str = "dddd";
	//cout << str << endl; // dddd

	//str.assign("cccc");
	//cout << str << endl; // cccc

	//str.assign("ddd",2); 
	//cout << str << endl; // ddd
	//
	//str.assign("fff", 2, 32);
	//cout << str << endl;

	//str.assign(12, 'a');
	//cout << str << endl;

	//string a = "abc";
	//string b = "ABC";
	//cout << a.compare(b) << endl;
	//cout << a.substr(0, 4) << endl;

	//string a = "adfadsafd";
	//cout << a.find('a',1) << endl;
	//string b = "sa";
	//cout << a.find("1", 1) << endl;  //如果查找不到返回 -1  因为是无符号数是 所以返回最大的无符号数
	
	//string a("abcdefadsa");
	//cout << a.rfind("bcd", 10) << endl;

	//a.replace(1, 3, "12133"); //删除 1-3 然后插入
	//cout << a << endl;

	//string b("123");
	//a.swap(b);
	//cout << a << "\t" << b << endl;


	/*string a("abcdef");
	a.insert(1, "adc");
	cout << a << endl;
	a.insert(1, 10, 'a');
	cout << a << endl;
	a.erase(1, 1);
	cout << a << endl;*/

	string s = "AABccc";
	transform(s.begin(), s.end(), s.begin(), toupper);
	cout << s << endl;
	 
	string s2 = "ABcccccccc";
	transform(s2.begin(), s2.end(), s.begin(), tolower); //目标字符串必须足够大
	cout << s << endl;
	system("pause");
	return 0;
}