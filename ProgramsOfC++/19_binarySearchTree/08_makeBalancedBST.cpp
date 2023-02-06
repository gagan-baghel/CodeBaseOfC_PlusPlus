#include <iostream>
using namespace std;
struct BST
{
	int data;
	BST *left, *right;
	BST(int value)
	{
		data = value;
		left = right = NULL;
	}
};
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

int main()
{
	BST  *root = NULL;
	root = Insert(root, 5);
	Insert(root, 1);
	Insert(root, 3);
	Insert(root, 4);
	Insert(root, 2);
	Insert(root, 7);
	preorder(root);	//inorder always return in sorted order 
	return 0;
}

void inorder(Node * root,vector<Node* >v){
	if(!root)return;
	inorder(root->left,v);
	v.push_back(root);
	inorder(root->left,v);
}

Node * makeBst(int start,int end){
	if(start>end) return NULL;
	int mid = (start+end)/2;
	Node* root = v[mid];
	root->left=makeBst(start,mid-1);
	root->right=makeBst(mod+1,end);
	return root;
}


