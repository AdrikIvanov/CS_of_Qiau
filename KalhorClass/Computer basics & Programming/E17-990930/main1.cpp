#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for(int i=n;i>=1;i--)
    {
        for(int k=n-i;k>=1;k--)
            cout<<"-";
        for(int j=i;j>=1;j--)
            cout<<j;
        cout<<endl;
    }
    
    getch();
}

/*

->5(user input)
54321
-4321
--321
---21
----1

*/