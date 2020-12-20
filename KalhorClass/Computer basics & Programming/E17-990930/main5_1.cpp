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
    cout<<"average = "<< s/5;

    getch();
}

/*

->Enter x[0] : 1
->Enter x[1] : 2
->Enter x[2] : 3
->Enter x[3] : 4
->Enter x[4] : 5
average = 3

*/