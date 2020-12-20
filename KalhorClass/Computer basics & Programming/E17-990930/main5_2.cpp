#include <iostream>
#include <conio.h>

using namespace std;
const int n = 5;
int main(){
    float x[n],s=0;
    for(int i=0;i<n;i++){
        cout << "Enter x[" << i << "] : ";
        cin >> x[i];
        s+=x[i];
    }
    cout<<"average = "<< s/n;

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