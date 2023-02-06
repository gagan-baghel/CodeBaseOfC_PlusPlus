#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class BST
{
public:
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


// void inorderCheck(BST *root1, BST *root2, bool &check)
// {	if (!root1 ||!root2) return ;
// 	inorderCheck(root1->left, root2->left,check) ;
// 	if (root1->data != root2->data) check = false ;
// 	inorderCheck(root1->right, root2->right,check) ;
// }


bool checkbst(BST * root1,BST*root2){
	if(!root1 and !root2) return true;
	if(!root1 or !root2) return false;
	else{
		bool cond1=root1->data==root2->data;
		bool cond2=checkbst(root1->left,root2->left);
		bool cond3=checkbst(root1->right,root2->right);
		if(cond1 and cond2 and cond3)return true;
		else return false;
	}
}

int main()
{
	BST *root1 = NULL;
	root1 = Insert(root1, 1);
	Insert(root1, 3);
	Insert(root1, 4);
	// Insert(root1, 7);
	//Insert(root1,4);
	BST *root2 = NULL;
	root2 = Insert(root2, 1);
	Insert(root2, 3);
	Insert(root2, 4);
	// bool check = true;
	// // inorderCheck(root1, root2, check);
	// // if (check)
	// // 	cout << " a BST  ";
	// // else
	// // 	cout << "not a BST  ";

	if(checkbst(root1,root2)) cout<<"identical";
	else cout<<"not identical";
	return 0;


}