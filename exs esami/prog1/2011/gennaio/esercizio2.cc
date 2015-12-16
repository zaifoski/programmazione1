#include <iostream>
using namespace std;

//Dichiarazioni
bool array_palindromo(int[],int);
bool array_palindromo1(int[],int,int);

//Main
int main(){
  int dim;
  int array[100];

  do{
    cout << "Inserisci il numero (0<..<100) di elementi da memorizzare nell'array: ";
    cin >> dim;
  } while(dim<=0);

  if (dim > 100){
    cout << "Puoi inserire solo 100 elementi!" << endl;
    dim = 100;
  }
  for(int i=0;i<dim;i++){
    cout << "inserire intero" << i+1 << " : ";
    cin >> array[i];
  }

  if(array_palindromo(array,dim))
    cout << "La sequenza inserita e' palindroma" << endl;
  else
    cout << "La sequenza inserita NON e' palindroma" << endl;

  return 0;
}

//Definizioni
bool array_palindromo(int a[],int d){
  return array_palindromo1(a,0,(d-1));
}
bool array_palindromo1(int a[],int min, int max){
  if (min >= max) return true;
  else {
    if (a[min] == a[max])
      array_palindromo1(a,min+1,max-1);
    else return false;
  }
}



