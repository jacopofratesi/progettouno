#include <iostream>
#define N 16
using namespace std;

int main () {
  int i;
int a;
do{
  cin >>  i;
  cout << "quanti prodotti hai aqcuistato?" << i << endl;
  
  cin >> a ;
  cout << "quanto costa il prodotto?" << " " << a << endl;


if (i%3 ==0)
    {
      cout <<((i/3)*2)*a<< endl;
    }
else
{
    cout <<((i/3)*2)*a+(a*(i%3))<< endl;
}

}while(i<=N);
  return 0;
}