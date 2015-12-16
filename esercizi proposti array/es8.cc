using namespace std;
#include <iostream>
//Scrivere una procedura che prenda in ingresso due vettori ORDINATI v1 e v2 di dimensione d1 e d2 e restituisce un vettore ORDINATO v di dimensione d1+d2 che contiene tutti gli elementi che stanno in v1 e v2.
//Esempio: v1=[2 4 6 8], d1 = 4, v2=[1 2 5 7 8], d2 = 5
//===>     v3=[1 2 2 4 5 6 7 8 8]
const int size = 100;
double a[size]={2,4,6,8}; int d1=4;
double b[size]={1,2,5,7,8};  int d2=5;
double c[size];double t[size];

void print_array(double[],int);
void unisci(double[],double[],int,int);

int main(){
  unisci(a,b,d1,d2);
  return 0;
}

void unisci(double a[],double b[],int d1,int d2){
  int d = d1 + d2;
  int k,i=0,j=0;
  for(k=0;k<d;k++){
    if ((i>=d1) && (j<d2)) {c[k]=b[j];j++;} 
    else if ((j>=d2) && (i<d1)) {c[k]=b[i];i++;} 
    else if (a[i]>b[j]) {c[k]=b[j];j++;}
    else {c[k]=a[i];i++;}
  }
  print_array(c,d);
}

void print_array(double a[],int n){
  for (int i = 0; i < n; i++)
    cout << "\ta[" << i << "] = " << a[i] << endl;
}

