#include<iostream>

#define N 30
using namespace std;

int
main ()
{

  char stringa[N];
  cout<<"Inserisci una stringa:"<<endl;
  cin >> stringa;
  int i = 0;
  while (stringa[i] != '\0')
    {
      i++;
    }
  cout << stringa << endl;
  cout<<"Sono stati usati "<<i<<" caratteri."<<endl;
  return 0;
}
