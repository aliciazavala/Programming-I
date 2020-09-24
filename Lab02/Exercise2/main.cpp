/* -----------------------------------------------------------------------------
 
 * File Name:  main.cpp
 * Author: Alicia Zavala
 * Assignment:   EECS-168 Lab 2
 * Description:  This program will solve the quadratic equation.
 * Date: 02/05/19
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <math.h>

int main()
{
	double a,b,c,r1,r2;
	std::cout<<"Input a: ";
	std::cin>>a;
	std::cout<<"Input b: ";
	std::cin>>b;
	std::cout<<"Input c: ";
	std::cin>>c;
	double disc=sqrt((b*b)-(4*a*c));
	r1=((-b)+disc)/(2*a);
	r2=((-b)-disc)/(2*a);
	std::cout<<"Root 1: "<<r1<<"\n";
	std::cout<<"Root 2: "<<r2<<"\n";
return(0);
}
