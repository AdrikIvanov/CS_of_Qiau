#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

float f(float x,float y,float z){
    return (x+y+z)/3;
}

int main(){
    float a,b,c;
    cin >> a >> b >> c;
    cout << "average : " << f(a,b,c);
    getch();
}


/*

-> 1
-> 2
-> 3
average : 2

*/