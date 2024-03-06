#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define N 5
void righe(int vet[N][N]) {
    int appo;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            for (int k = 0; k < N - j - 1; k++) {
                if (vet[i][k] > vet[i][k + 1]) {
                    appo = vet[i][k + 1];
                    vet[i][k + 1] = vet[i][k];
                    vet[i][k] = appo;
                }
            }
        }
    }
}
void colonne(int vet[N][N]) {
    int appo;
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N - 1; i++) {
            for (int k = 0; k < N - i - 1; k++) {
                if (vet[k][j] < vet[k + 1][j]) {
                    appo = vet[k + 1][j];
                    vet[k + 1][j] = vet[k][j];
                    vet[k][j] = appo;
                }
            }
        }
    }
}

int main()
{
    int vet[N][N];
    int appo=0;
    srand(time(NULL));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            vet[i][j]=rand()%61;
        }
    }
    cout<<"Matrice prima dello scambio: "<<endl;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
        cout<<vet[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Matrice dopo lo scambio delle righe: "<<endl;
    righe(vet);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << vet[i][j] << "\t";
        }
        cout << endl;
    }
    cout<<"matrice dopo lo scambio delle colonne: "<<endl;
    colonne(vet);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << vet[i][j] << "\t";
        }
        cout << endl;
    }
    cout<<"Matrice dopo lo scambio di entrambe: "<<endl;
    righe(vet);
    colonne(vet);
    righe(vet);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << vet[i][j] << "\t";
        }
        cout << endl;
    }
   

    return 0;
}
