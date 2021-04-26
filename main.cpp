#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main() {

    BinaryTree tree;

    for (int i = 0; i < 1024; i++) {

        if (tree.Insert(rand() % 1024)) {
            cout << "Value successfully added to tree." << endl;
        } else {
            cout << "Value not added to the tree." << endl;
        }

    }

    tree.Print();

    BinaryTree tree2;

    for (int i = 0; i < 1024; i++) {

        tree2.Insert(i);

    }

    tree2.Print();

//    BinaryTree tree3;
//
//    for (int i = 9; i >= 0; i--) {
//
//        tree3.Insert(i);
//
//    }
//
//    tree3.Print();
//    cout << tree3.Count() << endl;
//    cout << tree3.Height() << endl;

    cout << "Tree Height: " << tree.Height() << endl;
    cout << "Tree Count: " << tree.Count() << endl;
    cout << "Tree 2 Height: " << tree2.Height() << endl;
    cout << "Tree 2 Count: " << tree2.Count() << endl;

    return 0;

}
