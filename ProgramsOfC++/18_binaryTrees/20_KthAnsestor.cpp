/* C++ program to calculate Kth ancestor of given node */
#include <iostream>
#include <stack>
using namespace std;
struct Node
{
	int data;
	struct Node *left, *right;
};
Node* temp = NULL;
Node* temp1 = NULL;
Node* ans(Node *root, int node , int &k)
{	if (!root)
		return NULL;

	temp = ans(root->left,node,k);  
	temp1 = ans(root->right,node,k);
	//unless and untill we dont find data the temp and temp 1 will be null thus no if condition is possible 
	//temp nodes will be NULL untill we fund root data equal to value 
	if (root->data == node||temp||temp1){
		if (k > 0)k--;
		else if (k == 0)
		{
			cout<<"Kth ancestor is: "<<root->data;
			return NULL;
		}
		return root;
	}
}
Node* newNode(int data)
{
	Node *temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}
int main()
{
	Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	int k = 2;
	int node = 5;
	Node* parent = ans(root,node,k);
	if (parent)
		cout << "-1";
	return 0;
}
