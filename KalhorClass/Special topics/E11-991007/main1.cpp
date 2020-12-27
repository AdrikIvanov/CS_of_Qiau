#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char x[100];
    cout<<"Enter character : ";
    cin.get(x,100);
    for(int i=0;x[i]!=NULL;i++){
        if(x[i]>='a' && x[i]<='z')
            x[i]-=32;
    }
    cout << x;
    getch();
}


/*

Enter character : hshhhsga
HSHHHSGA

*/