#include <iostream>
using namespace std;
#include "albero.h"
//struct Node { char val; Node *left; Node *right; };
//typedef Node * Tree;
// enum boolean {FALSE, TRUE};
void init(Tree &t){
  t=NULL;
}
boolean empty(const Tree &t){
  return (t==NULL) ? TRUE : FALSE;
}
boolean insert(Tree &t, char val){
}
boolean search(const Tree &t, char val){
}
void print(const Tree &t){
}
