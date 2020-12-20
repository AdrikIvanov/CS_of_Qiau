#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float x[5];
    for(int i=0;i<5;i++){
        cout << "Enter a number : ";
        cin >> x[i];
    }
    for(int i=0;i<5;i++){
        cout<<x[i]<<"\t";
    }

    getch();
}


/*

->Enter a number : 1
->Enter a number : 2
->Enter a number : 3
->Enter a number : 4
->Enter a number : 5
1       2       3       4       5

*/