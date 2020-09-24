/* -----------------------------------------------------------------------------
 *
 * File Name:  DMV.h
 * Author: Alicia Zavala
 * Assignment:   EECS-168 Lab 10
 *
 ---------------------------------------------------------------------------- */
#ifndef DMV_h
#define DMV_h
#include<iostream>
#include "DriversLicenseRecord.h"
#include<string>

class DMV
{

int totalRecords;
DriversLicenseRecord* allRecords;
int numberOfVoters;    // optional but may be required for menu option # 04

public:
DMV(string fileName);
void run();

};
#endif
