/* -----------------------------------------------------------------------------
 *
 * File Name:  DMV.cpp
 * Author: Alicia Zavala
 * Assignment:   EECS-168 Lab 10
 *
 ---------------------------------------------------------------------------- */
#include <fstream>
#include<string>
#include "DMV.h"
using namespace std;

DMV::DMV(string fileName)
{
ifstream inFile;
inFile.open(fileName);
inFile >> totalRecords;
numberOfVoters=0; 
if(totalRecords>0)
{
allRecords=new DriversLicenseRecord[totalRecords];

for(int i=0;i<totalRecords;i++)
{
string fname;
inFile>>fname;
allRecords[i].setFirstName(fname);
string lname;
inFile>>lname;
allRecords[i].setLastName(lname);
int num;
inFile>>num;
allRecords[i].setAge(num);
char status;
inFile>>status;
allRecords[i].setVoterStatus(status);
int nums;
inFile>>nums;
allRecords[i].setLicenseNumber(nums);

if(allRecords[i].getVoterStatus() == 'Y'){
    numberOfVoters= numberOfVoters + 1;
}
}
inFile.close();
};

}
void DMV::run(){
int menuOption, license;
bool userFound = false;
while(1){
cout<<"1) Print all Drivers Info\n2) Print all Voters\n3) Print Specific Driver\n4) Create Registered Voter File\n5) Quit\nEnter your choice: \n";
cin>>menuOption;


if(menuOption == 1){
cout<<"Drivers Info\n";
for(int i = 0; i < totalRecords; i++){
cout<<allRecords[i].getLastName()<<","<<allRecords[i].getFirstName()<<" (";
cout<<allRecords[i].getAge()<<") : "<<allRecords[i].getLicenseNumber()<<"\n";
}
}

else if(menuOption == 2){
cout<<"Voters\n";
for(int i = 0; i < totalRecords; i++){
if(allRecords[i].getVoterStatus() == 'Y'){ 
cout<<allRecords[i].getFirstName()<<" "<<allRecords[i].getLastName()<<" (";
cout<<allRecords[i].getAge()<<") "<<allRecords[i].getLicenseNumber()<<"\n";
}}
}

else if(menuOption == 3){
cout<<"Input Drivers License Number : ";
cin>>license;
for(int i = 0; i < totalRecords; i++){
if(allRecords[i].getLicenseNumber() == license){
            cout << allRecords[i].getFirstName() << " ";
            cout << allRecords[i].getLastName() << " ";
            cout << allRecords[i].getAge() << " ";
            cout << allRecords[i].getVoterStatus() << " ";
            cout << allRecords[i].getLicenseNumber() << "\n";
userFound = true;
}}
if(userFound == false){
cout<<"No record found.\n";
}
}

else if(menuOption == 4){
string fileName;
cout<<"Enter a file name to create a record in:\n";
cin>>fileName;
ofstream outFile(fileName);
outFile << numberOfVoters << "\n";
    for(int i=0; i<totalRecords; i++)
    {
        if(allRecords[i].getVoterStatus() == 'Y')
        {
            outFile << allRecords[i].getFirstName() << " ";
            outFile << allRecords[i].getLastName() << " ";
            outFile << allRecords[i].getAge() << " ";
            outFile << allRecords[i].getVoterStatus() << " ";
            outFile << allRecords[i].getLicenseNumber() << "\n";
        }
    }
    outFile.close();
}
else if(menuOption == 5){
cout<<"\nExiting...\n";
delete[] allRecords;
break;
}
}
}
