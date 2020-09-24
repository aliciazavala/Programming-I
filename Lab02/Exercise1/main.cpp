/* -----------------------------------------------------------------------------
 
 * File Name:  main.cpp
 * Author: Alicia Zavala
 * Assignment:   EECS-168 Lab 2
 * Description:  This program will solve the hypotenuse of a right triangle.
 * Date: 02/05/19
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <math.h>

int main()
{
	double a,b,c;
	std::cout<<"Will use the formula a^2 + b^2 = c^2 to solve for the hypotenuse of a triangle.\n";
	std::cout<<"Input a value for a:";
	std::cin>>a;
	std::cout<<"Input a value for b:";
	std::cin>>b;
	double sum=(a*a)+(b*b);
	c=sqrt(sum);
	std::cout<<"The hypotenuse is:"<<c<<"\n";

return(0);
}

