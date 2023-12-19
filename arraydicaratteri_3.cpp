#include<iostream>
#define N 30
using namespace std;

int
main ()
{

  char stringa[N];
  
  cout<<"Inserisci una stringa:"<<endl;
  cin >> stringa;
 
  int i = 0,vocale=0;
  char j;
  while (stringa[i] != '\0')
    {
        j=stringa[i];
        if(j=='A'|| j=='E' || j== 'I' || j== 'O' || j== 'U' || j=='a'|| j=='e' || j== 'i' || j== 'o' || j== 'u' )
            vocale++;
        
      i++;
    }
  cout << stringa << endl;
  cout<<"Sono stati usati "<<i<<" caratteri."<<endl;
  cout<<"la parola ha "<<vocale <<" vocali"<<endl;
  return 0;
}
