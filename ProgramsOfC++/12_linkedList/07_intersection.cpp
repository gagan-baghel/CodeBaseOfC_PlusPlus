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
void makeIntersection(node *&head, node *&head1)
{
	node *temp = head;
	node *temp1 = head1;
	int count = 0;
	while (temp1->next != NULL)
	{
		temp = temp->next;
		temp1 = temp1->next;
		count++;
	}
	temp1->next = temp->next;
}
int length(node*head){
	int l=0;
	node *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		l++;
	}
	return l;
}
bool findIntersection(node *&head, node *&head1)
{
	bool flag = false;
	int l = length(head);
	int l1= length(head1);
	node *temp ;
	node *temp1 ;
	int k=0;
	if(l>l1){
		temp=head;
		temp1=head1;
		k = l-l1;
	}
	else {
		temp = head1;
		temp1= head; 
		k =  l1-l;
	}
	while(k<0){
		temp=temp->next;
		k--;
	}
	while(temp->next!=NULL){
		if(temp->next==temp1->next){
			cout<<temp->next->data;
			return true;
		}
		temp=temp->next;
		temp1=temp1->next;
	}
	return false;
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
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);
	insertAtTail(head, 5);
	insertAtTail(head, 6);
	insertAtTail(head, 7);
	insertAtTail(head, 8);
	insertAtTail(head, 9);
	node *head1 = NULL;
	insertAtTail(head1, 8);
	insertAtTail(head1, 8);
	insertAtTail(head1, 8);
	insertAtTail(head1, 8);
	makeIntersection(head, head1);
	display(head1);
	cout << findIntersection(head, head1);
	return 0;
}
