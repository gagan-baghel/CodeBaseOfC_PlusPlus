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
BST *Insert(BST *root, int value, BST *&succ)
{	if (!root)
		return new BST(value);
	if (value < root->data)
	{
		succ = root;
		root->left = Insert(root->left, value, succ);
	}
	if (value > root->data)
		root->right = Insert(root->right, value, succ);
	return root;
}
void find(int arr[], int n)
{	BST *root = NULL;
	for (int i = n; i >= 0; i--)
	{
		BST *succ = NULL;
		root = Insert(root, arr[i], succ);
		if (succ)
			arr[i] = succ->data;
		else
			arr[i] = -1;
		}
}
int main()
{
	int arr[] = {8, 58, 71, 18, 31, 32, 63, 92, 43, 3, 91, 93, 25, 80, 28};
	find(arr, 14);
	for (int i = 0; i < 15; i++)
		cout << arr[i] <<"  ";
	return 0;
}