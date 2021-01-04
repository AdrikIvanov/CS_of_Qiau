#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char name[5][100];
    for(int i=0;i<5;i++){
        cin.get(name[i],100);
        cin.get();
    }
    cout<<"result : ";
    for(int i=0;i<5;i++)
        if(strlen(name[i])==4)
            cout<<name[i]<<"\t";
    getch();
}


/*

->mehdi
->amir
->asad
->akbar
->ahmad
result : amir   asad

*/