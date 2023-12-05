#include <iostream>
#include <ctime>
#include<cstdlib>

#define N 10

using namespace std;

float calcolo (int array[], int dim, int &somma);	

float
calcolo (int array[], int dim, int &somma)
{
  float media;
  for (int i = 0; i < N; i++)
    somma += array[i];
  media = (float) somma / (float) N;

  return media;
}
int max(int array[N])
{
   int m;
    m=0;
    for(int x=0;x<N;x++){
        
    if(array[x]>m)
   m=array[x];
    
    }
    return m;
}


int
main ()
{
  int vet[N];
  float media;
  int somma = 0;
int massimo = 0;
  srand (time (NULL));

  for (int i = 0; i < N; i++)
    {
      vet[i] = rand () % 13 - 5;
      cout << vet[i] << endl;
    }
    for(int i=0;i<N;i++)
    {
        massimo=max(vet );
        
    }
  cout << "Array creato!" << endl;
  media = calcolo (vet, N, somma);
  cout << "La somma e`: " << somma << endl;
  cout << "La media e`: " << media << endl;
cout<<"il massimo dei numeri creati è : "<< massimo << endl;
  return 0;
}
