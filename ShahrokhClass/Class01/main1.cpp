/*

Enter a number : 20
Result : 7

*/
#include <iostream>

using namespace std;

int f(int n){
    if (n <= 0)
        return -1;
    int cnt=0;
    while(n!=1){
        if(n%2==0)
            n= n/2;
        else
            n=(n*3) + 1;
        cnt++;
    }
    return cnt;
}

int main(){
    int number;
    cout << "Enter a number : ";
    cin >> number;
    cout << "Result : " << f(number);
    cin.get();
    cin.get();
    return 0;
}
