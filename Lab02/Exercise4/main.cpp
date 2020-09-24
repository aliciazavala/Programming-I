/* -----------------------------------------------------------------------------
 
 * File Name:  main.cpp
 * Author: Alicia Zavala
 * Assignment:   EECS-168 Lab 2
 * Description:  This program will cast a character to an int.
 * Date: 02/05/19
 *
 ---------------------------------------------------------------------------- */
#include <iostream>

int main()
{
	char a='\0';
	std::cout<<"Input a character: ";
	std::cin>>a;
	std::cout<<"The ASCII value for "<<a<<" is: "<<(int)a<<"\n"<<"Goodbye!\n:";		
return(0);
}
