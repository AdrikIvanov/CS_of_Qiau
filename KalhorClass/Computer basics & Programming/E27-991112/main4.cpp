#include <iostream>
#include <conio.h>

using namespace std;
int f(char a[],char b){
    int count=0;
    char c;
    if(b>='a' && b<='z')
        c=b-32;
    if(b>='A' && b <='Z')
        c=b+32;
    for(int i=0;a[i]!=NULL;i++)
        if(a[i]==b || a[i]==c)
            count++;
    return count;
}
int main(){
    char a[100],b;
    cout << "Enetr string : ";
    cin.get(a,100);
    cin.get();
    cout << "Enter char : ";
    cin >> b;
    cout << "result : " << f(a,b);
    getch();
}

/*

Enetr string : starT
Enter char : T
result : 2

OR

Enetr string : starT
Enter char : t
result : 2

*/