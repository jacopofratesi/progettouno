/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
float
prelievo (float x, float y)
{
  return (x - y);
}

float
deposito (float x, float y)
{
  return (x + y);
}

int
main ()
{
  char c;
  float a = 500, b;

  cout << "il saldo C( " << a << "b," << endl;
  do
    {
      cout << "prelievo --> p" << endl;
      cout << "deposito --> d" << endl;
      cout << "uscita --> u" << endl;
      cin >> c;

      switch (c)
	{
	case 'p':
	  cout << "quanti soldi vuoi prelevare?" << endl;
	  cin >> b;
	  a = prelievo (a, b);
	  cout << "il saldo rimanente C( " << a << "b," << endl;
	  break;
	case 'd':
	  cout << "quanti soldi vuoi depositare?" << endl;
	  cin >> b;
	  a = deposito (a, b);
	  cout << "il saldo complessivo C( " << a << "b," << endl;
	  break;
	default:
	  break;
	}
    }
  while (c != 'u' && a > 0);

  return 0;
}
