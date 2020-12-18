// Mohammad Mahdi
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int x=5;
 for(int y=1; y<=x ; y++){
     for (int z=x-1 ; z>=y ; z--)
         cout << '-';
      for (int v=1 ; v<y+1  ;v++)
    cout << v;   
         cout << endl; 
 } 
   getch();
}