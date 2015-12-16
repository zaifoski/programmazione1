#include <iostream>
#include <cstdlib>//per usare la exit, che mi permette di ritornare il messaggio di errore
#include <cstring>//per le str
using namespace std;
//Descrivere una mappatura di caratteri
//3 posizioni

const int LUNGHEZZA = 256; //256 e' il massimo di un buffer 
void codifica(char s[], const char t[]);
char caesar(char c);

int main(int argc, char* argv[]){ //argv e' un array di stringhe, usiamo array statici
  char sorgente[LUNGHEZZA], destinazione[LUNGHEZZA];
  if(argc != 2){
    cerr << "Introdurre un parametro" << endl ;//e' come cout ma posso ridirigere l'errore verso un altro stream, per esempio un file di log!
    exit(EXIT_FAILURE);//chiude il programma
  }
  strncpy(sorgente, argv[1], LUNGHEZZA-1); //serve LUNGHEZZA-1 per lasciare il duecentocinquataseiesimo carattere per il \0
  codifica(destinazione, sorgente);
  cout << "stringa codificata: " << destinazione << endl;
  return 0;
}

void codifica(char s[], const char t[]){
  int i;
  for(i = 0; i < strlen(t); i++){
    s[i] = caesar(t[i]);
  }
  s[i] = '\0'; //altrimenti se ho una stringa piu' lunga non copia il \0
}

char caesar(char c){
  char r = c;
  if(isalpha(c)){ //isalpha e' se c e' un carattere
    if(islower(c)){ //se e' minuscolo
      r = (c-'a'+3)%26 + 'a';
    } else {
      r = (c-'A'+3)%26 + 'A';
    }
  }
  return r;
}
//echo $?
//(((((posso invocarlo da un file bat)))))
