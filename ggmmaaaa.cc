#include <iostream>

using namespace std;

// 30102013 -> (30, 10, 2013)
//usare modulo

void estrai (int,int&,int&,int&);

int main() {
  int data;
  cout << "Introdurre il numero ggmmaaaa: ";
  cin >> data;
  int giorno,mese,anno;
  estrai(data, giorno, mese, anno);
  cout << "giorno " << giorno << ". mese " << mese << ". anno " << anno << endl;
}

void estrai (int d,int& g,int& m,int& a){
  a = d % 10000;
  d = (d-a)/10000;
  m = (d / 100);
  d=(d-m)/100;
  g=d;
}

//creare libreria
//trovare se anno è bisestile: divisibile per 4, non è multimplo di 100, oppure se è moltipli di 100 lo è anche di 400. gli anni dei secoli no, tranne uno ogni 4
