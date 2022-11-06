#include<iostream>
using namespace std;

struct Node
{
	int var;
	struct Node* next;
	Node(int x)
	{
		var = x;
		next = NULL;
	}
};

class singleLinkedlist
{
    public:
	Node* head;
	Node* sorted;

	void newNode(int var)
	{
		Node* newnode = new Node(var);
		newnode->next = head;
		head = newnode;
	}
	void insertionSort(Node* headref)
	{
		// Initialize sorted linked list
		sorted = NULL;
		Node* current = headref;

		// Traverse the given linked list
		// and insert every node to sorted
		while (current != NULL)
		{
			// Store next for next iteration
			Node* next = current->next;

			// Insert current in sorted
			// linked list
			sortedInsert(current);

			// Update current
			current = next;
		}

		// Update head_ref to point to
		// sorted linked list
		head = sorted;
	}

	void sortedInsert(Node* newnode)
	{
		// Special case for the head end
		if (sorted == NULL ||
			sorted->var >= newnode->var)
		{
			newnode->next = sorted;
			sorted = newnode;
		}
		else
		{
			Node* current = sorted;

			while (current->next != NULL &&
				current->next->var < newnode->var)
			{
				current = current->next;
			}
			newnode->next = current->next;
			current->next = newnode;
		}
	}

	void printlist(Node* head)
	{
		while (head != NULL)
		{
			cout << head->var << " ";
			head = head->next;
		}
	}
};


int main()
{
    singleLinkedlist list;
	list.head = NULL;
	list.newNode(5);
	list.newNode(20);
	list.newNode(4);
	list.newNode(3);
	list.newNode(30);
	cout << "Linked List before sorting" <<
			endl;
	list.printlist(list.head);
	cout << endl;
	list.insertionSort(list.head);
	cout << "Linked List After sorting" <<
			endl;
	list.printlist(list.head);
}