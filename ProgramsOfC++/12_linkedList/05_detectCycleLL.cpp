// floyds algo
// tortoise algo
#include <iostream>
using namespace std;
class node
{public:
	int data;
	node *next;
	node(int val){
		data = val;
		next = NULL;}};
void insertAtHead(node *&head, int val)
{
	node *n = new node(val);
	n->next = head;
	head = n;
}
void insertAtTail(node *&head, int val)
{
	node *n = new node(val);
	if (head == NULL)
	{
		head = n;
		return;
	}
	node *temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
}
void makeCycle(node *&head, int pos)
{
	node *temp = head;
	node *startnode;
	int count = 1;
	while (temp->next != NULL)
	{
		if (pos == count)
		{
			startnode = temp;
		}
		temp = temp->next;
		count++;
	}
	temp->next = startnode;
}
bool detectCycle(node *head)
{
	node *slow = head;
	node *fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return true;
		}
	}
	return false;
}

// void removeCycle(node* &head){
// 	node *slow = head;
// 	node *fast = head;
// 	while (fast != NULL && fast->next != NULL)
// 	{
// 		slow = slow->next;
// 		fast = fast->next->next;
// 		if (slow == fast)
// 		{
// 			fast = head;
// 			while(fast->next!=slow->next){
// 				fast=fast->next;
// 				slow=slow->next;

// 			}
// 			slow->next=NULL;
// 			return;

// 		}
// 	}

// }
// void removeCycle(node *&head)
// {
// 	node *slow = head;
// 	node *fast = head;
// 	do
// 	{
// 		slow = slow->next;
// 		fast = fast->next->next;
// 	} while (slow != fast);//make segment fault
// 	if (slow == head)
// 	{
// 		while (fast->next != slow)
// 		{
// 			fast = fast->next;
// 		}
// 		fast->next = NULL;
// 	}
// 	else
// 	{
// 		fast = head;
// 		while (fast->next != slow->next)
// 		{
// 			fast = fast->next;
// 			slow = slow->next;
// 		}
// 		slow->next = NULL;
// 	}
// }

void display(node *head)
{
	node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

int main()
{
	node *head = NULL;
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);
	insertAtTail(head, 5);
	insertAtTail(head, 6);
	makeCycle(head, 3);
	cout << detectCycle(head) << endl;
	removeCycle(head);
	cout << detectCycle(head) << endl;

	display(head);
	return 0;
}
// void removeLoop(Node *head)
// {
// 	Node *slow = head;
// 	Node *fast = head;
// 	if (head == NULL || head->next == NULL)
// 	{
// 		return;
// 	}
// 	while (fast != NULL && fast->next != NULL)
// 	{
// 		slow = slow->next;
// 		fast = fast->next->next;
// 		if (slow == fast)
// 			break;
// 	}
	
// 	if (slow == head)
// 	{
// 		while (fast->next != slow)
// 		{
// 			fast = fast->next;
// 		}
// 		fast->next = NULL;
// 	}
// 	else
// 	{
// 		slow = head;
// 		while (fast->next != slow->next)
// 		{
// 			fast = fast->next;
// 			slow = slow->next;
// 		}
// 		fast->next = NULL;
// 	}
// }

// void removeLoop(Node *head)
// {

// 	Node *slow = head;
// 	Node *fast = head;
// 	if (head == NULL || head->next == NULL)
// 	{
// 		return;
// 	}
// 	while (fast != NULL && fast->next != NULL)
// 	{
// 		slow = slow->next;
// 		fast = fast->next->next;
// 		if (slow == fast)
// 			break;
// 	}
// 	if (slow != fast)
// 	{
// 		return;
// 	}
// 	if (slow == head)
// 	{
// 		while (fast->next != slow)
// 		{
// 			fast = fast->next;
// 		}
// 		fast->next = NULL;
// 	} // exception case when fast and slow both are in head eg. 1->2->3->4 and x=0(index)
// 	else
// 	{
// 		slow = head;
// 		while (fast->next != slow->next)
// 		{
// 			fast = fast->next;
// 			slow = slow->next;
// 		}
// 		fast->next = NULL;
// 	}
// 	return;
// }