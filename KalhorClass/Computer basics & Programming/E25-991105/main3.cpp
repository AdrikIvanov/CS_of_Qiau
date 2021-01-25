#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x[10];
    for(int i=0;i<10;i++)
        cin>>*(x+i);
    for(int i=0;i<10;i++)
        cout << "x[" << i << "] : " << *(x+i) << endl;
    getch();
}


/*

0 1 2 3 4 5 6 7 8 9
x[0] : 0
x[1] : 1
x[2] : 2
x[3] : 3
x[4] : 4
x[5] : 5
x[6] : 6
x[7] : 7
x[8] : 8
x[9] : 9

*/