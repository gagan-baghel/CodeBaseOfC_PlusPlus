#include <iostream>
using namespace std;
class node
{
public:
	int data;
	node *next;
	node(int val)
	{
		data = val;
		next = NULL;
	}
};
int length(node *head)
{
	int l = 0;
	node *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		l++;
	}
	return l;
}
node *findIntersection(node *head1, node *head2)
{
	int a = length(head1);
	int b = length(head2);
	node *temp1 = NULL;
	node *temp2 = NULL;
	node *ans = new node(0);
	node *result = ans;
	if (a > b)
	{
		temp1 = head2;
		temp2 = head1;
	}
	else
	{
		temp1 = head1;
		temp2 = head2;
	}
	while (temp2 != NULL)
	{
		if (temp2->data == temp1->data)
		{
				ans->next = temp1;
				temp1 = temp1->next;
				ans = ans->next;
		}
		temp2 = temp2->next;
	}
	if (ans->next != NULL)
	{
		ans->next = NULL;
	}
	return result->next;
}

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
	insertAtTail(head, 3);
	insertAtTail(head, 6);
	insertAtTail(head, 3);
	insertAtTail(head, 9);
	insertAtTail(head, 12);
	insertAtTail(head, 14);
	insertAtTail(head, 145);
	// display(head);
	node *head1 = NULL;
	insertAtTail(head1, 3);
	insertAtTail(head1, 5);
	insertAtTail(head1, 8);
	insertAtTail(head1, 9);
	// display(mergeLL(head, head1));
	display(findIntersection(head, head1));

	return 0;
}
