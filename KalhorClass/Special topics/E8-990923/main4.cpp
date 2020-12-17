#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x;
    cout<<"enter one number:";
    cin>>x;
    for(int i=x;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    getch();
}


/*

->5
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1

*/