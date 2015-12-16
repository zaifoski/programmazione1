using namespace std;
#include <iostream>
#include <iomanip>

void rec_insertsort(int [], int);
void readarray(int A[], int & dim);
void printarray(int A[], int min, int max);

const int MAXDIM = 100;

int main () {
  // Esempi
  int myarray[MAXDIM] = {
  41,3,9,1,5,17,6,20,37,2,8,23,10,0,11,19
//   1,3,4,5,2,6,7,8,9,10,11,12,13,14,15,16
//  10,3,9,1,5,17,6,41,20,37,2,8,23,0,11,19
//  11,12,13,14,15,16,1,2,3,4,5,6,7,8,9,10
//   1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16
    };

  int dim = 16;
  printarray(myarray, 0, dim-1);
  cout << endl;
  rec_insertsort(myarray, dim);
  printarray(myarray, 0, dim-1);

  readarray(myarray, dim);
  printarray(myarray, 0, dim-1);
  cout << endl;
  rec_insertsort(myarray, dim);
  printarray(myarray, 0, dim-1);
}

// Legge l'array A[0...dim-1], dim <= MAXDIM
void readarray(int A[], int & dim) {
  cout << "dimensione array? ";
  cin >> dim;
  for (int i=0; i<dim; i++) {
    cout << "A[" << i << "]: ";
    cin >> A[i];
  }
} 

// Stampa il subarray A[min...max], 0 <= min <= max <= MAXDIM
void printarray(int A[], int min, int max) {
  int i;
  cout << "[";
  for (i = min; i <= max; i++) {
    cout << setw(3) << A[i] << " ";
  }
  cout << "]\n";
}

// Inverte due elementi
void swap (int & a, int & b) {
  int c = a;
  a = b;
  b = c;
}

// Assumendo che il sub-array A[0..m-1] sia gia' ordinato, 
// ordina ricorsivamente A[0..m] inserendo A[m] al posto giusto
// e spostando in avanti gli elementi successivi.
void rec_insert(int A [], int m) {
  if ((m > 0) && A[m] < A[m-1]) {
    swap(A[m], A[m-1]);
    rec_insert(A, m-1);
  }
}

// ordina ricorsivamente il sub-array A[0..m-1]
void rec_insertsort(int A[], int m) {
  if (m > 1) {   
    rec_insertsort(A, m-1);
    rec_insert(A, m-1);
  }
}
