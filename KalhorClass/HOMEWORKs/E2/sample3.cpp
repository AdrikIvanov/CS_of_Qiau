//mehdi
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x,y;
    char s,i='y';
    for(i;i=='y';i=getch())
    {
        cout << "Enter Two number and a sign(like: number sign number): ";
        cin >> x >> s >> y;
        switch(s)
        {
            case '+':cout << "Result : " << x+y;break;
            case '-':cout << "Result : " << x-y;break;
            case '/':cout << "Result : " << x/y;break;
            case '*':cout << "Result : " << x*y;break;
            default:cout << "WRONG";
        }
        cout << "\nAgain?(y/n)\n\n";
    }
    cout << "okey bye!";
    getch();
}