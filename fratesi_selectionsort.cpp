#include <iostream>
using namespace std;
#define N 4
int main() {
int vet[N];
int appo = 0;
int min = 0;
cout<<"inserisci numeri vettore:"<<endl;
for(int i = 0; i<N;i++)
cin>>vet[i];
for(int i=0;i<N;i++){
    
    for(int j=0; j<N; j++){
       if(vet[i]<vet[j]){
          appo=vet[i];
          vet[i]=vet[j];
          vet[j]=appo;
       }
       
       
    }
}
for(int i=0;i<N;i++)
cout<<vet[i]<<", ";
cout<<endl;
    return 0;
}
