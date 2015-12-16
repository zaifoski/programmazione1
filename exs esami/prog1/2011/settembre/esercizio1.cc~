using namespace std;
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>

//Dichiarazioni
char maiuscola (char c);

//main
int main(int argc, char * argv[]){
  //Apro gli stream e eseguo i controlli
  if (argc != 3) {
    cerr << "formato ./a.out input output " << endl;
    exit(EXIT_FAILURE);
  }
  fstream sin, sout;
  sin.open(argv[1],ios::in);
  if (sin.fail()) {
    cerr << "file in input inesistente " << endl;
    exit(EXIT_FAILURE);
  }
  sout.open(argv[2],ios::out|ios::app);

  //Correggo prima parola
  char c;
  sin >> c;
  sout << maiuscola(c);

  //Correggo il resto
  int check1 = 0;
  int check2 = 0;
  while(sin.get(c)){
    if (check2==1){
      sout << maiuscola(c);
      check1=0;
      check2=0;
    }
    else sout << c;
    if (check1 == 1)
      check2 = 1;
    if ((c=='?') || (c=='.') || (c=='!'))
        check1 = 1;
  }

  //Chiudo gli stream
  sin.close();
  sout.close();
  return 0;
}


//Definizioni
char maiuscola (char c) {
  if(!((c>='A') && (c<='Z')))
    c += ('A'-'a');
  return c;
}
