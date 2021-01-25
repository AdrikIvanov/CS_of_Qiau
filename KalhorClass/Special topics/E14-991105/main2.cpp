#include <iostream>
#include <conio.h>

using namespace std;
float f(float a,float b,float *c,float *d,float *e){
    *c = a*b;
    *d = a-b;
    *e = a/b;
    return a+b;
}
int main(){
    float x,y,z,w,v;
    cout << "Enter x : ";
    cin >> x;
    cout << "Enter y : ";
    cin >> y;
    cout << "sum : " << f(x,y,&z,&w,&v);
    cout << "\nmultiplication : " << z; 
    cout << "\nx-y : " << w;
    cout << "\nx/y : " << v;
    getch();
}


/*

->Enter x : 6
->Enter y : 7
sum : 13
multiplication : 42
x-y : -1
x/y : 0.857143

*/