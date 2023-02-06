#include<iostream>
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
struct Info{
int size;
int max;
int min;
int ans;
bool bst;
};

Info largestbst(BST* root){
	if(!root) return{0,INT_MIN,INT_MAX,0,true};
	if(!root->left and !root->right) return{1,root->data,root->data,1,true};
	Info left = largestbst(root->left);
	Info right = largestbst(root->right);
	Info curr ;
	curr.size=(1+left.size+right.size);
	if(left.bst and right.bst and root->data>left.max and root->data<right.min){
		curr.min=min(left.min,min(right.min,root->data));
		curr.max=max(left.max,max(right.max,root->data));
		curr.ans=curr.size;
		curr.bst=true;
		return curr;
	}
	curr.ans = max(left.ans,right.ans);
	curr.bst = false;
	return curr;
}
int main(){
	BST  *root = NULL;
	root = Insert(root, 5);
	Insert(root, 1);
	Insert(root, 3);
	Insert(root, 4);
	Insert(root, 2);
	Insert(root, 7);

	cout<<"largest bst in BT " <<largestbst(root).ans;
	
	return 0;
}