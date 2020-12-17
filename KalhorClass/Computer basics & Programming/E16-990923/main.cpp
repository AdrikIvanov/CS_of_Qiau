#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter number of repetation:";
    cin >> n;
    float x,sum=0;
    for(int i=1;i<=n;i++)
    {
        cout << "Enter one float number:";
        cin>>x;
        sum= sum+x;
    }
    cout<<"result is:"<<sum;
    getch();
}