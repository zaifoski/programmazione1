using namespace std;
#include <iostream>

const int DIM = 81;

// Dichiarare qui sotto la funzione estrai


int main () {
   char stringa[DIM];
   char  * estratta;
   char risposta='n';

   do {
     cout << "Inserisci la stringa da controllare: ";
     cin >> stringa;
   
     estratta = estrai(stringa);

     cout << "La stringa estratta e': ";
     cout << estratta;
     cout << endl;
     cout << "Vuoi inserire un'altra stringa? [s/n] ";
     cin >> risposta;
   } while (risposta != 'n');  

   return 0;
}


// Definire qui sotto la funzione estrai

