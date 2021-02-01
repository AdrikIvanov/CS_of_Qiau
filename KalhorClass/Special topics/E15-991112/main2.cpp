#include <iostream>
#include <conio.h>

using namespace std;
float f(int a[],int *max){
    float sum = 0;
    *max=a[0];
    for(int i=0;i<10;i++){
        if(a[i]>=*max)
            *max=a[i];
        sum += a[i];
    }
    return sum/10;
}
int main(){
    int a[10],max;
    cout << "Enter numbers : \n";
    for(int i=0;i<10;i++){
        cout << "a[" << i << "] : ";
        cin >> a[i];
    }
    cout << "average : " << f(a,&max) << endl;
    cout << "max : " << max;
    getch();
}

/*

Enter numbers :
->a[0] : 1
->a[1] : 2
->a[2] : 3
->a[3] : 4
->a[4] : 5
->a[5] : 6
->a[6] : 7
->a[7] : 8
->a[8] : 9
->a[9] : 10
average : 5.5
max : 10

*/
