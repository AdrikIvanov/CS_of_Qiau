#include <iostream>
#include <conio.h>

using namespace std;
float mohit_masahat(float x,float y,float *z){
    *z = (x+y)*2;
    return x*y;
}

int main(){
    float a,b,c;
    cin >> a >> b;
    cout << "masahat : " << mohit_masahat(a,b,&c) << endl;
    cout << "mohit : " << c; 
    getch();
}

/*

->2 3
masahat : 6
mohit : 10

*/