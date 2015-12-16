using namespace std;
#include <iostream>
#include <cstdlib>
#include <fstream>
//prende in input un file e poi lo appende a un altro triplicando
int main(int argc, char * argv[]){
  fstream myin,myapp;
  int pre,post;
  if(argc!=3){
    cout << "Necessaria la forma: ./a.out <file1> <file2>\n";
    exit(0);
  }
  myin.open(argv[1],ios::in);
  if(myin.fail()){
    cerr << "Il file " << argv[1] << " non esiste\n";
    exit(0);
  }
  myapp.open(argv[2],ios::out|ios::app);
  while(!myin.fail()){
    myin >> pre;
    post=3*pre;
    myapp << " " << post;
  }  
  myin.close();
  myapp.close();
  return 0;
}
