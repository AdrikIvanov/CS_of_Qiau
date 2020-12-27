#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int i , j , n1 , n2;
    cin>>n1>>n2;
    for( i=1 ; i<=n1 ; i++){
        for( j=1 ; j<n2 ; j++)
            cout << "*";
        cout<<"\n";
    }
    getch();
}

/*

->12 6
*****
*****
*****
*****
*****
*****
*****
*****
*****
*****
*****
*****

*/