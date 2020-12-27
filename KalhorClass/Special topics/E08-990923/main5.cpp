#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=i;j<=a;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    getch();
}


/*

->5
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5

*/