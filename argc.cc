using namespace std;
#include <iostream>

int main(int argc,char* argv[]) { //puntatore a lista di puntatori che sono stringhe, arrays di chars

  for (int i=0; i<argc; i++){
    cout << i << ": " << argv[i] << endl;

  }

}
