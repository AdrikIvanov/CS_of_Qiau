#include <iostream>
#include <conio.h>
using namespace std;
int main (){
int x[10],flag=0,i;
    cout << "enter numbers= ";
 for (i=0 ; i<=9 ; i++)
    cin >> x[i];
    cout << "result= ";
 for(i=0 ; i<=9 ; i++)
    if(x[i]>100 && x[i]<1000){
        flag=1;
        cout <<x[i]<<" , " << endl << "please enter to exsit...";}
    if(flag==0){
        cout << "error!"<< endl << "please enter to exsit...";}
getch();
} 
