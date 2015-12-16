using namespace std;
#include <iostream> //cin, cout
#include <limits.h> //INT_MAX, INT_MIN
#include <stdlib.h> //atoi

int main() {

  const int MAX_LENGTH = 50;
  char nomeMese[3][MAX_LENGTH]={"Gen","Feb","Mar"};//faccio solo con tre mesi per semplicità
  int giorni[] = {31,28,31};
  char nomeGiorno[7][MAX_LENGTH]={"lu","ma","me","gi","ve","sa","do"};

  int capodanno;
  cout << "Che giorno era a capidanno? (0=lun, 1=mart,...,6=dom)" << endl;
  cin >> capodanno;

  int i=capodanno;//i=indice giorno, inizio da capodanno
  for(int m=0; m<3; m++){
    cout << nomeMese[m] << endl;
    for(int g=0; g<giorni[m]; g++){
      cout << nomeGiorno[i%7]<<": "<< g+1 << endl;
      i++;
    }
  }

}
