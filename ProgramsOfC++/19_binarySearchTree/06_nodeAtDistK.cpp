#include <iostream>
using namespace std;
struct Node
{	int data;
	Node *left, *right;
	Node(int value){
		data = value;
		left = right = NULL;}
};
Node *Insert(Node *root, int value)
{
	if (!root) return new Node(value);
	if (value > root->data) root->right = Insert(root->right, value);
	else root->left = Insert(root->left, value);
	return root;
}
void printSubTree(Node *root, int k){
	if (!root || k < 0)	return;
	if (k == 0){
		cout << root->data<<" ";
		return;}
	printSubTree(root->left, k - 1);
	printSubTree(root->right, k - 1);
}
// case 2
int printNodesAtK(Node * root,Node * target,int k){
	if(!root) return -1;
	if(root==target){
		printSubTree(root,k);
		return 0;}
	int dl = printNodesAtK(root->left,target,k);
	if(dl!=-1){
		if(dl+1==k)cout<<root->data<<" ";
		else printSubTree(root->right,k-dl-2);
		return dl+1;
	}
	int dr = printNodesAtK(root->right,target,k);
	if(dr!=-1){
		if(dr+1==k)cout<<root->data<<" ";
		else printSubTree(root->left,k-dl-2);
		return dr+1;
	}
	return -1;
}
int main()
{
	Node  *root = NULL;
	root = Insert(root, 3);
	Insert(root, 2);
	Insert(root, 1);
	Insert(root, 4);
	printNodesAtK(root,root->left,1);
	// preorder(root);//inorder always return in sorted order 
	return 0;
}
