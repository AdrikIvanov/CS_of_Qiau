#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int i,n;
    float sum=0,num;
    cout<<"How many numbers?";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout << "enter number "<<i<<" : ";
        cin>>num;
        sum+=num;
    }
    cout<<sum/n;
    getch();
}