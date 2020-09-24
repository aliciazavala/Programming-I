/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Alicia Zavala Ferreira
 * Assignment:   EECS-168 Lab 4
 * Description:  This program will print a triangle of asterisks of size n
 * Date: 04/05/2019
 *
 ---------------------------------------------------------------------------- */
#include<iostream>
#include<string>

int main(){
int size;
std::cout<<"Enter the number of asterisks for the base of the triangle: ";
std::cin>>size;
for(int i=0;i<size;i++){
    for(int j=0;j<=i;j++){
        std::cout<<'*';
    }
std::cout<<'\n';
}
return(0);
}
