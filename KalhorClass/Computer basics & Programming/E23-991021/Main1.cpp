#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char x[5][100];
    char y[100];
    for(int i=0;i<5;i++){
        cout<<"Enter a name : ";
        cin.get(x[i],100);
        cin.get();
    }
    cout<<"Enter a name for search : ";
    cin.get(y,100);
    for(int i=0;i<5;i++){
        if(strcmp(x[i],y)==0){
            cout<<x[i]<<" exist in the names.index : "<<i<<"\n";
            getch();
            return 0;
        }
    }
    cout<<y<<" doesn't exit in the names.";
    getch();
}


/*

-> Enter a name : ali
-> Enter a name : akbar
-> Enter a name : ahmad
-> Enter a name : mina
-> Enter a name : akbar
-> Enter a name for search : ahmad
ahmad exist in the names.index : 2

*/