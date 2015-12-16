#include <iostream>
#include <cmath>

using namespace std;

int main() {
  char c;
  float f;
  do {
    cout << "Introdurre un comando ('e' per uscire, 'k' o 'h'): ";
    cin >> c;
    switch(c) {
      case 'k':
      case 'K':
        cout << "Introdurre i kW: ";
        cin >> f;
        cout << "Corrispondono a " << f / 0.746 << " CV" << endl;
        break;
      case 'h':
      case 'H':
        cout << "Introdurre i CV: ";
        cin >> f;
        cout << "Corrispondono a " << f * 0.746 << " kW" << endl;
        break;
      case 'e':
      case 'E':
        break;
      default:
        cout << "Codice errato." << endl;
    }
  } while(!(c == 'e' || c == 'E'));
  return 0;
}
