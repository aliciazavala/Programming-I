/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Alicia Zavala Ferreira
 * Assignment:   EECS-168 Lab 4
 * Description:  This program will make the user guess a random number between 1 and 100 and won't end until the user guesses the correct number.
 * Date: 04/05/2019
 *
 ---------------------------------------------------------------------------- */
#include<iostream>
#include <stdlib.h>
#include <time.h>

int main(){
    int guess=0,tries=0,closest=100,number=0;char quit = 0;
    std::cout<<"Welcome to the number guessing game.\n";
    do{
        number = rand() % 100 + 1 ;
        do
        {
            std::cout<<"Guess a number:";
            std::cin>>guess;tries++;
            if(guess < number){
                std::cout<<"Sorry, your guess is too low.\n";
                if(abs(number-guess)<closest){
                    closest=guess;
                }
            }
            else if (guess > number) {
                std::cout<<"Sorry, your guess is too high.\n";
                if(abs(number-guess)<closest && number<closest){
                    closest=guess;
                }
            }
            else{
                std::cout<<"You win!\nYou guessed the secret number after "<<tries<<" guess(es).\nYour closest guess was "<<closest<<"\nWould you like to play again? (y/n):";
                std::cin>>quit;
                tries = 0;
                closest=100;
            }
        }while(guess != number);
    }while(quit != 'n' && quit !='N');
    return(0);
}
