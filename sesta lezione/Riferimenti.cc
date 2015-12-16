#include <iostream>

using namespace std;

int main() {
  int i = 2013;
  int& j = i;
  cout << "i = " << i << ", j = " << j << endl;
  j++;
  cout << "i = " << i << ", j = " << j << endl;
  int* pi = &i;
  cout << "i = " << i << ", j = " << j << ", *pi = " << *pi << endl;
  (*pi)--;
  cout << "i = " << i << ", j = " << j << ", *pi = " << *pi << endl;
  int k = i;
  pi = &k;
  k++;
  cout << "i = " << i << ", j = " << j << ", *pi = " << *pi << ", k = " << k << endl;
  return 0;
}
