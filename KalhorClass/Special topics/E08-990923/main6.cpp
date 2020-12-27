#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int y;
    cin>> y;
    for(int i=1;i<=y;i++)
    {
        for(int j=y;j>=i;j--)
            cout << j <<"-";
        cout<<"\b "<<endl;
    }
    getch();
}


/*

->5
5-4-3-2-1
5-4-3-2
5-4-3
5-4
5

*/