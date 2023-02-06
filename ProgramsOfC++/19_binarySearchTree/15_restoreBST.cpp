#include <iostream>
using namespace std;
struct BST
{
	int data;
	BST *left, *right;
	BST(int val)
	{
		data = val;
		left = right = NULL;
	}
};
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void inorder(BST *root)
{
	if (root == NULL)
		return;
	inorder(root->left);
	cout << root->data << "  ";
	inorder(root->right);
}
void calculatePointers(BST *root, BST *&first, BST *&mid, BST *&last, BST *&prev)
{
	if (!root)
		return;
	calculatePointers(root->left, first, mid, last, prev);
	if (prev && root->data < prev->data)
	{
		if (!first)
		{
			first = prev;
			mid = root;
		}
		else
		{
			last = root;
		}
	}
	prev = root;

	calculatePointers(root->right, first, mid, last, prev);
}
void restore(BST *root)
{
	BST *first, *mid, *last, *prev;
	first = NULL;
	mid = NULL;
	last = NULL;
	prev = NULL;

	calculatePointers(root, first, mid, last, prev);
	if (first and last)
	{
		swap(&(first->data), &(last->data));
	}

	else if (first and mid)
	{
		swap(&(first->data), &(mid->data));
	}
}
int main()
{
	BST *root = new BST(6);
	root->left = new BST(9);
	root->right = new BST(3);
	root->left->left = new BST(1);
	root->left->right = new BST(4);
	// root->right->left = new BST(6);
	root->right->right = new BST(13);
	inorder(root);
	cout << endl;
	restore(root);
	inorder(root);

	return 0;
}