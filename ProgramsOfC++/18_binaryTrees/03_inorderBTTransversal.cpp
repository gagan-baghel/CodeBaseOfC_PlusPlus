#include <iostream>
#include<stack>
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
void inorder(Node *root)
{	if (root == NULL)
	{
		return;
	}
	inorder(root->left);
	cout << root->data <<"  ";
	inorder(root->right);}
void inOrderIterative(Node *root)
{
	stack<Node *> st;
	Node *curr = root;
	while(!st.empty()||curr!=NULL){
		if(curr!=NULL){
			st.push(curr);
			curr=curr->left;
		}
		else{
			curr = st.top();
			st.pop();
			cout<<curr->data<<"  ";
			curr = curr->right;
		}
	}
}
int main()
{
	struct Node *root = new Node(4);
	root->left = new Node(2);
	root->right = new Node(6);
	root->left->left = new Node(1);
	root->left->right = new Node(3);
	root->right->left = new Node(5);
	root->right->right = new Node(7);
	// inorder(root);
	cout<<endl;
	inOrderIterative(root);
	return 0;
}