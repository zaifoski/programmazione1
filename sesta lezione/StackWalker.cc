#include <iostream>

using namespace std;

int main() {
  int i = 4;
  int j = 2;
  int* pi = &i;
  cout << *pi << endl;
  *pi++;
  cout << *pi << endl;
  return 0;
}
