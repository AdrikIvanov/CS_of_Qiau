#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char x[100];
    cout<<"Enter character : ";
    cin.get(x,100);
    for(int i=0;x[i]!=NULL;i++){
        if(x[i]>='0' && x[i]<='9')
            x[i]='*';
    }
    cout << x;
    getch();
}


/*

->Enter character : 1234567890abc
**********abc

*/