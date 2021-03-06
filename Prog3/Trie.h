/*
  Create a class Trie that contains:
  1) A Node* member variable that holds a pointer to the start node.
  2) A member function: void put(string key, int value) for adding a
  new key and value to
  the Trie.
  3) A member function: int get(string key) for retrieving a value
  from the Trie using the
  key.
  4) A constructor
  5) A destructor
*/
#pragma once
#include "Link.h"
#include "Node.h"
#include <string>
using namespace std;
extern string var;

class Trie{
public:
  //constructor
  Trie();

  //destructor
  ~Trie();

  //member functions
  void put(string key, int value);
  int get(string key);

  //member vars
  Node *startNode;
  static void doit(int **x);
};
