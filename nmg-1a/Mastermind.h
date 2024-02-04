#ifndef MASTERMIND_H
#define MASTERMIND_H

#include "Code.h"
#include "Response.h"

class Mastermind{

public:

    //constructor passed no parameters, use default value
    Mastermind();

    //constructor passed values of n and m read from keyboard
    Mastermind(int n, int m);

    //a function prints secret code
    void printSecretCode();

    //humanGuess() read a guess from the keyboard
    //return a code object that represents the guess
    Code humanGuess();

    //getResponse() pass one code (guess code)
    //return a response
    Response getResponse(Code& guess);

    //isSolved() pass a response
    //return true if the response indicates that the board has been solved
    bool isSolved(Code& guess);

    //playGame() initialize a random code, print it to the screen 
    //iteratively get a guess from the user and print the response
    //until either the codemaker or the codebreaker has won 
    void playGame();
private:
    int codeSize, codeLimit;

    //secret code
    Code* code;
};

#endif