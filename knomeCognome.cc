using namespace std;

#include <iostream>
#include <string.h>
#include <stdlib.h>

const int MAX_LENGTH = 50;

int main() {

  int numPersone;
  char buffer[MAX_LENGH];

  cout << "Quante persone? (nome e cognome) " << endl;
  cin >> numPersone;

  //nome e cognome
  char **listaPersone = new char * [numPersone];
  for (int i=0; i < numPersone; i++){
    cout << "scrivi il nome della " << i+1 << "^ persona ";
    cin.getline(buffer, MAX_LENGth);
  }

  char **listaPersone = new char * [numPersone]


  return 0;


}
