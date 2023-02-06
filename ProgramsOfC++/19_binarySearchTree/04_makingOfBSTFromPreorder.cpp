#include <iostream>
using namespace std;
struct BST
{
	int data;
	struct BST *left, *right;
	BST(int val)
	{
	        data = val;
		left = NULL;
		right = NULL;
	}
};
void preordere(BST *root)
{
	if (!root)
	{
		return;
	}
	cout << root->data << "  ";
	preordere(root->left);
	preordere(root->right);
}

BST *makeBST(int preorder[], int* preidx, int key, int min, int max, int n)
{	
	if(*preidx >= n){
		return NULL;
	}
	BST *root = NULL;
	if (key > min && key < max)
	{
		root = new BST(key);
		*preidx = *preidx+1 ;
		if (*preidx < n)
		{
			root->left = makeBST(preorder, preidx, preorder[*preidx], min, key, n);
		}
		if (*preidx < n)
		{
			root->right = makeBST(preorder, preidx, preorder[*preidx], key, max, n);
		}
	}
	return root;
}

int main()
{
	int preorder[] = {10,2,1,13,11};
	int n=5;
	int preidx = 0;
	BST * root = makeBST(preorder, &preidx, preorder[preidx],INT_MIN,INT_MAX, n);
	preordere(root);
	return 0;
}