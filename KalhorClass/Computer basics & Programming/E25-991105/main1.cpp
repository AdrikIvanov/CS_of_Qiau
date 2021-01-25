#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x,y,*p;
    p = &y;
    cout << "Enter num : ";
    cin >> *p;
    cout << "y : " << y << endl;
    x = *p;
    cout << "x : " << x << endl;
    cout << "address of y : " << p;
    getch();
}


/*

->Enter num : 14
y : 14
x : 14
address of y : 0x61ff04

*/