/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int
main ()
{
  int n, i = 0, ris = 0;
  cout << "di quanti numeri C( composta la lista?" << endl;
  cin >> n;
  int array[n];
  for (i; i < n; i++)
    {

      cin >> array[i];

      cout << "C( stato insireto all'interno dell'array: " << array[i] <<
	endl;
      array[i] = array[i] + array[i - 1];
      ris = array[i];

    }
  cout << "somma= " << ris << endl;
  return 0;
}
