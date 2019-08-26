#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <iterator>
#include <string>

using namespace std;

//int main(int argc, char *argv[])
//{
//	vector<string> sentence;
//
//	sentence.reserve(5);
//
//	sentence.push_back("hello world");
//
//	sentence.insert(sentence.end(), { "how", "are", "you", "?" });
//
//	copy(sentence.cbegin(), sentence.cend(), ostream_iterator<string>(cout, " "));
//
//	cout << endl;
//
//	cout << "max_count()" << sentence.max_size() << endl;
//	cout << "size()" << sentence.size() << endl;
//	cout << "capacity()" << sentence.capacity() << endl;
//
//	swap(sentence[1], sentence[3]);
//
//	sentence.insert(find(sentence.begin(), sentence.end(), "?"), "always" );
//
//	sentence.back() = "!";
//
//	copy(sentence.cbegin(), sentence.cend(), ostream_iterator<string>(cout, " "));
//	cout << endl;
//
//	cout << "size():" << sentence.size() << endl;
//	cout << "capacity()" << sentence.capacity() << endl;
//	
//	sentence.pop_back();
//	sentence.pop_back();
//
//
//	//sentence.shrink_to_fit();
//
//	vector<string>(sentence).swap(sentence);
//
//	cout << "size()" << sentence.size() << endl;
//	cout << "capacity()" << sentence.capacity() << endl;
//
//
//
//	system("pause");
//	return 0;
//}