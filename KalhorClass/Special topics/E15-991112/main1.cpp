#include <iostream>
#include <conio.h>

using namespace std;
int f(int a[],int *min){
    int max=a[0];
    *min = a[0];
    for(int i=1;i<10;i++){
        if(a[i]>max)
            max=a[i];
        if(a[i]<*min)
            *min=a[i];
    }
    return max;
}
int main(){
    int a[10],min;
    cout << "Enter numbers : \n";
    for(int i=0;i<10;i++){
        cout << "a[" << i << "] : ";
        cin >> a[i];
    }
    cout << "max : " << f(a,&min) << endl;
    cout << "min : " << min;
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
max : 10
min : 1

*/
