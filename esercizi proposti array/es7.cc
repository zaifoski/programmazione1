using namespace std;
#include <iostream>
//Scrivere una procedura che prenda un vettore v e la sua dimensione d, un  elemento x, ed elimina tutte le occorrenze di x (dimnuemdo la dimensione d del vettore)
//Esempio: v = [4 1 3 6 8 4 2]     d = 7    x = 4
//===>     v = [1 3 6 8 2]         d = 5
const int size = 100;
double a[size],b[size];

void read_array(int);
void print_array(double[],int);
void togli(double[],double[],double,int);

int main(){
  int d;
  cout << "Enter array size (less than 100)\n";
  cin >> d;
  read_array(d);
  double x;
  cout << "Elemento da togliere" << endl;
  cin >> x;
  togli(a,b,x,d);
  return 0;
}

void togli(double a[],double b[],double x,int d){
  for (int i=0,j=0; j < d; i++,j++) {
    if (x!=a[i]){
      b[j]=a[i];
    }
    else{
      j--;d--;
    }
  }
  print_array(b,d);
}
void read_array(int n){
  cout << "Enter " << n << " real numbers:\n";
  for (int i = 0; i < n; i++) {
    cout << i << ": ";  
    cin >> a[i];
  }
  print_array(a,n);
}

void print_array(double a[],int n){
  for (int i = 0; i < n; i++)
    cout << "\ta[" << i << "] = " << a[i] << endl;
}

