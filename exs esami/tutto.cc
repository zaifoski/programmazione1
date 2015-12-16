using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>
//4 righe da 3 elementi
void leggi_matrice(fstream& sin,fstream& sout){
  int d1=4;int d2=3;
  char ** mat = new char * [d1];
  for(int i=0;i<d1;i++){
    mat[i] = new char [d2];
    for(int j=0;j<d2;j++){
      sin >> mat[i][j];
    }
  }
  for(int i=0;i<d1;i++){
    for(int j=0;j<d2;j++){
      sout << mat[i][j] << " ";
    }
    sout << endl;
  }

}
int main(int argc, char * argv[]){
  fstream sin,sout;
  if(argc!=3){
    cerr << "err" << endl;
    exit(EXIT_FAILURE);
  }
  sin.open(argv[1],ios::in);
  if(sin.fail()){
    cerr << "err" << endl;
    exit(EXIT_FAILURE);
  }
  sout.open(argv[2],ios::out|ios::app);
  leggi_matrice(sin,sout);
  sin.close();
  sout.close();
  return 0;
}
