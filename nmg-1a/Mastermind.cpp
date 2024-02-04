#include <iostream>
#include <cstdlib>
#include "Mastermind.h"
using namespace std;

int codeSize, codeLimit;

//default value for n = 5 and m = 10
Mastermind::Mastermind(){
    codeSize = 5;
    codeLimit = 10;
}

//read value from keyboard
Mastermind::Mastermind(int n, int m){
    codeSize = n;
    codeLimit = m;
}

//a function prints secret code
void Mastermind::printSecretCode(){
    for (int i = 0; i < codeSize;) {
		codeSequence.push_back(rand()%codeLimit);
		i++;
	}
    cout << "The Secret Code is: " << codeSequence;
}

//humanGuess() read a guess from the keyboard
//return a code object that represents the guess
Code Mastermind::humanGuess(){
    cout << "Enter " << codeSize << " code values in range 0<x<" << codeLimit << endl;
	int value;
	for (int i = 0; i < codeSize;) {
		//cout << "Enter values " << i << ": ";
		cin >> value;
		if (value <= 0 || value > codeLimit) {
			cout << "\nError, value out of bound. Please enter new value\n";
			continue;
		}
		codeSequence.push_back(value);
		i++;
	}
    return codeSequence;
}

//getResponse() pass one code (guess code)
//return a response
Code Mastermind::getResponse(Code& guess){
    return guess;
}


//isSolved() pass a response
//return true if the response indicates that the board has been solved
bool Mastermind::isSolved(Code& Response){
    return Response. == codeSequence. ;
}



    
    
void Mastermind::playGame(){
    //initialize a random code, print it to the screen
    printSecretCode();

    //iteratively get a guess from the user and print the response
    while (true){
      

    
    //until either the codemaker or the codebreaker has won 
    if (isSolved()){


        }
    }
}


