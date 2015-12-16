#include <iostream>

using namespace std;

int main() {
  int i, j;
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      if(i % 2 == 0) {
        if(j % 2 == 0) {
          cout << "+\t";
        } else {
          cout << "o\t";
        }
      } else {
        if(j % 2 == 0) {
          cout << "o\t";
        } else {
          cout << "+\t";
        }
      }
    }
    cout << "\n";
  }
  return 0;
}
