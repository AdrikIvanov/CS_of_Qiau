#include <iostream>
#include <conio.h>
using namespace std;
int main (){
int x,sum=0; 
char ans='y';

while (ans=='y'){
  cout << "write one number= ";
  cin >>x;
    sum+=x; 
  cout <<"sum= "<< sum <<"\ncontinue?(y or n)= ";
   ans=getche();
  cout << endl;}
}

/*

write one number= 5
sum= 5
continue?(y or n)= y
write one number= 8
sum= 13
continue?(y or n)= n
...exit

*/   