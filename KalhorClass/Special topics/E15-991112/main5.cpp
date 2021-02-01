#include <iostream>
#include <conio.h>

using namespace std;

long int p(int x,int y){
    if(y==0)
        return 1;
    else
        return x*p(x,y-1);
}
int main(){
    int a,b;
    cout << "Enter two number : ";
    cin >> a >> b;
    cout << p(a,b);
    getch();
}

/*

Enter two number : 2 4
16

*/