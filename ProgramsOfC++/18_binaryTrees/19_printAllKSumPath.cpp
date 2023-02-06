// C++ program to print all paths with sum k.
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
struct Node
{
	int data;
	Node *left, *right;
	Node(int x)
	{
		data = x;
		left = right = NULL;
	}
};
void ans(Node *root, vector<int> &path, int k)
{
	if (!root)
		return;
	path.push_back(root->data);
	ans(root->left, path, k);
	ans(root->right, path, k);
	int f = 0;
	for (int i = path.size() - 1; i >= 0; i--)
	{
		f += path[i];
		if (f == k)
		{
			for (int j = i; j < path.size(); j++)
			{
				cout << path[j] << " ";
			}
			cout << endl;
		}
	}
	path.pop_back();
}
void printKPath(Node *root, int k)
{
	vector<int> path;
	ans(root, path, k);
}
int main()
{
	Node *root = new Node(10);
	root->left = new Node(5);
	root->left->right = new Node(6);
	root->left->right->right = new Node(-6);
	root->left->right->right->right = new Node(6);
	// root->left->left = new Node(2);
	// root->left->right = new Node(1);
	// root->left->right->left = new Node(1);
	// root->right = new Node(-1);
	// root->right->left = new Node(4);
	// root->right->left->left = new Node(1);
	// root->right->left->right = new Node(2);
	// root->right->right = new Node(5);
	// root->right->right->right = new Node(2);
	int k = 21;
	printKPath(root, k);
	return 0;
}
