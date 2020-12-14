//Mohammad mehdi
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x,y;
    char z,v;
    cout << "hello" << endl;
    for(int m=0 ; m<=10 ; m++){
        cout << "write two numbers= ";
        cin >> x >> y;
        cout << "enter * or / or + or - or % = ";
        v=getche();
        switch (v){
        case '*': cout << "\nresualt= "<< x*y << endl;
            break;
        case '/': cout << "\nresualt= "<< x/y << endl;
            break;
        case '+': cout << "\nresualt= "<< x+y << endl;
            break;
        case '-': cout << "\nresualt= "<< x-y << endl;
            break;
        case '%': cout << "\nresualt= "<< x%y << endl;
            break;
        default: cout << "\nError!"<< endl;}
        cout << endl << "do you want using again ? (y or n)= ";
        cin >> z;
        if (z=='y'){cout <<endl;}
        else if (z=='n'){
            cout << endl << "*End*" << endl;
            break;}
        else {
            cout << endl << "Error!!!" << endl;
            break;}   
    }
    getch();
}