#include <iostream>
#include <stack>
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

void preorder(Node *root)
{
	if (root == NULL)
	{
		return;
	}
	cout << root->data << "  ";
	preorder(root->left);
	preorder(root->right);
}
void preorderIterative(Node *root)
{	if(root==NULL) return;
	stack<Node *> st;
	st.push(root);
	while (!st.empty())
	{
		Node *curr = st.top();
		cout << curr->data<<"  ";
		st.pop();
		if(curr->right) st.push(curr->right);
		if(curr->left) st.push(curr->left);
	}
}
int main()
{
	struct Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	preorder(root);
	cout<<endl;
	preorderIterative(root);
	return 0;
}