#include<iostream>
#define N 30
using namespace std;

int
main ()
{

  char stringa[N];
  char carattere;
  cout<<"Inserisci una stringa:"<<endl;
  cin >> stringa;
  cin>>carattere;
  int i = 0,j=0;
  while (stringa[i] != '\0')
    {
        if(stringa[i]==carattere){
            j++;
        }
      i++;
    }
  cout << stringa << endl;
  cout<<"Sono stati usati "<<i<<" caratteri."<<endl;
  cout<<"il carattere "<<carattere<< " si ripete "<<j<<" volte."<<endl;
  return 0;
}
