#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char x[100];
    int n=1;
    cout << "Write character : ";
    cin.get(x,100);
    for(int i=0;x[i]!=NULL;i++)
        if(x[i]==' ' && x[i-1]!=' ')
            n++;
    cout << n;
    getch();
}


/*

->Write character : in fard    ali       ast.
4

*/