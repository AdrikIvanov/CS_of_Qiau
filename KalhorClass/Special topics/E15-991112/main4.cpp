#include <iostream>
#include <conio.h>

using namespace std;

long int f(int n){
    if(n==0)
        return 1;
    else
        return n*f(n-1);
}
int main(){
    int x;
    cout << "Enter num => ";
    cin >> x;
    cout << f(x);
    getch();
}

/*

->Enter num => 5
120

*/