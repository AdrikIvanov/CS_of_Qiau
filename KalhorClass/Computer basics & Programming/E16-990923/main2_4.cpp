#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x,y=0;
    char ans='y';
    for(int i=0;ans=='y' || ans=='Y';i++)
    {
        cout<< endl <<"enter a number:";
        cin>>x;
        y=y+x;
        cout<<"do you wanna countinue? ";
        ans = getche();
    }
    cout <<"\nsum is = " << y;
    getch();
}