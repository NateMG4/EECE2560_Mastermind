#include <iostream>
#include <cstdlib>
#include "Mastermind.h"
using namespace std;


//default value for n = 5 and m = 10
Mastermind::Mastermind(){
    codeSize = 5;
    codeLimit = 10;
    code = new Code(5, 10);
}

//read value from keyboard
Mastermind::Mastermind(int n, int m){
    codeSize = n;
    codeLimit = m;
    code = new Code(codeSize, codeLimit);
}

//a function prints secret code
void Mastermind::printSecretCode(){

    cout << "The Secret Code is: " << *code << endl;
}

//humanGuess() read a guess from the keyboard
//return a code object that represents the guess
Code Mastermind::humanGuess(){
    cout << "Enter " << codeSize << " code values in range 0<x<" << codeLimit << endl;
    vector<int> sequence;
	int value;
	for (int i = 0; i < codeSize;) {
		//cout << "Enter values " << i << ": ";
		cin >> value;
		if (value < 0 || value >= codeLimit) {
			cout << "\nError, value out of bounds. Please enter new value\n";
			continue;
		}
		sequence.push_back(value);
		i++;
	}
    return Code(sequence);
}

//getResponse() pass one code (guess code)
//return a response
Response Mastermind::getResponse(Code& guess){
    Response r;
    r.setCorrect(code->checkCorrect(guess));
    r.setIncorrect(code->checkIncorrect(guess));
    return r;
}


//isSolved() pass a response
//return true if the response indicates that the board has been solved
bool Mastermind::isSolved(Response& rhs){
    Response lhs = getResponse(*code);
    return lhs == rhs;
}



    
    
void Mastermind::playGame() {
    //initialize a random code, print it to the screen
    code->randomCodeSelection();
    printSecretCode();

    bool solved;
    int roundNum = 0;
    //iteratively get a guess from the user and print the response
    do {
        cout << "Round #" << ++roundNum << endl;
        Code g = humanGuess();
        Response response = getResponse(g);
        cout << response << endl;
        solved = isSolved(response);
        //until either the codemaker or the codebreaker has won 
    } while (!solved && roundNum <= 10);

    cout << (solved ? "Codebreaker" : "Codemaker") << " Wins!" << endl;


}