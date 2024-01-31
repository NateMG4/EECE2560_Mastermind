#pragma once
#ifndef RESPONSE_H
#define RESPONSE_H
#include "iostream"
class Response {
private:
	int numCorrect;
	int numIncorrect;

public:
	Response();
	void setCorrect(int correct);
	const int getCorrect();
	void setIncorrect(int incorrect);
	const int getIncorrect();
	bool operator==(Response& rhs);
	friend std::ostream& operator<<(std::ostream& lhs, Response& rhs);
};


#endif