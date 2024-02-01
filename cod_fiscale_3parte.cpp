#include <iostream>
#include <string>
using namespace std;


void
calcolocognome (string & cognome, string & cognome2)
{
  int o = 0;
  int a = 0;
  string c, v;
  for (int i = 0; i < cognome.length (); i++)
{
 if (cognome[i] == 'A' || cognome[i] == 'E' || cognome[i] == 'I'
 || cognome[i] == 'O' || cognome[i] == 'U')
{
 a++;
 v += cognome[i];
}
 else
{
 o++;
 c += cognome[i];
}
}

  if (o >= 3)
{
 cognome2 = c.substr (0, 3);
}
  else if (o == 2)
{
 cognome2 = c.substr (0, 2) + v.substr (0, 1);
}
  else if (o == 1 && a >= 2)
{
 cognome2 = c.substr (0, 1) + v.substr (0, 2);
}
  else if (o == 1 && a == 1)
{
 cognome2 = c.substr (0, 1) + v + 'X';
}
  else if (o == 0 && a == 2)
{
 cognome2 = v.substr (0, 2) + 'X';
}
}

void
calcolonome (string & nome, string & nome2)
{
  int e = 0;
  int r = 0;
  string b, y;
  for (int j = 0; j < nome.length (); j++)
{
 if (nome[j] == 'A' || nome[j] == 'E' || nome[j] == 'I' || nome[j] == 'O'
 || nome[j] == 'U')
{
 e++;
 b += nome[j];
}
 else
{
 r++;
 y += nome[j];
}
}
  if (r >= 4)
{
 nome2 = y.substr (0, 1) + y.substr (2, 2);
}
  else if (r == 3)
{
 nome2 = y;
}
  else if (r == 2)
{
 nome2 = y + b.substr (0, 1);
}
  else if (r == 1 && e >= 2)
{
 nome2 = y + b.substr (0, 2);
}
  else if (r == 1 && e == 1)
{
 nome2 = y + b + 'X';
}
  else if (r == 0 && e == 2)
{
 nome2 = b + 'X';
}
}

void
calcoloData (string & data, string & sesso, string & comu)
{
  string srt = data.substr (4, 2);
  string srt1 = data.substr (2, 2);
  if (srt1 == "01")
srt1 = "A";
  else if (srt1 == "02")
srt1 = "B";
  else if (srt1 == "03")
srt1 = "C";
  else if (srt1 == "04")
srt1 = "D";
  else if (srt1 == "05")
srt1 = "E";
  else if (srt1 == "06")
srt1 = "H";
  else if (srt1 == "07")
srt1 = "L";
  else if (srt1 == "08")
srt1 = "M";
  else if (srt1 == "09")
srt1 = "P";
  else if (srt1 == "10")
srt1 = "R";
  else if (srt1 == "11")
srt1 = "S";
  else if (srt1 == "12")
srt1 = "T";
  string srt2 = data.substr (0, 2);
  int s = 0;
  if (sesso == "F")
{
 s = stoi (srt2) + 40;
 srt2 = to_string (s);
}
  string srt3;
  if (comu == "SENIGALLIA")
srt3 = "I608";
  else if (comu == "JESI")
srt3 = "E38";
  else if (comu == "ANCONA")
srt3 = "A271";
  data = srt + srt1 + srt2 + srt3;
}


