#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int aray[3][4];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<< "Enter aray[" << i << "][" << j << "] : ";
            cin>>aray[i][j];
        }
    }


    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
            cout<<aray[i][j]<<"  ";
        cout<<endl;
    }


    getch();
}


/*

->Enter aray[0][0] : 1
->Enter aray[0][1] : 2
->Enter aray[0][2] : 3
->Enter aray[0][3] : 4
->Enter aray[1][0] : 5
->Enter aray[1][1] : 6
->Enter aray[1][2] : 7
->Enter aray[1][3] : 8
->Enter aray[2][0] : 9
->Enter aray[2][1] : 10
->Enter aray[2][2] : 1
->Enter aray[2][3] : 12
1  2  3  4
5  6  7  8
9  10  1  12

*/