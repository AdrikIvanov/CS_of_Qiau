#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float x[5];
    for(int i=0;i<=4;i++){
        cout << "enter x[" << i << "] : ";
        cin >> x[i];
    }
    cout << "result is = ";
    for(int i=0;i<=4;i+=2){
        cout<<x[i]<<" ";
    }

    getch();
}


/*

->enter x[0] : 25
->enter x[1] : 14
->enter x[2] : 32
->enter x[3] : 74
->enter x[4] : 52
result is = 25 32 52

*/