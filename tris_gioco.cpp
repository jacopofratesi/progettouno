// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define N 3
int main() {
    char vet[258][258];
    char p1 = 'X';
    char p2 = 'O';
    int colonna = 0;
    int riga = 0;
    bool risultato = false;
for(int i = 0; i<N;i++){
    cout<<"player1 choose: "<<endl;
        cout<<"riga:"<<endl;
        cin>>riga;
        cout<<"colonna:"<<endl;
        cin>>colonna;
        vet[riga][colonna]=p1;
        cout<<vet[riga][colonna]<<endl;
    for(int j = 0; j<N;j++){
        cout<<vet[i][j]<<" ";
        
    }
    
    cout<<endl;
}

    return 0;
}
