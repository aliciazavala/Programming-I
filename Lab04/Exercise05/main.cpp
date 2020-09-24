/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Alicia Zavala Ferreira
 * Assignment:   EECS-168 Lab 4
 * Description:  This program will print a 10x10 board of dashes,obtain a coordinate from the user to draw a big plus sign made of the '+' characters
 * Date: 04/05/2019
 *
 ---------------------------------------------------------------------------- */
#include<iostream>
#include<string>

int main(){
int row,col,i=0;
do{
std::cout<<"Input a coordinate to draw a big plus (row col): ";
std::cin>>row>>col;
if(row >=10 || col>=10){
    std::cout<<"Invalid coordinates\n";
}}while(row >=10 || col>=10);
std::cout<<' ';
while(i<10){
    std::cout<<' '<<i;
    i++;
}
std::cout<<std::endl;
for(int i=0;i<=9;i++)
{
    std::cout<<i<<" ";
    for(int j=0;j<=9;j++)
    {
        if(i==row-1&&j==col)
            std::cout<<"+ ";
        else if(i==row&&(j==col-1||j==col||j==col+1))
            std::cout<<"+ ";
        else if(i==row+1&&j==col)
            std::cout<<"+ ";
        else
            std::cout<<"- ";
    }
std::cout<<std::endl;
}
return(0);
}
