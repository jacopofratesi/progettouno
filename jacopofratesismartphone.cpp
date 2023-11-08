// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define N 130
float costotot(float x, float y, float z){
    return(x+y*z);
}
int main() {
    //input
   float a= 500; //quota fissa
   float b= 200; //rata mensile
   float c= 10; //mesi in cui bisogna pagare le rate
   //output
   float ris=0;
   cout<<"La quota fissa è "<<a<<"€, in più si devono pagare "<<c<<" rate da "<<b<<"€."<<endl;
   //funzione del costo totale
     ris=costotot(a, b, c);
     cout<<"L'inporto totale è "<<ris<<"€."<<endl;
 
     
 

    return 0;
}
