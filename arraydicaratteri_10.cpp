#include <iostream>
using namespace std; 
int main() {
  
   char stringa[100];

cout << "Insert string: " << endl;
cin >> stringa;
bool loop = false;
int l = 0;

while(stringa[l] != '\0')
l++;
for(int i = 0;i<l;i++)
 {
     for(int j = i+1; j<l;j++)
     {
         if(stringa[j]==stringa[i])
         {
             loop = true;
             break;
         }
         else
         {
             if(l-j<=1)
             break;
             loop=false;
             
         }
     }
     if(loop==false)
     break;
 }
 if(loop==true)
 cout<<"true"<<endl;
 else
 cout<<"false"<<endl;
    return 0;
}
