using namespace std;
#include <iostream>
//ALLOC DINAMICA
const int DIM = 81;

char *estrai(char stringa[]);
char *estrai1(char stringa[],int i,int n,char dest[]);

int main(){
  char stringa[DIM];
  char *estratta;
  char risposta='n';
  do{
    cout << "Inserisci la stringa da controllare: ";
    cin >> stringa;

    estratta = estrai(stringa);

    cout << "La stringa estratta e': ";
    cout << estratta;
    cout << endl;
    cout << "Vuoi inserire un'altra stringa? [s/n] ";
    cin >> risposta;
  } while (risposta != 'n');
  return 0;
}

char *estrai(char stringa[]){
  char dest[DIM]="";
  return estrai1(stringa,0,0,dest);//Non posso ritornar dest perchè è definita internamente
}
char *estrai1(char stringa[],int i,int n,char dest[]){
  if ((stringa[i]=='\0') || (i>=(DIM-1))){
    dest[n]='\0';
    return dest;
  }
  else {
    if ((stringa[i]>='A') && (stringa[i]<='Z')) {
      dest[n]=stringa[i];
      estrai1(stringa,i++,n++,dest);
    }
    else {
      estrai1(stringa,i++,n,dest);
    }
  }
}
