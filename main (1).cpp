/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()

{
   double valore; 
   double sconto;
   double prezzofinale;
   cout<<"valore"<<endl;
cout<<"sconto"<<endl;
cout<<"prezzofinale"<<endl;
cin>>valore;
cin>>sconto;
cin>>prezzofinale;
sconto=valore*sconto;
sconto=sconto/100;
prezzofinale=valore-sconto;
cout<<"il valore è"<<prezzofinale<<" €"<<endl;

    return 0;
}
