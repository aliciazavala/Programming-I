#include<iomanip>
#include<iostream>
#include"EmployeeDriver.h"
using namespace std;

bool EmployeeDriver::Employer2 = false;

void EmployeeDriver::obtainEmployee(){
    int phonenumber;
    string name="";
    string dept;
    double salary;
    bool valid;
    cout<< "Input Employee Information: \n";
    cout<<"Name: ";
    getline(cin,name);
    if(EmployeeDriver::Employer2 == false)
        valid = emp1.setName(name);
    else
        valid = emp2.setName(name);
    if(valid == false){
        cout<<"Invalid, try again \n";
        cin>>name;
    }

    cout<<"Phone: ";
    cin>>phonenumber;
    if(EmployeeDriver::Employer2 == false)
        valid = emp1.setPhoneNumber(phonenumber);
    else
        valid = emp2.setPhoneNumber(phonenumber);
    if(valid == false){
        cout<<"Invalid, try again \n";
        cin>>phonenumber;
    }

    cout<<"Salary: ";
    cin>>salary;
    if(EmployeeDriver::Employer2 == false)
        valid = emp1.setSalary(salary);
    else
        valid = emp2.setSalary(salary);
    if(valid == false){
        cout<<"Invalid, try again \n";
        cin>>salary;
    }
    cout<<"Department: ";
    cin>>dept;
    if(EmployeeDriver::Employer2 == false)
        valid = emp1.setDepartment(dept);
    else
        valid = emp2.setDepartment(dept);
    if(valid == false){
        cout<<"Invalid, try again \n";
        cin>>dept;
    }

   if(EmployeeDriver::Employer2 == false)
        EmployeeDriver::Employer2 = true;
   else
        EmployeeDriver::Employer2 = false;
    cin.ignore();
}

void::EmployeeDriver::printEmployees(){
cout<<"\nEmployee 1:\nName: "<<emp1.getName()<<"\nPhone: "<<emp1.getPhoneNumber()<<"\nSalary: "<<emp1.getSalary()<<"\nDepartment: "<<emp1.getDepartment()<<"\n";
cout<<"\nEmployee 2:\nName: "<<emp2.getName()<<"\nPhone: "<<emp2.getPhoneNumber()<<"\nSalary: "<<emp2.getSalary()<<"\nDepartment: "<<emp2.getDepartment();

if(emp1.getDepartment() == emp2.getDepartment()){
    cout<<"\nThe employees work in the same department";
}
else{
    cout<<"\nThe employees work in different departments";
}
}

void EmployeeDriver::run(){
    obtainEmployee();
    obtainEmployee();
    printEmployees();
}