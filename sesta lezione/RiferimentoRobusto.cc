#include <iostream>

using namespace std;

int main() {
  int i = 2013;
  int* pi = &i;
  int& j = *pi;
  cout << "i = " << i << ", *pi = " << *pi << ", j = " << j << endl;
  int k = 30;
  pi = &k;
  cout << "i = " << i << ", *pi = " << *pi << ", j = " << j << ", k = " << k << endl;
  return 0;
}
