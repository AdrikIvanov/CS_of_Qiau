#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char x[100];
    int n=0;
    cout<<"write character : ";
    cin.get(x,100);
    for(int i=0;x[i]!=NULL;i++){
        if(x[i]=='a' || x[i]=='A')
            n++;
    }
    cout << n;
    getch();
}


/*

->write character : asanngAAfkkf aa
6

*/