#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char x[100];
    int c=0;
    cin.get(x,100);
    for(int i=0;x[i]!=NULL;i++)
        if(x[i]>='0' && x[i]<='9')
            c++;
    cout<<"Result : "<<c;
    getch();
}


/*

->Hell0 W0rld1
Result : 3

*/