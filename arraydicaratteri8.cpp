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
  int c = 0;
 int max = 0;
  char video[N];
  while (stringa[i] != '\0')
    {
       
       
        
      i++;
     
     
    }
   for(a=0;a<i;a++){
       n=0;
       for (j=0;j<i;j++){
          //verifico se ci sono caratteri simili
           if(stringa[j]==stringa[a]){
           video[n]=stringa[j];
          c++;
          n++;
          //trovo carattere massimo
          if(c>max){
          max=c;
          
          }
          
           } 
       }
        
   }
 
 cout<<"viene ripetuta più volte la lettera: "<<video[n]<<endl;

  return 0;
}
