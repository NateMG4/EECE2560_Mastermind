#include "Code.h"
#include <cstdlib>
using namespace std;

// Initilize code object with n digits of maximum size m
Code::Code(int n, int m) {
	if (n <= 0) {
		throw invalid_argument("Code size can not be less than or equal to 0");
	}
	codeSize = n;
	codeLimit = m;
}

// Initilize code object from vector
Code::Code(std::vector<int>& s) {
	codeLimit = *max_element(s.begin(), s.end());
	codeSize = size(s);

	codeSequence = s;

}

// Randomly assign codeSize number of values within the range of 0<x<codeLimit.
void Code::randomCodeSelection() {
	for (int i = 0; i < codeSize;) {
		
		codeSequence.push_back(rand()%codeLimit);
		i++;
	}
}
// Get number of code values
int Code::getCodeSize() {
	return codeSize;
}
//Get maximum code value
int Code::getCodeLimit() {
	return codeLimit;
}

// Check guess against code and return number of correct values in correct locations
int Code::checkCorrect(Code &guess) {
	if (guess.getCodeSize() != codeSize) {
		throw invalid_argument("Guess size does not match that of code");
	}

	int correct = 0;
	for (int i = 0; i < guess.codeSize; i++) {
		if (guess.codeSequence[i] == codeSequence[i]) {
			correct++;
		}
	}
	return correct;
}
// Check guess against code and return number of correct values in incorrect locations
int Code::checkIncorrect(Code& guess) {
	if (guess.getCodeSize() != codeSize) {
		throw invalid_argument("Guess size does not match that of code");
	}

	int correct = 0;
	for (int i = 0; i < guess.codeSize; i++) {
		int n = guess.codeSequence[i];
		for (int k = 0; k < codeSize; k++) {
			if (k == i) {
				continue;
			}
			if (n == codeSequence[k]) {
				correct++;
				break;
			}
		}
	}
	return correct;
}

// Overide << operator to enable printing
ostream& operator<<(ostream& ostr, Code& c){
	for (int i = 0; i < c.codeSize; i++) {
		ostr << c.codeSequence[i] << " ";
	}
	return ostr;
}
