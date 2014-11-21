//============================================================================
// Name        : hw5.cpp
// Author      : Pierre
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ChainedHashTable.h"
#include "DataStructureTester.h"
#include "LinearHashTable.h"
#include "BinarySearchTree.h"
#include "RedBlackTree.h"

using namespace std;
using namespace ods;

int main() {
  DataStructureTester<BinarySearchTree<BSTNode1<int>,int> > test;
  DataStructureTester<ChainedHashTable<int> > test2;
  DataStructureTester<LinearHashTable<int> > test3;
  DataStructureTester<RedBlackTree<RedBlackNode1<int>,int> > test4;

  int store1 = 0, store2 = 0, store3 = 0, store4 = 0, store5 = 0, store6 = 0;
  for(int i = 0; i<20; i++){
    store1 += test.DoSequentialAdd(1,50000,1);
    store2 += test.DoRandomAdd(50000);
    store3 += test.DoSequentialFind(1,50000,1);
    store4 += test.DoRandomFind(50000);
    store5 += test.DoSequentialRemove(1,50000,1);
    store6 += test.DoRandomRemove(50000);
  }

  cout<<"Average Time Binary Search Tree Sequential Add: "<<store1/20<<" Seconds"<<endl;
  cout<<"Average Time Binary Search Tree Random Add: "<<store2/20<<" Seconds"<<endl;
  cout<<"Average Time Binary Search Tree Sequential Find: "<<store3/20<<" Seconds"<<endl;
  cout<<"Average Time Binary Search Tree Random Find: "<<store4/20<<" Seconds"<<endl;
  cout<<"Average Time Binary Search Tree Sequential Remove: "<<store5/20<<" Seconds"<<endl;
  cout<<"Average Time Binary Search Tree Random Remove: "<<store6/20<<" Seconds"<<endl<<endl;

  store1 = 0;
  store2 = 0;
  store3 = 0;
  store4 = 0;
  store5 = 0;
  store6 = 0;

  for(int i = 0; i<20; i++){
    store1 += test2.DoSequentialAdd(1,50000,1);
    store2 += test2.DoRandomAdd(50000);
    store3 += test2.DoSequentialFind(1,50000,1);
    store4 += test2.DoRandomFind(50000);
    store5 += test2.DoSequentialRemove(1,50000,1);
    store6 += test2.DoRandomRemove(50000);
  }

  cout<<"Average Time Chained Hash Table Sequential Add: "<<store1/20<<" Seconds"<<endl;
  cout<<"Average Time Chained Hash Table Random Add: "<<store2/20<<" Seconds"<<endl;
  cout<<"Average Time Chained Hash Table Sequential Find: "<<store3/20<<" Seconds"<<endl;
  cout<<"Average Time Chained Hash Table Random Find: "<<store4/20<<" Seconds"<<endl;
  cout<<"Average Time Chained Hash Table Sequential Remove: "<<store5/20<<" Seconds"<<endl;
  cout<<"Average Time Chained Hash Table Random Remove: "<<store6/20<<" Seconds"<<endl<<endl;

  store1 = 0;
  store2 = 0;
  store3 = 0;
  store4 = 0;
  store5 = 0;
  store6 = 0;

  for(int i = 0; i<20; i++){
    store1 += test3.DoSequentialAdd(1,50000,1);
    store2 += test3.DoRandomAdd(50000);
    store3 += test3.DoSequentialFind(1,50000,1);
    store4 += test3.DoRandomFind(50000);
    store5 += test3.DoSequentialRemove(1,50000,1);
    store6 += test3.DoRandomRemove(50000);
  }

  cout<<"Average Time Linear Hash Table Sequential Add: "<<store1/20<<" Seconds"<<endl;
  cout<<"Average Time Linear Hash Table Random Add: "<<store2/20<<" Seconds"<<endl;
  cout<<"Average Time Linear Hash Table Sequential Find: "<<store3/20<<" Seconds"<<endl;
  cout<<"Average Time Linear Hash Table Random Find: "<<store4/20<<" Seconds"<<endl;
  cout<<"Average Time Linear Hash Table Sequential Remove: "<<store5/20<<" Seconds"<<endl;
  cout<<"Average Time Linear Hash Table Random Remove: "<<store6/20<<" Seconds"<<endl<<endl;

  store1 = 0;
  store2 = 0;
  store3 = 0;
  store4 = 0;
  store5 = 0;
  store6 = 0;

  for(int i = 0; i<20; i++){
    store1 += test4.DoSequentialAdd(1,50000,1);
    store2 += test4.DoRandomAdd(50000);
    store3 += test4.DoSequentialFind(1,50000,1);
    store4 += test4.DoRandomFind(50000);
    store5 += test4.DoSequentialRemove(1,50000,1);
    store6 += test4.DoRandomRemove(50000);
  }

  cout<<"Average Time Red Black Tree Sequential Add: "<<store1/20<<" Seconds"<<endl;
  cout<<"Average Time Red Black Tree Random Add: "<<store2/20<<" Seconds"<<endl;
  cout<<"Average Time Red Black Tree Sequential Find: "<<store3/20<<" Seconds"<<endl;
  cout<<"Average Time Red Black Tree Random Find: "<<store4/20<<" Seconds"<<endl;
  cout<<"Average Time Red Black Tree Sequential Remove: "<<store5/20<<" Seconds"<<endl;
  cout<<"Average Time Red Black Tree Random Remove: "<<store6/20<<" Seconds"<<endl<<endl;

  cout<<"END"<<endl;
  return 0;
}
