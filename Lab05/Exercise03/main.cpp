/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Alicia Zavala
 * Assignment:   EECS-168/169 Lab 5
 * Description:  This code will read a file that contains the values for an array, but the first value is the size of the array and the user can search for a value inside the array and see if it is part of the array or not.
 * Date: 03/22/2019
 *
 ---------------------------------------------------------------------------- */
#include <fstream>
#include <iostream>

int main(){
int first=0;char quit = '\0';int value=0; bool f = false;
double* nums =nullptr;	
std::ifstream inFile; 	
inFile.open("input.txt");	
inFile >> first;	
nums = new double[first];
for(int i = 0;i < first; i++){		
	inFile >> nums[i];	
			     }	
std::cout << "Contents of input.txt:\n";	
std::cout<<'[';
for(int j = 0;j < 4; j++){
	std::cout << nums[j] << ", ";
			 }
std::cout<< nums[4]<< "]\n";

while(quit != 'y'){
	std::cout << "Input a value to search for: ";
	std::cin >> value;
	for(int k = 0;k < first; k++){
	if(value == nums[k]){
	std::cout << value << " is in the array.\n";
	f = true;
	}
	}
	if(f == false){
	std::cout << value << " is not in the array.\n";}
	std::cout << "Do you wish to quit (y/n):";
	std::cin >> quit;
	f = false;
	}			
delete[] nums;
return(0);
}
