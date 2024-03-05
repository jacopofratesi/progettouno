#include <iostream>
#include <fstream>
#include <string>
#define N 30

using namespace std;

int main()
{
   ifstream primo("primo.txt");
   ifstream secondo("secondo.txt");
   ofstream unito("unito.txt");
   string a, b;
   primo>>a;
   secondo>>b;
   primo.close ();
  secondo.close ();
  for (int i = 0; i < a.length (); i++)
	a[i] = toupper (a[i]);
  for (int i = 0; i < b.length (); i++)
	b[i] = toupper (b[i]);
   unito<<a+b<<endl;
   
    return 0;
}
