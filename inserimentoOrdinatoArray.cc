using namespace std;
#include <iostream>

const int SIZE = 100;

void stampaArray(char a[], int dim);
void inserisci(char a[], char el, int& dim);

int main()
{
  char a[SIZE];
  int n = 0;
  char c;
  do{
    stampaArray(a,n);
    cout << "Comando: ";
    cin >> c;
    switch(c){
    case 'i':
    case 'I':
      char el;
      cout << "Nuovo elemento: ";
      cin >> el;
      inserisci(a,el,n);
      break;
    case 'e':
    case 'E':
      break;
    default:
      break;
    }
  } while(c != 'e' && c != 'E');
  return 0;
}

void inserisci(char a[], char el, int& dim){
  int i;
  for(i=0; (a[i] < el) && (i < dim); i++);
  for(int j = dim; j>i; j--){
    a[j]=a[j-1];
  }
  a[i] = el;
  dim++;
}


void stampaArray(char a[], int dim){
  for(int i = 0; i < dim; i++){
    cout << a[i] << " ";
  }
  cout << endl;
}
