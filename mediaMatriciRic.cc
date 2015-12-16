#include <iostream>

using namespace std;

const int SIZE = 3;//si consiglia di usare il maiuscolo per le costanti

double media(int a [SIZE][SIZE]);//devo dargli almeno una dimensione(la seconda), che deve essere costante
void stampaMatrice(int a[SIZE][SIZE]);//e' una procedura percio' ritorna void
long somma(int a[SIZE][SIZE], int dim, int pos);

int main() {
  int a[SIZE][SIZE] = {{1,1,2},{3,4,6},{1,2,3}};
  stampaMatrice(a);
  cout << "La media e' " << media(a) << endl;
//per passare matrice o array basta il nome
//qualunque tipo elementare sia media, lo stampa
}

double media(int a [SIZE][SIZE]){
  return (double)somma(a,SIZE,0) / (double)(SIZE*SIZE);
}

long somma(int a[SIZE][SIZE], int dim, int pos) {
  long result = 0l; //0l sta per 0long
  if(dim == 1){
    result = a[dim-1][dim-1];
  }
  else if(dim > 1) {
    for(int i = pos + 1; i < SIZE; i++){
      result += a[i][pos];
    }
    for(int j = pos + 1; j < SIZE; j++){
      result += a[pos][j];
    }
    result += a[dim-1][dim-1] + somma(a, dim-1, pos+1);
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

//Provare a implementare stampamatrice in maniera ricorsiva, attenzione all'ordine

//per le matrici e' meglio non usare l'aritmetica dei puntatori
