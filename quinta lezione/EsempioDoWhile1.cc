#include <iostream>
#include <cmath>

using namespace std;

int main() {
  char c;
  do {
    cout << "Introdurre un comando ('e' per uscire): ";
    cin >> c;
  } while(c != 'e');
  return 0;
}
