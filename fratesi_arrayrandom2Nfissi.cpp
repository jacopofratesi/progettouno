#include <iostream>
using namespace std;
#define N 10
int
main ()
{
  int vet[N][N], j = 0;
  srand (time (NULL));
  for (int i = 0; i < N; i++)
    {
      cout<<endl <<"riga "<<i+1<< endl;
      for (j = 0; j < N; j++)
	{
	  vet[i][j] = rand () % 10 + 1;
      if ( i == N-1 || j == N-1 ) 
      {
        vet[i][j] = 0;
      }
	  cout <<" | "<< vet[i][j] << " | ";

	}

    }
  
  return 0;
}
