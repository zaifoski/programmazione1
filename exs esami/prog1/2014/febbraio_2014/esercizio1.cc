using namespace std;
#include <iostream>
#include <cstdlib>
#include <fstream>
const int MAXL = 80;
void controlla(fstream& sin,fstream& sout);
bool spazio(char c);
void controllaP(fstream& sout,char word[],int max);
bool controllaS(char word[],int max);
int main(int argc, char * argv[]){
  if(argc!=3){
    cerr << "Formato ./a.out <nomeinput> <nomeoutput>" << endl;
    exit(0);
  }
  fstream sin,sout;
  sin.open(argv[1],ios::in);
  if(sin.fail()){
    cerr << "Input inesistente" << endl;
    exit(0);
  }
  sout.open(argv[2],ios::out|ios::app);
  controlla(sin,sout);
  sin.close();
  sout.close();
  return 0;
}
void controlla(fstream& sin,fstream& sout){
  char line[MAXL];
  while(sin.getline(line,MAXL)){
    char word[MAXL]="";
    int j=0;
    for(int i=0;i<MAXL;i++){
      if(!(spazio(line[i]))){
         word[j]=line[i];
         j++;
      }
      else {
        controllaP(sout,word,j-1);
        j=0;
      }
    }
  }
}
bool spazio(char c){
  if((c==' ') || (c=='\n') || (c=='\t')) return true;
  else return false;
}
void controllaP(fstream& sout,char word[],int max){
  for(int i=0;(i<max) && (word[i]!='@');i++){
    if ((word[i]=='@') && (i>0) && (i<(max-1)) && (word[0]!='.') && (word[max-1]!='.') && (word[i-1]!='.') && (word[i+1]!='.')) {
      char subword1[MAXL]="";
      char subword2[MAXL]="";
      for(int j=0;j<i-1;j++) subword1[j]=word[i];
      for(int k=i+1;k<max;k++) subword2[k]=word[i];
      if ((controllaS(subword1,i))&&(controllaS(subword2,max-i))) {
        for(int l=0;l<max;l++){ sout << word[l];}
        sout << endl;
      }
    }
  }
}
bool controllaS(char word[],int max){
  for(int i=0;i<max;i++){
    if (!(((word[i]>='a') && (word[i]<='z')) ||
	  ((word[i]>='A') && (word[i]<='Z')) ||
	  ((word[i]>='0') && (word[i]<='9')) ||
	  (word[i]=='.') ||
	  (word[i]=='_'))) return false;
  }
  return true;
}
