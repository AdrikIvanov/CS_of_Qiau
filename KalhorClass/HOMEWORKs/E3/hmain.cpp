#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n;
    cout << "enter number : ";
    cin >> n;
    for(int i=0;i<=n;i++)
    {
        for(int j=n;j>i;j--)
            cout << "-";
        for(int m=1;m<=i;m++)
            cout << m;
        cout << endl;
    }
    getch();
}