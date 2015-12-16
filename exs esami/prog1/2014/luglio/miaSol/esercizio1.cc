using namespace std;
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

const int MAXP = 10000;
const int MAXC = 100;

int main(int argc, char * argv[]){
  //Apertura e controllo stream
  if(argc!=4){
    cerr << "Formato ./a.out primo secondo output" << endl;
    exit(EXIT_FAILURE);
  }
  fstream sin1, sin2, sout;
  sin1.open(argv[1],ios::in);
  sin2.open(argv[2],ios::in);
  sout.open(argv[3],ios::out|ios::app);
  if((sin1.fail()) || (sin2.fail())){
    cerr << "File input mancante" << endl;
    exit(EXIT_FAILURE);
  }

  //Lettura file1
  char** file1 = new char* [MAXP];
  int k = 0;
  while (!(sin1.fail())){
    char* parola1 = new char[MAXC];
    sin1 >> parola1;
    file1[k]=parola1;
    k++;
    //  delete[] parola1;
  }

  //Lettura file2
  char** file2 = new char* [MAXP];
  int k2 = 0;
  while (!(sin2.fail())){
    char* parola2 = new char[MAXC];
    sin2 >> parola2;
    file2[k2]=parola2;
    k2++;
    //  delete[] parola1;
  }

  //Confronto
  for(int ind = 0; ind < (k-1); ind++){
    for(int ind2=0; ind2<(k2-1); ind2++){
      if ((strcmp(file1[ind],file2[ind2]))==0){
         sout << file1[ind] << endl;
      }
    }
  }
  /*for(int ind = 0; ind < (k-1); ind++){
    cout << ind << "\t" << file1[ind] << endl;
  }
  for(int ind = 0; ind < (k2-1); ind++){
    cout << ind << "\t" << file2[ind] << endl;
  }*/

  //Chiusura stream
  sin1.close();
  sin2.close();
  sout.close();
  return 0;
}

