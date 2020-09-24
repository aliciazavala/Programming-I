/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Alicia Zavala
 * Assignment:   EECS-168/169 Lab 5
 * Description:  This code will create an array and input form the user the size of it, input the values for the array
 display the values and alculate sum, average, min, and max for the array of doubles.
 * Date: 03/22/2019
 *
 ---------------------------------------------------------------------------- */
#include<iostream>

int main(){
double nums[5], sum = 0, avg = 0, min, max = 0;
std::cout << "Please enter 5 numbers\n";
for(int i=0;i<5;++i){
	std::cout << "Input a number into your array: ";
	std::cin >> nums[i];
	sum = sum + nums[i];
		    }
avg = sum / 5.0;
min = nums[0];
std::cout<<"Here are all the numbers in your array:\n";
for(int j=0;j<5;++j){
	std::cout<<nums[j]<<'\n';
	if(nums[j]>max){
	max = nums[j];
	}
	if(nums[j]<min){
	min = nums[j];
	}
		}
std::cout << "The sum of all the values is: "<< sum << "\nThe average of all the values is: " << avg << "\nThe largest value is: " << max << "\nThe smallest value is: " << min << '\n';
return(0);
}
