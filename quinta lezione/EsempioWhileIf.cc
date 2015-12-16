#include <iostream>

using namespace std;

int main() {
  int i = 0;
  bool finito = false;
  while(!finito) {
    cout << "Iterazione numero: " << i << endl;
    i++;
    if(i >= 10) {
              finito = true;
    }
  }
  return 0;
}
