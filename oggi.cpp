#include <iostream>
using namespace std;
#define N 4
#include <array>
struct livello{
    char livlet;
    int livn;
};
struct sezione{
    int anno;
    char sez;
};
struct studente {
   int nome ;
    
    livello livellostudente;
    sezione sezionestudente;
    
};
int main() {
    int l;
    studente array[N];
    for( int i=0; i<N;i++){
        cout<<"codice studente "<<i<<endl;
        cin>>array[i].nome;
       cout<<"sezione studente "<<i<<endl;
        cin>>array[i].sezionestudente.anno;
        cin>>array[i].sezionestudente.sez;
        cout<<"livello studente "<<i<<endl;
        cin>>array[i].livellostudente.livlet;
        cin>>array[i].livellostudente.livn;
        
    }
    
    for( int i=0; i<N;i++){
        for(int j=0;j<N;j++){
            if(array[i].sezionestudente.anno < array[j].dezionestudente.anno)
            {
                if(array[i].livellostudente.livlet < array[j].dezionestudente.livlet)
                {
                    cout<<"studente "<<i<< "più piccolo ma livello più grande"<<endl;
                    
                }
                if((array[i].livellostudente.livn == array[j].livellostudente.livn) && array[i].livellostudente.livn == array[j].livellostudente.livn )
            }
        }
    }
    
    
    return 0;
}
