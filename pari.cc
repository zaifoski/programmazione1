#include <iostream>
using namespace std;

//vero pari

bool pari(int numero);

int main (){
  int n;
  cout << "Num: ";
  cin >> n;

  //bool p = pari(n);
  // if(p) {
  //n e pari hanno uno spazio di memoria ciascuna, perciò scrivo invece
  if(pari(n)) { //questo
    cout << n << " pari" << endl;
  } else {
    cout << n << " dispari" << endl;
  }
  return 0;
}

bool pari(int numero){
  return (numero % 2 == 0);//questo
  //if(numero % 2 == 0){ da qui in giù lo sostituisco con sopra
  //  return true;
  //}
  //return false;
}
//COMMENTI:
//ld errore non del compilatore ma del linker
//non trova il codice di questa funzione
//il compilatore non lo segnala perché potrebbe essere da un'altra parte
