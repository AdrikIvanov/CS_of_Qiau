// Mehdi
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x[10];
    for(int i=0;i<10;i++){
        cout<< "Enter x[" << i << "] : ";
        cin>>x[i];
    }
    for(int i=0;i<10;i++)
        if(100<=x[i] && x[i]<1000)
            cout<<x[i]<<"\t";
    getch();
}
