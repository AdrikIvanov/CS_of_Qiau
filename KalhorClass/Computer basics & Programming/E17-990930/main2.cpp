#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for(int i=n;i>=1;i--)
    {
        for(int k=i-1;k>=1;k--)
            cout<<"-";
        for(int j=i;j<=n;j++)
            cout<<j;
        cout<<endl;
    }
    getch();
}


/*

->5(user input)
----5
---45
--345
-2345
12345

*/