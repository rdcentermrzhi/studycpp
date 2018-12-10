#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
#include<string>

void test_map() 
{
	using namespace std;
	map<int, string> var_map;

	pair<map<int, string>::iterator, bool> pairRes;
	map<int, string>::iterator it;
	pair<int, string> map_pair;
	pairRes = var_map.insert(pair<int,string>(1,"abc"));
	var_map.insert(make_pair(2, "ccc"));
	var_map.insert(map<int, string>::value_type(3, "111"));
	var_map[4] += "zzz"; 


	cout << (pairRes.first)->first << endl;
	cout << (pairRes.first)->second << endl;
	cout << pairRes.second << endl;
	
	for (it = var_map.begin(); it != var_map.end(); ++it) 
	{
		
		map_pair = *it;
		cout << "key:" << map_pair.first << " value:" <<  map_pair.second << endl;
	}

}
class MapKey
{
public:
	int key_;
	MapKey()
	{
	
	}

	MapKey(const int & key) 
	{
		key_ = key;
	}

	friend std::ostream & operator << (std::ostream & out, const MapKey & map_key)
	{
	  return out << map_key.key_ ;
	}

protected:
private:
};

struct less_key {

	bool operator() (const MapKey & left,const MapKey & right){
		return left.key_ > right.key_;
	}
};



void test_map_sort_functor() 
{
	std::map<MapKey, std::string,less_key> key_map;
	std::map<MapKey, std::string>::iterator it;
	std::pair<MapKey, std::string> map_pair;
	key_map.insert(std::map<MapKey, std::string>::value_type(MapKey(1), "12"));
	key_map.insert(std::pair<MapKey, std::string>(MapKey(5), "15"));
	key_map.insert(std::make_pair(MapKey(3), "14"));
	//key_map[MapKey(4)] = "14"; //效率不够先查找后插入  string value = key_map[key]; //取值操作会插入一个实列到map

	for (it = key_map.begin(); it != key_map.end(); ++it) 
	{
		map_pair = *it;
		std::cout << "key:" << map_pair.first << " value: " << map_pair.second << std::endl;
	
	}
}


int main_test_map(int argc,char *argv[])
{
	test_map_sort_functor();
	//test_map();
	
	system("pause");
	return 0;
}