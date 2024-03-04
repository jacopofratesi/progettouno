#include <iostream>
using namespace std;

int main(){
int n = 0, b = 0, c = 0;
cout << "Quanto deve essere l'array: " << endl;
cin >> n;
int array[n];
for(int i = 0; i < n; i++){
cout << "Inserisci numero: " << endl;
cin >> array[i];
}

for(int i = 0; i < n-1; i++){
c = i;
  for(int j = i+1; j < n; j++)
    {
      if(array[j] < array[c])
	c = j;
    }
b = array[c];
array[c] = array[i];
array[i] = b;
}

for(int i = 0; i < n; i++)
  cout << array[i] << "\t";

return 0;
}
