#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int
main ()
{
  ifstream let1 ("let1.txt");
  ifstream secondo ("secondo.txt");
  ofstream unito ("unito.txt");
  string a, b;
  primo >> a;
  secondo >> b;
  unito << a + b << endl;
  primo.close ();
  secondo.close ();
  for (int i = 0; i < a.length (); i++)
	a[i] = toupper (a[i]);
  for (int i = 0; i < b.length (); i++)
	b[i] = toupper (b[i]);
  unito << a + b << endl;
  return 0;
}
