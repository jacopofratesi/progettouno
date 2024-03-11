#include <iostream>
using namespace std;
#define N 3
int
main ()
{
  char array[N][N];
  int p1 = 0, p11 = 0, p2 = 0, p22 = 0 , fine = 1, control = 1, rimanente = 9;
 
  cout << "  "  << "0" << "     " << "1" << "     " << "2" << endl;
     for(int i = 0; i < N; i++){
         cout << i << " ";
       for(int j = 0; j < N; j++){
           
           array[i][j] = '-';
           cout << array[i][j] << "     ";
       }
       cout << endl;
   }
  while(fine != 0){
   
   while(control != 0){
    cout << "Turno prima persona scrivi numero riga:" ;
    cin >> p1;
    cout << "Turno prima persona scrivi numero colonna:" ;
    cin >> p11;
      if(array[p1][p11] == '-'){
        array[p1][p11] = 'X';
        control = 0;
      }
      else
        cout << "Spazio già occupato reinserire..." << endl;
      }  
    control = 1;
     cout << "  "  << "0" << "     " << "1" << "     " << "2" << endl;
      for(int i = 0; i < N; i++){
       cout << i << " ";
       for(int j = 0; j < N; j++){
           cout << array[i][j] << "     ";
       }
       cout << endl;
   }
   rimanente--;
      if(array[0][0] == 'X' && array[0][1] == 'X' && array[0][2] == 'X' ||
   array[1][0] == 'X' && array[1][1] == 'X' && array[1][2] == 'X' ||
   array[2][0] == 'X' && array[2][1] == 'X' && array[2][2] == 'X' ||
   array[0][0] == 'X' && array[1][0] == 'X' && array[2][0] == 'X' ||
   array[0][1] == 'X' && array[1][1] == 'X' && array[1][2] == 'X' ||
   array[0][2] == 'X' && array[1][2] == 'X' && array[2][2] == 'X' ||
   array[0][0] == 'X' && array[1][1] == 'X' && array[2][2] == 'X' ||
   array[0][2] == 'X' && array[1][1] == 'X' && array[2][0] == 'X'){
     cout << "Giocatore uno vince." << endl;
     fine = 0;
   }
   if(rimanente > 0 && fine == 1){
   while(control != 0){
    cout << "Turno seconda persona scrivi numero riga:" ;
    cin >> p2;
    cout << "Turno seconda persona scrivi numero colonna:" ;
    cin >> p22;
      if(array[p2][p22] == '-'){
        array[p2][p22] = 'O';
        control = 0;
      }
      else
        cout << "Spazio già occupato reinserire..." << endl;
      }  
    control = 1;
     cout << "  "  << "0" << "     " << "1" << "     " << "2" << endl;
      for(int i = 0; i < N; i++){
       cout << i << " ";
       for(int j = 0; j < N; j++){
           cout << array[i][j] << "     ";
       }
       cout << endl;
   }
   rimanente--;
   }
      if(array[0][0] == 'O' && array[0][1] == 'O' && array[0][2] == 'O' ||
   array[1][0] == 'O' && array[1][1] == 'O' && array[1][2] == 'O' ||
   array[2][0] == 'O' && array[2][1] == 'O' && array[2][2] == 'O' ||
   array[0][0] == 'O' && array[1][0] == 'O' && array[2][0] == 'O' ||
   array[0][1] == 'O' && array[1][1] == 'O' && array[1][2] == 'O' ||
   array[0][2] == 'O' && array[1][2] == 'O' && array[2][2] == 'O' ||
   array[0][0] == 'O' && array[1][1] == 'O' && array[2][2] == 'O' ||
   array[0][2] == 'O' && array[1][1] == 'O' && array[2][0] == 'O'){
     cout << "Giocatore due vince." << endl;
     fine = 0;
   }
     if(rimanente == 0){
     cout << "Pareggio." << endl;
     fine = 0;
     }
  }
   
  return 0;
}
