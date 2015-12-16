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
  char c;
  char parola1[MAXC]="";
  char* file1[MAXP]; 
  int j = 0;
  int k = 0;
  while (!(sin1.fail())){
    sin1.get(c);
    if((c==' ') || (c=='\n')){
      file1[k]=parola1;
      k++;
      j=0;
    }
    else{
      parola1[j]=c;
      j++;
    }
  }

  //Lettura file2
  char parola2[MAXC]="";
  char* file2[MAXP];
  int j2 = 0;
  int k2 = 0;
  while (!(sin2.fail())){
    sin2.get(c);
    if((c==' ') || (c=='\n')){
      file2[k2]=parola2;
      k2++;
      j2=0;
    }
    else{
      parola2[j2]=c;
      j2++;
    }
  }

  //Confronto
  for(int ind = 0; ind < k; ind++){
    //for(int ind2=0;ind2<k2;ind2++){
      //if (strcmp(file1[k],file2[k2])){
         //sout << file1[ind] << " ";
      //}
    //}
  }

  //Chiusura stream
  sin1.close();
  sin2.close();
  sout.close();
  return 0;
}

