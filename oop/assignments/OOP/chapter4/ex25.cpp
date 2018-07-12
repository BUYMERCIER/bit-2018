#include <iostream>
using namespace std;
struct node {
	int value;
	struct node* next;
	void makeList(int count) {
		struct node* head = this;
		for (int i = 1; i <= count; i++) {
			struct node* t = new struct node;
			t->value = i;
			t->next = NULL;
			head->next = t;
			head = head->next;
		}

	}
	void printList() {
		struct node* head = this;
		while (head != NULL) {
			cout << head->value ;
			if (head->next != NULL) cout << " :point is " << head->next;
			else cout << " :point is " << " NULL";
			cout << endl;
			head = head->next;
		}
		cout << endl;
	}
};

int main() {
	struct node* head = new struct node;
	head->value = 0;

	head->makeList(10);
	head->printList();
	return 0;
}