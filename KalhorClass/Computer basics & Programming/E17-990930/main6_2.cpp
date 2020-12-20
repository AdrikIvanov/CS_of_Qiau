#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float x[5];
    for(int i=0;i<=4;i++){
        cout << "enter x[" << i << "] : ";
        cin >> x[i];
    }
    cout << "result is = ";
    for(int i=0;i<=4;i+=2){
        if(i % 2 == 0)
            cout<<x[i]<<" ";
    }

    getch();
}


/*

enter x[0] : 25
enter x[1] : 41
enter x[2] : 654
enter x[3] : 24
enter x[4] : 78
result is = 25 654 78

*/