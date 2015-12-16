#include <iostream>

using namespace std;

int main() {
  int i = 1;
  bool finito = false;
  while(!finito) {
    cout << "Il quadrato di " << i << " e' " << i * i << endl;
    i++;
    if(i > 10) {
              finito = true;
    }
  }
  return 0;
}
