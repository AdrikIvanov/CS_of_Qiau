#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x[3][4],i,j;
    float sum=0;
    for(i=0;i<3;i++)
        for(j=0;j<4;j++){
            cout<<"enter ["<<i<<"]["<<j<<"] : ";
            cin>>x[i][j];
            sum+=x[i][j];
        }
    cout<<"avrage = "<<sum/12;
    getch();
}


/*

->enter [0][0] : 1
->enter [0][1] : 2
->enter [0][2] : 3
->enter [0][3] : 4
->enter [1][0] : 5
->enter [1][1] : 6
->enter [1][2] : 7
->enter [1][3] : 8
->enter [2][0] : 9
->enter [2][1] : 10
->enter [2][2] : 11
->enter [2][3] : 12
avrage = 6.5

*/