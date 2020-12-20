#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float x[5];
    for(int i=0;i<5;i++){
        cout << "Enter x["<< i <<"] : ";
        cin >> x[i];
    }
    for(int i=0;i<5;i++){
        cout<<x[i]<<"\t";
    }

    getch();
}


/*

->Enter x[0] : 1
->Enter x[1] : 2
->Enter x[2] : 3
->Enter x[3] : 4
->Enter x[4] : 5
1       2       3       4       5

*/