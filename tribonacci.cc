//T(0) = 0, T(1) = 1, T(2) = 1, T(3) = 2
//T(n) = T(n-1) + T(n-2) + T(n-3)
#include <iostream>
using namespace std;

int tribonacci(int n);

int main() {
  int n;
  cout << "n?" << endl;
  cin >> n;
  for(int i = 0; i < n; i++){
    cout << tribonacci(i) << " ";
  }
  cout << endl;
  return 0;
}

int tribonacci(int n) {
  int i=0;
  if(n>0){
    switch(n){
    case 1:
    case 2:
      i = 1; break;
    case 3:
      i = 2; break;
    default:
      i =  tribonacci (n-1) + tribonacci (n-2) + tribonacci (n-3);
    }
  }
  return i;
}


//per renderla più efficiente uso un puntatore
//cmq nn e' efficiente xk vuole n passaggi
//stampaArrayRic


//reimplementare inverti array i maniera ricorsiva
