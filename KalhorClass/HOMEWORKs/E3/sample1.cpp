//jesus corset

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x;
    cout << "Enter a number : ";
    cin >> x;
    for(int i=0;i<x;i++)
    {
        for(int j=x-1;j>i;j--)
            cout << "-";
        for(int n=1;n<i+2;n++)
            cout << n;
        cout << endl;
    }
    getch();
}