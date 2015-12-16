using namespace std;
#include <iostream>
#include <string.h> //per manipolare le stringhe

//Dichiara la funzione stampa
void stampa (char[],int);

int main() {

  //creo array di stringhe di dimensione 20
  char stringhe[2][50];

  for (int i=0; i<2; i++){
    char temp[50];
    cout << "Inserisci una stringa (max 49 char): ";
    cin >> temp;
    strcpy(stringhe[i],temp);
    cout << "\t" << "stringhe[" << i << "]: " << stringhe[i] << endl;
  }

}

//array = blocco di dati contigui preallocati
