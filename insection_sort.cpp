#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#define N 6
int main()
{
    ifstream file("input.txt");
    string line;
    int array[6];
    getline(file, line);
    ofstream fileo("output.txt");
    fileo.is_open();
    int cal=0;
    for(int i=0;i<11;i++)
    {
        if(line.substr(i, 1)!=" ")
        {
            array[cal]=stoi(line.substr(i, 1));
            cal++;
        }
       
    }
    fileo<<"iniziale: "<<endl;
    for(int p=0;p<N;p++)
    fileo<<array[p]<<'\t';
    for(int j=0;j<N;j++)
    {
        int pos=j;
        for(int y=j+1;y<N;y++)
        {
            if(array[pos]>array[y])
            {
                pos=y;
            }
        }
        int temp = array[j];
        array[j]=array[pos];
        array[pos]=temp;
    }
    fileo<<endl;
    fileo<<"ordinato: ";
    fileo<<endl;
    for(int z=0;z<N;z++)
    fileo<<array[z]<<'\t';
}

