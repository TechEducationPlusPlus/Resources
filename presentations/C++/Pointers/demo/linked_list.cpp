#include <iostream>

using namespace std;

struct linked_list
{
	int value;
	linked_list* prev;
	linked_list* next;

	linked_list (int val = 0)
	{
		value = val;
		prev = nullptr;
		next = nullptr;
	}

	void add_after (int a)
	{
		linked_list* new_node = new linked_list (a);
		new_node->next = this->next;
		new_node->prev = this;
		this->next = new_node;
	}
};

int main ()
{
	int a = 10;
	int* ptr = &a;
	int* new_int = new int;

	cout << a << " " << *ptr << "\n";
	cout << &a << " " << ptr << "\n";
	cout << new_int << "\n";
	delete new_int;


	linked_list b = linked_list (12);
	b.add_after (11);
	cout << b.value << " " << b.next->value << "\n";
}
