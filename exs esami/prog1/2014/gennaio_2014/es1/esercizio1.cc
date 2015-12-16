#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
double ** leggiMatrice(fstream& scin,int r, int c);
void printM(double ** m,int r,int c);
int main(int argc, char * argv[]){
  fstream scin;
  int r,c;
  if(argc!=2){
    cerr << "Formato ./a.out nomefile" << endl;
    exit(0);
  }
  scin.open(argv[1],ios::in);
  if(scin.fail()){
    cerr << argv[1] << " non esiste";
    exit(0);
  }
  scin >> r >> c;
  double ** matrice = leggiMatrice(scin,r,c);
  printM(matrice,r,c);
  scin.close();
  return 0;
}
double ** leggiMatrice(fstream& scin,int r, int c){
  double d;
  double ** m = new double* [r];
  for(int i=0;i<r;i++){
    m[i]= new double[c];
    for(int j=0;j<c;j++){//
      scin >> m[i][j];//
    }//
  }//
    /*}
  int j = 0;
  while(!scin.fail()){
    m[j/c][j%c]=d;
    j++;
    scin >> d;
    }*/
  return m;
}
void printM(double ** m,int r,int c){
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){//
      cout << m[i][j] << "  ";//
    }//
    cout << endl;
  }//
}
