#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void f(float x,float y){
    cout << "perimeter : " << (x+y)*2;
}

int main(){
    float a,b;
    cin >> a >> b;
    f(a,b);
    getch();
}

/*

->2
->3
perimeter : 10

*/