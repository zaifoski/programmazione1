using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>

int main (int argc, char * argv[]) 
{
  fstream myin,myout;
  char c;
  
  if (argc<2) {
    cerr << "introdurre almeno un argomento.\n";
    exit(EXIT_FAILURE);
  }
  
  myin.open(argv[1],ios::in);
  if (myin.fail()) {
     cerr << "Il file " << argv[1] << " non esiste\n";
     exit(EXIT_FAILURE);
  }
  
  while (myin.get(c)) {
    cout.put(c);
    //cout << c //stessa cosa di riga sopra
  }
  myin.close();
  return 0;
}
