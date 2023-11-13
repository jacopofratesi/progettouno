// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define N 13			//numero random minimo
#define M 71			// numero che sommato a N da il numero random massimo
//funzione somma
  float
somma (float x, float y)
{
  
return (x + y);

}


//funzione prodotto
  float
prod (float x, float y)
{
  
return (x * y);

}


//funzione media aritmetica
  float
media (float x, float y)
{
  
return ((x + y) / 2);

}


//stampa a video numero pari
  void
stampa (int x)
{
  
if (x % 2 == 0)
    
cout << "il risultato della somma C( pari" << endl;
  
 
  else
    
 
cout << "il risultato C( un numero dispari" << endl;

 
}


int
main ()
{
  
 
float num = 1, ris2 = 1, ris3, i, ris1 = 0;
  
for (i = 0; i < 11; i++)
    {
      
 
num = rand () % N + M;
      
cout << num << endl;
      
 
 
 
ris1 = somma (ris1, num);
      
 
 
ris2 = prod (ris2, num);
      
 
 
ris3 = media (ris1, i);
    
 
 
}
  
ris1 = ris1 - 1;
  
cout << "la somma C( " << ris1 << endl;
  
stampa (ris1);
  
cout << "il prodotto C( " << ris2 << endl;
  
stampa (ris2);
  
cout << "la media C( " << ris3 << endl << endl;
  
stampa (ris3);

 
}
