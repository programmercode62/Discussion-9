//
// Created by William Tsui on 11/28/23.
//

#ifndef DOWNLOADS_BINARYTREE_H
#define DOWNLOADS_BINARYTREE_H

class Nodes {
    int val;
    Node* left;
    Node* right;
    NodesClass() {
        val = 0;
        left = nullptr;
        right = nullptr;
    }

private:
    Node* root;
    void insert(Node* &aNodePtr, Node* &aNewNodePtr);
    void deleteNode(int aVal, Node* &aNodePtr);
    void makeDeletion(Node* &aNodePtr);

public:
    constructor BinarySearchTree();
    void insertNode(int aVal);
    bool searchNode(int aVal);
    void remove(int aVal);

};

#endif //DOWNLOADS_BINARYTREE_H


