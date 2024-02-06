#include <iostream>
using namespace std;

int f_generale(int n , int m){
   
    
    if (m==0)
    return n;
    return 1+f_generale(n,m-1) ;
    
}
int main() {
int num1 = 0;
int num2 = 0;
int ris = 0;
cin>>num1;
cin>>num2;
ris = f_generale(num1,num2);
cout<<ris<<endl;

    return 0;
}
