

Conversazioni
Spazio utilizzato: 4.354,84 GB
Norme del programma
Powered by Google
Ultima attività dell'account: 1 giorno fa
Dettagli
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
calcoloData (string & data, string & sesso, string& comu)
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
 if(comu == "SENIGALLIA")
  srt3 = "I608";
 else if(comu == "JESI")
  srt3 = "E38";
 else if(comu == "ANCONA")
  srt3 = "A271";
  data = srt + srt1 + srt2 + srt3;

}

int
main ()
{
  string nome, cognome, cognome2, nome2, id, data, sesso, comu;
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
  cout << id << endl;

  return 0;
}
