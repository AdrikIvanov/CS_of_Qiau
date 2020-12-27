#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int arr[10],s=0;
    cout << "Enter 10 number : ";
    for(int i=0;i<10;i++){
        cin >> arr[i];
        if(i%2==0)
            s+=arr[i];
    }
    cout << "sum : " << s;
    getch();
}


/*

->Enter 10 number : 1 2 3 4 5 6 7 8 9 0
sum : 25

*/