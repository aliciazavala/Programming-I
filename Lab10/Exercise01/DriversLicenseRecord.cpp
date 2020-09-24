/* -----------------------------------------------------------------------------
 *
 * File Name:  DriversLicenseRecord.cpp
 * Author: Alicia Zavala
 * Assignment:   EECS-168 Lab 10
 *
 ---------------------------------------------------------------------------- */
#include "DriversLicenseRecord.h"

string DriversLicenseRecord::getFirstName(){
return firstName;
}
string DriversLicenseRecord::getLastName(){
return lastName;
}

int DriversLicenseRecord::getAge(){
return age;
}

char DriversLicenseRecord::getVoterStatus(){
return voterStatus;
}

int DriversLicenseRecord::getLicenseNumber(){
return licenseNumber;
}

void DriversLicenseRecord::setFirstName(string firname){
firstName = firname;
}

void DriversLicenseRecord::setLastName(string lname){
lastName = lname;
}

void DriversLicenseRecord::setAge(int num){
age = num;
}

void DriversLicenseRecord::setVoterStatus(char status){
voterStatus = status;
}

void DriversLicenseRecord::setLicenseNumber(int number){
licenseNumber = number;
}
