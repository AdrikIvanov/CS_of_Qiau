//jesus corset
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x,y;
    char s,z;
    for(int i=0;i<1;)
    {
        cout << "Enter numbers and sign:";
        cin >> x >> y >> s;
        switch(s)
        {
            case '+':cout << "Result : " << x+y;break;
            case '-':cout << "Result : " << x-y;break;
            case '/':cout << "Result : " << x/y;break;
            case '*':cout << "Result : " << x*y;break;
            default:cout << "Error";
        }
        cout << "\ndo you want again?";
        cin >> z;
        if(z=='n')
        {
            cout << "bye";
            getch();
            return 0;
        }
    }
}