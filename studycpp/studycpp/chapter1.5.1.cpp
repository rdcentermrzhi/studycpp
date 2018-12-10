#define _CRT_SECURE_NO_WARNINGS
#define _CRTDBG_MAP_ALLOC
#include<iostream>
#include <stdlib.h>
#include <crtdbg.h>
#include "Sales_item.h"
#include "chapter1.5.1.h"
int main_151(int argc, char *argv[])
{
	//_CrtSetBreakAlloc(167);

	//same_item_add();
	item_total();

	system("pause");
	_CrtDumpMemoryLeaks();
	return 0;
}
//struct link
struct Item_node {
	Item_node * pre = NULL;
	Item_node * next = NULL;
	Sales_item * item = NULL;
};

void item_total() {
	
	Sales_item total;
	Item_node * item_front = new Item_node();
	item_front->next = NULL;
	item_front->pre = NULL;
	item_front->item = NULL;

	Item_node * node_tmp = NULL;
	Item_node * node_next = NULL;


	Sales_item  * item = new Sales_item();
	while (std::cin >> *item)
	{
		Item_node * node = new Item_node();
		node->pre = NULL;
		node->next = NULL;
		node->item = item;

		if (item_front->next != NULL) {
			item_front->next->pre = node;
			node->next = item_front->next;
		}

		item_front->next = node;
		node->pre = item_front;
		item = new  Sales_item();
	}


	if (item != NULL) {
		delete item;
		item = NULL;
	}

	node_tmp = item_front->next;
	while (node_tmp)
	{
		total += (*node_tmp->item);
		node_tmp = node_tmp->next;
	}

	std::cout << total << std::endl;

	// ~constructor
	node_tmp = item_front;
	while (node_tmp)
	{
		node_next = node_tmp->next;

		if (node_tmp->item != NULL)
		{
			delete node_tmp->item;
			node_tmp->item = NULL;
		}
		delete node_tmp;

		node_tmp = node_next;
	}

	item_front = NULL;
	node_tmp = NULL;
	node_next = NULL;
}

void same_item_add()
{
	using namespace std;
	Sales_item item1, item2;

	cout << "enter one book" << endl;
	cin >> item1 >> item2;

	if (item1.isbn == item2.isbn) {
		cout << item1 + item2 << endl;
	}
	else {
		cout << "they are diff isbn";
	}
}
