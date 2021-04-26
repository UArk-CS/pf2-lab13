#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main() {

    BinaryTree tree;

    for (int i = 0; i < 10; i++) {

//        tree.Insert(rand() % 10);

        if (tree.Insert(rand() % 10)) {
            cout << "Value successfully added to tree." << endl;
        } else {
            cout << "Value not added to the tree." << endl;
        }

    }

    tree.Print();

    return 0;

}
