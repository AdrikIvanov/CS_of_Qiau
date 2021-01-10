#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char x[5][100];
    int y=0;

    for(int i=0;i<5;i++){
        cout<<"Enter a name : ";
        cin.get(x[i],100);
        cin.get();
    }

    cout<<"\n\nResult : \n";
    for(int i=0;i<5;i++){
        y = strlen(x[i]);
        if(x[i][y-1]=='a' || x[i][y-1]=='A')
            cout<<x[i]<<"\t";
    }
    getch();
}


/*

-> Enter a name : mina
-> Enter a name : ali
-> Enter a name : sara
-> Enter a name : ahmad
-> Enter a name : akbar


Result :
mina    sara

*/