using namespace std;
#include <iostream>

//Dichiara la funzione stampa
void stampa (char[],int);

int main() {
  char stringa[]="ciao"; //array di 4+1 (terminatore implicito) char
  char stringaDue[10]="ciao"; //10 elementi, solo i primi 5 sono occupati
  cout << stringa << endl; //cout riconosce che è un array

  stampa(stringa,5);
  stampa(stringaDue,5);
}

//Visito i singoli elementi di un array
void stampa(char array[], int num){
  for (int i = 0; i < num; i++){
    cout << "\t" << "array[" << i << "]: " << array[i] << endl;
  }
}
