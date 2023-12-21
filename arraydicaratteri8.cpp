#include<iostream>
#define N 30
using namespace std;

int
main ()
{

  char stringa[N];
  
  cout<<"Inserisci una stringa:"<<endl;
  cin >> stringa;
  int a = 0;
  int i = 0;
  int j = 0;
  int n = 0;
  char video;
  while (stringa[i] != '\0')
    {
       
       
        
      i++;
     
     
    }
   for(a=0;a<i;a++){
       
       for (j=a+1;j<i;j++){
          
           if(stringa[j]==stringa[a])
           video=stringa[j];
        
          
       }
        cout<<"la parola ripetuta più volte è "<<video<<endl;
   }
 cout<<"la parola ripetuta più volte è "<<video<<endl;
 
  return 0;
}
