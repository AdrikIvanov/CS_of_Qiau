#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char x[5][100];
    char y[100];
    char p[100];

    for(int i=0;i<5;i++){
        cout<<"Enter a name : ";
        cin.get(x[i],100);
        cin.get();
    }

    cout<<"Enter a name for search : ";
    cin.get(y,100);
    cin.get();

    cout<<"Enter a name for replace : ";
    cin.get(p,100);
    
    for(int i=0;i<5;i++)
        if(strcmp(x[i],y)==0)
            strcpy(x[i],p);

    cout<<"\n\nResult :\n";
    for(int i=0;i<5;i++)
        cout<<x[i]<<"\t";

    getch();
}


/*

-> Enter a name : ali
-> Enter a name : asad
-> Enter a name : mina
-> Enter a name : akbar
-> Enter a name : reza
-> Enter a name for search : mina
-> Enter a name for replace : farhad


Result :
ali     asad    farhad  akbar   reza

*/