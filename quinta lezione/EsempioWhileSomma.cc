#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int i = 0;
  int d = 0;
  long sum = 0;
  while(i < 5 && d >= 0) {
    cout << "Dammi un numero: ";
    cin >> d;
    if(d >= 0) {
      sum += d;
    }
    i++;
  }
  cout << "La somma di " << i << " numeri e' " << sum << endl;
  return 0;
}
