#include <iostream>

using namespace std;

const int EMP_NUMBERS = 5;

struct Employee{
    int id;
    string first_name;
    string last_name;
    double salary;
};

void getInfo(Employee &, int);
void sortRichest(Employee[]);
void printInfo(const Employee &, int);

int main(){
    Employee emp[EMP_NUMBERS];
    for(int i=0;i<EMP_NUMBERS;i++)
        getInfo(emp[i],i+1);
    sortRichest(emp);
    for(int i=0;i<EMP_NUMBERS;i++)
        printInfo(emp[i],i+1);
    cin.get();
    cin.get();
}

void getInfo(Employee &emp,int id){
    cout << "Enter Information of Employee " << id << endl;
    cout << "| First name : ";
    getline(cin, emp.first_name);
    cout << "| Last name : ";
    getline(cin, emp.last_name);
    cout << "| salary : ";
    cin >> emp.salary;
    cin.get();
    cout << endl;
}

void sortRichest(Employee emp[]){
    Employee temp;
    for(int i=EMP_NUMBERS-1;i>=0;i--){
        for(int j=1;j<=i;j++)
            if(emp[j].salary > emp[j-1].salary){
                temp = emp[j-1];
                emp[j-1] = emp[j];
                emp[j] = temp;
            }
    }
}

void printInfo(const Employee &emp,int id){
    cout << endl << id << ".";
    cout << endl << " | " << "First name : " << emp.first_name;
    cout << endl << " | " << "last name : " << emp.last_name;
    cout << endl << " | " << "salary : " << emp.salary << endl;
}