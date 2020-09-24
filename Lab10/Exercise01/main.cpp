/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Alicia Zavala
 * Assignment:   EECS-168 Lab 10
 * Description:  This program will read in Drivers License Records from file and then let's the user interact with the data.
 *
 ---------------------------------------------------------------------------- */

#include<fstream>
#include<iostream>
#include "DMV.h"
using namespace std;

int main(int argc, char* argv[])
{
if( argc > 1 ){
    string fileName = argv[1];
    ifstream inFile;
    inFile.open(fileName);
    if(inFile.good()){
    DMV myDMV(fileName);
    myDMV.run();}
    else{
       cout<<"File not found.\n";
    }
   }
else{
   return 0;
}
}

