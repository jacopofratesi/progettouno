#include <iostream>
#include <string.h>

using namespace std;


int pal(char *vet, int i, int n);

int
main (){
  char stringa[258];
  cout << "Inserisci la stringa :" << endl;
 
  cin.getline (stringa, sizeof (stringa));  

  if (palindroma (stringa, 0, strlen (stringa)))
   cout << "La stringa " << stringa << " e` palindroma" << endl;
  else
   cout << "La stringa " << stringa << " non e` palindroma!" << endl;
  return 0;
}



int
pal(char *vet, int i, int n) 
{
  if (n <= i)
    return 1;
  else
    {
      if (vet[i] == vet[n - 1])
	return palindroma (vet, i + 1, n - 1);
      else
	return 0;
    }
}
