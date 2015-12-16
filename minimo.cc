#include <iostream>
using namespace std;

//calcolare il minimo tra due numeri

int minimo(int,int);

int main (){
  int n,m;
  cout << "Primo num: ";
  cin >> n;
  cout << "Sec num: ";
  cin >> m;
  int min = minimo(n,m);
  cout << "Il min e' " << min << endl;
  // al posto delle due righe sopra scrivo
  //cout << "Il min e' " << minimo(n,m) << endl;
}

int minimo(int a, int b){
  // le 5 righe sotto le posso scrivere come return (a<b?a:b);
  if(a < b){
    return a;
  } else {
    return b;
  }
}
