/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

/*
Programma che simula una calcolatrice ridotta e cicla finche' l'utente non preme i caratteri 'n' o 'N'.

*/

int
main ()
{
  int m, l;
  char c;
  char a;

  do
    {
      cout << "Inserisci l'operazione da svolgere: " << endl;
      /* Menu` del mio programma */
      cout << "+ -> Addizione" << endl;
      cout << "* -> Moltiplicazione" << endl;
      cout << "- -> Sottrazione" << endl;
      cout << "/ -> Divisione" << endl;
      cin >> c;
      cout << "Inserisci il primo numero: ";
      cin >> m;
      cout << "Inserisci il secondo numero: ";
      cin >> l;
      switch (c)
	{
	case '+':
	  cout << "La somma tra " << m << " e " << l << " e`: " << m + l << endl;
	  break;
	case '*':
	  cout << "Il prodotto tra " << m << " e " << l << " e`: " << m * l << endl;
	  break;
	case '-':
	  cout << "La differenza tra " << m << " e " << l << " e`: " << m - l << endl;
	  break;
	  case '/':
	  cout <<"la divisione tra " << m << " e" << l << " è : " << m / l << endl ;
	  break;
	default:
	  cout << "numero non valido" << endl;
	  break;
	}
      cout << "Vuoi continuare?" << endl;
      cout << "1 = yes <---> n/N = no" << endl;
      cin >> a;
    }
  while (  ! (a == 'n' && 'N' ));	// Esco dal programma quando premo 'n' o 'N'.
 
  
  return 0;
}