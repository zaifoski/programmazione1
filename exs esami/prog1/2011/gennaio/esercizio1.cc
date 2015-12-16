#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

//Dichiarazione funzioni
void leggiECalcolaMedia(char[],float&);

//main
int main(){
  char nomeFile[] = "input1.txt";
  float result = 0;
  leggiECalcolaMedia(nomeFile, result);
  cout << "La media calcolata in " << nomeFile << " e': " << result << endl;
  return 0;
}

//Definizione funzioni
void leggiECalcolaMedia(char nomeFile[],float& result){

  //Apro gli stream
  fstream sin,sapp;
  sin.open(nomeFile,ios::in);
  sapp.open("output1.txt",ios::out|ios::app);
  if(sin.fail()){
    cout<<"Errore con " << nomeFile << endl;
    return;
  }

  //Salvo i valori passati nell'array n
  char c;
  int j=0;
  int k=0;
  int n[200];
  for(int i=0;(!(sin.fail()));i++){
    sin.get(c);
    sapp.put(c);
    if (c=='*') j++;
    else {n[k]=j;j=0;k++;}
  }

  //Calcolo la media
  float sum=0;
  for(int i=0;i<(k-1);i++){
    sum += n[i];
  }
  result = float(sum/(k-1));
  result = int(result) + 1;

  //Appendo la media nell'output
  for(int i=1;i<=result;i++)
    sapp << "*";

  //Chiudo gli stream
  sin.close();
  sapp.close();
}
