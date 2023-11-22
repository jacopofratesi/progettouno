/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void
ap (float &a, float &ris, float &ris1, float &ris2, float &ris3)
{

  ris = a * a;			//area quadrato
  ris1 = a * 4;			//perimetro quadrato
  ris2 = a / 2;			//area triangolo
  ris3 = a * 3;			//perimetro triangolo
}

float
sconto (float x)
{
  return ((x * 15) / 100);
}

int
main ()
{
  float i, a, b, ris = 0, ris1 = 0, ris2 = 0, ris3 = 0;
  char menu;
  do
    {
      cout << "a-> sommare 3 numeri" << endl;
      cout << "b-> divisione tra 2 numeri" << endl;
      cout << "c-> quadrato di un numero" << endl;
      cout <<
	"d-> calcolare area e perimetro di un quadrato e di un triangolo equilatero"
	<< endl;
      cout <<
	"e-> Dato in ingresso il prezzo di un paio di scarpe, considerando uno sconto del 15%, il programma restituisce il costo finale delle scarpe"
	<< endl;
      cin >> menu;
      switch (menu)
	{
	case 'a':
	  cout << "i numeri da sommare sono:" << endl;
	  for (i = 0; i < 3; i++)
	    {
	      cin >> a;
	      ris = ris + a;
	    }
	  cout << "la somma tra i tre numeri C( " << ris << endl;
	  break;

	case 'b':
	  cout << "i due numeri da dividere sono: " << endl;
	  cin >> a;
	  cin >> b;
	  ris = a / b;
	  cout << "il risultato della divisione C( " << ris << endl;
	  break;
	case 'c':
	  cout << "il quadrato di ";
	  cin >> a;
	  ris = a * a;
	  cout << ris << endl;
	case 'd':
	  cout << "il lato C( pari a ";
	  cin >> a;

	  ap (a, ris, ris1, ris2, ris3);

	  cout << "l'area del quadrato C( " << ris << endl;

	  cout << "il perimetro del quadrato C( " << ris1 << endl;

	  cout << "l'area del triangolo C( " << ris2 << endl;

	  cout << "il perimetro del trianglo C( " << ris3 << endl;
	  break;
	case 'e':
	  cout << "prezzo intero: ";
	  cin >> a;
	  ris = sconto (a);
	  cout << "il prezzo con applicato il 15/100 sconto C(: " << ris <<
	    endl;
	  break;
	default:
	  break;
	}
      cout << "vuoi continuare? s=si<--->n=no " << endl;
      cin >> menu;

    }
  while (menu == 's');
}
