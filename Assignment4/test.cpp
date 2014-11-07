//============================================================================
// Name        : test.cpp
// Author      : Stephen Weisenberger
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "BinaryTree.h"
#include "ArrayDeque.h"
#include "BinarySearchTree.h"
#include "utils.h"
#include "DLList.h"
using namespace std;
using namespace ods;

void testPartOne() {
  BinarySearchTree<BSTNode1<int>, int> st;

  st.add(4);
  st.add(2);
  st.add(3);
  st.add(1);
  st.add(6);
  st.add(5);
  st.add(7);

  cout << "Height Tests..." << endl;
  cout << "Recursive height: " << st.height() << endl;
  cout << "Non-recursive height: " << st.height2() << endl;
  st.add(0);
  st.add(8);
  cout << "Recursive height: " << st.height() << endl;
  cout << "Non-recursive height: " << st.height2() << endl;
}

void testPartTwo() {
  BinarySearchTree<BSTNode1<int>, int> st;

  st.add(5);
  st.add(2);
  st.add(10);

  cout << "Balance tests..." << endl;
  cout << "Balanced? (Should be 1) " << st.isBalanced() << endl;

  st.add(15);

  cout << "Balanced? (Should be 1) " << st.isBalanced() << endl;

  st.add(7);

  cout << "Balanced? (Should be 0) " << st.isBalanced() << endl;

  st.add(0);

  cout << "Balanced? (Should be 1) " << st.isBalanced() << endl;
}

void testPartThree() {
  BinarySearchTree<BSTNode1<int>, int> st;

  st.add(4);
  st.add(2);
  st.add(3);
  st.add(1);
  st.add(6);
  st.add(5);
  st.add(7);

  st.preOrderNumber();
  st.postOrderNumber();
  st.inOrderNumber();

  st.printAll();
}

void testPartFour() {
  BinarySearchTree<BSTNode1<int>, int> st;

  st.add(8);
  st.add(4);
  st.add(2);
  st.add(1);
  st.add(3);
  st.add(6);
  st.add(5);
  st.add(7);
  st.add(12);
  st.add(10);
  st.add(9);
  st.add(11);
  st.add(14);
  st.add(13);
  st.add(15);
  st.add(16);

  DLList<int> *list = st.getLE(8);
  for (int i = 0; i < list->size(); i++) {
    cout << list->get(i) << " ";
  }
  cout << endl << "Done";
  delete list;
}

int main() {
  testPartOne();
  cout << endl;
  testPartTwo();
  cout << endl;
  testPartThree();
  cout << endl;
  testPartFour();
  return 0;
}
