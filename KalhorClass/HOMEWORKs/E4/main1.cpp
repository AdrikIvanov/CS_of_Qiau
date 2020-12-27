#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x[10];
    cout << "Enter 10 Number : ";
    for(int i=0;i<10;cin >> x[i++]);
    for(int i=0;i<10;i++)
        if(100<=x[i] && x[i]<=999)
            cout << x[i] << "\t";
    getch();
}
