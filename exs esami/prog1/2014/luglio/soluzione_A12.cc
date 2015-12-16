#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const int MAX_PAROLE = 10000;
const int LUNGHEZZA_MAX_PAROLA = 100;

void inserisciSenzaDoppioni(char parola[LUNGHEZZA_MAX_PAROLA + 1],
                            char array[][LUNGHEZZA_MAX_PAROLA + 1],
                            int& lunghezzaArray);

int main(int argc,char* argv[]) {

  fstream primo, secondo, output;
  char tmp[LUNGHEZZA_MAX_PAROLA + 1];
  int paroleSecondoFile = 0;
  int paroleDifferenza = 0;
  char parole[MAX_PAROLE][LUNGHEZZA_MAX_PAROLA + 1];
  char differenza[MAX_PAROLE][LUNGHEZZA_MAX_PAROLA + 1];
  
  if (argc!=4) {
    cout << "Utilizzo: ./a.out <primo_file> <secondo_file> <file_di_output>\n";
    return -1;
  }

  primo.open(argv[1],ios::in);
  secondo.open(argv[2],ios::in);
  output.open(argv[3],ios::out);
  
  // Lettura secondo file
  secondo >> tmp;
  while(!secondo.eof()) {
    // Inserimento della parola letta in fondo al primo array
    strcpy(parole[paroleSecondoFile], tmp);
    // Aggiorna l'indice
    paroleSecondoFile++;
    // Lettura prossima parola
    secondo >> tmp;
  }

  // Lettura del primo file e costruzione dell'insieme delle
  // parole proprie solo del primo file
  primo >> tmp;
  while(!primo.eof()) {
    // Ricerca della parola letta tra quelle del secondo file
    int i = 0;
    bool trovata = false;
    while(i < paroleSecondoFile && !trovata) {
      if(strcmp(tmp, parole[i]) == 0) {
        trovata = true;
      }
      i++;
    }
    if(!trovata) {
      // Allora devo aggiungere una nuova parola
      // all'array contenente le parole proprie solo del primo file
      strcpy(differenza[paroleDifferenza], tmp);
      // Aggiorna l'indice
      paroleDifferenza++;
    }
    // Lettura prossima parola
    primo >> tmp;
  }
  
  // Scrittura sul file di output
  for(int i = 0; i < paroleDifferenza; i++) {
    output << differenza[i] << endl;
  }

  primo.close();
  secondo.close();
  output.close();

  return (0);
}
