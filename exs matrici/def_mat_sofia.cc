using namespace std;
#include <iostream>
const int DIM1=3;
const int DIM2=5;
void read_mat(int [][DIM2]);
void print_mat(int [][DIM2]);
int a[DIM1][DIM2];
int main(){
  read_mat(a);
  print_mat(a);
  return 0;
}
void read_mat(int a[][DIM2]){
  cout << "Cinque elementi per riga" << endl;
  for(int i=0;i<DIM1;i++){
    cout << "riga " << i << " :";
    for(int j=0;j<DIM2;j++){
      cin >> a[i][j];
    }
  }
}
void print_mat(int a[][DIM2]){
  for(int i=0;i<DIM1;i++){
    cout << "riga " << i << " :";
    for(int j=0;j<DIM2;j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
