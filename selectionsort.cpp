#include<iostream>
#define N 10
using namespace std;

int
main ()
{
  int array[N] = {8, 7, 6, 5, 4, 3, 2, 1};
  for (int i = 0; i < N - 1; i++)
    {
      int minimo = i;
      for (int j = i+1; j < N; j++)
	{
	  if (array[minimo] > array[j])
	    {
	      minimo = j;
	    }
	}
      int temp = array[i];
      array[i] = array[minimo];
      array[minimo] = temp;
      for (int j = 0; j < N; j++)
	cout << array[j] << "\t";
      cout << endl;
    }
  return 0;
}
