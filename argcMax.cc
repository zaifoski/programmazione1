using namespace std;
#include <iostream> //cin, cout
#include <limits.h> //INT_MAX, INT_MIN
#include <stdlib.h> //atoi

int main(int argc,char* argv[]) { //puntatore a lista di puntatori che sono stringhe, arrays di chars
//argc è il numero di inputs, argv li contiene 
  int max = INT_MIN;
  for (int i=0; i<argc; i++){
    int arg = atoi(argv[i]);//atoi li converte in numeri
    if(arg > max){
      max = arg;
    }
  }
  cout << max << endl;

}
