#include <iostream>

using namespace std;

const int SIZE = 3;//si consiglia di usare il maiuscolo per le costanti

double media(int a [SIZE][SIZE]);//devo dargli almeno una dimensione(la seconda), che deve essere costante
long somma(int a [SIZE][SIZE]);
void stampaMatrice(int a[SIZE][SIZE]);//e' una procedura percio' ritorna void

int main() {
  int a[SIZE][SIZE] = {{1,1,2},{3,4,6},{1,2,3}};
  stampaMatrice(a);
  cout << "La media e' " << media(a) << endl;
//per passare matrice o array basta il nome
//qualunque tipo elementare sia media, lo stampa
}

double media(int a [SIZE][SIZE]){
  return (double)somma(a) / (double)(SIZE*SIZE);
}

long somma(int a[SIZE][SIZE]) {
  long result = 0l; //0l sta per 0long
  for(int i = 0; i<SIZE;i++){
    for(int j = 0; j<SIZE;j++){
      result += a[i][j];
    }
  }
  return result;
}

void stampaMatrice(int a[SIZE][SIZE]) {
  for(int i = 0; i<SIZE;i++){
    for(int j = 0; j<SIZE;j++){
      cout << a[i][j] << '\t';
    }
    cout << endl;
  }
}
