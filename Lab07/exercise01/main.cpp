/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Alicia Zavala
 * Assignment:   EECS-168 Lab 7
 * Description:  This program will input two numbers from the command-line and display the sum of all values from one to the other 
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
#include <stdlib.h>
using namespace std;
int sum(int n1,int n2);
//smaller to larger number
int smaller(int n1,int n2){
   int s = sum(n1,n2);
   return s;
   }
//function checks the larger value
int larger(int n1,int n2){
   if(n1==n2){ 
       cout<< "\nTied" << endl; 
        return 1;  
   }
   else if(n1>n2)
       cout<<"\nLarger value is: "<<n1;
   else
       cout<<"\nLarger value is: "<<n2;
   return 1;
   }
//sum
int sum(int n1,int n2){
   int s1=0; 
   if(n1<n2){ 
       for(int i=n1;i<=n2;i++) 
           s1+=i; 
   cout<<"Summation from "<<n1<<" to "<< n2 <<": " <<s1;}
   else{
       for(int i=n2;i<=n1;i++)
           s1+=i; 
       cout<<"Summation from "<<n2<<" to "<< n1 <<": " <<s1; 
       }
    return 1;
    }
int main(int argc, char* argv[]){
   if(argc != 3)
    {cout<< "2 numbers are required\n" << endl;
        return 1;
        }
   int n1 = atoi (argv[1]); 
   int n2 = atoi (argv[2]);
       smaller(n1,n2); 
       larger(n1,n2);
       sum(n1,n2);
return 0;
}
