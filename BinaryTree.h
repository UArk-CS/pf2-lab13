//
// Created by Ben Worthington on 4/24/21.
//

#ifndef PF2_LAB13_BINARYTREE_H
#define PF2_LAB13_BINARYTREE_H

#include <iostream>
#include <fstream>
using namespace std;

// Data node definition
class Node
{
public:
    int Value;
    Node *Left;
    Node *Right;
};

class BinaryTree {
public:
    // Constructor functions
    BinaryTree();
    ~BinaryTree();

    // General binary tree operations
    bool Search(int Value);
    bool Insert(int Value);
    bool Delete(int Value);
    void Print();
    int Count();

private:
    // Helper functions
    bool SearchHelper(int Value, Node * Tree);
    bool InsertHelper(int Value, Node * &Tree);
    bool DeleteNode(Node * &Tree);
    bool DeleteHelper(int Value, Node * &Tree);
    void PrintHelper(Node * Tree);
    int CountHelper(Node *Tree);

    // Tree pointer
    Node *Root;
};


#endif //PF2_LAB13_BINARYTREE_H
