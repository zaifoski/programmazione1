#include <iostream>

using namespace std;

int main() {
  int i, j;
  int* pi = &i;
  int* pj = &j;
  for(*pi = 0; *pi < 5; (*pi)++) {
    for(*pj = 0; *pj < 5; (*pj)++) {
      if(*pj <= *pi) {
        cout << "*\t";
      }
    }
    cout << "\n";
  }
  return 0;
}
