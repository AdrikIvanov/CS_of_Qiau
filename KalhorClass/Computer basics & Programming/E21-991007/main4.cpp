#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char x[100];
    cout<<"write character : ";
    cin.get(x,100);
    for(int i=0;x[i]!=NULL;i++){
        if(x[i]=='a' || x[i]=='A')
            x[i]='*';
    }
    cout << x;
    getch();
}


/*

->write character : aldsfasalk
*ldsf*s*lk

*/