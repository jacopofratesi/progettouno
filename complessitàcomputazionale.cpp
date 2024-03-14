// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int j=0,n=10;
    for (int i=2; i<n; i++){ 
j=i;
cout <<  j << endl;
while (!(j%2)) {
j/=2;
cout << j << endl;
}
}

    return 0;
}
