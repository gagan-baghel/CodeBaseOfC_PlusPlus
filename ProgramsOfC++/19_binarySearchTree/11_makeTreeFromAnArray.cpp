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
		return new BST(value);
	if (value > root->data)
		root->right = Insert(root->right, value);
	else
		root->left = Insert(root->left, value);
	return root;
}
void preorder(BST *root)
{
	if (!root)
	{
		return;
	}
	preorder(root->left);
	cout << root->data << "  ";
	preorder(root->right);
}
BST *makeArrToTree(int arr[], int start, int end)
{
	if(start>end) return NULL;
	int mid=(start+end)/2;
	BST * node = new BST(arr[mid]);
	node->left=makeArrToTree(arr,start,mid-1);
	node->right=makeArrToTree(arr,mid+1,end);
	return node;

}
int main()
{
	int arr[] = {1,2,3,5,6,7,8,9};
	int n = sizeof(arr) / sizeof(arr[0]);
	BST *root = makeArrToTree(arr,0,n-1);
	preorder(root);
	return 0;
}