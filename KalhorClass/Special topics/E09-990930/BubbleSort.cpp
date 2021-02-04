#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int temp;
    int x[10] = {1,7,3,6,2,5,4,9,8,0};
    for(int i=9 ; i>=0 ; i--){
        for(int j=0 ; j<i ; j++)
            if(x[j] > x[j+1]){
                temp = x[j+1];
                x[j+1]=x[j];
                x[j]=temp;
            }
    }
    for(int i=0 ; i<10 ; i++)
        cout << x[i] << " ";

  getch();
}