#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x,y,*n,*p;
    p = &y;
    n = &x;
    cout << "Enter y : ";
    cin >> *p;
    cout << "Enter x : ";
    cin >> *n;
    cout << "y : " << y << endl;
    cout << "x : " << x << endl;
    cout << "(before)value of p : " << *p << endl;
    p = n;
    cout << "(after)value of p : " << *p << endl;
    getch();
}


/*

->Enter y : 14
->Enter x : 10
y : 14
x : 10
(before)value of p : 14
(after)value of p : 10

*/