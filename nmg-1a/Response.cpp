#include "Response.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Response::Response(): numCorrect(0), numIncorrect(0) {}


void Response::setCorrect(int correct){
    if (correct < 0) {
        numCorrect = 0;
        return;
    }
   numCorrect = correct;
}

const int Response::getCorrect(){
    return numCorrect;
}

void Response::setIncorrect(int incorrect){
    if (incorrect < 0) {
        numIncorrect = 0;
        return;
    }
    numIncorrect = incorrect;
}

const int Response::getIncorrect(){
    return numIncorrect;
}

//overloaded operator == compares responses and returns true
//if they are equal 
bool operator==(Response& lhs, Response& rhs){
    return (lhs.getCorrect() == rhs.getCorrect()) && (lhs.getIncorrect() == rhs.getIncorrect());
}

//overloaded operator << that prints a response
ostream& operator<<(ostream&out, Response& A){
    out << "Correct: " << A.getCorrect() << "\tIncorrect: " << A.getIncorrect() <<endl;
    return out;
}








