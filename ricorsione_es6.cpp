#include <iostream>
#include <fstream>
using namespace std;
int f(int num1,int num2){

    if(num1==num2)
    return num1;

    else
    return num1 + f(num1+1,num2);
}
int main() {
   int n1 = 0;
   int n2 = 0;
   int x = 0;
ofstream fin("testo.txt");
   cout<<"Inserisci il primo numero:"<<endl;
   cin>>n1;
   cout<<"Inserisci il secondo numero:"<<endl;
   cin>>n2;
   if(n1>n2)
      x=f(n2,n1) ;
      else
      x=f(n1,n2);

   fin<<"il risultato è: "<<x<<endl;
fin.close();
    return 0;
}
