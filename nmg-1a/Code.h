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
	Code(std::vector<int>& s);
	void randomCodeSelection();
	int checkCorrect(Code &guess);
	int checkIncorrect(Code &guess);
	int getCodeSize();
	int getCodeLimit();
	friend std::ostream& operator<<(std::ostream& ostr, Code &c);
};


#endif
