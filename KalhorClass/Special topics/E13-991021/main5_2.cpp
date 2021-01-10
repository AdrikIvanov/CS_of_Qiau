#include <iostream>
#include <conio.h>


using namespace std;

int f(int x[]){
    int s=0;
    for(int i=0;i<4;i++)
        if(x[i]>s)
            s=x[i];
    
    return s;
}

int main(){
    int a[4];
    for(int i=0;i<4;i++)
        cin>>a[i];
    cout << "largest : " << f(a);
    getch();
}


/*

->36
->93
->27
->26
largest : 93

*/