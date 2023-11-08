#include <iostream>
using namespace std;
float conversionef(float x)
{
    return(x*9/5+32);
}
float conversionek(float x )
{
    return(x+273.15);
}
int main(){
    char b ;
   
    float j=0;
    float a; // numero gradi
    float ris;
    cout<<"Temperatura misurata in celsius";
    cin>>a;
    cout<<endl<<"temperatura in Fahrenheit: F" <<endl<<"temperatura in kelvin: K"<<endl;
    cin>>b;
   
   
    switch (b){
       
        case 'F':
       
        ris=conversionef( a);
        cout<<"in gradi Fahrenheit la temperatura corrisponde a "<<ris<<"°C"<<endl;  
        break;
     case 'K':
         
        ris=conversionek(a);
        cout<<"in gradi Kelvin la temperatura corrisponde a "<<ris<<"°C"<<endl;  
        break;
       
    }
}

