/* -----------------------------------------------------------------------------
 
 * File Name:  main.cpp
 * Author: Alicia Zavala
 * Assignment:   EECS-168 Lab 2
 * Description:  This program will find how many barrels, bunches, and single bananas it will be packaged.
 * Date: 02/05/19
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <math.h>

int main()
{
	int banana,barrel,bunches,singles;
	std::cout<<"How many bananas do you have? ";
	std::cin>>banana;
	barrel=(banana)/32;
	std::cout<<"Barrels:"<<barrel<<"\n";
	bunches=((banana)%32)/8;
	std::cout<<"Bunches:"<<bunches<<"\n";
	singles=((banana)%32)%8;
	std::cout<<"Singles:"<<singles<<"\n";
return(0);
}

