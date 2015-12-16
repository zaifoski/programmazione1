using namespace std;

#include <iostream>     /* cout */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

// definizione delle funzioni
int tira_dado();
void gioca(int &,int &);

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
void gioca(int& n,int& s){
  s=0;
  int st=0;
  for(n=1;(n<=5) && (st<12);n++){
    int t1 = tira_dado();
    int t2 = tira_dado();
    st = t1+t2;
    cout << "Lancio " << n << ": dado1=" << t1 << ",dado2=" << t2 << ", somma=" << st << endl;
    if (st > s) s=st;
  }
  n--;
}
int tira_dado() {
  return 1 + rand() % 6;
}
