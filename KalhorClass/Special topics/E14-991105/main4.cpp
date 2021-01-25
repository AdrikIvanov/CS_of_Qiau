#include <iostream>
#include <conio.h>

using namespace std;
float f(float array[],float *b){
    float max=array[0];
    for(int i=0;i<5;i++){
        if(array[i]>=max)
            max = array[i];
        *b+=array[i];
    }
    return max;

}
int main(){
    float x[5],y=0;
    cout << "Enter five number : ";
    for(int i=0;i<5;cin>>x[i++]);
    cout << "max : " << f(x,&y);
    cout << "\naverage : " << y/5;

    getch();
}


/*

-> Enter five number : 1 2 3 4 5
max : 5
average : 3

*/
