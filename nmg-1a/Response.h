#pragma once
#ifndef RESPONSE_H
#define RESPONSE_H
#include "iostream"
//store the response to a guess (number correct and number incorrect)
class Response {
public:
	Response();
	void setCorrect(int correct);
	const int getCorrect();
	void setIncorrect(int incorrect);
	const int getIncorrect();


private:
	int numCorrect;
	int numIncorrect;
};

bool operator==(Response& lhs, Response& rhs);
std::ostream& operator<<(std::ostream& out, Response& A);
#endif