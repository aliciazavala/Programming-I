/* -----------------------------------------------------------------------------
 *
 * File Name:  DriversLicenseRecord.h
 * Author: Alicia Zavala
 * Assignment:   EECS-168 Lab 10
 *
 ---------------------------------------------------------------------------- */
#ifndef DriversLicenseRecord_h
#define DriversLicenseRecord_h
#include<iostream>
#include<string>
using namespace std;


class DriversLicenseRecord{

private:
	string firstName;
	string lastName;
	int age;
	char voterStatus;
	int licenseNumber;

public:

	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setAge(int age);
	void setVoterStatus(char voterStatus);
	void setLicenseNumber(int licenseNumber);

	string getFirstName();
	string getLastName();
	int getAge();
	char getVoterStatus();
	int getLicenseNumber();

};
#endif
