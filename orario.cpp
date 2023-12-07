#include <iostream>
using namespace std;
#define N 4
struct orario{
    int h;
    int min;
    int sec;
};
int main() {
   int  array[N], a=0,b=0;
   
  orario orario1;
   int m=0;
  srand(time(NULL));
  for (int i = 0 ;i<N ; i++)
  {
      orario1.h=rand()%24;
      orario1.min=rand()%60;
      orario1.sec=rand()%60;
      array[i]=orario1.h;
      cout<<array[i]<<"h"<<endl;
       m=array[i];
   
      array[i]=orario1.min;
      cout<<array[i]<<"min"<<endl;
       a=array[i];
   
      array[i]=orario1.sec;
      cout<<array[i]<<"sec"<<endl;
       
   
  
  }
   
  for (int i=0;i<N;i++)
  {
     
   
    
        
    if(array[i]>m){
   m=array[i];
   
    }
   
  }
  cout<<"Il massimo è "<<m<<endl;
   
    return 0;
    
}
