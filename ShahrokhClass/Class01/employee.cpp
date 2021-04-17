#include <iostream>
#include <string.h>

using namespace std;

const int len = 5;

struct emp{
    char   *name;
    char   *family;
    double  salary;
};

emp arrEmp[len];

void mySwap(emp &e1, emp &e2)
{
    emp temp;
    temp = e1;
    e1 = e2;
    e2 = temp;
}
// Bubble sort
void mySort(emp er[], int l)
{
    for(int i = 0; i < l-1; i++)
        for(int j = 0; j < l-i-1; j++)
            if (er[j].salary < er[j+1].salary)
                mySwap(er[j], er[j+1]);
}

int main()
{
    // Read Employee Array
    char *na, *f;
    na = new char[20];
    f = new char[30];
    for (int i=0; i < len; i++)
    {
        cout << "Enter info for Employee " << i+1 << endl;
        cout << "Name?\n";
        cin >> na;
        arrEmp[i].name = new char[strlen(na)+1];
        strcpy(arrEmp[i].name, na);
        cout << "Family?\n";
        cin >> f;
        arrEmp[i].family = new char[strlen(f)+1];
        strcpy(arrEmp[i].family, f);
        cout << "Salary?\n";
        cin >> arrEmp[i].salary;
    }

    delete [] na;
    delete [] f;

    // Sort Employee based on salary (Descending)
    mySort(arrEmp, len);
    // Display Result

    for(int i=0; i < len; i++)
    {
        cout << "===========================\n";
        cout << "Employee " << i+1 << "th:" << endl;
        cout << arrEmp[i].name << endl;
        cout << arrEmp[i].family << endl;
        cout << arrEmp[i].salary << endl;
    }
    return 0;
}
