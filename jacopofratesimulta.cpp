#include <iostream>
using namespace std;
#define N 130
float multa(float x){
    return(50+1.5*(x-N));
}
int main() {
   float velocita= 60;
   float ris=0;
   if( velocita<N){
 cout<<"Non è stata effettuata alcuna multa";
}   
 else
 {
     ris=multa(velocita);
     cout<<"L'inporto da pagare è di "<<ris<<"€"<<endl;
 }
     
 

    return 0;
}
