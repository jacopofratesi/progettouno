#include <iostream>
using namespace std;
int fattoriale(int &num)
{
  int i = num;
   int ris =num;
   
    do{
        i--;
     ris = ris*i;
     
    }while(i!=1);
    return(ris);
}
int main() {
   int num = 0;
   cout<<"numero da inserire"<<endl;
   cin>>num;
   int ris;
   ris=fattoriale(num);
   cout<<ris<<endl;
    return 0;
}
