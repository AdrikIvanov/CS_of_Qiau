#include <iostream>
#include <conio.h>


using namespace std;

int f(int x,int y,int z){
    int s=x;
    if(s<y)
        s=y;
    if(s<z)
        s=z;
    return s;
    
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << "largest : " << f(a,b,c);
    getch();
}


/*

->4 6 2
largest : 6

*/