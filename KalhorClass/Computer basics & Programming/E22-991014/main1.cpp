#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char str[100];
    int count=0;
    cin.get(str,100);
    for(int i=0;str[i]!=NULL;i++)
        count++;
    cout <<"lenstr : "<<count;
    getch();
}


/*

->hello world
lenstr : 11

*/