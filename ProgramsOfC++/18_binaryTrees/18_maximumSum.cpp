#include <iostream>
using namespace std;
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	Node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};

int ma = INT_MIN;
int maxSum(Node * root){
	if(!root) return 0;

	int a = maxSum(root->left);
	int b = maxSum(root->right);
	ma = max(ma,a+b+root->data);
	return a+b+root->data;	
}
int main()
{
	struct Node *root = new Node(1);
	root->left = new Node(-2);
	root->right = new Node(3);
	root->left->left = new Node(-4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(2);
	maxSum(root);
	cout<< ma;
	return 0;
}