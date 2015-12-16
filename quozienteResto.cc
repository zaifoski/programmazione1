//passaggio per riferimento

//da cooreggere dividendo -><- divisore

//le funzioni ritornano un solo valore, quando ho bisogno di due output, come qui quoziente e resto uso passaggio per riferimento

#include <iostream>

using namespace std;


void dividi (int dividendo, int divisore, int& quoziente, int& resto);

int main() {
  int n,m;
  cout << "Introdurre il dividendo: ";
  cin >> n;
  cout << "Introdurre il divisore: ";
  cin >> m;
  int q,r;
  dividi(n,m,q,r);
  cout << n << " diviso " << m << " uguale " << q << " resto " << r << endl;
}

void dividi (int dividendo, int divisore, int& quoziente, int& resto){
  quoziente = dividendo/divisore;
  resto = dividendo & divisore;
}
