#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

float f(float x,float y){
    return (x+y)*2;
}

int main(){
    float a,b;
    cin >> a >> b;
    cout << "perimeter : " <<f(a,b);
    getch();
}

/*

->2
->3
perimeter : 10

*/