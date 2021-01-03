#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char x[100];
    cin.get(x,100);
    for(int i=0;x[i]!=NULL;i++)
        if(x[i]>='A' && x[i]<='Z')
           x[i]='*'; 
    cout<<"Result : "<<x;
    getch();
}


/*

->thIs IS a TesT.
Result : th*s ** a *es*.

*/