#include <iostream>
using namespace std;

class Node
{
    public:
        Node* left;
        Node* right;
        int value;
};
Node* newNode(int idata)
{
    Node* toInsert;
    toInsert->left = NULL;
    toInsert->right = NULL;
    toInsert->value = idata;

    return toInsert;
}
int main()
{
    std::cout << "Hello World!\n";
    Node* root = newNode(9);
    root->left = newNode(8);
    (*root).right = newNode(3);

    cout << root->left->left->value;
}
