#include <iostream>
#include <string.h>

using namespace std;

class Saving
{
    private:
        static float rate;
        double savebal;
        string name;
        unsigned account_id;
    public:
        void calculate();
        static void set_rate(float);
        void Set(int, string, double);
        double get_bal();
        static float get_rate();
        void printInfo();
};

float Saving::rate = 0.18;

void Saving::calculate(){
    savebal += (savebal*rate)/12;
}

void Saving::set_rate(float r){
    rate = (r>=0 && r<=1)? r : 0 ;
}

void Saving::Set(int i, string n, double b){
    account_id = i;
    name = n;
    savebal = (b >= 0)? b : -1*b;
}

double Saving::get_bal(){
    return savebal;
}

float Saving::get_rate(){
    return rate;
}
void Saving::printInfo(){
    cout << endl;
    cout << ">>> name : " << name << endl;
    cout << ">>> Account ID : " << account_id << endl;
    cout << ">>> savebal : " << savebal << endl;
    cout << endl;
}

int main(){
    Saving s;
    string myName;
    unsigned myID;
    double myBal;
    float myRate;

    cout << "Enter your account info:\n";
    cout << ">>> your name: ";
    getline(cin, myName);
    cout << "\n>>> your ID: ";
    cin >> myID;
    cout << "\n>>> your balance: ";
    cin >> myBal;

    s.Set(myID, myName, myBal);

    cout << "\ninterest rate?\n";
    cin >> myRate;
    s.set_rate(myRate);

    s.calculate();
    s.printInfo();
    return 0;
}
