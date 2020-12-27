#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char x[100];
    int n=0;
    cout<<"Enter character : ";
    cin.get(x,100);
    for(int i=0;x[i]!=NULL;i++){
        if((x[i]>='A' && x[i]<='Z') || (x[i]>='a' && x[i]<='z'))
            n++;
    }
    cout << n;
    getch();
}


/*

->Enter character : 123a*Vsn
4

*/