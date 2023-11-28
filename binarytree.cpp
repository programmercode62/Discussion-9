//
// Created by William Tsui on 11/28/23.
//
#include <iostream>
#include <binarytree.h>

using namespace std;

void remove (int aVal);

void displayInOrder(Node* aNodePtr);

if (aNodePtr) {
    displayInOrder(aNodePtr->left);
    std::cout<< aNodePtr->val << "";

}

void printTree() {
    displayInOrder(root);
    std::cout<<std::endl;

}

void BinaryTree::insertNode(int aVal) {
    Node* newNode = new Node(aVal);
    insert(root, newNode);

}
void BinaryTree::remove(int aVal) {
    deleteNode();
}

bool BinaryTree::searchNode(int aVal) {
    Node* currentNode = root;

    while(currentNode) {
        if (currentNode -> val == aVal) {
            return true;
        }
        else if (aVal < currentNode -> val) {
            currentNode = currentNode -> left;

        } else {
            currentNode = currentNode -> right;
        }
    }
    return false;
}

BinaryTree::Node::Node(int aVal, BinaryTree::Node* aLeft, BinaryTree::Node* aRight) {
    val = aVal;
    left = aLeft;
    right = aRight;

}

