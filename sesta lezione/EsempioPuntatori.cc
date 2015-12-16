#include <iostream>

using namespace std;

int main() {
  int i = 2013;
  int* pi = &i;
  cout << "Valore di i: " << i << endl;
  cout << "Valore di i: " << *pi << endl;
  cout << "Indirizzo di i: " << (long)&i << endl;
  cout << "Indirizzo di i: " << (long)pi << endl;
  cout << "Indirizzo di pi: " << (long)&pi << endl;
  cout << "Indirizzo di i: " << (long)&*pi << endl;
  cout << "Indirizzo di i: " << (long)*&pi << endl;
  cout << "Indirizzo di pi: " << (long)&(*&pi) << endl;
  return 0;
}
