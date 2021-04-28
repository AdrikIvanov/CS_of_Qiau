#include <iostream>

using namespace std;

double mul_add(double , int );

int main()
{
    double x;
    int y;
    cout<<"Enter your numbers : ";
    cin>>x>>y;
    cout<<"The answer is : "<< x << '*' << y << '=';
    cout<<mul_add(x,y) << endl;
    return 0;
}

double mul_add (double x,int y)
{
    if (y<0)
    {
        y *= -1;
        x *= -1;
    }
    if (y == 0)
        return 0;
    else if ( y == 1)
        return x;  // base case
    else
        return x + mul_add(x, y-1); // recursive case
}
