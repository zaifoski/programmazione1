using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>

//x < 50: x*1.08
//50 <= x < 100: x *1.05
//x = 100: x * 1.02

int main (int argc, char * argv[]) 
{
  fstream myin,myout;
  int n;
  
  if (argc != 3) {
    cerr << "Sintassi: ./a.out <in> <out>.\n";
    exit(EXIT_FAILURE);
  }
  
  myin.open(argv[1],ios::in);
  if (myin.fail()) {
     cerr << "Il file " << argv[1] << " non esiste\n";
     exit(EXIT_FAILURE);
  }

  myout.open(argv[2], ios::out);
  
  myin >> n;
  while (!myin.eof()) {
    if(n<50){
      myout << n * 1.08;
    } else if(n>=50 && n < 100) {
      myout << n * 1.05;
    } else {
      myout << n * 1.02;
    }
    myout << " ";
    myin >> n;
  }
  myin.close();
  myout.close();
  return 0;
}
//devo creare i file in e out
