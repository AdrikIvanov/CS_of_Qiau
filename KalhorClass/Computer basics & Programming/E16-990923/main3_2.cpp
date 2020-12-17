#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n1,n2,i,temp;
    cin >> n1 >> n2;
    if(n2<n1){
        temp = n2;
        n2=n1;
        n1=temp;
    }
    if(n1%2!=0)
        n1++;
    for(i=n1 ; i<=n2 ; i+=2)
        cout<<i << " , ";
    getch();
}