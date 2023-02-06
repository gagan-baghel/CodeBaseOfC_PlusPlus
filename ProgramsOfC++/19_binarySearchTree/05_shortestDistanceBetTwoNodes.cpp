#include<iostream>
using namespace std;
struct BST{
	int data;
	BST * left,*right;
	BST(int val){
		data = val;
		left = right = NULL;
	}
};
BST * Insert(BST *root, int value)
{	if (!root)
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
BST * LCA (BST * root,int n1,int n2){
	if(!root) return NULL ;
	if(root->data ==n1 || root->data==n2) return root ;
	BST * left  = LCA(root->left,n1,n2)  ;
	BST * right = LCA(root->right,n1,n2) ;
	if(left && right) return root;
	if(left) return left;
	else return right;}
int search(BST * root , int val,int sum){
	if(!root) return -1;
	if(root->data ==val) return sum;
	int l = search(root->left,val,sum+1)           ;
	if(l!=-1) return l;
	return search(root->right , val, sum+1);}
int distBetNodes(BST * root,int n1,int n2){
	BST * head = LCA(root,n1,n2);
	int a = search(head,n1,0);
	int b = search(head,n2,0);
	return a+b;}
int main(){
	BST  *root = NULL;
	root = Insert(root, 5);
	Insert(root, 1);
	Insert(root, 2);
	Insert(root, 3);
	Insert(root, 4);
	Insert(root, 7);
	Insert(root, 8);
	Insert(root, 9);
	Insert(root, 10);
	cout<< distBetNodes(root,5,7);
	return 0;
	}