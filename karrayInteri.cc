using namespace std;

#include <iostream>

int main() {

  int *lista;
  int num;

  cout << "Quanti elemeni lista?";
  cin >> num;

  lista = new int[num];

  cout << "Assegna un valore ad ogni elemento ";

  for(int i = 0; i < num; i++){

    cout << "lista[" << i << "]: ";
    cin >> lista[i];
    cout << "Questo elemento si trova alla locazione " << &lista[i]  << endl;

  }

  delete [] lista;
  cout << "indirizzo lista[0]: " << &lista[0] << "valore lista[0]: " << lista[0] << endl;


  return 0;


}
