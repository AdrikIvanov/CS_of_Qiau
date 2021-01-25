#include <iostream>
#include <conio.h>

using namespace std;
void swap(float *a,float *b){
    float temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    float x,y;
    cout << "Enter two number : ";
    cin>>x>>y;
    swap(&x,&y);
    cout << "x : " << x << endl << "y : " << y;

    getch();
}


/*

-> Enter two number : 8 4
x : 4
y : 8

*/