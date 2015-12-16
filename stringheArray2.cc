using namespace std;
#include <iostream>
#include <string.h> //per manipolare le stringhe

//Dichiara la funzione stampa
void stampa (char[],int);

int main() {
  char stringa[]="ciao"; //array di 4+1 (terminatore implicito) char

  //stringa="abcd";//non possiamo assegnare nuovamente valore a puntatore

  strcpy(stringa,"abcd");//prende in input la sorgente e la destinazione, fa un ciclo per ogni elemento; bisogna assicurarsi che la destinazione sia sufficientemente grande
  cout << stringa << endl;

}
