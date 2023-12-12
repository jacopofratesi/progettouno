#include <iostream>
#include <string>
using namespace std;
#define N 4

struct studente {
string nome;
int eta;
string cod;
int voti;
int max(int array[N])
{
   int m;
    m=0;
    for(int x=0;x<N;x++){
        
    if(array[x]>m)
   m=array[x];
    
    }
    return m;
 };
 
 
int main()
{
    float media;
    int max=0, j;
    
    
    studente studente1[N];
     studente studente2[N];
     studente studente3[N];
     studente studente4[N];
    for( int i=0; i<N;i++){
        cout<<"studente "<<i+1<<endl;
        cin>>studente1[i].nome;
        cin>>studente1[i].cod;
       cout<<"anni"<<endl;
        cin>>studente1[i].eta;
        
        cout<<"voti studente "<<endl;
        switch (i){
            case 0:
         cout<<"18, 16, 12, 20"<<endl;
      studente1[0].voti=18;
      j++;
      studente1[1].voti=16;
      j++;
      studente1[2].voti=12;
      j++;
      studente1[3].voti=20;
      j++;
      media= (studente1[0].voti+studente1[1].voti+studente1[2].voti+studente1[3].voti)/j;
     cout<<media<<endl;
     
      break;
            case 1:
         cout<<"25, 28, 30"<<endl;
      studente2[0].voti=25;
      j++;
      studente2[1].voti=28;
      j++;
      studente2[2].voti=30;
      j++;
     media= (studente2[0].voti+studente2[1].voti+studente2[2].voti)/j;
     cout<<media<<endl;
      break;
       case 2:
         cout<<"18, 25, 27, 21, 22"<<endl;
      studente3[0].voti=18;
      j++;
      studente3[1].voti=25;
      j++;
      studente3[2].voti=27;
      j++;
      studente3[3].voti=21;
      j++;
      studente3[4].voti=22;
      j++;
      media= (studente2[0].voti+studente3[1].voti+studente3[2].voti+studente3[3].voti+studente3[4].voti)/j;
     cout<<media<<endl;
      break;
      case 3:
         cout<<"12, 18, 20, 19"<<endl;
      studente4[0].voti=12;
      j++;
      studente4[1].voti=18;
      j++;
      studente4[2].voti=20;
      j++;
      studente4[3].voti=19;
      j++;
      media= (studente4[0].voti+studente4[1].voti+studente4[2].voti+studente4[3].voti)/j;
     cout<<media<<endl;
      break;
      default:
      break;
    }
    }
    
    return 0;
}
