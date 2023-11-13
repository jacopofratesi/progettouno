// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
char a;
float x, y=0, num=rand(), b;
int i;
srand ((unsigned) time(NULL));
cout<<"Avresti voglia di inserire 12 numeri a mano? (y per un sì, r perché vengano generati casualmente)"<<endl;
cin>>a;
switch (a) {
    case 'y':
for(i=0;i<12;i++){
cout<<"Inserisci un numero: ";
cin>>x;
if(x>y)
y=x;
}
cout<<"Il più grande numero tra quelli scelti è: "<<y;
break;
case 'r':
for(i=0;i<12;i++){
b=rand();
cout<<b<<endl;
if (b>y)
y=b;
}
cout<<"Il più grande numero tra quelli generati è: "<<y;
break;

default:
break;
}
return 0;
}
