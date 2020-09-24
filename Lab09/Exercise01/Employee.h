#ifndef Employee_H
#define Employee_H
#include<string>
using namespace std;

class Employee
{

int phoneNumber;
string name;
string department;
double salary;
int countDig(int phoneNumber);
int getNoOfDig(int num){
    int count = 0;
    while(num > 0){
        num = num/10;
        count++;
    }
    return count;
}

public:
int getPhoneNumber(void){return phoneNumber;}
string getName(void){return name;}
string getDepartment(void){return department;}
double getSalary(void){return salary;}

bool setPhoneNumber(int num);
bool setName(string name);
bool setDepartment(string dept);
bool setSalary(double salary);

};
#endif