/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Alicia Zavala Ferreira
 * Assignment:   EECS-168 Lab 4
 * Description:  This program will print an nxn checkerboard with dimensions obtained by user
 * Date: 04/05/2019
 *
 ---------------------------------------------------------------------------- */
#include<iostream>
#include<string>

int main(){
int size;char a,b,e;
a='A';
b='B';
std::cout<<"Input size of your board (nxn):";
std::cin>>size;
for (int i = 1; i <= size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            if (j % 2 == 0)
            {
                std::cout << a;
            }
            else
            {
                std::cout << b;
            }
        }
        e = a;
        a = b;
        b = e;
        std::cout << std::endl;
    }
return(0);
}
