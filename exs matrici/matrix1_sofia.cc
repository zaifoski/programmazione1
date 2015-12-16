using namespace std;
#include <iostream>
const int Dim1 = 2;
const int Dim2 = 3;
const int Dim3 = 4;
float A[Dim1][Dim2] = {{1, 2, 3}, {4, 5, 6}};  
float B[Dim2][Dim3]={{1,2,3,4},{5, 6, 7, 8},{9, 10, 11,12}};    
float C[Dim1][Dim3];
void print_mat(float a[Dim1][Dim3]);
float min_matrix (const float a[Dim1][Dim2]);
void product (const float a[Dim1][Dim2],
	       const float b[Dim2][Dim3],
	       float c[Dim1][Dim3]);
int main(){
  cout << "Il valore minimo di A e' " << min_matrix(A) << endl;
  product(A,B,C);
  cout << "Il risultato del prodotto e'  " << endl;
  print_mat(C);
return 0;
}

float min_matrix (const float a[Dim1][Dim2]){
  float min=a[0][0];
  for(int i=0;i<Dim1;i++){
    for(int j=0;j<Dim2;j++){
      if (a[i][j] < min) min = a[i][j];
    }
    cout << endl;
  }
  return min;
}
void product (const float a[Dim1][Dim2],const float b[Dim2][Dim3], float c[Dim1][Dim3]){
  for(int i=0;i<Dim1;i++){
    for(int j=0;j<Dim2;j++){
      c[i][j]=0;
      for(int k=0;k<Dim3;k++){
          c[i][k] += a[i][j]*b[j][k];;
        }
    }
  }

}
void print_mat(float a[Dim1][Dim3]){
  for(int i=0;i<Dim1;i++){
    cout << "riga " << i << " :";
    for(int j=0;j<Dim3;j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
