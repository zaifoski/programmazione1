#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int i = 0;
  double d = 0.0;
  while(i < 5 && d >= 0.0) {
    cout << "Dammi un numero: ";
    cin >> d;
    if(d < 0) {
      cout << "Non accetto numeri negativi." << endl;
    } else {
      cout << "La radice quadrata e' " << sqrt(d) << endl;
    }
    i++;
  }
  return 0;
}
