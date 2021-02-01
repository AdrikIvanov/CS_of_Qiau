#include <iostream>
#include <conio.h>

using namespace std;
void f(char s[],char x){
    for(int i=0;s[i]!=NULL;i++)
        if(s[i]==x)
            cout << i << "   ";
}
int main(){
    char str[100],c;
    cout << "Enetr string : ";
    cin.get(str,100);
    cin.get();
    cout << "Enter char : ";
    cin >> c;
    cout << "result : ";
    f(str,c);
    getch();
}

/*

->Enetr string : start
->Enter char : t
result : 1   4

*/