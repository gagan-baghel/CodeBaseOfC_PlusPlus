#include <iostream>
using namespace std;
struct BST
{
	int data;
	BST *left, *right;
	public:
	BST(int value)
	{
		data = value;
		left = right = NULL;
	}
};
BST * search(BST * root , int val){
	if(!root){
		return NULL;
	}
	if(root->data==val){

		return root;
	}
	if(root->data>val){
		return search(root->left,val);
	}
	
	return search(root->right,val);
}
BST *Insert(BST *root, int value)
{
	if (!root)
	{
		return new BST(value);
	}
	if (value > root->data)
	{
		root->right = Insert(root->right, value);
	}
	else
	{
		root->left = Insert(root->left, value);
	}
	return root;
}
void Inorder(BST *root)
{
	if (!root)
	{
		return;
	}
	Inorder(root->left);
	cout << root->data << endl;
	Inorder(root->right);
}
int main()
{
	BST  *root = NULL;
	root = Insert(root, 5);
	Insert(root, 1);
	Insert(root, 3);
	Insert(root, 4);
	Insert(root, 2);
	Insert(root, 7);
	Inorder(root);	//always return in sorted order
	BST * ans = search(root,89);
	if(ans)
	cout<<ans->data;
	else 
	cout<<"element not present -1";
	return 0;
}
