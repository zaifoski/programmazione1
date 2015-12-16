using namespace std;
#include "queue_A31.h"
#include <iostream>
//struct queue {int head, tail;int dim;float *elem;};
static int next(int index, const queue &q){
  return (index + 1) % q.dim;
}
void init(queue &q, int maxdim){
  q.head=q.tail=0;
  q.dim=maxdim;
  q.elem =new float[q.dim];
}
void deinit(queue &q){
  delete[] q.elem;
}
static bool is_full(const queue &q){
  return next(q.tail,q) == q.head;
}
static bool is_empty(const queue &q){
  return q.tail == q.head;
}
bool enqueue(queue &q, float n){
  bool b=true;
  if (is_full(q)) b=false;
  else q.tail = n;
  return b;
}
bool dequeue(queue &q){
  bool b=true;
  if (is_empty(q)) b=false;
  else q.head = next(q.head,q);
  return b;
}
bool first(queue &q, float &out){
  bool b=true;
  if (is_empty(q)) b=false;
  else out=q.elem[q.head];
  return b;
}
void print(const queue &q){
  for(int i=q.head;i!=q.tail;i=next(i,q))
    cout << q.elem[i] <<endl;
}
