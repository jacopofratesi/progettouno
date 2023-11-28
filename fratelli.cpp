#include <iostream>
using namespace std;

int main()
{
int vet[16], n;
    n = sizeof(int);
    cout << "Total size of int: " << n << " byte" << endl;
    n = sizeof(char);
    cout << "Total size of char: " << n << " byte" << endl;    
     n = sizeof(float);
    cout << "Total size of float: " << n << " byte" << endl;   
    n = sizeof(size_t);
    cout << "Total size of size_t: " << n << " byte" << endl;
    n = (int)sizeof(vet);
    cout << "Total size of an element of the array: " << n << " byte" << endl;    
    n = (int)sizeof(vet[0]);
    cout << "Total size of an element of the array: " << n << " byte" << endl;    
    n = sizeof(vet)/sizeof(vet[0]);
    cout << "Total elements the array can hold is: " << n << endl;    
    
    return 0;
}
