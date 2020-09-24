/* -----------------------------------------------------------------------------
 
 * File Name:  main.cpp
 * Author: Alicia Zavala
 * Assignment:   EECS-168 Lab 2
 * Description:  This program will convert the input temperature from Fahrenheit to Celsius.
 * Date: 02/05/19
 *
 ---------------------------------------------------------------------------- */
#include <iostream>

int main()
{
	double Far, Cel;
	std::cout<<"Enter the temperature in Fahrenheit:°";
	std::cin>>Far;
	Cel=(Far-32)*(5.0/9.0);
	std::cout<<"Temperature in Fahrenheit:°"<<Far<<"\n";
	std::cout<<"Temperature in Celsius:°"<<Cel<<"\n";
return(0);
}
