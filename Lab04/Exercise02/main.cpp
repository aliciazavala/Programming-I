/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Alicia Zavala Ferreira
 * Assignment:   EECS-168 Lab 4
 * Description:  This program will make the user guess a secret word and won't end until the user guesses the correct word.
 * Date: 04/05/2019
 *
 ---------------------------------------------------------------------------- */
#include<iostream>
#include<string>

int main(){
    std::string guess;std::string word;int letters=0;char quit=0;
    do{
        word="valentine";
        do
        {
            std::cout<<"Guess a word: ";
            std::cin>>guess;
            do{
            if(guess != word){
                if(guess.length() > 9){
                    std::cout<<"The word is shorter\n";
                }
                else if(guess.length() < 9){
                    std::cout<<"The word is longer\n";
                }
                else if(guess.length() == 9){
                    if(guess.at(0) == 'v'){
                        letters=letters+1;
                    }
                    if(guess.at(1) == 'a'){
                        letters=letters+1;
                    }
                    if(guess.at(2) == 'l'){
                        letters=letters+1;
                    }
                    if(guess.at(3) == 'e'){
                        letters=letters+1;
                    }
                    if(guess.at(4) == 'n'){
                        letters=letters+1;
                    }
                    if(guess.at(5) == 't'){
                        letters=letters+1;
                    }
                    if(guess.at(6) == 'i'){
                        letters=letters+1;
                    }
                    if(guess.at(7) == 'n'){
                        letters=letters+1;
                    }
                    if(guess.at(8) == 'e'){
                        letters=letters+1;
                    }
                    std::cout<<"You have "<<letters<<" letter(s) correct\n";
                    letters=0;
                }
                std::cout<<"Incorrect. Guess again: ";
                std::cin>>guess;
            }
            }while(guess!=word);
            
            if(guess == word){
                std::cout<<"You win!\nWould you like to play again? (y/n): ";
                std::cin>>quit;
            }
        }while(guess != word);
    }while(quit != 'n' && quit !='N');
    return(0);
}
