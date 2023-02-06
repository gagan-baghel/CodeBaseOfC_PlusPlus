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
void preorder(BST *root)
{
	if (!root)
		return;
	preorder(root->left);
	cout << root->data << "  ";
	preorder(root->right);
}
void inOrderIterative(BST *root,vector<int >&v)
{
	stack<BST *> st;
	BST *curr = root;
	while(!st.empty()||curr!=NULL){
		if(curr!=NULL){
			st.push(curr);
			curr=curr->left;
		}
		else{
			curr = st.top();
			st.pop();
			v.push_back(curr->data);
			// cout<<curr->data<<"  ";
			curr = curr->right;
		}
	}
}
BST *makeBst(int start, int end,vector<int>&v3)
{
	if(start>end) return NULL;
	int mid=(start+end)/2;
	BST * node = new BST(v3[mid]);
	node->left=makeBst(start,mid-1,v3);
	node->right=makeBst(mid+1,end,v3);
	return node;
}
BST *makebsTree(BST *root1, BST *root2)
{
	vector<int> v1, v2, v3;
	inOrderIterative(root1, v1);
	inOrderIterative(root2, v2);
	for (int i = 0; i < v1.size(); i++)	v3.push_back(v1[i]);
	for (int i = 0; i < v2.size(); i++)	v3.push_back(v2[i]);
	sort(v3.begin(), v3.end());
	int n = v3.size();
	BST *ans = makeBst(0,n-1, v3);
	return ans;
}
int main()
{	BST * root1 = NULL;
	root1=Insert(root1,1);
	Insert(root1,2);
	Insert(root1,3);
	Insert(root1,4);
	BST * root2 = NULL;
	root2 = Insert(root2,5);
	Insert(root2,6);
	Insert(root2,7);
	vector<int>v;
	// inOrderIterative(root1,v);
	BST *res = makebsTree(root1, root2);
	preorder(res); // inorder always return in sorted order
	return 0;}