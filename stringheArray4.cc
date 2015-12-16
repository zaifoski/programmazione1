using namespace std;
#include <iostream>
#include <string.h> //per manipolare le stringhe

//Dichiara la funzione stampaTutte
void stampaTutte (char[][50]);

int main() {

  //creo array di stringhe di dimensione 20
  char stringhe[2][50];

  for (int i=0; i<2; i++){
    char temp[50];
    cout << "Inserisci una stringa (max 49 char): ";
    cin >> temp;
    strcpy(stringhe[i],temp);
  }

  stampaTutte(stringhe);
  return 0;

}

void stampaTutte (char array[][50]){
  cout << "Hai inserito:" << endl;
  for (int i=0; i<2; i++){
    cout << "\t" << array[i] << endl;
  }
}

//array = blocco di dati contigui preallocati
