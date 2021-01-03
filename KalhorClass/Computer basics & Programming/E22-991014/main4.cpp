#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char x[100],y;
    int c=0;
    cin.get(x,100);
    cout<<"Enter a character : ";
    cin >> y;
    for(int i=0;x[i]!=NULL;i++)
        if(x[i]==y)
           c++; 
    cout<<"Result : "<<c;
    getch();
}


/*

this is a test.
Enter a character : t
Result : 3

*/