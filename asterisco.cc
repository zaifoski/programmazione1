#include <iostream>
#include "asteriscolib.h"

using namespace std;

//void stampaAsterisco();
//void stampaTabulazione();

int main(){
  int i,j;
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      stampaAsterisco();
      stampaTabulazione();
    }
    cout << "\n";
  }
}

//void stampaAsterisco(){
//  cout << "*";
//}

//void stampaTabulazione(){
//  cout << "\t";
//}
