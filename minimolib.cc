#include "minimolib.h" //percorso, qui basta nome


int minimo(int a, int b){
  // le 5 righe sotto le posso scrivere come return (a<b?a:b);
  if(a < b){
    return a;
  } else {
    return b;
  }
}
