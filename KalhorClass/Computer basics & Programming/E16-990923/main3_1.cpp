#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x,y,temp;
    cout << "Enter two number : ";
    cin >> x >> y;
    if(x>y)
    {
        temp = x;
        x=y;
        y=temp;
    }
    for(x;x<=y;x++)
    {
        if(x%2==0)
            cout<<x<<"\t";
    }
    getch();
}