/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int
main ()
{

  srand (time (NULL));


  int array[6];


  for (int i = 0; i < 6; ++i)
    {
      array[i] = rand () % 51;
    }


  int somma = 0;
  for (int i = 0; i < 6; ++i)
    {
      somma = array[i];
    }


  int prodotto = 1;
  for (int i = 0; i < 6; ++i)
    {
      prodotto = prodotto * array[i];
    }


  float media = (float (somma)) /6;


  cout << "Array generato: ";
  for (int i = 0; i < 6; ++i)
    {
      cout << array[i] << " ";
    }
  cout << endl;

  cout << "Somma degli elementi: " << somma << endl;
  cout << "Prodotto degli elementi: " << prodotto << endl;
  cout << "Media degli elementi: " << media << endl;

  return 0;
}
