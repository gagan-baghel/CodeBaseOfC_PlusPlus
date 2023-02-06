#include <iostream>
using namespace std;

struct BST
{
	int data;
	BST *left, *right;
	public:
	BST(int value)
	{
		data = value;
		left = right = NULL;
	}
};

BST * inOrderSucc(BST * root){
	BST * curr = root;
	while(curr and curr->left != NULL){
		curr = curr ->left;
	}
	return curr;
}
BST * deleteInBST(BST * root,int val){  //return the updated tree root
	if(root->data>val){
		root->left=deleteInBST(root->left,val);
	}
	else if(root->data<val){
		root->right=deleteInBST(root->right,val);
	}

	else{
		if(!root->left){
			BST * node = root->right;
			free (root);
			return node;
		}
		else if(!root->right)  {
			BST * node = root->left;
			free (root);
			return node;
		}
		BST * temp = inOrderSucc(root->right);
		root->data = temp->data;
		root->right = deleteInBST(root->right,temp->data);		
	} 
	return root;
}

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
void Inorder(BST *root)
{
	if (!root)
	{
		return;
	}
	Inorder(root->left);
	cout << root->data <<" ";
	Inorder(root->right);
}
int main()
{
	BST  *root = NULL;
	root = Insert(root, 100);
	Insert(root, 50);
	Insert(root, 102);
	Insert(root, 25);
	Insert(root, 75);
	Insert(root, 15);
	Insert(root, 26);
	Insert(root, 71);
	Insert(root, 77);
	Inorder(root);	
	cout<<endl;
	deleteInBST(root,100);
	Inorder(root);	
	return 0;
}






















// void delet(BST * &root , int val){      //  just for Node
// 	if(root->data==val){
// 		return free(root);
// 	}
// 	if(root->data<val){
// 		delet(root->right,val);
// 	}
// 	else {
// 		delet(root->left,val);
// 	}
// }