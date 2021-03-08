/*

Enter Number for Star : 4
   *
  ***
 *****
*******

*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter Number for Star : ";
    cin>>n;
    if (n < 0)
        n *= -1;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 0 ; j < n-i ; j++)
            cout<<" ";
        for(int j = 0 ; j < 2*i-1 ; j++)
	        cout<<"*";
		cout<<"\n";
    }
    cin.get();
    cin.get();
    return 0;
}

