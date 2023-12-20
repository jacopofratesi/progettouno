#include<iostream>
#define N 30
using namespace std;

int
main ()
{

  char stringa[N];
  char stringa2[N];
  cout << "Inserisci prima stringa:" << endl;
  cin >> stringa;
  cout << "Inserisci seconda stringa:" << endl;
  cin >> stringa2;
  int j = 0, b = 0, rima = 0;
  while (stringa[j] != '\0')
    {
      j++;
    }
  while (stringa2[b] != '\0')
    {
      b++;
    }
while((j - rima - 1 >= 0) && (b - rima - 1 >= 0) && (stringa[j - rima - 1] == stringa2[b - rima - 1])){
  rima++;
}
    cout << "Fanno rima per " << rima << " lettere" << endl;
  return 0;
}
