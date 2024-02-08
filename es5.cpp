#include<iostream>
#define N 10
using namespace std;

void f(int n){
    switch(n){
   case (n<N):
    return (n);
    break;
    case (n%2==0):
    return  n % 10 + f(n / 10);
    break;
    case(n>=N && n%2!=0):
    return f(n-1);
    break;
    }
}
int main ()
{
int n = 0;
cin>>n;
int ris =f(n);

cout<<"il risultato è: "<< ris <<endl;

  return 0;
}
