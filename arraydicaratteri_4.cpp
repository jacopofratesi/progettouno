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
  char j;
  while (stringa[i] != '\0')
    {
       
       
        
      i++;
    }
  
  cout<<"Sono stati usati "<<i<<" caratteri."<<endl;
  if(stringa[0]==stringa[i-1])
  cout << stringa << endl;
  else
  cout <<"la parola non è palindroma"<<endl;
  return 0;
}
