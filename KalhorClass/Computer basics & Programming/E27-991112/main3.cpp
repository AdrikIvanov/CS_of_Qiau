#include <iostream>
#include <conio.h>

using namespace std;
void f(char a[],char b,char c){
    for(int i=0;a[i]!=NULL;i++)
        if(a[i]==b)
            a[i]=c;
}
int main(){
    char a[100],b,c;
    cout << "Enetr string : ";
    cin.get(a,100);
    cin.get();
    cout << "Enter char : ";
    cin >> b >> c;
    cout << "result : ";
    f(a,b,c);
    cout << a;
    getch();
}

/*

->Enetr string : start
->Enter char : t *
result : s*ar*

*/