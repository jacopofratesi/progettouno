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
  int j = 0;
  int n = 0;
  while (stringa[i] != '\0')
    {
       
       
        
      i++;
     
     
    }
   for(j=0;j<i;j++){
       
           if(stringa[j]==stringa[j+1])
           n++;
       
   }
 cout<<"la parola contiene "<<n<<" lettere uguali"<<endl;
  return 0;
}
