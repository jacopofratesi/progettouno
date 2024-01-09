#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
ofstream myfile;

char stringa[100];
char stringa1[100];
char let[100];
cout << "Insert the first string: " << endl;
cin >> stringa;
cout << "Insert the second string: " << endl;
cin >> stringa1;
int l = 0, k = 0, cont, cont_max = 0,letr = 0;

while(stringa[l] != '\0')
l++;
while(stringa1[k] != '\0')
k++;
myfile.open ("/tmp/example.txt");
for (int i = 0; i < l; i++){
 //cont = 0;
 for (int j = 0; j < k; j++){
  if (stringa[i] == stringa1[j])
   cont++;
   
 }
 
  if (cont > cont_max){
      
    cont_max = cont;
    
    let[cont]=stringa[i];
   cout<<let[cont]<<" ";
   myfile <<let[cont]<<" ";
   letr++;
   }
  
   
}
cout<<endl;

cout<<endl;
cout<< "Most repeated character in the  sentences " <<letr<<" times " << endl;

myfile <<endl<< "Most repeated character in the  sentences " << letr << " times" << endl;
myfile.close();
return 0;
}
