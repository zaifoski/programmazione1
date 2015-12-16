using namespace std;
#include <iostream>

const int SIZE = 100;

void stampaArray(int a[], int dim);
void invertiArray(int a[], int dim);
void leggiArray(int a[], int& dim);
void scambia(int& a, int& b);

int main()
{
  int a[SIZE];
  int n;
  leggiArray(a,n);
  invertiArray(a,n);
  stampaArray(a,n);
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

void scambia(int& a, int&b){
  int c = a;
  a=b;
  b=c;
}

void invertiArray(int a[], int dim)
{
  for (int i = 0; i < dim/2; i++){
    scambia(a[i],a[dim-i-1]);
  }
}
