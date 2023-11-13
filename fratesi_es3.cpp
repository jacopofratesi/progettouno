// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
#define  P 3.14
void ac(float x,float y,float z){
    y=((x/2)*(x/2))*P; // ^2 non mi faceva quin di ho riscritto il raggio/2 2 volte
    z=x*P;
    cout<<"la circonferenza è "<<z<<endl;
    cout<<"l'area è circa "<<y<<endl;
}

int main(){
  float diametro, a, c; //a= Area, c= Circonferenza
  cout<<"il diametro è "<<endl;
  cin>>diametro;
  ac(diametro, a, c);
}