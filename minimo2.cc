#include <iostream>
#include "minimolib.h" //percorso, qui basta nome
using namespace std;

//calcolare il minimo tra due numeri

int main (){
  int n,m;
  cout << "Primo num: ";
  cin >> n;
  cout << "Sec num: ";
  cin >> m;
  cout << "Il min e' " << minimo(n,m) << endl;
}

//g++ minimolib.o minimo2.cc
