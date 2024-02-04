#pragma once
#ifndef RESPONSE_H
#define RESPONSE_H

//store the response to a guess (number correct and number incorrect)
class Response {
public:
	Response();
	void setCorrect(int correct);
	const int getCorrect();
	void setIncorrect(int incorrect);
	const int getIncorrect();
	friend bool operator==(Response& lhs, Response& rhs);
	friend ostream& operator<<(ostream& out, Response& A);

private:
	int numCorrect;
	int numIncorrect;
};

#endif