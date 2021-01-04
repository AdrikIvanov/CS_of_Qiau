#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char name[5][100];
    for(int i=0;i<5;i++){
        cin.get(name[i],100);
        cin.get();
    }
    for(int i=0;i<5;i++)
        cout<<name[i]<<"\t";
    getch();
}


/*

->akbar
->mehdi
->ahmad
->ali
->amir
akbar   mehdi   ahmad   ali     amir

*/