#include <iostream>

using namespace std;

int main() {
  int i = 0;
  while(i < 5) {
    cout << '|';
    int j;
    for(j = 1; j < 10; j++) {
      cout << j;
    }
    i++;
  }
  cout << endl;
  return 0;
}
