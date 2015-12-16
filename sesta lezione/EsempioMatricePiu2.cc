#include <iostream>

using namespace std;

int main() {
  int i, j;
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      if((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0)) {
        cout << "+\t";
      } else {
        cout << "o\t";
      }
    }
    cout << "\n";
  }
  return 0;
}
