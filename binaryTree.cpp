#include <iostream>
using namespace std;

class Node{
    public:
    int info;
    Node *leftchild;
    Node *rightchild;

    //constructo for the node class
    Node(){
        leftchild = nullptr;
        rightchild = nullptr;
    }
};

class BinaryTree{
    public:
    Node *ROOT;

    BinaryTree(){
        ROOT = nullptr;
    }

    void search(int element, Node *&parent, Node *&currentNode)
    {
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode != nullptr) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
        }
    }
}