#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x;
    cout<<"enter one number:";
    cin>>x;
    for(int i=x;i>=1;i--){
        for(int j=1 ; j<=i ; j++)
            cout<<j<<" ";
        cout<<endl;
    }
    getch();
}

/*

->5
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/