using namespace std;

#include <iostream>     /* cout */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

// definizione delle funzioni
int tira_dado();
void gioca(int &, int &);

int main () {
  // init random seed
  srand (time(NULL));
  
  int num_lanci, somma_max;
  gioca(num_lanci, somma_max);
  cout << "Il programma termina al lancio numero " 
       << num_lanci << " con un punteggio massimo di "
       << somma_max << endl;
 
  return(0);
}

int tira_dado() {
  return 1 + rand() % 6;
}

void gioca(int &i, int &max) {
  int somma=0;
  max=0;
  for (i = 0; i<5 && somma<12; i++) {
    int dado1 = tira_dado();
    int dado2 = tira_dado(); 
    somma = dado1 + dado2;
    cout << "Lancio " << i+1 << ": dado1="
         << dado1 << ", dado2=" << dado2
         << ", somma=" << somma << endl;
    if (somma > max) {
       max = somma;
    }
  }
}



