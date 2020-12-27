#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char x[100];
    int n=0,L;
    cout << "Write character : ";
    cin.get(x,100);
    for(int i=0;x[i]!=NULL;i++)
        if(x[i]==' ' && x[i-1]!=' ')
            n++;
    L = strlen(x);
    if(x[L-1]!=' ')
        n++;
    cout << n;
    getch();
}