void
controlloL (string & id)
{
  string pari, dispari, lettera;
  int cont1 = 0, srt1 = 0;
  for (int i = 0; i < id.length (); i++)
{
 if (i % 2 == 0)
dispari += id[i];
 else
pari += id[i];;
}
  for (int i = 0; i < dispari.length (); i++)
{
 if (dispari[i] == '0')
cont1 += 1;
 else if (dispari[i] == '1')
cont1 += 0;
 else if (dispari[i] == '2')
cont1 += 5;
 else if (dispari[i] == '3')
cont1 += 7;
 else if (dispari[i] == '4')
cont1 += 9;
 else if (dispari[i] == '5')
cont1 += 13;
 else if (dispari[i] == '6')
cont1 += 15;
 else if (dispari[i] == '7')
cont1 += 17;
 else if (dispari[i] == '8')
cont1 += 19;
 else if (dispari[i] == '9')
cont1 += 21;
 else if (dispari[i] == 'A')
cont1 += 1;
 else if (dispari[i] == 'B')
cont1 += 0;
 else if (dispari[i] == 'C')
cont1 += 5;
 else if (dispari[i] == 'D')
cont1 += 7;
 else if (dispari[i] == 'E')
cont1 += 9;
 else if (dispari[i] == 'F')
cont1 += 13;
 else if (dispari[i] == 'G')
cont1 += 15;
 else if (dispari[i] == 'H')
cont1 += 17;
 else if (dispari[i] == 'I')
cont1 += 19;
 else if (dispari[i] == 'J')
cont1 += 21;
 else if (dispari[i] == 'K')
cont1 += 2;
 else if (dispari[i] == 'L')
cont1 += 4;
 else if (dispari[i] == 'M')
cont1 += 18;
 else if (dispari[i] == 'N')
cont1 += 20;
 else if (dispari[i] == 'O')
cont1 += 11;
 else if (dispari[i] == 'P')
cont1 += 3;
 else if (dispari[i] == 'Q')
cont1 += 6;
 else if (dispari[i] == 'R')
cont1 += 8;
 else if (dispari[i] == 'S')
cont1 += 12;
 else if (dispari[i] == 'T')
cont1 += 14;
 else if (dispari[i] == 'U')
cont1 += 16;
 else if (dispari[i] == 'V')
cont1 += 10;
 else if (dispari[i] == 'W')
cont1 += 22;
 else if (dispari[i] == 'X')
cont1 += 25;
 else if (dispari[i] == 'Y')
cont1 += 24;
 else if (dispari[i] == 'Z')
cont1 += 23;
}
  for (int i = 0; i < pari.length (); i++)
{
 if (pari[i] == '0')
cont1 += 0;
 else if (pari[i] == '1')
cont1 += 1;
 else if (pari[i] == '2')
cont1 += 2;
 else if (pari[i] == '3')
cont1 += 3;
 else if (pari[i] == '4')
cont1 += 4;
 else if (pari[i] == '5')
cont1 += 5;
 else if (pari[i] == '6')
cont1 += 6;
 else if (pari[i] == '7')
cont1 += 7;
 else if (pari[i] == '8')
cont1 += 8;
 else if (pari[i] == '9')
cont1 += 9;
 else if (pari[i] == 'A')
cont1 += 0;
 else if (pari[i] == 'B')
cont1 += 1;
 else if (pari[i] == 'C')
cont1 += 2;
 else if (pari[i] == 'D')
cont1 += 3;
 else if (pari[i] == 'E')
cont1 += 4;
 else if (pari[i] == 'F')
cont1 += 5;
 else if (pari[i] == 'G')
cont1 += 6;
 else if (pari[i] == 'H')
cont1 += 7;
 else if (pari[i] == 'I')
cont1 += 8;
 else if (pari[i] == 'J')
cont1 += 9;
 else if (pari[i] == 'K')
cont1 += 10;
 else if (pari[i] == 'L')
cont1 += 11;
 else if (pari[i] == 'M')
cont1 += 12;
 else if (pari[i] == 'N')
cont1 += 13;
 else if (pari[i] == 'O')
cont1 += 14;
 else if (pari[i] == 'P')
cont1 += 15;
 else if (pari[i] == 'Q')
cont1 += 16;
 else if (pari[i] == 'R')
cont1 += 17;
 else if (pari[i] == 'S')
cont1 += 18;
 else if (pari[i] == 'T')
cont1 += 19;
 else if (pari[i] == 'U')
cont1 += 20;
 else if (pari[i] == 'V')
cont1 += 21;
 else if (pari[i] == 'W')
cont1 += 22;
 else if (pari[i] == 'X')
cont1 += 23;
 else if (pari[i] == 'Y')
cont1 += 24;
 else if (pari[i] == 'Z')
cont1 += 25;
}
  srt1 = cont1 % 26;
  if (srt1 == 0)
lettera = "A";
  else if (srt1 == 1)
lettera = "B";
  else if (srt1 == 2)
lettera = "C";
  else if (srt1 == 3)
lettera = "D";
  else if (srt1 == 4)
lettera = "E";
  else if (srt1 == 5)
lettera = "F";
  else if (srt1 == 6)
lettera = "G";
  else if (srt1 == 7)
lettera = "H";
  else if (srt1 == 8)
lettera = "I";
  else if (srt1 == 9)
lettera = "J";
  else if (srt1 == 10)
lettera = "K";
  else if (srt1 == 11)
lettera = "L";
  else if (srt1 == 12)
lettera = "M";
  else if (srt1 == 13)
lettera = "N";
  else if (srt1 == 14)
lettera = "O";
  else if (srt1 == 15)
lettera = "P";
  else if (srt1 == 16)
lettera = "Q";
  else if (srt1 == 17)
lettera = "R";
  else if (srt1 == 18)
lettera = "S";
  else if (srt1 == 19)
lettera = "T";
  else if (srt1 == 20)
lettera = "U";
  else if (srt1 == 21)
lettera = "V";
  else if (srt1 == 22)
lettera = "W";
  else if (srt1 == 23)
lettera = "X";
  else if (srt1 == 24)
lettera = "Y";
  else if (srt1 == 25)
lettera = "Z";
  id = lettera;
}

int
main ()
{
  string nome, cognome, cognome2, nome2, id, data, sesso, comu, ccf;
  cout << "INSERIRE COGNOME: ";
  getline (cin, cognome);
  for (int i = 0; i < cognome.length (); i++)
{
 cognome[i] = toupper (cognome[i]);
}
  cout << "INSERIRE NOME: ";
  getline (cin, nome);
  for (int i = 0; i < nome.length (); i++)
{
 nome[i] = toupper (nome[i]);
}
  cout << "INSERIRE DATA (GGMMAA): ";
  getline (cin, data);
  cout << "INSERIRE SESSO (F o M): ";
  getline (cin, sesso);
  for (int i = 0; i < sesso.length (); i++)
{
 sesso[i] = toupper (sesso[i]);
}
  cout << "INSERIRE COMUNE: ";
  getline (cin, comu);
  for (int i = 0; i < comu.length (); i++)
{
 comu[i] = toupper (comu[i]);
}
  calcolocognome (cognome, cognome2);
  calcolonome (nome, nome2);
  calcoloData (data, sesso, comu);
  id = cognome2 + nome2 + data;
  controlloL (id);
  ccf = cognome2 + nome2 + data + id;
  cout << "< IL CODICE FISCALE COMPLETO É : " << ccf << " >" << endl;
  return 0;
}
