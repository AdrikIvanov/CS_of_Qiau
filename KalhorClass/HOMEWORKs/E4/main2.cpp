#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x[10],i=0;
    while(cin >> x[i++],i<10);
    while(i-->0){
        if(100<=x[i] && x[i]<=999)
            cout << x[i] << "\t";
    }
    getch();
}