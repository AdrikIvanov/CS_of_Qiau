#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    for(int i=0;i<x;i++)
    {
        for(int j=1;j<=y;j++)
            cout<<j<<"-";
        cout<<"\b "<<endl;
    }
    getch();
}

/*

->5 3
1-2-3
1-2-3
1-2-3
1-2-3
1-2-3

*/