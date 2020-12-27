#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char x[100];
    int n=0;
    cout << "Write character : ";
    cin.get(x,100);
    for(int i=0;x[i]!=NULL;i++)
        if((x[i]=='a' && x[i-1]==' ') || (i==0 && x[i]=='a'))
            n++;
    cout << n;
    getch();
}


/*

->Write character : an fard ali ast
3

*/