/* C++ program to construct a binary tree from
   the given string */
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
struct Node {
    int data;
    Node *left, *right;
};
Node* newNode(int data)
{
    Node* node = (Node*)malloc(sizeof(Node));
//To be able to reference or use local variables outside of the function you have to 
// allocate memory in the heap, which is what you are doing here. You are allocating memory 
// in the heap so that you can reuse the same variable in other functions as well.
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}
void preOrder(Node* node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}
int findIndex(string str, int si, int en)
{
    if (si > en)
        return -1;
    stack<char> s;
    for (int i = si; i <= en; i++) {
        if (str[i] == '(')
            s.push(str[i]);
        else if (str[i] == ')') {
            if (s.top() == '(') {
                s.pop();
                if (s.empty())
                    return i;
            }
        }
    }
    return -1;
}
Node* treeFromString(string str, int si, int en)
{
    if (si > en)
        return NULL;
    Node* root = newNode(str[si] - '0');
    int index = -1;
 
    if (si + 1 <= en && str[si + 1] == '(')
        index = findIndex(str, si + 1, en);
    if (index != -1) {
        root->left = treeFromString(str, si + 2, index - 1);
        root->right= treeFromString(str, index + 2, en - 1);
    }
    return root;
}
int main()
{
    string str = "4(2(3)(1))(6(5))";
    Node* root = treeFromString(str, 0, str.length() - 1);
    preOrder(root);
}
