// ex24.cpp
// Create a struct that holds an int and a pointer to another instance of the
// same struct. Write a function that takes the address of one of these structs
// and an int indicating the length of the list you want created. This function
// will make a whole chain of these structs (a linked list), starting from the
// argument (the head of the list), with each one pointing to the next. Make
// the new structs using new, and put the count (which object number this is)
// in the int. In the last structin the list, put a zero value in the pointer
// to indicate that it’s the end. Write a second function that takes the head of
// your list and moves through to the end, printing out both the pointer value
// and the int value for each one.

#include <iostream>
using namespace std;

struct test {
	int value;
	struct test* next;
};

void makeList(struct test* head, int count) {
	for (int i = 1; i <= count; ++i) {
		struct test* t = new struct test;
		t->value = i;
		t->next = NULL;
		head->next = t;
		head = head->next;
	}
}

void printList(struct test* head) {
	while (head != NULL) {
		cout << head->value ;
		if (head->next != NULL) cout << " " << head->next;
		else cout << "NULL";
		cout << endl;
		head = head->next;
	}
	cout << endl;
}

int main(){
	struct test* head = new struct test;
	head->value = 0;
	makeList(head, 10);
	printList(head);
	return 0;
}