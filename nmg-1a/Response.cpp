#include "Response.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Response::Response(): numCorrect(0), numIncorrect(0) {}


void Response::setCorrect(int correct){
   numCorrect = correct;
}

const int Response::getCorrect(){
    return numCorrect;
}

void Response::setIncorrect(int incorrect){
    numIncorrect = incorrect;
}

const int Response::getIncorrect(){
    return numIncorrect;
}

//overloaded operator == compares responses and returns true
//if they are equal 
bool operator==(Response& lhs, Response& rhs){
    return (lhs.numCorrect == rhs.numCorrect) && (lhs.numIncorrect == rhs.numIncorrect);
}

//overloaded operator << that prints a response
ostream& operator<<(ostream&out, Response& A){
    out << "Correct: " << A.numCorrect << "Incorrect: " << A.numIncorrect <<endl;
    return out;
}








