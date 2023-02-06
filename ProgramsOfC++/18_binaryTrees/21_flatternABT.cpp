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
void inorder(Node *root)
{
	if (root == NULL)
	{
		return;
	}
	cout << root->data << " ";
	inorder(root->left);
	inorder(root->right);
}
void flattern(Node *&root)
{
	if (root == NULL or (root->left == NULL and root->right == NULL))return;
	
	if (root->left != NULL)
	{
		flattern(root->left);
		Node *temp = root->right;
		root->right = root->left;
		root->left = NULL;
		Node *iterate = root->right;
		while (iterate->right != NULL)
		{
			iterate = iterate->right;
		}
		iterate->right = temp;
	}

	flattern(root->right);
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
	inorder(root);
	flattern(root);
	cout<<endl;
	while(root!=NULL){
		cout<<root->data<<" ";
		root=root->right;
	}
	return 0;
}