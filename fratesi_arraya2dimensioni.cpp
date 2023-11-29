/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
#define N 5
int
main ()
{
  int vet[N][N], somma, prodotto = 1, j = 0;
  srand (time (NULL));
  for (int i = 0; i < N; i++)
    {
      cout << endl;
      for (j = 0; j < N; j++)
	{
	  vet[i][j] = rand () % 30 + 1;
	  cout << vet[i][j] << " ";


	}

    }
  for (int i = -1; i < 4; i++)
    {

      somma = somma + vet[i][j];

      prodotto = prodotto * vet[i][j];
      j++;
    }


  cout << endl << "La somma dei numeri in diagonale C( " << somma << endl;
  cout << "Il prodotto dei numeri in diagonale C( " << prodotto;
  return 0;
}
