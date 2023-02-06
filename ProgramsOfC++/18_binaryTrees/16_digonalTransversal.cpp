#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};
void printDia(Node *node, int diagonal,unordered_map<int, vector<int> > &map)
{
    if (node == nullptr)
    {
        return;
    }
    map[diagonal].push_back(node->data);
    printDia(node->right, diagonal, map);
    printDia(node->left, diagonal + 1, map);
}
void printDiagonal(Node *root)
{
    unordered_map<int, vector<int> > map;
    printDia(root, 0, map);
    for (int i = 0; i < map.size(); i++)
    {
        for (int j : map[i])//always print second value
        {
            cout << j << ' ';
        }
        cout << endl;
    }
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);

    printDiagonal(root);

    return 0;
}