#include <iostream>
#include <string.h>

using namespace std;

const int EMP_NUM = 4;

struct Employee{
    string name;
    string last_name;
    string gender;
    double salary;
};

void info(Employee &);
bool check_gender(string);
void avg(Employee [],int, double &, double &);

int main(){
    Employee emp[EMP_NUM];
    double averageMale=0,averageFemale=0;
    for(int i=0;i<EMP_NUM;i++)
        info(emp[i]);
    avg(emp, EMP_NUM, averageFemale, averageMale);
    cout << "-> Average women salary : " << averageFemale << endl;
    cout << "-> Average men salary : " << averageMale << endl;
    cin.get();
}

bool check_gender(string g){
    if(g=="male" || g=="female")
        return true;
    cout << ">> Wrong <<" <<endl;
    return false;
}


void info(Employee &emp){
    static int id=1;
    cout << "Enter information of Employee " << id++ << endl;
    cout << "| Name : ";
    getline(cin, emp.name);
    cout << "| Last name : ";
    getline(cin, emp.last_name);
    do{
        cout << "| gender(male or female) : ";
        getline(cin, emp.gender);
    }while(!check_gender(emp.gender));
    cout << "| salary : ";
    cin >> emp.salary;
    cout << endl;
    cin.ignore();
}

void avg(Employee emp[],int len, double &female, double &male){
    int m_counter=0,f_counter=0;
    for(int i=0;i<len;i++){
        if(emp[i].gender=="female"){
            female += emp[i].salary;
            f_counter++;
        }
        else{
            male += emp[i].salary;
            m_counter++;
        }
    }
    female /= f_counter;
    male /= m_counter;
}