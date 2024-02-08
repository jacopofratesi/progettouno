#include<iostream>
#define N 30
using namespace std;
char f(char x[N]){
    int i = 0;
    int j = 0;
if (x[i] != '\0'){
    return f(x[i+1]);
    i++;
    j++;
}
retur
}
int main ()
{

  char stringa[N];
int i = 0;
int j = 0;
  cout<<"Inserisci una stringa:"<<endl;
  cin >> stringa;
 
 f(stringa[i])
     if(stringa[i]==stringa[i-j])
  
cout << "la parola è palindroma" << endl;
  else
    cout <<"la parola non è palindroma"<<endl;
cout<<"Sono stati usati "<<i<<" caratteri."<<endl;
 
  return 0;
}
