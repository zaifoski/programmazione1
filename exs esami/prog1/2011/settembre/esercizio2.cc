using namespace std;
#include <iostream>

//Dichiarazioni
void rimuovi_carattere(char parola[], char d, int& n);

//main
int main(){
  //Variabili
  char stringa[100];
  char carattere;
  int occorrenze;

  //Interfaccia acquisizione
  cout << "Inserisci parola: ";
  cin >> stringa;
  cout << "Inserisci carattere: ";
  cin >> carattere;

  //Chiamo funzione
  rimuovi_carattere(stringa,carattere,occorrenze);

  //Interfaccia risultato
  cout << "Risultato: " << stringa << endl;
  cout << "tolte " << occorrenze << " occorrenze di " << carattere << endl;

  return 0;
}


//Definizioni
void rimuovi_carattere(char parola[], char d, int& n){
  n=0;
  int j=0;
  for(int i = 0; (i<100) || (parola[i]!='\0'); i++){
    if(parola[i]!=d) { parola[j]=parola[i]; j++;}
    else n++;
  }
}
