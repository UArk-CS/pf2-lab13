#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main() {

    BinaryTree tree;

    for (int i = 0; i < 10; i++) {

        if (tree.Insert(rand() % 10)) {
            cout << "Value successfully added to tree." << endl;
        } else {
            cout << "Value not added to the tree." << endl;
        }

    }

    tree.Print();

    BinaryTree tree2;

    for (int i = 0; i < 10; i++) {

        tree2.Insert(i);

    }

    tree2.Print();

    BinaryTree tree3;

    for (int i = 9; i >= 0; i--) {

        tree3.Insert(i);

    }

    tree3.Print();
    cout << tree3.Count();

    return 0;

}
