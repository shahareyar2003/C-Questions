// C++ program to implement a
// linked list
#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};
// Driver's code
int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	// // allocate 3 nodes in the heap
	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 1; // assign data in first node
	head->next = second; // Link first node with the second node
    
	// assign data to second node
	second->data = 2;
	second->next = third;

	third->data = 3; // assign data to third node
	third->next = NULL;


	return 0;
}

// This code is contributed by rathbhupendra
