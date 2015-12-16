using namespace std;
#include <iostream>

//concatena i due array nel terzo intervallandoli, cioè.
//usa concatena di seba
//dimA=dimB
// A = {a0, a1, ... , an}}
// B = {b0, b1, ... , bn}}
// C = {a0, b0, a1, b1, ..., an, bn}}

const int SIZE = 100;

void stampaArray(int a[], int dim);
void leggiArray(int a[], int& dim);
void mescolaArray(int a[],int b[], int c[], int dim);

int main()
{
  int a[SIZE];
  int b[SIZE];
  int c[2*SIZE];
  int n;
  leggiArray(a,n);
  leggiArray(b,n);
  mescolaArray(a,b,c,n);
  stampaArray(c,n*2);
  return 0;
}

void leggiArray(int a[], int& dim){
  cout << "Dimensione: ";
  cin >> dim;
  for(int i=0; i<dim;i++){
    cout << i << ": ";
    cin >> a[i];
  }
}

void stampaArray(int a[], int dim){
  for(int i = 0; i < dim; i++){
    cout << a[i] << " ";
  }
  cout << endl;
}

void mescolaArray(int a[], int b[], int c[], int dim) 
{
  for (int i=0;i<(dim*2);i++){
    if(i%2==0){
      c[i] = a[i/2];
    } else {
      c[i] = b[(i-1)/2];
    }
  }
}

//ESERCIZIO : ARRAYs DI DIM DIVERSE
//devo fermarmi quando finisco l'array più corto

