/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Alicia Zavala
 * Assignment:   EECS-168/169 Lab 5
 * Description: This code will create an array of strings, ask the user for the size of the array and words, and display the longest and shortest string
 * Date: 03/22/2019
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <string>

int main(){
std::string* word = nullptr; std::string longest,shortest;
int size = 0;
while(size<=0){
std::cout << "Input an array size for you words array: ";
std::cin >> size;
}
word = new std::string[size];
std::cout << "Now please enter " << size << " words \n";
for(int i = 0; i < size; ++i){
	std::cout << "Input a word: ";
	std::cin >> word[i];
			     }
longest = word[0];	
shortest = word[0];
for(int j = 0;j < size; ++j){
	if(word[j].length() > longest.length()){
	longest = word[j];
	}
	if(word[j].length() < shortest.length()){
	shortest = word[j];
	}
			     }
std::cout << "The longest word is: " << longest << "\nThe shortest word is: " << shortest << '\n';
delete[] word;
return(0);
}
