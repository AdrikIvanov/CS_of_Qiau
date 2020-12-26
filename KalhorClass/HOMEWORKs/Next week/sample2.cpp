// Mohammad Mahdi 
#include <iostream>
#include <conio.h>
using namespace std;
int main (){
int x[10],flag=0,i;
 cout << "write 10 number= ";
   for (i=0 ; i<=9 ; i++)
      cin >> x[i];
      cout << "result= ";
   for(i=0 ; i<=9 ; i++)
      if(x[i]>=100 && x[i]<1000){
         flag=1;
         cout <<x[i]<<" , ";}
      if(flag==0){
         cout << "error!";}
getch();
} 
                                                            
