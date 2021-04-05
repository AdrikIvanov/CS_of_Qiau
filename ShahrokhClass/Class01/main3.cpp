#include <iostream>
#include <math.h>

using namespace std;

struct Point{
    int x;
    int y;
};

float distToOrigin(Point &);
float distToAnotherPoint(Point &,Point &);

int main(){
    Point p1,p2;
    cout << "Coordinates of p1 " << endl;
    cout << "| X1 : ";
    cin >> p1.x;
    cout << "| Y1 : ";
    cin >> p1.y;
    cout <<endl<< "Coordinates of p2 " << endl;
    cout << "| X2 : ";
    cin >> p2.x;
    cout << "| Y2 : ";
    cin >> p2.y;
    cout << endl << "***********************************" << endl;
    cout << "Point1 to origin : " << distToOrigin(p1) << endl;
    cout << "Point2 to origin : " << distToOrigin(p2) << endl;
    cout << "Distance from each other : " << distToAnotherPoint(p1,p2) << endl;
    cout <<"***********************************" << endl;
    cin.get();
    cin.get();
}

float distToOrigin(Point &p){
    return sqrt(pow(p.x,2)+pow(p.y,2));
}

float distToAnotherPoint(Point &p1,Point &p2){
    return sqrt( pow(p2.x-p1.x,2) + pow(p2.y-p1.y,2) );
}


/*

Coordinates of p1
| X1 : 7
| Y1 : 9

Coordinates of p2
| X2 : -4
| Y2 : 5

***********************************
Point1 to origin : 11.4018
Point2 to origin : 6.40312
Distance from each other : 11.7047
***********************************

*/
