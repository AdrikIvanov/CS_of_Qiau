#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char x[100],y[100];
    int i;
    cin.get(x,100);
    cin.get();
    cin.get(y,100);
    for(i=0;x[i]!=NULL;i++){
    }

    for(int j=0;y[j]!=NULL;j++)
        x[i++]=y[j];
    x[i]=NULL;
    cout<<"Result : "<<x;
    getch();
}


/*

->this is
->test.
Result : this is test.

*/