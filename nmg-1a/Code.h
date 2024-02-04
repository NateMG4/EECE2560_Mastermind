#pragma once


#ifndef CODE_H
#define CODE_H
#include "vector"
#include "iostream"
class Code {

private:
	std::vector<int> codeSequence;
	int codeSize;
	int codeLimit;

public:
	Code(int n, int m);
	void manualCodeSelection();
	void randomCodeSelection();
	int checkCorrect(Code &guess);
	int checkIncorrect(Code &guess);
	friend std::ostream& operator<<(std::ostream& ostr, Code &c);
};


#endif