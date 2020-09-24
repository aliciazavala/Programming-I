/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Alicia Zavala
 * Assignment:   EECS-168 Lab 7
 * Description:  This program will take a single int at the command-line and displays whether or not that integer is a palindrome.
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#include<iostream>
//Returns the last digit of an integer n (e.g. lastDigit(17) returns 7, lastDigit(1) returns 1)
int lastDigit(int n){
    return n%10;
}
// Returns the same value as n, but the last digit is removed (e.g. removeLast(123) returns 12)
int removeLast(int n){
    return n/10;
}
//Returns the reverse of an integer n (e.g. reverse(12345) returns 54321)
int reverse(int n){
    int rev = 0;
    while(n>0)
    {
    rev = rev*10 + lastDigit(n);
    n = removeLast(n);}
    return rev; 
}
bool isPalindrome(int n){
    if(n == reverse(n)){
    return(true);
    }
    else{
        return(false);
}
}
int main(int argc, char* argv[]){
int n;
std::cout<<"Enter a value: ";
std::cin>>n; 
if(isPalindrome(n)){
std::cout<<"The number is a palindrome\n";
}
else{
std::cout<<"The number is not a palindrome\n";
}
}
