#include <iostream>
#include <string>
using namespace std;

void calcolocognome(string& cognome, string& cognome2);
void calcolonome(string& nome, string& nome2);

void calcolocognome(string& cognome, string& cognome2) {
  int o = 0;
  int a = 0;
  string c, v;
  for (int i = 0; i < cognome.length(); i++) {
    if (cognome[i] == 'A' || cognome[i] == 'E' || cognome[i] == 'I' ||
        cognome[i] == 'O' || cognome[i] == 'U') {
      a++;
      v += cognome[i];
    } else {
      o++;
      c += cognome[i];
    }
  }

  if (o >= 3) {
    cognome2 = c.substr(0, 3);
  } else if (o == 2) {
    cognome2 = c.substr(0, 2) + v.substr(0, 1);
  } else if (o == 1 && a >= 2) {
    cognome2 = c.substr(0, 1) + v.substr(0, 2);
  } else if (o == 1 && a == 1) {
    cognome2 = c.substr(0, 1) + v + 'X';
  } else if (o == 0 && a == 2) {
    cognome2 = v.substr(0, 2) + 'X';
  }
  cout << cognome2 << endl;
}

void calcolonome(string& nome, string& nome2) {
  int e = 0;
  int r = 0;
  string b, y;
  for (int j = 0; j < nome.length(); j++) {
    if (nome[j] == 'A' || nome[j] == 'E' || nome[j] == 'I' || nome[j] == 'O' ||
        nome[j] == 'U') {
      e++;
      b += nome[j];
    } else {
      r++;
      y += nome[j];
    }
  }
  if (r >= 4) {
    nome2 = y.substr(0, 1) + y.substr(2, 2);
  } else if (r == 3) {
    nome2 = y;
  } else if (r == 2) {
    nome2 = y + b.substr(0, 1);
  } else if (r == 1 && e >= 2) {
    nome2 = y + b.substr(0, 2);
  } else if (r == 1 && e == 1) {
    nome2 = y + b + 'X';
  } else if (r == 0 && e == 2) {
    nome2 = b + 'X';
  }
  cout << nome2 << endl;
}

int main() {
  string nome, cognome, cognome2, nome2, id;
  cout << "Inserisci tutti i dati che ti verranno richiesti in maiuscolo" << endl;
  cout << "INSERIRE COGNOME: ";
  getline(cin, cognome);
  cout << "INSERIRE NOME: ";
  getline(cin, nome);
  calcolocognome(cognome, cognome2);
  calcolonome(nome, nome2);
  id = cognome2 + nome2;
  cout << id << endl;

  return 0;
}
