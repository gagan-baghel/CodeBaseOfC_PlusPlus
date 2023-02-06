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

int calheight(Node * root){
	if(root==NULL){
		return 0;
	}
	return max(calheight(root->left),calheight(root->right))+1;
	// time complexity o(n);
}

int diameter(Node * root){
	if(root==NULL)return 0;
	int lheight=calheight(root->left);
	int rheight=calheight(root->right);
	int currDiameter = lheight+rheight+1;
	int ldiameter=diameter(root->left);
	int rdiameter=diameter(root->right);
	return max(currDiameter,max(ldiameter,rdiameter));

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
	cout<<diameter(root);
	return 0;
}