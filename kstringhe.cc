using namespace std;

#include <iostream>
#include <cstring>


int main() {

  //dichiaro due array statici
  char stringa1 [200] = "ciao ";
  char stringa2 [200] = "mamma";

  //terzo array dinamico

  char * stringa3 = new char[strlen(stringa1)+strlen(stringa1)+1];
  strcpy(stringa3,stringa1);
  strcat(stringa3,stringa2);

  cout << stringa3 << endl;

  delete [] stringa3;


  return 0;


}
