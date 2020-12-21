#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int x[5],flag=0,s;
cout << "Numbers= ";
for (int i=0 ; i<=4 ; i++){
    cin >> x[i]; }
cout << "Which number index do you want? = ";
cin >> s;
for (int i=0 ; i<=4 ;i++)
   if(s==x[i]){
       flag=1;
       cout << "index of x is= "<< i;}
    if(flag==0)
        cout << "not found";
    
        getch();
   }

 /*

-> Numbers= 4 5 6 7 8
   Which number index do you want? = 6
   index of x is= 2

*/






