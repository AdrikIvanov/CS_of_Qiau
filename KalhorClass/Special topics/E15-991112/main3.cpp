#include <iostream>
#include <conio.h>

using namespace std;
float f(int a[],int len,int *max){
    float sum = 0;
    *max=a[0];
    for(int i=0;i<len;i++){
        if(a[i]>=*max)
            *max=a[i];
        sum += a[i];
    }
    return sum/len;
}
int main(){
    int a[5],z[10],max;
    cout << "Enter numbers : \n";
    for(int i=0;i<5;i++){
        cout << "a[" << i << "] : ";
        cin >> a[i];
    }
    cout << "average : " << f(a,5,&max) << endl;
    cout << "max : " << max << endl << endl;

    
    cout << "Enter numbers : \n";
    for(int i=0;i<10;i++){
        cout << "z[" << i << "] : ";
        cin >> z[i];
    }
    cout << "average : " << f(z,10,&max) << endl;
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
average : 3
max : 5

Enter numbers :
->z[0] : 1
->z[1] : 2
->z[2] : 3
->z[3] : 4
->z[4] : 5
->z[5] : 6
->z[6] : 7
->z[7] : 8
->z[8] : 9
->z[9] : 10
average : 5.5
max : 10

*/
