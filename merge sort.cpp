// LinkedList.cpp
#include <iostream>
using namespace std;
class node {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}
};
int lengthLL(node* head) {
	int cnt = 0;
	while (head) {
		cnt++;
		head = head->next;
	}
	return cnt;
}
void insertAtEnd(node* &head, int d) {
	node* n = new node(d);
	if (head == NULL) {
		head = n;
	}
	else {
		node* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = n;
	}
}
void print(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;
}
node* mid(node* head) {
	if (head == NULL || head->next == NULL) {
		return head;
	}
	node* s = head;
	node* f = head->next;
	while (f != NULL and f->next != NULL) {
		f = f->next->next;
		s = s->next;
	}
	return s;
}
void ReverseLL(node* &head) {
	node* c = head, *prev = NULL, *n;
	while (c != NULL) {
		n = c->next;
		c->next = prev;
		prev = c;
		c = n;
	}
	head = prev;
}
node* FindLastKth(node* head, int k) {
	node* s, *f;
	s = f = head;
	while (k--) {
		f = f ->next;
	}
	while (f != NULL) {
		f = f -> next;
		s = s->next;
	}
	return s;
}

node* mergeLL(node* h1, node* h2) {
	// base case
	if (h1 == NULL) {
		return h2;
	}
	if (h2 == NULL) {
		return h1;
	}

	// recursive case
	node* newHead = NULL;
	if (h1->data < h2->data) {
		newHead = h1;
		node* chotaHead = mergeLL(h1->next, h2);
		newHead->next = chotaHead;
	}
	else {
		newHead = h2;
		node* chotaHead = mergeLL(h1, h2->next);
		newHead->next = chotaHead;
	}
	return newHead;
}

node* mergeSort(node* head) {
	// base case
	if (head == NULL || head->next == NULL) {
		return head;
	}
	// recursive case
	node* m = mid(head);
	// 1. Divide
	node* a = head;
	node* b = m->next;
	m->next = NULL;

	// 2. Sort
	a = mergeSort(a);
	b = mergeSort(b);

	// 3. Merge
	node* newHead = mergeLL(a, b);
	return newHead;
	// return mergeLL(a, b);
}


int main() {
	node* head;
	head = NULL;
	node* head, *head1;
	head = head1 = NULL;

	insertAtEnd(head, 1);
	insertAtEnd(head, 2);
	insertAtEnd(head, 10);
	insertAtEnd(head, 3);
	insertAtEnd(head, 4);
	insertAtEnd(head, 5);
	insertAtEnd(head, 6);
	insertAtEnd(head, 60);
	insertAtEnd(head, 17);
	insertAtEnd(head, 7);
	insertAtEnd(head, 70);
	insertAtEnd(head, 20);
	// insertAtEnd(head, 7);
	print(head);

	// insertAtEnd(head1, 0);
	// insertAtEnd(head1, 2);
	// insertAtEnd(head1, 3);
	// insertAtEnd(head1, 8);
	// insertAtEnd(head1, 9);
	// print(head1);

	// node* newHead = mergeLL(head, head1);
	// print(newHead);
	head = mergeSort(head);
	// ReverseLL(head);
	// print(head);
	print(head);
	// node* ans = mid(head);
	// cout << "Middle element is " << ans->data << endl;

	node* ans = FindLastKth(head, 4);
	cout << "Last Kth Element is " << ans->data << endl;
	// node* ans = FindLastKth(head, 4);
	// cout << "Last Kth Element is " << ans->data << endl;

	return 0;
}

