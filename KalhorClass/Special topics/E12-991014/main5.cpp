#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char x[5][100];

    for(int i=0 ; i<=4 ; i++){
        cout<<"enter name "<<i<<" = ";
        cin.get(x[i],100);
        cin.get();
    }

    for(int i=0; i<=4 ; i++)
        if(x[i][0]=='a')
            cout << x[i] << "\t";
    
    getch();
}


/*

enter name 0 = ali
enter name 1 = amin
enter name 2 = mehdi
enter name 3 = sadegh
enter name 4 = saeed
ali     amin

*/