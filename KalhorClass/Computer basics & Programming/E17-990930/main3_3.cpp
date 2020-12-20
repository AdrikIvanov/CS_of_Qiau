#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float x[5];
    cout << "enter five number : ";
    for(int i=0;i<5;i++){
        // cout << "Enter x["<< i <<"] : ";
        cin >> x[i];
    }
    for(int i=0;i<5;i++){
        cout<<x[i]<<"\t";
    }

    getch();
}

/*

->enter five number : 1 2 3 4 5
1       2       3       4       5

*/