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
        ROOT = nullptr; //intializing ROOT to null
    }

    void search(int element, Node *&parent, Node *&currentNode)
    {
        //this function serches the currentNode of the
        //specified Node as well as the current Node of its parent
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode != nullptr) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
                currentNode = currentNode->rightchild;

        }
    }

    void insert(){
        int x;
        cout << "Masukkan nilai: ";
        cin >> x;

        // step 1: Allocate memory for the new node 
        Node  *newNode = new Node();

        // step 2: Assign value to the data field of new node
        newNode->info = x;

        //step 3: make the left and right child of the new node point to NULL
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        //step 4:
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);

        //step 5:
        if (parent == nullptr){
            ROOT = newNode;

            return;
        }
        







    }
}