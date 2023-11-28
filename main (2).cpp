
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define N 9

int
main ()
{
  int vet[9], n;

  n = sizeof (vet) / sizeof (vet[0]);
  cout << "Total elements the array can hold is: " << n << endl;
  srand (time (NULL));
  for (int i = 0; i < N; i++)
    {
      vet[i] = rand () % 55 + 1;
      cout << vet[i] << " ";
      int appo = vet[i];
      vet[i] = vet[N - 1 - i];
      vet[N - 1 - i] = appo;
    }
  cout << endl;
  cout << "dopo lo scambio" << endl;
  for (int j = 0; j < N; j++)
    {
      cout << vet[j] << " ";
    }

  return 0;
}
