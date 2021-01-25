#include <iostream>
#include <conio.h>

using namespace std;
int f(int a,int b,int *c){
    *c = a*b;
    return a+b;
}
int main(){
    int x,y,z;
    cout << "Enter x : ";
    cin >> x;
    cout << "Enter y : ";
    cin >> y;
    cout << "sum : " << f(x,y,&z);
    cout << "\nmultiplication : " << z; 
    getch();
}


/*

->Enter x : 2
->Enter y : 3
sum : 5
multiplication : 6

*/