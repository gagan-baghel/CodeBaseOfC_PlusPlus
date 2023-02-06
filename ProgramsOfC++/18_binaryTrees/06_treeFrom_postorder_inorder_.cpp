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

int search(int inorder[],int start,int end,int curr){
	for (int i = start; i <=end; i++)
	{
		if(inorder[i]==curr){
			return i;
		}
	}
	return -1;
}
void Poistorder(Node * node){
	if(node==NULL){
		return;
	}
	Poistorder(node->left);
	Poistorder(node->right);
	cout<< node->data<<"  ";
}


Node * builtTree(int postorder[],int inorder[],int start,int end){
	static int idx=end;
	if(start>end){
		return NULL;
	}
	int curr = postorder[idx];
	idx--;
	Node * node = new Node(curr);
	if(start==end){
		return node;
	}
	int pos = search(inorder,start,end,curr);
	node->right=builtTree(postorder,inorder,pos+1,end);
	node->left=builtTree(postorder,inorder,start,pos-1);

	return node;
}
int main(){
	int postorder[]={4,2,5,3,1};
	int inorder[]={4,2,1,5,3};

	Poistorder(builtTree(postorder,inorder,0,4));
	return 0;

}