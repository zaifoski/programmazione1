using namespace std;

#include <iostream>
#include <cstring>


int main(int argc, char ** argv) {

  //calcolo la lunghezza dei parametri in argv

  int totallen = 0;

  for(int i=1; i< argc; i++){ //parto da uno per escludere ./a.out
    totallen += strlen(argv[i]);
  }

  //dichiaro aray dinamico contenitore
  char unione = new char[totallen + 1];

  //concateno i parametri

  for(int i=1; i< argc; i++){ //parto da uno per escludere ./a.out
    strcat(unione,argv[i]);
  }

  //stampo risultato finale
  cout << "La concatenazione e' " << unione << endl;

  //libero memoria

  delete [] unione;


  return 0;


}
