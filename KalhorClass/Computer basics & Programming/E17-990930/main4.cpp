#include <iostream>
#include <conio.h>

using namespace std;
int main(){
    float x[5],s=0;
    for(int i=0;i<5;i++){
        cout << "Enter x[" << i << "] : ";
        cin >> x[i];
        s+=x[i];
    }
    cout<<"Sum = "<< s;

    getch();
}

/*

->Enter x[0] : 2
->Enter x[1] : 6
->Enter x[2] : 4
->Enter x[3] : 7
->Enter x[4] : 2
Sum = 21

*/