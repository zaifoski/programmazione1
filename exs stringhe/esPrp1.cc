using namespace std;
#include <iostream>
//Scrivere un programma che prenda in input un testo e riporti in output il numero di occorrenze di ogni carattere.

int conta(char i,int n){
  char c='\0';
  while (cin.get(c)) { if (c==i) n++; }
  return n;
}

int main(){
  for(char i='A';i<='z';i++){
    int n=0;
    cout << i << ": " << conta(i,n) << "; ";
  }
  cout << endl;
  return 0;
}
