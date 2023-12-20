#include<iostream>
#define N 30
using namespace std;

int
main ()
{

  char stringa1[N], stringa2[N];
  
  cout<<"Inserisci due stringhe:"<<endl;
  cin >> stringa1;
 cin>>stringa2;
  int i = 0;
  int j = 0;
  int n = 0;
  while (stringa1[i] != '\0')
    {
       
       
        
      i++;
     
     
    }
    while (stringa2[j] != '\0')
    {
       
       
        
      j++;
     
     
    }
  if(i<j)
  cout<<stringa2<<endl;
  else
  cout<<stringa1<<endl;
  if(i==j)
  cout<<"le due stringhe hanno pari lunghezza"<<endl;
  return 0;
}
