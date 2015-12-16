using namespace std;
#include <iostream>
//scrivere una procedura che prende in ingresso un vettore ORDINATO v, la sua dimensione d, e un nuovo elemento x, e inserisca x nel vettore in modo ordinato. Il vettore passato deve avere almeno d+1 elementi.
//Esempio:
//		v = [1 3 4 6 8]		d = 5		x = 7
//	===>    v = [1 3 4 6 7 8]	d = 6

const int size = 100;
double a[size];

void read_array(int);
void print_array(double[],int);
void inserisci(double[],double[],double,int);

int main(){
  int d;
  cout << "Enter array size (less than 100)\n";
  cin >> d;
  read_array(d);
  double x;
  cout << "Elemento da inserire" << endl;
  cin >> x;
  double b[d+1];
  inserisci(a,b,x,d);
  return 0;
}

void inserisci(double a[],double b[],double x,int d){
  int f=0;
  for (int i = 0; i < (d+1); i++) {
    if(f==0){
      if (x>a[i]) b[i]=a[i];
      else{
        b[i]=x;
        f=1;
      }
    }
    else b[i]=a[i-1];
  }
  print_array(b,(d+1));
}
void read_array(int n){
  cout << "Enter " << n << " ORDERED real numbers:\n";
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

