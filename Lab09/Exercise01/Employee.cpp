#include "Employee.h"

bool Employee::setPhoneNumber(int num){
    int numberDig = getNoOfDig(num);
    if(numberDig == 7){
        phoneNumber = num;
        return true;
    }
    return false;
}

bool Employee::setName(string emName){
    if(emName == "")
    return false;
    name = emName;
    return true;
}

bool Employee::setDepartment(string dept){
    if(dept == "MARKETING" || dept == "R&D" || dept == "GLOBAL"){
        department = dept;
        return true;
    }
    return false;
}

bool Employee::setSalary(double emSalary){
    if( emSalary > 0){
        salary = emSalary;
        return true;
    }
    return false;
}