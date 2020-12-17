#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x,y=0;
    char ans='y';
    for(int i=0;ans=='y';i++)
    {
        cout<<"enter a number:";
        cin>>x;
        y=y+x;
        cout<<"do you wanna countinue? ";
        cin >> ans;
    }
    cout <<"sum is = " << y;
    getch();
}