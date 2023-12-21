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
  int c=0;
  char video[N];
  while (stringa[i] != '\0')
    {
       
       
        
      i++;
     
     
    }
   for(a=0;a<i;a++){
       
       for (j=0;j<i;j++){
          
           if(stringa[j]==stringa[a]){
           video[n]=stringa[j];
           c++;
        n++;
           } 
       }
        
   }
 cout<<"la lettera ripetuta più volte è: "<<endl;
 for(a=0;a<n;a++){
     if(video[a]>video[a+1])
     cout<<video[a]<<endl;
 }
  return 0;
}
