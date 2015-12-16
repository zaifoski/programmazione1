using namespace std;
#include <iostream>
const int d=6;

int *shift(int v[],int min,int j);
int *aux(int v[],int j);
void print_vec(int v[]);

int *shift(int v[],int min,int j){
  if(j>d) {return v;}
  else {
    v[min]=v[j];
    v[j]=0;
    shift(v,(min+1),(j+1));
  }  
}
int *aux(int v[],int j){
  return shift(v,0,j);
}
void print_vec(int v[]){
  for(int i=0;i<d;i++){
    cout << v[i] << " ";
  }
  cout << endl;
}
int main(){
  int v[d]={2,17,44,202,5,13};
  int j=2;
  print_vec(v);
  aux(v,j);
  print_vec(v);
  return 0;
}
