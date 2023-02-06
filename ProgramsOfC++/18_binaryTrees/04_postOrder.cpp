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
void postOrder(Node *root)
{
	if (root == NULL)
		return;
	cout << root->data << " ";
	postOrder(root->left);
	postOrder(root->right);
}
void postorderIterative(Node *root)
{
	stack<Node *> st;
	stack<int> out;
	st.push(root);
	while (!st.empty())
	{
		Node *curr = st.top();
		out.push(curr->data);
		st.pop();
		if (curr->left)
			st.push(curr->left);
		if (curr->right)
			st.push(curr->right);
	}
	while (!out.empty())
	{
		cout << out.top() << " ";
		out.pop();
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
	postOrder(root);
	cout << endl;
	postorderIterative(root);
	return 0;
}